/* ALBW for Windows: a small loader that runs the Linux i386 build of the port (build/win/albw, an
 * ELF executable) on 32-bit / WOW64 Windows. Read windows/README.md first.
 *
 * Why a loader and not a native Windows compile: the game is 26 000 decompiled objects built as
 * position-independent Linux code, linked with fixed addresses (game data at 0x30000000, memory
 * areas at 0x40000000..0x5C000000) that save states rely on. The finished ELF has every internal
 * reference resolved; what it needs from outside is ~140 C library / POSIX functions and SDL3. This
 * loader does what Linux's ld.so does for it:
 *
 *   1. reserve the fixed address ranges before any DLL can take them
 *   2. copy the ELF's segments to their addresses
 *   3. patch the stack-protector canary reads (`mov %gs:0x14, reg`, Linux thread pointer) to read a
 *      constant from Windows' shared user page (0x7FFE026C) - Windows has no usable %gs
 *   4. fill the import slots (PLT / GOT) with Windows implementations: SDL3.dll for SDL_*, zlib,
 *      and the "lx_" functions below for the C library / pthread / POSIX calls (Linux structure
 *      layouts and constants: struct stat is 88 bytes, O_CREAT is 0x40, ...)
 *   5. run the ELF's constructors and main()
 *
 * Calling conventions: Linux i386 and Windows i386 cdecl agree, with two exceptions handled here:
 *   - OpenGL entry points on Windows are __stdcall (the callee pops its arguments): every pointer
 *     SDL_GL_GetProcAddress returns is wrapped in a thunk that restores the stack (gl_thunk).
 *   - Linux code may assume a 16-byte aligned stack; Windows code calls back with 4-byte
 *     alignment: every call from here into ELF code goes through call_elf (aligns the stack).
 */
#define WIN32_LEAN_AND_MEAN
#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <commdlg.h>
#include <direct.h>
#include <errno.h>
#include <fcntl.h>
#include <io.h>
#include <math.h>
#include <process.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <time.h>
#include <zlib.h>
#include <mmsystem.h>

/* ------------------------------------------------------------------ small helpers */

static char g_exe_dir[MAX_PATH];   /* this loader's directory, forward slashes */
static char g_elf_path[MAX_PATH];  /* the ELF (exe dir + "/albw") */
static char g_log_path[MAX_PATH * 2];   /* albw.log, empty when the output goes to a console */

/* The program has no console (-mwindows), so what it prints is only in albw.log. Show the end of
   it in a message box when the game stops with an error: without this a failed start looks like
   "nothing happens". */
/* last 60 KB of albw.log (with the version) onto the clipboard, ready to paste into an issue */
static void copy_log_to_clipboard(void) {
    if (!*g_log_path) return;
    FILE *f = fopen(g_log_path, "rb");
    if (!f) return;
    fseek(f, 0, SEEK_END);
    long n = ftell(f), from = n > 60000 ? n - 60000 : 0;
    fseek(f, from, SEEK_SET);
    HGLOBAL h = GlobalAlloc(GMEM_MOVEABLE, (SIZE_T)(n - from) + 128);
    char *p = h ? (char *)GlobalLock(h) : NULL;
    if (!p) { fclose(f); if (h) GlobalFree(h); return; }
    const char *ver = getenv("ALBW_VERSION");
    int k = snprintf(p, 120, "ALBW native port %s | Windows\r\n", ver ? ver : "(version unknown)");
    size_t got = fread(p + k, 1, (size_t)(n - from), f);
    p[k + got] = 0;
    fclose(f);
    GlobalUnlock(h);
    if (OpenClipboard(NULL)) { EmptyClipboard(); if (!SetClipboardData(CF_TEXT, h)) GlobalFree(h); CloseClipboard(); }
    else GlobalFree(h);
}

static void show_log_tail(int code) {
    if (!*g_log_path) return;
    FILE *f = fopen(g_log_path, "rb");
    if (!f) return;
    fseek(f, 0, SEEK_END);
    long n = ftell(f);
    long from = n > 900 ? n - 900 : 0;
    fseek(f, from, SEEK_SET);
    char tail[1000];
    size_t got = fread(tail, 1, sizeof tail - 1, f);
    tail[got] = 0;
    fclose(f);
    copy_log_to_clipboard();
    char msg[2048];
    snprintf(msg, sizeof msg, "The game stopped (code %d). The end of the log:\n\n%s\n\nThe log is copied to the clipboard: paste it (Ctrl+V) into your GitHub issue.\nFull log: %s",
             code, tail, g_log_path);
    MessageBoxA(NULL, msg, "A Link Between Worlds (native port)", MB_ICONERROR | MB_OK);
}

static void fatal(const char *fmt, ...) {
    char msg[2048];
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(msg, sizeof msg, fmt, ap);
    va_end(ap);
    fprintf(stderr, "albw: %s\n", msg);
    fflush(stderr);
    MessageBoxA(NULL, msg, "A Link Between Worlds (native port)", MB_ICONERROR | MB_OK);
    ExitProcess(1);
}

static void slashes(char *s) { for (; *s; s++) if (*s == '\\') *s = '/'; }

/* call an ELF function with a 16-byte aligned stack: fn(a[0], ..., a[n-1]) */
uintptr_t call_elf(void *fn, int n, const uintptr_t *a);
/* run fn(arg) with the stack pointer at top (16-byte aligned) */
uintptr_t stack_call(void *fn, void *arg, void *top);
__asm__(
    ".text\n"
    ".globl _call_elf\n"
    "_call_elf:\n"
    "  push %ebp\n"
    "  mov %esp, %ebp\n"
    "  push %esi\n"
    "  push %edi\n"
    "  mov 8(%ebp), %eax\n"      /* fn */
    "  mov 12(%ebp), %ecx\n"     /* n */
    "  mov 16(%ebp), %esi\n"     /* a */
    "  lea (,%ecx,4), %edx\n"
    "  sub %edx, %esp\n"
    "  and $-16, %esp\n"
    "  mov %esp, %edi\n"
    "  cld\n"
    "  rep movsl\n"
    "  call *%eax\n"
    "  lea -8(%ebp), %esp\n"
    "  pop %edi\n"
    "  pop %esi\n"
    "  pop %ebp\n"
    "  ret\n"
    ".globl _stack_call\n"
    "_stack_call:\n"
    "  push %ebp\n"
    "  mov %esp, %ebp\n"
    "  mov 8(%ebp), %eax\n"      /* fn */
    "  mov 12(%ebp), %ecx\n"     /* arg */
    "  mov 16(%ebp), %esp\n"     /* new stack top */
    "  and $-16, %esp\n"
    "  sub $12, %esp\n"
    "  push %ecx\n"
    "  call *%eax\n"
    "  mov %ebp, %esp\n"
    "  pop %ebp\n"
    "  ret\n");
static uintptr_t call_elf1(void *fn, uintptr_t x) { return call_elf(fn, 1, &x); }
static uintptr_t call_elf2(void *fn, uintptr_t x, uintptr_t y) { uintptr_t a[2] = {x, y}; return call_elf(fn, 2, a); }

/* ------------------------------------------------------------------ 1. fixed address ranges */

/* reserved at start-up, before SDL3.dll and the GL driver load; lx_mmap commits inside them */
static const struct { uintptr_t base, size; } g_fixed[] = {
    {0x08000000u, 0x02000000u},   /* the game program's image (ELF, linked at 0x08048000) */
    {0x1F000000u, 0x00600000u},   /* VRAM (sdk/gfx.c) */
    {0x30000000u, 0x00400000u},   /* the game's data (tools/gen_data.py sections .albw_ro / _rw / _zi) */
    {0x40000000u, 0x1C000000u},   /* pmem areas: heap, device, arena, stacks (runtime/pmem.c) */
};
static int in_fixed(uintptr_t a, size_t n) {
    for (size_t i = 0; i < sizeof g_fixed / sizeof *g_fixed; i++)
        if (a >= g_fixed[i].base && a + n <= g_fixed[i].base + g_fixed[i].size) return 1;
    return 0;
}
/* what sits in a range we need: "0x41000000 (+0x10000 bytes, mapped file) C:\\...\\x.dll" (for the error text) */
static void describe_blocker(uintptr_t base, size_t size, char *out, size_t n) {
    MEMORY_BASIC_INFORMATION mi;
    out[0] = 0;
    for (uintptr_t a = base; a < base + size; ) {
        if (!VirtualQuery((void *)a, &mi, sizeof mi)) return;
        if (mi.State != MEM_FREE) {
            char mod[MAX_PATH] = "";
            if (mi.AllocationBase) GetModuleFileNameA((HMODULE)mi.AllocationBase, mod, sizeof mod);
            snprintf(out, n, "\nIn the way: %#x (+%#x bytes, %s) %s", (unsigned)(uintptr_t)mi.BaseAddress, (unsigned)mi.RegionSize,
                     mi.Type == MEM_IMAGE ? "a DLL" : mi.Type == MEM_MAPPED ? "a mapped file" : "private memory", mod);
            return;
        }
        a = (uintptr_t)mi.BaseAddress + mi.RegionSize;
    }
}
static void reserve_fixed(void) {
    for (size_t i = 0; i < sizeof g_fixed / sizeof *g_fixed; i++)
        if (!VirtualAlloc((void *)g_fixed[i].base, g_fixed[i].size, MEM_RESERVE, PAGE_NOACCESS)) {
            DWORD err = GetLastError();
            /* Windows places heaps, stacks and DLLs differently on every start (ASLR): something
               sits in a range the game needs. Starting again almost always gets a free layout. */
            const char *r = getenv("ALBW_RELAUNCH");
            int tries = r ? atoi(r) : 0;
            if (tries < 12) {
                char env[32];
                snprintf(env, sizeof env, "ALBW_RELAUNCH=%d", tries + 1);
                _putenv(env);
                STARTUPINFOA si = {sizeof si};
                PROCESS_INFORMATION pi;
                if (CreateProcessA(NULL, GetCommandLineA(), NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi)) ExitProcess(0);
            }
            char why[600];
            describe_blocker(g_fixed[i].base, g_fixed[i].size, why, sizeof why);
            fatal("cannot reserve memory at %#x (+%#x): error %lu (tried %d times).%s\nRestart the program; if it keeps happening, tell the developer.",
                  (unsigned)g_fixed[i].base, (unsigned)g_fixed[i].size, err, tries + 1, why);
        }
}

/* ------------------------------------------------------------------ 2. the ELF image */

typedef struct { uint8_t ident[16]; uint16_t type, machine; uint32_t version, entry, phoff, shoff, flags;
                 uint16_t ehsize, phentsize, phnum, shentsize, shnum, shstrndx; } Ehdr;
typedef struct { uint32_t type, offset, vaddr, paddr, filesz, memsz, flags, align; } Phdr;
typedef struct { uint32_t name, type, flags, addr, offset, size, link, info, addralign, entsize; } Shdr;
typedef struct { uint32_t name, value, size; uint8_t info, other; uint16_t shndx; } Sym;
typedef struct { uint32_t offset, info; } Rel;

static uint8_t *g_file;
static size_t g_file_size;
static uint32_t g_dyn_symtab, g_dyn_strtab, g_rel, g_relsz, g_jmprel, g_pltrelsz, g_init_array, g_init_arraysz;

static void load_elf(void) {
    FILE *f = fopen(g_elf_path, "rb");
    if (!f) fatal("cannot open the game program %s (it must be next to ALBW.exe)", g_elf_path);
    fseek(f, 0, SEEK_END);
    g_file_size = (size_t)ftell(f);
    fseek(f, 0, SEEK_SET);
    g_file = malloc(g_file_size);
    if (!g_file || fread(g_file, 1, g_file_size, f) != g_file_size) fatal("cannot read %s", g_elf_path);
    fclose(f);
    const Ehdr *eh = (const Ehdr *)g_file;
    if (memcmp(eh->ident, "\x7f" "ELF", 4) || eh->ident[4] != 1 || eh->machine != 3 || eh->type != 2)
        fatal("%s is not a 32-bit x86 Linux executable", g_elf_path);
    const Phdr *ph = (const Phdr *)(g_file + eh->phoff);
    /* one allocation per contiguous group of LOAD segments (low image, game data at 0x30000000) */
    for (int i = 0; i < eh->phnum; i++) {
        if (ph[i].type != 1) continue;
        uint32_t lo = ph[i].vaddr & ~0xFFFu, hi = (ph[i].vaddr + ph[i].memsz + 0xFFF) & ~0xFFFu;
        if (!in_fixed(lo, hi - lo)) fatal("the game program's segment %#x..%#x is outside the reserved ranges", lo, hi);
        if (!VirtualAlloc((void *)lo, hi - lo, MEM_COMMIT, PAGE_EXECUTE_READWRITE))
            fatal("cannot map the game program at %#x (+%#x): error %lu", lo, hi - lo, GetLastError());
        memcpy((void *)(uintptr_t)ph[i].vaddr, g_file + ph[i].offset, ph[i].filesz);
        /* the rest (bss) is zero: fresh VirtualAlloc pages */
    }
    for (int i = 0; i < eh->phnum; i++) {
        if (ph[i].type != 2) continue;   /* PT_DYNAMIC */
        for (const uint32_t *d = (const uint32_t *)(uintptr_t)ph[i].vaddr; d[0]; d += 2)
            switch (d[0]) {
            case 6: g_dyn_symtab = d[1]; break;
            case 5: g_dyn_strtab = d[1]; break;
            case 17: g_rel = d[1]; break;
            case 18: g_relsz = d[1]; break;
            case 23: g_jmprel = d[1]; break;
            case 2: g_pltrelsz = d[1]; break;
            case 25: g_init_array = d[1]; break;
            case 27: g_init_arraysz = d[1]; break;
            }
    }
    if (!g_dyn_symtab || !g_dyn_strtab) fatal("%s has no dynamic symbol table", g_elf_path);
}

/* the ELF's own (static) symbol table: main */
static uint32_t elf_symbol(const char *want) {
    const Ehdr *eh = (const Ehdr *)g_file;
    const Shdr *sh = (const Shdr *)(g_file + eh->shoff);
    for (int i = 0; i < eh->shnum; i++) {
        if (sh[i].type != 2 && sh[i].type != 11) continue;   /* SYMTAB / DYNSYM */
        const Sym *s = (const Sym *)(g_file + sh[i].offset);
        const char *str = (const char *)(g_file + sh[sh[i].link].offset);
        for (uint32_t k = 0; k < sh[i].size / sizeof *s; k++)
            if (s[k].shndx && !strcmp(str + s[k].name, want)) return s[k].value;
    }
    return 0;
}

/* the ELF function containing an address (nearest symbol below it), for crash reports */
static const char *elf_name_of(uint32_t a, uint32_t *off) {
    const Ehdr *eh = (const Ehdr *)g_file;
    const Shdr *sh = (const Shdr *)(g_file + eh->shoff);
    const char *best = NULL;
    uint32_t bv = 0;
    for (int i = 0; i < eh->shnum; i++) {
        if (sh[i].type != 2) continue;   /* SYMTAB */
        const Sym *sy = (const Sym *)(g_file + sh[i].offset);
        const char *str = (const char *)(g_file + sh[sh[i].link].offset);
        for (uint32_t k = 0; k < sh[i].size / sizeof *sy; k++)
            if ((sy[k].info & 0xF) == 2 && sy[k].value <= a && sy[k].value > bv) { bv = sy[k].value; best = str + sy[k].name; }
    }
    *off = a - bv;
    return best;
}
static int in_elf(uint32_t a) { return (a >= 0x08048000u && a < 0x0A000000u) || (a >= 0x30000000u && a < 0x30400000u); }
static LONG WINAPI on_exception(EXCEPTION_POINTERS *ep) {
    DWORD code = ep->ExceptionRecord->ExceptionCode;
    if (code != EXCEPTION_ACCESS_VIOLATION && code != EXCEPTION_ILLEGAL_INSTRUCTION && code != EXCEPTION_INT_DIVIDE_BY_ZERO &&
        code != EXCEPTION_PRIV_INSTRUCTION && code != EXCEPTION_STACK_OVERFLOW)
        return EXCEPTION_CONTINUE_SEARCH;
    CONTEXT *c = ep->ContextRecord;
    uint32_t off;
    const char *n = in_elf(c->Eip) ? elf_name_of(c->Eip, &off) : NULL;
    fprintf(stderr, "albw: CRASH %#lx at eip %#lx (%s+%#x) esp %#lx; thread %lu; eax %#lx ebx %#lx ecx %#lx edx %#lx esi %#lx edi %#lx ebp %#lx\n",
            code, c->Eip, n ? n : "?", n ? off : 0, c->Esp, GetCurrentThreadId(), c->Eax, c->Ebx, c->Ecx, c->Edx, c->Esi, c->Edi, c->Ebp);
    /* return addresses on the stack (words that point into the game program's code) */
    uint32_t *sp = (uint32_t *)(uintptr_t)c->Esp;
    int shown = 0;
    for (int i = 0; i < 2048 && shown < 16; i++) {
        MEMORY_BASIC_INFORMATION mbi;
        if (!VirtualQuery(sp + i, &mbi, sizeof mbi) || mbi.State != MEM_COMMIT) break;
        uint32_t w = sp[i];
        if (w >= 0x08498000u && w < 0x09000000u) {
            const char *m = elf_name_of(w, &off);
            fprintf(stderr, "albw:   [esp+%#x] %#x %s+%#x\n", i * 4, w, m ? m : "?", off);
            shown++;
        }
    }
    fflush(stderr);
    return EXCEPTION_CONTINUE_SEARCH;
}

/* ------------------------------------------------------------------ 3. canary patch */

static void patch_canary(void) {
    const Ehdr *eh = (const Ehdr *)g_file;
    const Phdr *ph = (const Phdr *)(g_file + eh->phoff);
    static const uint8_t cst[4] = {0x6C, 0x02, 0xFE, 0x7F};   /* 0x7FFE026C: NtMajorVersion, constant */
    unsigned n = 0, stores = 0;
    for (int i = 0; i < eh->phnum; i++) {
        if (ph[i].type != 1 || !(ph[i].flags & 1)) continue;   /* executable LOAD */
        uint8_t *p = (uint8_t *)(uintptr_t)ph[i].vaddr, *e = p + ph[i].filesz - 8;
        for (; p < e; p++) {
            if (p[0] != 0x65) continue;
            if (p[1] == 0xA1 && !memcmp(p + 2, "\x14\0\0\0", 4)) {   /* mov %gs:0x14, %eax */
                p[0] = 0xA1; memcpy(p + 1, cst, 4); p[5] = 0x90; n++; p += 5;
            } else if (p[1] == 0x8B && (p[2] & 0xC7) == 0x05 && !memcmp(p + 3, "\x14\0\0\0", 4)) {   /* mov %gs:0x14, %r32 */
                p[0] = 0x8B; p[1] = p[2]; memcpy(p + 2, cst, 4); p[6] = 0x90; n++; p += 6;
            } else if (p[1] == 0xA3 && !memcmp(p + 2, "\x14\0\0\0", 4)) {   /* mov %eax, %gs:0x14 (canary set) */
                memset(p, 0x90, 6); stores++; p += 5;
            }
        }
    }
    fprintf(stderr, "albw: %u stack-protector reads redirected, %u writes removed\n", n, stores);
}

/* ------------------------------------------------------------------ 4. the Linux C library on Windows */

#define LX_ETIMEDOUT 110
#define LX_EBUSY 16
#define LX_EINVAL 22

/* --- memory (16-byte aligned like glibc on i386: the game's SSE code may rely on it) --- */
static void *lx_malloc(size_t n) { return _aligned_malloc(n ? n : 1, 16); }
static void *lx_calloc(size_t a, size_t b) {
    size_t n = a * b;
    void *p = _aligned_malloc(n ? n : 1, 16);
    if (p) memset(p, 0, n);
    return p;
}
static void *lx_realloc(void *p, size_t n) { return _aligned_realloc(p, n ? n : 1, 16); }
static void lx_free(void *p) { _aligned_free(p); }

static void *lx_mmap(void *addr, size_t len, int prot, int flags, int fd, long off) {
    (void)fd; (void)off;
    DWORD pp = (prot & 4) ? PAGE_EXECUTE_READWRITE : PAGE_READWRITE;
    uintptr_t a = (uintptr_t)addr;
    if (a && (flags & (0x10 | 0x100000)) && in_fixed(a, len)) {   /* MAP_FIXED / _NOREPLACE in our ranges */
        if (prot && !VirtualAlloc(addr, len, MEM_COMMIT, pp)) return (void *)-1;
        return addr;
    }
    void *p = VirtualAlloc(a && (flags & (0x10 | 0x100000)) ? addr : NULL, len, MEM_RESERVE | (prot ? MEM_COMMIT : 0),
                           prot ? pp : PAGE_NOACCESS);
    if (!p) { errno = ENOMEM; return (void *)-1; }
    return p;
}
static int lx_munmap(void *addr, size_t len) {
    MEMORY_BASIC_INFORMATION mbi;
    if (!in_fixed((uintptr_t)addr, len) && VirtualQuery(addr, &mbi, sizeof mbi) && mbi.AllocationBase == addr)
        return VirtualFree(addr, 0, MEM_RELEASE) ? 0 : -1;
    VirtualFree(addr, len, MEM_DECOMMIT);
    return 0;
}
static int lx_mprotect(void *addr, size_t len, int prot) {
    if (!prot) { VirtualFree(addr, len, MEM_DECOMMIT); return 0; }
    return VirtualAlloc(addr, len, MEM_COMMIT, (prot & 4) ? PAGE_EXECUTE_READWRITE : PAGE_READWRITE) ? 0 : -1;
}
static int lx_madvise(void *addr, size_t len, int advice) {
    if (advice == 4) {   /* MADV_DONTNEED: the pages read back as zero */
        MEMORY_BASIC_INFORMATION mbi;
        if (VirtualQuery(addr, &mbi, sizeof mbi) && mbi.State == MEM_COMMIT) {
            VirtualFree(addr, len, MEM_DECOMMIT);
            VirtualAlloc(addr, len, MEM_COMMIT, PAGE_READWRITE);
        }
    }
    return 0;
}

/* --- strings / ctype --- */
static void *lx_memmem(const void *h, size_t hn, const void *n, size_t nn) {
    if (!nn) return (void *)h;
    for (const uint8_t *p = h, *e = (const uint8_t *)h + hn; p + nn <= e; p++)
        if (*p == *(const uint8_t *)n && !memcmp(p, n, nn)) return (void *)p;
    return NULL;
}
static char *lx_strtok_r(char *s, const char *d, char **save) {
    if (!s) s = *save;
    s += strspn(s, d);
    if (!*s) { *save = s; return NULL; }
    char *e = s + strcspn(s, d);
    if (*e) *e++ = 0;
    *save = e;
    return s;
}
static int32_t g_tolower_tab[384];
static const int32_t *g_tolower_ptr = g_tolower_tab + 128;
static const int32_t **lx_ctype_tolower_loc(void) { return &g_tolower_ptr; }
static int *lx_errno_location(void) { return _errno(); }
static unsigned g_rand = 1;
static int lx_rand(void) { g_rand = g_rand * 1103515245u + 12345u; return (int)((g_rand >> 1) & 0x7FFFFFFF); }

/* --- stdio --- */
static FILE *lx_stderr_value;   /* the ELF's `stderr` (a copy relocation) is set to this */
static FILE *lx_fopen(const char *path, const char *mode) {
    if (!strcmp(path, "/proc/self/exe")) path = g_elf_path;   /* the game reads its own symbols (save states) */
    char m[16];
    snprintf(m, sizeof m, "%s%s", mode, strchr(mode, 'b') ? "" : "b");
    return fopen(path, m);
}
static int lx_setenv(const char *name, const char *value, int overwrite) {
    if (!overwrite && getenv(name)) return 0;
    return _putenv_s(name, value);
}
static FILE *lx_fmemopen(void *buf, size_t size, const char *mode) {
    (void)mode;
    char tmp[MAX_PATH], name[MAX_PATH];
    GetTempPathA(sizeof tmp, tmp);
    GetTempFileNameA(tmp, "alb", 0, name);
    FILE *f = fopen(name, "w+bD");   /* D: deleted when closed */
    if (!f) return NULL;
    fwrite(buf, 1, size, f);
    rewind(f);
    return f;
}
static FILE *g_qsort_dummy;
static void *g_qsort_cmp;
static int qsort_cmp(const void *a, const void *b) { return (int)call_elf2(g_qsort_cmp, (uintptr_t)a, (uintptr_t)b); }
static void lx_qsort(void *base, size_t n, size_t sz, void *cmp) {
    void *old = g_qsort_cmp;
    g_qsort_cmp = cmp;
    qsort(base, n, sz, qsort_cmp);
    g_qsort_cmp = old;
}

/* --- files (Linux flag values) --- */
static int lx_open(const char *path, int flags, ...) {
    if (!strcmp(path, "/proc/self/exe")) path = g_elf_path;
    int f = _O_BINARY | ((flags & 3) == 1 ? _O_WRONLY : (flags & 3) == 2 ? _O_RDWR : _O_RDONLY);
    if (flags & 0x40) f |= _O_CREAT;
    if (flags & 0x80) f |= _O_EXCL;
    if (flags & 0x200) f |= _O_TRUNC;
    if (flags & 0x400) f |= _O_APPEND;
    return _open(path, f, _S_IREAD | _S_IWRITE);
}
static int lx_close(int fd) { return _close(fd); }
static int lx_write(int fd, const void *b, size_t n) { return _write(fd, b, (unsigned)n); }
static int lx_pread(int fd, void *b, size_t n, long off) {
    if (_lseeki64(fd, off, SEEK_SET) < 0) return -1;
    return _read(fd, b, (unsigned)n);
}
static int lx_pwrite(int fd, const void *b, size_t n, long off) {
    if (_lseeki64(fd, off, SEEK_SET) < 0) return -1;
    return _write(fd, b, (unsigned)n);
}
static int lx_fcntl(int fd, int cmd, ...) { (void)fd; (void)cmd; return 0; }
static int lx_fdatasync(int fd) { return _commit(fd); }
static int lx_ftruncate(int fd, long len) { return _chsize(fd, len); }
static void fill_stat(uint8_t *st, const struct _stat64 *w) {
    memset(st, 0, 88);
    uint32_t mode = (w->st_mode & _S_IFDIR) ? 0040755 : 0100644;
    memcpy(st + 16, &mode, 4);
    uint32_t nl = 1; memcpy(st + 20, &nl, 4);
    int32_t size = (int32_t)w->st_size; memcpy(st + 44, &size, 4);
    int32_t t = (int32_t)w->st_mtime; memcpy(st + 64, &t, 4); memcpy(st + 56, &t, 4); memcpy(st + 72, &t, 4);
}
static int lx_stat(const char *path, void *st) {
    struct _stat64 w;
    if (_stat64(path, &w)) return -1;
    fill_stat(st, &w);
    return 0;
}
static int lx_fstat(int fd, void *st) {
    struct _stat64 w;
    if (_fstat64(fd, &w)) return -1;
    fill_stat(st, &w);
    return 0;
}
static int lx_access(const char *path, int mode) { return _access(path, mode & 6); }
static int lx_mkdir(const char *path, int mode) { (void)mode; return _mkdir(path); }
static int lx_rename(const char *a, const char *b) {
    if (MoveFileExA(a, b, MOVEFILE_REPLACE_EXISTING | MOVEFILE_COPY_ALLOWED)) return 0;
    errno = EACCES;
    return -1;
}
static int lx_readlink(const char *path, char *buf, size_t n) {
    if (strcmp(path, "/proc/self/exe")) { errno = EINVAL; return -1; }
    size_t l = strlen(g_elf_path);
    if (l > n) l = n;
    memcpy(buf, g_elf_path, l);
    return (int)l;
}
/* nftw(dir, cb, fds, flags): depth-first walk (the game only deletes directory trees with it) */
static int nftw_walk(const char *path, void *cb, int level) {
    char pat[MAX_PATH * 2];
    snprintf(pat, sizeof pat, "%s/*", path);
    WIN32_FIND_DATAA fd;
    HANDLE h = FindFirstFileA(pat, &fd);
    if (h != INVALID_HANDLE_VALUE) {
        do {
            if (!strcmp(fd.cFileName, ".") || !strcmp(fd.cFileName, "..")) continue;
            char sub[MAX_PATH * 2];
            snprintf(sub, sizeof sub, "%s/%s", path, fd.cFileName);
            if (fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
                if (nftw_walk(sub, cb, level + 1)) { FindClose(h); return -1; }
            } else {
                uint8_t st[88] = {0};
                int32_t ftw[2] = {(int32_t)(strlen(sub) - strlen(fd.cFileName)), level + 1};
                uintptr_t a[4] = {(uintptr_t)sub, (uintptr_t)st, 0 /* FTW_F */, (uintptr_t)ftw};
                if (call_elf(cb, 4, a)) { FindClose(h); return -1; }
            }
        } while (FindNextFileA(h, &fd));
        FindClose(h);
    }
    uint8_t st[88] = {0};
    const char *base = strrchr(path, '/');
    int32_t ftw[2] = {base ? (int32_t)(base + 1 - path) : 0, level};
    uintptr_t a[4] = {(uintptr_t)path, (uintptr_t)st, 5 /* FTW_DP */, (uintptr_t)ftw};
    return call_elf(cb, 4, a) ? -1 : 0;
}
static int lx_nftw(const char *dir, void *cb, int fds, int flags) { (void)fds; (void)flags; return nftw_walk(dir, cb, 0); }

/* --- time (32-bit time_t, Linux timespec {int32 sec, int32 nsec}) --- */
typedef struct { int32_t sec, nsec; } LxTs;
static LARGE_INTEGER g_qpf;
static void now_ts(int clk, LxTs *ts) {
    if (clk == 0) {   /* CLOCK_REALTIME */
        FILETIME ft;
        GetSystemTimePreciseAsFileTime(&ft);
        uint64_t t = ((uint64_t)ft.dwHighDateTime << 32 | ft.dwLowDateTime) - 116444736000000000ull;
        ts->sec = (int32_t)(t / 10000000);
        ts->nsec = (int32_t)(t % 10000000 * 100);
    } else {
        LARGE_INTEGER c;
        QueryPerformanceCounter(&c);
        ts->sec = (int32_t)(c.QuadPart / g_qpf.QuadPart);
        ts->nsec = (int32_t)((c.QuadPart % g_qpf.QuadPart) * 1000000000ll / g_qpf.QuadPart);
    }
}
static int lx_clock_gettime(int clk, LxTs *ts) { now_ts(clk, ts); return 0; }
static void sleep_ns(int64_t ns) {
    if (ns <= 0) return;
    static __thread HANDLE timer;
    if (!timer) timer = CreateWaitableTimerExW(NULL, NULL, 2 /* HIGH_RESOLUTION */, TIMER_ALL_ACCESS);
    if (!timer) timer = CreateWaitableTimerW(NULL, TRUE, NULL);
    LARGE_INTEGER due;
    due.QuadPart = -(ns / 100);
    if (timer && SetWaitableTimer(timer, &due, 0, NULL, NULL, FALSE)) WaitForSingleObject(timer, INFINITE);
    else Sleep((DWORD)(ns / 1000000));
}
static int lx_nanosleep(const LxTs *req, LxTs *rem) {
    sleep_ns((int64_t)req->sec * 1000000000ll + req->nsec);
    if (rem) rem->sec = rem->nsec = 0;
    return 0;
}
static int lx_clock_nanosleep(int clk, int flags, const LxTs *req, LxTs *rem) {
    int64_t ns = (int64_t)req->sec * 1000000000ll + req->nsec;
    if (flags & 1) { LxTs n; now_ts(clk, &n); ns -= (int64_t)n.sec * 1000000000ll + n.nsec; }
    sleep_ns(ns);
    if (rem) rem->sec = rem->nsec = 0;
    return 0;
}
static int32_t lx_time(int32_t *t) { int32_t v = (int32_t)_time64(NULL); if (t) *t = v; return v; }
static void *lx_localtime_r(const int32_t *t, void *out) {
    __time64_t v = *t;
    struct tm tm;
    if (_localtime64_s(&tm, &v)) return NULL;
    memset(out, 0, 44);
    memcpy(out, &tm, 36);   /* the nine ints; tm_gmtoff / tm_zone stay 0 */
    return out;
}
static size_t lx_strftime(char *s, size_t n, const char *fmt, const void *tm) {
    struct tm w;
    memcpy(&w, tm, 36);
    return strftime(s, n, fmt, &w);
}

/* --- process --- */
typedef struct { void *fn, *arg; } AtExit;
static AtExit g_atexit[256];
static int g_natexit;
static int lx_cxa_atexit(void *fn, void *arg, void *dso) {
    (void)dso;
    if (g_natexit < 256) g_atexit[g_natexit++] = (AtExit){fn, arg};
    return 0;
}
static void run_atexit(void) {
    while (g_natexit > 0) { g_natexit--; call_elf1(g_atexit[g_natexit].fn, (uintptr_t)g_atexit[g_natexit].arg); }
}
static void lx_exit(int code) { run_atexit(); fflush(NULL); if (code) show_log_tail(code); exit(code); }
static void lx__exit(int code) { fflush(NULL); _exit(code); }
static long lx_sysconf(int name) {
    if (name == 84 || name == 83) { SYSTEM_INFO si; GetSystemInfo(&si); return (long)si.dwNumberOfProcessors; }
    if (name == 30) return 4096;
    return -1;
}
static int lx_getpid(void) { return (int)GetCurrentProcessId(); }
/* system(): only `mkdir -p '<dir>'` (screenshot folder) */
static int lx_system(const char *cmd) {
    if (cmd && !strncmp(cmd, "mkdir -p '", 10)) {
        char d[MAX_PATH * 2];
        snprintf(d, sizeof d, "%s", cmd + 10);
        char *q = strrchr(d, '\'');
        if (q) *q = 0;
        for (char *p = d + 1; *p; p++)
            if (*p == '/' || *p == '\\') { char c = *p; *p = 0; _mkdir(d); *p = c; }
        _mkdir(d);
        return 0;
    }
    return -1;
}
/* execv("/proc/self/exe", argv): "Reset game" restarts the process */
static int lx_execv(const char *path, char *const argv[]) {
    (void)path; (void)argv;
    STARTUPINFOA si = {sizeof si};
    PROCESS_INFORMATION pi;
    char exe[MAX_PATH];
    GetModuleFileNameA(NULL, exe, sizeof exe);
    if (!CreateProcessA(exe, GetCommandLineA(), NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi)) return -1;
    ExitProcess(0);
}
static int lx_zero(void) { return 0; }
static int lx_minus1(void) { return -1; }
static void lx_abort(void) { fflush(NULL); abort(); }
static int lx_raise(int sig) { if (sig == 6) lx_abort(); return 0; }

/* --- threads (glibc object sizes: mutex 24, cond 48, attr 36) --- */
/* mutex: SRWLOCK at +0, owner thread id +4, recursion count +8, kind +12 (glibc's kind field:
   PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP sets it to 1) */
typedef struct { SRWLOCK lock; volatile DWORD owner; int count, kind; int pad[2]; } LxMutex;
typedef struct { CONDITION_VARIABLE cv; int clock; int pad[10]; } LxCond;
typedef struct { int detach; void *stack; size_t stacksize; int pad[6]; } LxAttr;
static int lx_mutex_init(LxMutex *m, const int *attr) { memset(m, 0, sizeof *m); m->kind = attr ? *attr : 0; return 0; }
static int lx_mutex_lock(LxMutex *m) {
    DWORD me = GetCurrentThreadId();
    if (m->kind == 1 && m->owner == me) { m->count++; return 0; }
    AcquireSRWLockExclusive(&m->lock);
    m->owner = me;
    m->count = 1;
    return 0;
}
static int lx_mutex_unlock(LxMutex *m) {
    if (m->kind == 1 && --m->count > 0) return 0;
    m->owner = 0;
    m->count = 0;
    ReleaseSRWLockExclusive(&m->lock);
    return 0;
}
static int lx_mutexattr_init(int *a) { *a = 0; return 0; }
static int lx_mutexattr_settype(int *a, int t) { *a = t; return 0; }
static int lx_cond_init(LxCond *c, const int *attr) { memset(c, 0, sizeof *c); c->clock = attr ? *attr : 0; return 0; }
static int lx_condattr_init(int *a) { *a = 0; return 0; }
static int lx_condattr_setclock(int *a, int clk) { *a = clk; return 0; }
static int cond_wait_ms(LxCond *c, LxMutex *m, DWORD ms) {
    int count = m->count;
    m->owner = 0;
    m->count = 0;
    BOOL ok = SleepConditionVariableSRW(&c->cv, &m->lock, ms, 0);
    m->owner = GetCurrentThreadId();
    m->count = count;
    return ok ? 0 : LX_ETIMEDOUT;
}
static int lx_cond_wait(LxCond *c, LxMutex *m) { return cond_wait_ms(c, m, INFINITE); }
static int lx_cond_timedwait(LxCond *c, LxMutex *m, const LxTs *abs) {
    LxTs n;
    now_ts(c->clock, &n);
    int64_t ms = ((int64_t)abs->sec - n.sec) * 1000 + (abs->nsec - n.nsec) / 1000000;
    return cond_wait_ms(c, m, ms <= 0 ? 0 : (DWORD)ms);
}
static int lx_cond_signal(LxCond *c) { WakeConditionVariable(&c->cv); return 0; }
static int lx_cond_broadcast(LxCond *c) { WakeAllConditionVariable(&c->cv); return 0; }
static int lx_attr_init(LxAttr *a) { memset(a, 0, sizeof *a); return 0; }
static int lx_attr_setdetachstate(LxAttr *a, int d) { a->detach = d; return 0; }
static int lx_attr_setstacksize(LxAttr *a, size_t n) { a->stacksize = n; return 0; }
static int lx_attr_setstack(LxAttr *a, void *s, size_t n) { a->stack = s; a->stacksize = n; return 0; }

/* run fn(arg) on another stack: the thread's stack limits in its TEB follow (stack probes and
   exception dispatch check them), the SEH chain is cut while there */
static uintptr_t run_on_stack(void *fn, void *arg, uint8_t *lo, uint8_t *hi) {
    NT_TIB *tib = (NT_TIB *)NtCurrentTeb();
    void *old_base = tib->StackBase, *old_limit = tib->StackLimit, *old_seh = tib->ExceptionList;
    tib->StackBase = hi;
    tib->StackLimit = lo;
    tib->ExceptionList = (void *)-1;
    uintptr_t r = stack_call(fn, arg, hi);
    tib->StackBase = old_base;
    tib->StackLimit = old_limit;
    tib->ExceptionList = old_seh;
    return r;
}

typedef struct { void *fn, *arg; uint8_t *stack; size_t size; uintptr_t ret; HANDLE h; DWORD id; int detached; } LxThread;
static LxThread *g_threads[512];
static SRWLOCK g_threads_lock = SRWLOCK_INIT;
static LxThread *thread_find(DWORD id) {
    LxThread *t = NULL;
    AcquireSRWLockShared(&g_threads_lock);
    for (int i = 0; i < 512; i++) if (g_threads[i] && g_threads[i]->id == id) { t = g_threads[i]; break; }
    ReleaseSRWLockShared(&g_threads_lock);
    return t;
}
static DWORD WINAPI thread_main(void *p) {
    LxThread *t = p;
    if (t->stack) t->ret = run_on_stack(t->fn, t->arg, t->stack, t->stack + t->size);
    else t->ret = call_elf1(t->fn, (uintptr_t)t->arg);
    return 0;
}
static int lx_pthread_create(uint32_t *out, const LxAttr *attr, void *fn, void *arg) {
    LxThread *t = calloc(1, sizeof *t);
    t->fn = fn;
    t->arg = arg;
    if (attr) { t->stack = attr->stack; t->size = attr->stacksize; t->detached = attr->detach; }
    /* own stack given: a small host stack is enough (the thread switches); else the size asked */
    SIZE_T host = t->stack ? 256 << 10 : (attr && attr->stacksize ? attr->stacksize : 8 << 20);
    t->h = CreateThread(NULL, host, thread_main, t, CREATE_SUSPENDED | STACK_SIZE_PARAM_IS_A_RESERVATION, &t->id);
    if (!t->h) { free(t); return 11; }
    AcquireSRWLockExclusive(&g_threads_lock);
    for (int i = 0; i < 512; i++) if (!g_threads[i]) { g_threads[i] = t; break; }
    ReleaseSRWLockExclusive(&g_threads_lock);
    *out = t->id;
    ResumeThread(t->h);
    return 0;
}
static int lx_pthread_join(uint32_t id, void **ret) {
    LxThread *t = thread_find(id);
    if (!t) return 3;
    WaitForSingleObject(t->h, INFINITE);
    if (ret) *ret = (void *)t->ret;
    return 0;
}
static int lx_pthread_tryjoin_np(uint32_t id, void **ret) {
    LxThread *t = thread_find(id);
    if (!t) return 3;
    if (WaitForSingleObject(t->h, 0) != WAIT_OBJECT_0) return LX_EBUSY;
    if (ret) *ret = (void *)t->ret;
    return 0;
}
static uint32_t lx_pthread_self(void) { return GetCurrentThreadId(); }
static void lx_pthread_exit(void *r) {
    LxThread *t = thread_find(GetCurrentThreadId());
    if (t) t->ret = (uintptr_t)r;
    ExitThread(0);
}
static int lx_key_create(uint32_t *k, void *dtor) { (void)dtor; *k = FlsAlloc(NULL); return *k == FLS_OUT_OF_INDEXES ? 11 : 0; }
static void *lx_getspecific(uint32_t k) { return FlsGetValue(k); }
static int lx_setspecific(uint32_t k, const void *v) { return FlsSetValue(k, (void *)v) ? 0 : LX_EINVAL; }
static int lx_once(volatile LONG *o, void *fn) {
    if (*o == 2) return 0;
    if (InterlockedCompareExchange(o, 1, 0) == 0) { call_elf(fn, 0, NULL); *o = 2; return 0; }
    while (*o != 2) SwitchToThread();
    return 0;
}
static int lx_sched_yield(void) { SwitchToThread(); return 0; }

/* --- getcontext / makecontext / swapcontext: only runtime/lowmem.c's "run fn on this fixed
   stack and come back" (glibc ucontext_t: uc_link +4, uc_stack {ss_sp +8, ss_size +16}; the
   function pointer is kept in the mcontext area, +20) --- */
static int lx_makecontext(uint8_t *uc, void *fn, int argc) { (void)argc; memcpy(uc + 20, &fn, 4); return 0; }
static int lx_swapcontext(uint8_t *oucp, uint8_t *ucp) {
    (void)oucp;
    void *fn, *sp;
    uint32_t size;
    memcpy(&fn, ucp + 20, 4);
    memcpy(&sp, ucp + 8, 4);
    memcpy(&size, ucp + 16, 4);
    run_on_stack(fn, NULL, sp, (uint8_t *)sp + size);
    return 0;
}

/* --- zlib (static) --- */
static int lx_compress2(void *d, unsigned long *dn, const void *s, unsigned long sn, int lvl) { return compress2(d, dn, s, sn, lvl); }
static unsigned long lx_compressBound(unsigned long n) { return compressBound(n); }
static int lx_uncompress(void *d, unsigned long *dn, const void *s, unsigned long sn) { return uncompress(d, dn, s, sn); }

/* ------------------------------------------------------------------ SDL3 + OpenGL */

static HMODULE g_sdl;
static void *(*real_GL_GetProcAddress)(const char *);
static void *(*real_OpenAudioDeviceStream)(uint32_t, const void *, void *, void *);
static DWORD g_gl_tls_ret, g_gl_tls_esp;   /* TEB TlsSlots indexes for the GL thunks: return address, stack pointer */

/* cdecl -> stdcall: pop the caller's return address into a TLS slot, remember esp, call the GL
   function (it pops its own arguments), put esp back for the cdecl caller, return */
static void *gl_thunk(void *target) {
    static uint8_t *page;
    static size_t used;
    if (!page || used + 48 > 65536) { page = VirtualAlloc(NULL, 65536, MEM_RESERVE | MEM_COMMIT, PAGE_EXECUTE_READWRITE); used = 0; }
    uint8_t *c = page + used, *p = c;
    uint32_t slot_ret = 0xE10 + 4 * g_gl_tls_ret, slot_esp = 0xE10 + 4 * g_gl_tls_esp;
    *p++ = 0x64; *p++ = 0x8F; *p++ = 0x05; memcpy(p, &slot_ret, 4); p += 4;   /* pop fs:[ret] */
    *p++ = 0x64; *p++ = 0x89; *p++ = 0x25; memcpy(p, &slot_esp, 4); p += 4;   /* mov fs:[esp_slot], esp */
    *p++ = 0xB8; memcpy(p, &target, 4); p += 4;                               /* mov eax, target */
    *p++ = 0xFF; *p++ = 0xD0;                                                 /* call eax */
    *p++ = 0x64; *p++ = 0x8B; *p++ = 0x25; memcpy(p, &slot_esp, 4); p += 4;   /* mov esp, fs:[esp_slot] */
    *p++ = 0x64; *p++ = 0xFF; *p++ = 0x35; memcpy(p, &slot_ret, 4); p += 4;   /* push fs:[ret] */
    *p++ = 0xC3;                                                              /* ret */
    used += 48;
    return c;
}
static void *lx_SDL_GL_GetProcAddress(const char *name) {
    void *p = real_GL_GetProcAddress(name);
    return p ? gl_thunk(p) : NULL;
}
/* Functions that return a struct (SDL_GUID, 16 bytes) take a hidden result pointer: Linux i386
   code expects the callee to pop it (`ret $4`); MinGW-built SDL3.dll leaves it to the caller. These
   adapters call SDL the Windows way and return the Linux way. */
void *real_GetGamepadGUIDForID, *real_GetJoystickGUID;
void lx_SDL_GetGamepadGUIDForID(void), lx_SDL_GetJoystickGUID(void);
#define SRET1(name) \
    ".globl _lx_SDL_" #name "\n" \
    "_lx_SDL_" #name ":\n" \
    "  push 8(%esp)\n"          /* the argument */ \
    "  push 8(%esp)\n"          /* the hidden result pointer */ \
    "  call *_real_" #name "\n" \
    "  add $8, %esp\n" \
    "  mov 4(%esp), %eax\n"     /* the result pointer, as both conventions return it */ \
    "  ret $4\n"
__asm__(".text\n" SRET1(GetGamepadGUIDForID) SRET1(GetJoystickGUID));

/* the audio callback runs on SDL's audio thread: call the ELF's with an aligned stack */
static void *g_audio_cb;
static void SDLCALL_audio(void *ud, void *stream, int add, int total) {
    uintptr_t a[4] = {(uintptr_t)ud, (uintptr_t)stream, (uintptr_t)add, (uintptr_t)total};
    call_elf(g_audio_cb, 4, a);
}
static void *lx_SDL_OpenAudioDeviceStream(uint32_t dev, const void *spec, void *cb, void *ud) {
    g_audio_cb = cb;
    return real_OpenAudioDeviceStream(dev, spec, cb ? (void *)SDLCALL_audio : NULL, ud);
}

/* ------------------------------------------------------------------ import table */

typedef struct { const char *name; void *fn; } Imp;
#define I(n, f) {n, (void *)(f)}
static const Imp g_imports[] = {
    I("malloc", lx_malloc), I("calloc", lx_calloc), I("realloc", lx_realloc), I("free", lx_free),
    I("mmap", lx_mmap), I("munmap", lx_munmap), I("mprotect", lx_mprotect), I("madvise", lx_madvise),
    I("memchr", memchr), I("memcpy", memcpy), I("memmove", memmove), I("memset", memset), I("bcmp", memcmp),
    I("memmem", lx_memmem), I("strchr", strchr), I("strcspn", strcspn), I("strlen", strlen), I("strncmp", strncmp),
    I("strnlen", strnlen), I("strrchr", strrchr), I("strstr", strstr), I("strtod", strtod), I("strtol", strtol),
    I("strtoul", strtoul), I("strtok_r", lx_strtok_r), I("strcasecmp", _stricmp), I("strncasecmp", _strnicmp),
    I("strerror", strerror), I("atoi", atoi), I("getenv", getenv), I("qsort", lx_qsort), I("rand", lx_rand),
    I("__ctype_tolower_loc", lx_ctype_tolower_loc), I("__errno_location", lx_errno_location),
    I("cos", cos), I("pow", pow), I("powf", powf), I("sqrt", sqrt), I("sqrtf", sqrtf), I("fmodf", fmodf), I("lrintf", lrintf),
    I("fopen", lx_fopen), I("freopen", freopen), I("setvbuf", setvbuf), I("putenv", _putenv), I("setenv", lx_setenv), I("strncat", strncat), I("fclose", fclose), I("fread", fread), I("fwrite", fwrite), I("fseek", fseek), I("ftell", ftell),
    I("fflush", fflush), I("fgets", fgets), I("fputc", fputc), I("ferror", ferror), I("fprintf", fprintf),
    I("vfprintf", vfprintf), I("snprintf", snprintf), I("vsnprintf", vsnprintf), I("__isoc99_sscanf", sscanf),
    I("vsscanf", vsscanf), I("vfscanf", vfscanf), I("fmemopen", lx_fmemopen),
    I("open", lx_open), I("close", lx_close), I("write", lx_write), I("pread", lx_pread), I("pwrite", lx_pwrite),
    I("fcntl", lx_fcntl), I("fdatasync", lx_fdatasync), I("ftruncate", lx_ftruncate), I("fstat", lx_fstat),
    I("stat", lx_stat), I("lstat", lx_stat), I("access", lx_access), I("mkdir", lx_mkdir), I("rename", lx_rename),
    I("remove", remove), I("unlink", _unlink), I("readlink", lx_readlink), I("nftw", lx_nftw),
    I("clock_gettime", lx_clock_gettime), I("nanosleep", lx_nanosleep), I("clock_nanosleep", lx_clock_nanosleep),
    I("time", lx_time), I("localtime_r", lx_localtime_r), I("strftime", lx_strftime),
    I("__cxa_atexit", lx_cxa_atexit), I("exit", lx_exit), I("_exit", lx__exit), I("abort", lx_abort),
    I("__stack_chk_fail", lx_abort), I("raise", lx_raise), I("sysconf", lx_sysconf), I("getpid", lx_getpid),
    I("system", lx_system), I("execv", lx_execv),
    /* not needed on Windows (crash handler, profiler, symbol lookup): do nothing */
    I("sigaction", lx_zero), I("sigaltstack", lx_zero), I("sigemptyset", lx_zero), I("setitimer", lx_zero),
    I("backtrace", lx_zero), I("backtrace_symbols_fd", lx_zero), I("dladdr", lx_zero), I("dl_iterate_phdr", lx_zero),
    I("getcontext", lx_zero), I("makecontext", lx_makecontext), I("swapcontext", lx_swapcontext),
    I("pthread_attr_init", lx_attr_init), I("pthread_attr_destroy", lx_zero), I("pthread_attr_setdetachstate", lx_attr_setdetachstate),
    I("pthread_attr_setstack", lx_attr_setstack), I("pthread_attr_setstacksize", lx_attr_setstacksize),
    I("pthread_condattr_init", lx_condattr_init), I("pthread_condattr_destroy", lx_zero), I("pthread_condattr_setclock", lx_condattr_setclock),
    I("pthread_cond_init", lx_cond_init), I("pthread_cond_wait", lx_cond_wait), I("pthread_cond_timedwait", lx_cond_timedwait),
    I("pthread_cond_signal", lx_cond_signal), I("pthread_cond_broadcast", lx_cond_broadcast),
    I("pthread_mutexattr_init", lx_mutexattr_init), I("pthread_mutexattr_destroy", lx_zero), I("pthread_mutexattr_settype", lx_mutexattr_settype),
    I("pthread_mutex_init", lx_mutex_init), I("pthread_mutex_lock", lx_mutex_lock), I("pthread_mutex_unlock", lx_mutex_unlock),
    I("pthread_create", lx_pthread_create), I("pthread_join", lx_pthread_join), I("pthread_tryjoin_np", lx_pthread_tryjoin_np),
    I("pthread_self", lx_pthread_self), I("pthread_exit", lx_pthread_exit), I("pthread_setname_np", lx_zero),
    I("pthread_key_create", lx_key_create), I("pthread_getspecific", lx_getspecific), I("pthread_setspecific", lx_setspecific),
    I("pthread_once", lx_once), I("sched_yield", lx_sched_yield),
    I("compress2", lx_compress2), I("compressBound", lx_compressBound), I("uncompress", lx_uncompress),
    I("SDL_GL_GetProcAddress", lx_SDL_GL_GetProcAddress), I("SDL_OpenAudioDeviceStream", lx_SDL_OpenAudioDeviceStream),
    I("SDL_GetGamepadGUIDForID", lx_SDL_GetGamepadGUIDForID), I("SDL_GetJoystickGUID", lx_SDL_GetJoystickGUID),
    I("stderr", &lx_stderr_value),
    /* weak / glibc start-up symbols the loader does not use */
    I("__gmon_start__", NULL), I("_ITM_deregisterTMCloneTable", NULL), I("_ITM_registerTMCloneTable", NULL),
    I("__libc_start_main", NULL),
};

static void *resolve(const char *name, int *found) {
    *found = 1;
    for (size_t i = 0; i < sizeof g_imports / sizeof *g_imports; i++)
        if (!strcmp(g_imports[i].name, name)) return g_imports[i].fn;
    if (!strncmp(name, "SDL_", 4)) {
        void *p = (void *)GetProcAddress(g_sdl, name);
        if (p) return p;
    }
    *found = 0;
    return NULL;
}

static void apply_rels(uint32_t at, uint32_t size) {
    const Sym *syms = (const Sym *)(uintptr_t)g_dyn_symtab;
    const char *str = (const char *)(uintptr_t)g_dyn_strtab;
    char missing[4096] = "";
    int nmiss = 0;
    for (const Rel *r = (const Rel *)(uintptr_t)at, *e = (const Rel *)(uintptr_t)(at + size); r < e; r++) {
        uint32_t type = r->info & 0xFF, si = r->info >> 8;
        uint32_t *where = (uint32_t *)(uintptr_t)r->offset;
        const Sym *s = &syms[si];
        const char *name = str + s->name;
        int found = 1;
        void *v = si && !s->shndx ? resolve(name, &found) : (void *)(uintptr_t)s->value;
        if (!found) {
            if ((s->info >> 4) != 2 /* not weak */) {
                nmiss++;
                if (strlen(missing) + strlen(name) + 2 < sizeof missing) { strcat(missing, " "); strcat(missing, name); }
            }
            continue;
        }
        switch (type) {
        case 1: *where += (uint32_t)(uintptr_t)v; break;                     /* R_386_32 */
        case 2: *where += (uint32_t)(uintptr_t)v - r->offset; break;         /* R_386_PC32 */
        case 5: if (v) memcpy(where, v, s->size); break;                     /* R_386_COPY */
        case 6: case 7: *where = (uint32_t)(uintptr_t)v; break;              /* GLOB_DAT, JUMP_SLOT */
        case 8: break;                                                       /* RELATIVE (fixed address) */
        default: fatal("unsupported relocation type %u for %s", type, name);
        }
    }
    if (nmiss) fatal("the game program needs %d functions this loader does not provide:%s", nmiss, missing);
}

/* ------------------------------------------------------------------ OpenGL: driver or software */

/* Does Windows give us a real OpenGL driver? A legacy context on a hidden window reports the
   driver's version and name; Microsoft's own "GDI Generic" (OpenGL 1.1, no GPU driver: virtual
   machines, Remote Desktop, a fresh install) cannot run the game. */
static int system_gl_ok(char *what, size_t n) {
    HMODULE gl = LoadLibraryA("opengl32.dll");
    if (!gl) { snprintf(what, n, "no opengl32.dll"); return 0; }
    HGLRC (WINAPI *create)(HDC) = (void *)GetProcAddress(gl, "wglCreateContext");
    BOOL (WINAPI *make)(HDC, HGLRC) = (void *)GetProcAddress(gl, "wglMakeCurrent");
    BOOL (WINAPI *del)(HGLRC) = (void *)GetProcAddress(gl, "wglDeleteContext");
    const char *(WINAPI *gs)(unsigned) = (void *)GetProcAddress(gl, "glGetString");
    int ok = 0;
    HWND w = CreateWindowA("STATIC", "", WS_POPUP, 0, 0, 16, 16, NULL, NULL, GetModuleHandleA(NULL), NULL);
    HDC dc = w ? GetDC(w) : NULL;
    PIXELFORMATDESCRIPTOR pfd = {sizeof pfd, 1, PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER, PFD_TYPE_RGBA, 32};
    pfd.cDepthBits = 24;
    int pf = dc ? ChoosePixelFormat(dc, &pfd) : 0;
    if (pf && SetPixelFormat(dc, pf, &pfd) && create && make && gs) {
        HGLRC rc = create(dc);
        if (rc && make(dc, rc)) {
            const char *ver = gs(0x1F02), *ren = gs(0x1F01);   /* GL_VERSION, GL_RENDERER */
            snprintf(what, n, "%s | %s", ren ? ren : "?", ver ? ver : "?");
            ok = ver && atoi(ver) >= 2 && !(ren && strstr(ren, "GDI Generic"));
            make(NULL, NULL);
        }
        if (rc) del(rc);
    } else snprintf(what, n, "no OpenGL pixel format");
    if (dc) ReleaseDC(w, dc);
    if (w) DestroyWindow(w);
    FreeLibrary(gl);
    return ok;
}
static void choose_gl(void) {
    char mesa[MAX_PATH * 2], what[256] = "";
    snprintf(mesa, sizeof mesa, "%s/mesa/opengl32.dll", g_exe_dir);
    const char *force = getenv("ALBW_SOFTWARE_GL");
    int soft = force && *force == '1';
    if (!soft && !(force && *force == '0')) soft = !system_gl_ok(what, sizeof what);
    fprintf(stderr, "albw: OpenGL: %s%s\n", soft ? "software renderer (Mesa llvmpipe)" : "system driver", *what ? (soft ? " - the system offers only " : " - ") : "");
    if (*what) fprintf(stderr, "albw:   %s\n", what);
    if (soft && !(force && *force == '1'))
        MessageBoxA(NULL, "No usable 32-bit OpenGL graphics driver was found, so the game will use the slow software\n"
                          "renderer. The first start can take a minute or more and it will not run at full speed.\n\n"
                          "Install or update your graphics driver, or see albw.log for details.",
                    "A Link Between Worlds (native port)", MB_ICONWARNING | MB_OK);
    if (soft) {
        if (_access(mesa, 0)) fatal("No usable OpenGL driver (%s) and the software renderer %s is missing.\nInstall your graphics driver.", what, mesa);
        static char env[MAX_PATH * 2 + 32];
        snprintf(env, sizeof env, "SDL_OPENGL_LIBRARY=%s", mesa);
        _putenv(env);
        /* its libgallium_wgl.dll sits next to it: Windows looks for a DLL's dependencies in the
           program's folder, not the DLL's, so add the mesa folder to the search path */
        char dir[MAX_PATH * 2];
        snprintf(dir, sizeof dir, "%s/mesa", g_exe_dir);
        SetDllDirectoryA(dir);
    }
}

/* ------------------------------------------------------------------ 5. start */

static void pick_rom(void) {
    if (getenv("ALBW_ROM") && *getenv("ALBW_ROM")) return;
    char cfg[MAX_PATH * 2], line[MAX_PATH * 2] = "";
    const char *home = getenv("HOME");
    snprintf(cfg, sizeof cfg, "%s/.config/albw-port/rom_path", home);
    FILE *f = fopen(cfg, "r");
    if (f) { if (fgets(line, sizeof line, f)) line[strcspn(line, "\r\n")] = 0; fclose(f); }
    if (!*line || _access(line, 4)) {
        OPENFILENAMEA ofn = {sizeof ofn};
        line[0] = 0;
        ofn.lpstrFilter = "3DS game (*.3ds, *.cci)\0*.3ds;*.cci\0All files\0*.*\0";
        ofn.lpstrFile = line;
        ofn.nMaxFile = sizeof line;
        ofn.lpstrTitle = "Choose your decrypted A Link Between Worlds .3ds (EU)";
        ofn.Flags = OFN_FILEMUSTEXIST | OFN_PATHMUSTEXIST;
        if (!GetOpenFileNameA(&ofn)) ExitProcess(0);
        slashes(line);
        char dir[MAX_PATH * 2];
        snprintf(dir, sizeof dir, "%s/.config", home); _mkdir(dir);
        snprintf(dir, sizeof dir, "%s/.config/albw-port", home); _mkdir(dir);
        if ((f = fopen(cfg, "w"))) { fprintf(f, "%s\n", line); fclose(f); }
    }
    static char env[MAX_PATH * 2 + 16];
    snprintf(env, sizeof env, "ALBW_ROM=%s", line);
    _putenv(env);
}

/* --software-gl: use the bundled software renderer; --console: show the log in a console window
   (for a shortcut: ALBW.exe --software-gl). Removed from the arguments the game sees. */
static int take_options(int argc, char **argv) {
    int out = 1;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "--software-gl")) _putenv("ALBW_SOFTWARE_GL=1");
        else if (!strcmp(argv[i], "--system-gl")) _putenv("ALBW_SOFTWARE_GL=0");
        else if (!strcmp(argv[i], "--console")) _putenv("ALBW_CONSOLE=1");
        else argv[out++] = argv[i];
    }
    argv[out] = NULL;
    return out;
}

int main(int argc, char **argv) {
    argc = take_options(argc, argv);
    GetModuleFileNameA(NULL, g_exe_dir, sizeof g_exe_dir);
    slashes(g_exe_dir);
    char *sl = strrchr(g_exe_dir, '/');
    if (sl) *sl = 0;
    snprintf(g_elf_path, sizeof g_elf_path, "%s/albw", g_exe_dir);

    reserve_fixed();   /* first: before any DLL is loaded */

    /* HOME for the game's ~/.config and ~/.local/share paths */
    if (!getenv("HOME")) {
        static char env[MAX_PATH + 8];
        const char *up = getenv("USERPROFILE");
        snprintf(env, sizeof env, "HOME=%s", up ? up : g_exe_dir);
        slashes(env);
        _putenv(env);
    }
    /* the game's log (stderr): albw.log in its data folder, unless run from a console */
    if (getenv("ALBW_CONSOLE") && !GetConsoleWindow()) {
        if (AllocConsole()) { freopen("CONOUT$", "w", stderr); freopen("CONOUT$", "w", stdout); }
    } else if (!getenv("ALBW_CONSOLE") && !GetConsoleWindow()) {
        char dir[MAX_PATH * 2], log[MAX_PATH * 2];
        snprintf(dir, sizeof dir, "%s/.local", getenv("HOME")); _mkdir(dir);
        snprintf(dir, sizeof dir, "%s/.local/share", getenv("HOME")); _mkdir(dir);
        snprintf(dir, sizeof dir, "%s/.local/share/albw-port", getenv("HOME")); _mkdir(dir);
        snprintf(log, sizeof log, "%s/albw.log", dir);
        freopen(log, "w", stderr);
        snprintf(g_log_path, sizeof g_log_path, "%s", log);
        static char env_log[MAX_PATH * 2 + 20], env_ver[80];
        snprintf(env_log, sizeof env_log, "ALBW_LOG_FILE=%s", log);
        _putenv(env_log);   /* the game's Help menu (Esc) copies this file to the clipboard */
        char vp[MAX_PATH * 2], vb[64] = "";
        snprintf(vp, sizeof vp, "%s/VERSION", g_exe_dir);
        FILE *vf = fopen(vp, "rb");
        if (vf) { if (fgets(vb, sizeof vb, vf)) vb[strcspn(vb, "\r\n")] = 0; fclose(vf); }
        if (vb[0]) { snprintf(env_ver, sizeof env_ver, "ALBW_VERSION=%s", vb); _putenv(env_ver); fprintf(stderr, "albw: version %s\n", vb); }
    }
    setvbuf(stderr, NULL, _IONBF, 0);
    lx_stderr_value = stderr;
    QueryPerformanceFrequency(&g_qpf);
    timeBeginPeriod(1);
    for (int c = -128; c < 256; c++) g_tolower_tab[c + 128] = (c >= 'A' && c <= 'Z') ? c + 32 : c;
    g_gl_tls_ret = TlsAlloc();
    g_gl_tls_esp = TlsAlloc();
    if (g_gl_tls_ret >= 64 || g_gl_tls_esp >= 64) fatal("no TLS slots for the OpenGL thunks");

    fprintf(stderr, "albw: stage: choosing OpenGL\n");
    choose_gl();
    fprintf(stderr, "albw: stage: loading SDL3.dll\n");
    char sdl_path[MAX_PATH * 2];
    snprintf(sdl_path, sizeof sdl_path, "%s/SDL3.dll", g_exe_dir);
    g_sdl = LoadLibraryA(sdl_path);
    if (!g_sdl) fatal("cannot load %s (error %lu).\nIf you unzipped a download: right-click the .zip > Properties > tick Unblock,\nthen unzip it again. Keep all files in one folder.", sdl_path, GetLastError());
    real_GL_GetProcAddress = (void *)GetProcAddress(g_sdl, "SDL_GL_GetProcAddress");
    real_OpenAudioDeviceStream = (void *)GetProcAddress(g_sdl, "SDL_OpenAudioDeviceStream");
    real_GetGamepadGUIDForID = (void *)GetProcAddress(g_sdl, "SDL_GetGamepadGUIDForID");
    real_GetJoystickGUID = (void *)GetProcAddress(g_sdl, "SDL_GetJoystickGUID");

    fprintf(stderr, "albw: stage: loading the game program\n");
    load_elf();
    AddVectoredExceptionHandler(1, on_exception);
    patch_canary();
    apply_rels(g_rel, g_relsz);
    apply_rels(g_jmprel, g_pltrelsz);
    fprintf(stderr, "albw: stage: choosing the game file\n");
    pick_rom();
    fprintf(stderr, "albw: stage: starting the game\n");

    /* argv for the game: argv[0] = the ELF's path (the game finds albw.ssmap next to it) */
    char **eargv = calloc((size_t)argc + 1, sizeof *eargv);
    eargv[0] = g_elf_path;
    for (int i = 1; i < argc; i++) eargv[i] = argv[i];
    for (uint32_t i = 0; i < g_init_arraysz / 4; i++) {
        void *fn = ((void **)(uintptr_t)g_init_array)[i];
        if (fn && fn != (void *)-1) {
            uintptr_t a[3] = {(uintptr_t)argc, (uintptr_t)eargv, (uintptr_t)_environ};
            call_elf(fn, 3, a);
        }
    }
    uint32_t main_addr = elf_symbol("main");
    if (!main_addr) fatal("the game program has no main()");
    uintptr_t a[3] = {(uintptr_t)argc, (uintptr_t)eargv, (uintptr_t)_environ};
    int r = (int)call_elf((void *)(uintptr_t)main_addr, 3, a);
    lx_exit(r);
    return r;
}

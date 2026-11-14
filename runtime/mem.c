/* Guest memory: one 4 GiB lazily-backed mapping; load the code image into it. */
#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include "runtime.h"

uint8_t *g_mem;

int mem_init(const char *code_path, const Layout *l) {
    g_mem = mmap(NULL, 1ull << 32, PROT_READ | PROT_WRITE,
                 MAP_PRIVATE | MAP_ANONYMOUS | MAP_NORESERVE, -1, 0);
    if (g_mem == MAP_FAILED) {
        perror("mmap 4 GiB guest space");
        return -1;
    }
    FILE *f = fopen(code_path, "rb");
    if (!f) {
        perror(code_path);
        return -1;
    }
    /* code.bin = text | ro | data, each page-aligned, as loaded by the 3DS kernel */
    uint32_t text_pages = (l->text_size + 0xFFF) & ~0xFFFu;
    uint32_t ro_pages = (l->ro_size + 0xFFF) & ~0xFFFu;
    size_t got = 0;
    got += fread(GPTR(TEXT_ADDR), 1, text_pages, f);
    got += fread(GPTR(RO_ADDR), 1, ro_pages, f);
    got += fread(GPTR(DATA_ADDR), 1, l->data_size, f);
    fclose(f);
    if (got < text_pages + ro_pages + l->data_size) {
        LOG("code.bin too short (%zu bytes)", got);
        return -1;
    }
    /* bss is already zero (anonymous mapping) */

    /* config memory: values games commonly read */
    M32(CONFIG_MEM + 0x00) = 0x02340000u;  /* kernel version 2.52 */
    M32(CONFIG_MEM + 0x30) = 0;            /* APPMEMTYPE: 64 MB */
    M32(CONFIG_MEM + 0x40) = 0x04000000u;  /* APPMEMALLOC */
    M32(CONFIG_MEM + 0x60) = 0x02340000u;  /* firm version */
    LOG("mem: text %#x ro %#x data %#x+bss %#x loaded", l->text_size, l->ro_size, l->data_size, l->bss_size);
    return 0;
}

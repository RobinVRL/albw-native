/* Game pointers: pointer fields stored in 4-byte slots of game memory.
 *
 * The game's data and objects use 4-byte pointer slots (vtables, pointer tables, object fields,
 * file formats). In the 32-bit build a C pointer is 4 bytes and matches. In the x86-64
 * "low-4GB mode" (native/64BIT.md) every game address is below 2 GiB, and a pointer field that
 * overlays game memory must stay 4 bytes. Two spellings, same layout on both targets:
 *
 *   T *ALBW_GP field;      a real pointer type of 4 bytes (clang: __ptr32 __uptr, needs
 *                          -fms-extensions on x86-64; empty on 32-bit). Reads zero-extend to a
 *                          normal pointer, writes truncate (the address is below 4 GiB).
 *                          Restriction: never *call* through a function pointer declared with
 *                          ALBW_GP (LLVM's x86 backend cannot select it): convert it first,
 *                          GFN(Type, field)(args).
 *   gptr_t field;          a plain 32-bit word holding an address; GPTR_TO(T, w) / GPTR_OF(p).
 *
 * Both are the low-4GB bridge. Fully native 64-bit (native/64BIT.md, milestone 4) replaces game
 * memory overlays with native structs and drops this header. */
#ifndef ALBW_GPTR_H
#define ALBW_GPTR_H

#include <stdint.h>

#ifndef ALBW_GP
#if defined(__x86_64__) && defined(__clang__)
#define ALBW_GP __ptr32 __uptr
#else
#define ALBW_GP
#endif
#endif

/* on an extern declaration of a game data array: the x86-64 ABI lets the compiler assume a
 * global array of >= 16 bytes is 16-byte aligned (movaps); game data keeps its 3DS offsets
 * (BOOT_LOG64 stop 8). tools/ptr32.py adds the attribute to the decompiled code itself. */
#define ALBW_DATA_ALIGN __attribute__((aligned(1)))

typedef uint32_t gptr_t;

/* address word -> pointer (zero-extended) */
#define GPTR_TO(T, w) ((T *)(uintptr_t)(uint32_t)(w))
/* pointer -> address word (the low-4GB invariant: the address must fit) */
#define GPTR_OF(p) ((gptr_t)(uintptr_t)(p))
/* a game function pointer (word or ALBW_GP pointer) as a callable pointer of type FnT */
#define GFN(FnT, w) ((FnT)(uintptr_t)(w))

/* an opaque copy of an address: LLVM cannot fold a symbol's address into a 4-byte pointer
 * constant (addrspacecast), so such stores go through this (tools/ptr32.py launder_symbol) */
#if defined(__x86_64__) && defined(__clang__)
static inline void *albw_launder_(void *p) { __asm__("" : "+r"(p)); return p; }
#define ALBW_LAUNDER(p) albw_launder_((void *)(p))
#else
#define ALBW_LAUNDER(p) ((void *)(p)) /* 32-bit: nothing to do */
#endif

#ifdef __cplusplus
/* C++ wrapper: a 4-byte pointer member with implicit conversions both ways */
template <typename T> struct GPtr {
    uint32_t w;
    GPtr() = default;
    GPtr(T *p) : w((uint32_t)(uintptr_t)p) {}
    operator T *() const { return (T *)(uintptr_t)w; }
    T *operator->() const { return (T *)(uintptr_t)w; }
    GPtr &operator=(T *p) { w = (uint32_t)(uintptr_t)p; return *this; }
};
static_assert(sizeof(GPtr<int>) == 4, "GPtr is a 4-byte game word");
#else
_Static_assert(sizeof(int *ALBW_GP) == 4, "ALBW_GP pointers are 4-byte game words");
#endif

#endif

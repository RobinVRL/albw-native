/* USA/EU 0011F1D8: LMSi_Malloc(size) = data_007166D8[0](size) (tail jump: returns the hook's r0).
 * Matched source is `void` (works on i386 only because clang emits a tail `jmp`); the 64-bit
 * build uses Ghidra text that calls the hook with no argument (works only because rdi is left
 * untouched). Returns the game address word. Confidence: high. */
#include "lms.h"

extern uint32_t data_007166D8[2];
typedef uint32_t (*lms_alloc_fn)(uint32_t size);

uint32_t func_0011F1D8(uint32_t size) {
    return GFN(lms_alloc_fn, data_007166D8[0])(size);
}

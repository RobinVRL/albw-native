/* USA 0054E224 (EU 0054E1FC: `b 0x54E628`): thunk to the pushable-object height test 0054E650
 * (BOOT_LOG 160k). This is the address the vtables hold (+0x60 of MojTomb* and other pushables).
 * The Ghidra text inlined the target as func_0054E650(float, float, float) without `this`:
 * through the vtable it read the object pointer as the value and always said "blocked". */
#include <stdint.h>

uint32_t func_0054E650(void *self, float value, float centre, float radius);

uint32_t func_0054E224(void *self, float value, float centre, float radius)
{
    return func_0054E650(self, value, centre, radius);
}

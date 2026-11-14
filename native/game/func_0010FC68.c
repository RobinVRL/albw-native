/* USA 0010FC68 (EU 0010FC68): nn::fs GetPriority(s32 *out): fs:USER GetPriority (00110740,
 * native in sdk/fs.c) on the fs session (0010D11C = session handle).
 * Native fix of the Ghidra decompilation: typed void with 4 phantom parameters; the Result of
 * 00110740 is returned in r0 (call then pop pc) and 0010F240 tests it (fatal if negative).
 * Confidence: high. */
#include <stdint.h>

uint32_t func_0010D11C(void);
int32_t func_00110740(const uint32_t *session, uint32_t *out_priority);

int32_t func_0010FC68(uint32_t *out_priority)
{
    uint32_t session = func_0010D11C();
    return func_00110740(&session, out_priority);
}

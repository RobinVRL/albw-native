/* USA 0054E650 (EU 0054E628; 0054E64C = EU 0054E624 is the same body after a nop): vtable +0x60
 * height test of pushable objects (BOOT_LOG 160k): (this, value s0, centre s1, radius s2) ->
 * 1 when value lies outside [centre - radius, centre + radius] (EU: vadd s3 = s1 + s2; blo -> 1;
 * vsub s1 = s1 - s2; ble -> 0). Replaces the matched f_54E650(value, centre, radius), which has no
 * `this`: called through the vtable (00325DE0) it read the object pointer as the value. */
#include <stdint.h>

uint32_t func_0054E650(void *self, float value, float centre, float radius)
{
    (void)self;
    if (centre + radius < value)
        return 1;
    return centre - radius > value ? 1 : 0;
}

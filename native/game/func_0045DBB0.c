/* USA 0045DBB0: layout part: after 00232468, read the text width box of the pane at +0x154
 * (00569310 writes a 4-float rect {min x, min y, max x, max y}) and size the frame:
 * +0x164 = (max x - min x) + 24, then 0045E340(this, w, 24, min x).
 * Native fix of the matched source (work8/lead/matched_1020): its local for the rect was
 * `unsigned lv[3]` (12 bytes) while 00569310 stores 16 -> "stack smashing detected" (BOOT_LOG
 * stop 79). Same computation with a 4-word rect. Confidence: high. */
#include <stdint.h>

void func_00232468(void *a0);
uint32_t func_00569310(float *rect, int pane);
void func_0045E340(void *self, float w, float h, float x);

void func_0045DBB0(char *self)
{
    float r[4];
    func_00232468(self);
    func_00569310(r, (int)*(uint32_t *)(self + 0x154));
    float w = (r[2] - r[0]) + 24.0f;
    *(float *)(self + 0x164) = w;
    func_0045E340(self, w, 24.0f, r[0]);
}

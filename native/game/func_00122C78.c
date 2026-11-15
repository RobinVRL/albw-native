/* USA 00122C78 (EU 00122C78)  title camera event step (this): unless the event is finished
 * (+0x94) or empty (+0x00):
 *  - running (+0x95): time (+0x8C) += step (+0x90), 00122688 evaluates the event's camera
 *    animation into +0x48.. / +0x54.. / +0x60.. / +0x6C..; when the scene has a camera controller
 *    (*(*00708998 + 0x18)): target = +0x54 + +0x6C -> 001E8268(cam, this+4, &target, this+0xC),
 *    cam+0x160 = +0x60 (normalised, 00115DC8);
 *  - not running: with a controller, retarget it once through 00120FBC(cam, this+4, &target,
 *    this+0xC, 0.0 frames, mode 0, limits (-1, 0, -1)); +0x95 = its result.
 * Written from the EU machine code: the Ghidra text never copied the x word of the target into
 * the argument block of the 00120FBC call (sp+0 -> sp+0x20, CLASS unwritten stack copy).
 * BOOT_LOG 89f [3d]. High. */
#include "../route/route.h"
extern int fprintf(void *, const char *, ...);
extern void *stderr;
extern char *getenv(const char *);

extern int func_00115C54(float *out, const float *a, const float *b);
extern float func_00115DC8(float *v);
extern int func_00120FBC(int self, uint32_t *p2, float *center, uint32_t *p4, uint32_t frames, int mode, float *limits);
extern int func_00122688(int *self, uint32_t a, uint32_t b);
extern int func_001E8268(int cam, int *p2, uint32_t *target, uint32_t *p4);
extern int *DAT_00122db4;      /* -> data_00708998 */
extern uint32_t DAT_00122db8;  /* -1.0f */
extern uint32_t DAT_00122dbc;  /* 0.0f */

static float f32of(uint32_t u) { float f; __builtin_memcpy(&f, &u, 4); return f; }

void func_00122C78(int *param_1, uint32_t param_2, uint32_t param_3)
{
    char *self = (char *)param_1;
    if (RF(self, 0x94, uint8_t) || RF(self, 0, uint32_t) == 0) return;
    char *g = GPTR_TO(char, (uint32_t)*DAT_00122db4);
    float target[3];
    if (RF(self, 0x95, uint8_t)) {
        RF(self, 0x8C, float) = RF(self, 0x8C, float) + RF(self, 0x90, float);
        func_00122688(param_1, param_2, param_3);
        g = GPTR_TO(char, (uint32_t)*DAT_00122db4);
        uint32_t cam = RF(g, 0x18, uint32_t);
        if (!cam) return;
        func_00115C54(target, (float *)(self + 0x54), (float *)(self + 0x6C));
        func_001E8268((int)cam, (int *)(self + 4), (uint32_t *)target, (uint32_t *)(self + 0xC));
        char *c = GPTR_TO(char, cam);
        __builtin_memcpy(c + 0x160, self + 0x60, 12);
        func_00115DC8((float *)(c + 0x160));
        return;
    }
    uint32_t cam = g ? RF(g, 0x18, uint32_t) : 0;
    int r = 0;
    if (g && cam) {
        float limits[3] = {f32of(DAT_00122db8), f32of(DAT_00122dbc), f32of(DAT_00122db8)};
        func_00115C54(target, (float *)(self + 0x54), (float *)(self + 0x6C));
        if (target[2] != target[2] && getenv("ALBW_H3D_CAMTRACE")) {
            static int done;
            if (!done++) fprintf(stderr, "cam-event-nan: this %p +54 %g %g %g +6c %g %g %g\n", (void *)self, RF(self, 0x54, float),
                                 RF(self, 0x58, float), RF(self, 0x5C, float), RF(self, 0x6C, float), RF(self, 0x70, float),
                                 RF(self, 0x74, float));
        }
        r = func_00120FBC((int)cam, (uint32_t *)(self + 4), target, (uint32_t *)(self + 0xC), 0, 0, limits) != 0;
    }
    RF(self, 0x95, uint8_t) = (uint8_t)r;
}

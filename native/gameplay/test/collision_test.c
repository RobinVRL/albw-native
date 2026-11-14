/* Unit tests for the pure collision-geometry rewrites (no game data needed):
 *   0042DA98 segment/segment closest points, 0042D8F4 point/segment, 0042CF00 ray/plane.
 * Expected values derived by hand from the ARM code paths (see the function headers).
 * Build + run (from albw-port):
 *   clang -m32 -std=gnu11 -Wall -Wextra -Inative/include -Inative/gameplay \
 *     native/gameplay/test/collision_test.c native/gameplay/func_0042DA98.c \
 *     native/gameplay/func_0042D8F4.c native/gameplay/func_0042CF00.c -lm -o /tmp/ct && /tmp/ct
 */
#include <stdio.h>
#include <stdint.h>
#include <string.h>

float func_0042DA98(const float *p1, const float *q1, const float *p2, const float *q2,
                    float *out_s, float *out_t);
float func_0042D8F4(const float *p, const float *a, const float *b, float *out_t, float *out_dir);
int func_0042CF00(uint32_t pl, const float *p, const float *dir, uint32_t hit, float maxT);
#include "gameplay.h"
#include "lowmem.h"

static int fails;
#define CHECK(c) do { if (!(c)) { printf("FAIL %s:%d %s\n", __FILE__, __LINE__, #c); fails++; } } while (0)

int main(void) {
    float s, t, dir[3];
    /* crossing segments: d1=(2,0,0), d2=(0,0,2), r=(-1,-1,0): a=e=4, b=0, c=-2, f=0, denom=16,
     * sN=8 (<= sD), tN=0 -> s=0.5, t=0 ("zero" by bit test), |(0,-1,0)|^2 = 1 */
    {
        float p1[3] = {0, 0, 0}, q1[3] = {2, 0, 0}, p2[3] = {1, 1, 0}, q2[3] = {1, 1, 2};
        float d = func_0042DA98(p1, q1, p2, q2, &s, &t);
        CHECK(d == 1.0f && s == 0.5f && t == 0.0f);
    }
    /* parallel: denom = 0 -> sN=0, sD=1, tN=f=0, tD=e=1 -> s=t=0, distance^2 = |r|^2 = 1 */
    {
        float p1[3] = {0, 0, 0}, q1[3] = {1, 0, 0}, p2[3] = {0, 1, 0}, q2[3] = {1, 1, 0};
        float d = func_0042DA98(p1, q1, p2, q2, &s, &t);
        CHECK(d == 1.0f && s == 0.0f && t == 0.0f);
    }
    /* t clamped to 1 on the second segment: d1=(1,0,0), d2=(0,0,1), p2=(0.5,1,-3):
     * r=(-0.5,-1,3) a=e=1 b=0 c=-0.5 f=3 denom=1: sN=0.5 tN=3 > tD=1 -> tN=1, n=b-c=0.5 in
     * [0,a] -> sN=0.5 sD=1: s=0.5 t=1; closest (0.5,0,0) vs (0.5,1,-2): 1+4 = 5 */
    {
        float p1[3] = {0, 0, 0}, q1[3] = {1, 0, 0}, p2[3] = {0.5f, 1, -3}, q2[3] = {0.5f, 1, -2};
        float d = func_0042DA98(p1, q1, p2, q2, &s, &t);
        CHECK(d == 5.0f && s == 0.5f && t == 1.0f);
    }
    /* point/segment: a=(0,0,0) b=(2,0,0) (len 2, dir (1,0,0)) */
    {
        float a[3] = {0, 0, 0}, b[3] = {2, 0, 0};
        float p0[3] = {1, 1, 0}, pm[3] = {-1, 1, 0}, pp[3] = {3, 1, 0};
        float d = func_0042D8F4(p0, a, b, &t, dir);
        CHECK(d == 1.0f && t == 0.5f && dir[0] == 1.0f && dir[1] == 0.0f && dir[2] == 0.0f);
        d = func_0042D8F4(pm, a, b, &t, NULL);
        CHECK(d == 2.0f && t == 0.0f);
        d = func_0042D8F4(pp, a, b, &t, NULL);
        CHECK(d == 2.0f && t == 1.0f);
    }
    /* ray/plane: plane y = 0 (normal (0,1,0), d 0 at shape+0x58..0x64) */
    {
        char *pl = lowalloc(0x68);
        float n[4] = {0, 1, 0, 0};
        memcpy(pl + 0x58, n, 16);
        char *hit = lowalloc(32);
        float p[3] = {0, 2, 0}, d1[3] = {0, -4, 0}, d2[3] = {1, 0, 0}, o[3] = {0, 0, 0};
        float h[3], hn[3];
        memset(hit, 0xAA, 32);
        CHECK(func_0042CF00(gp_u32(pl), p, d1, gp_u32(hit), 1.0f) == 1);           /* t = (0-2)/-4 = 0.5 */
        memcpy(h, hit + 0x10, 12);
        memcpy(hn, hit + 4, 12);
        CHECK(h[0] == 0.0f && h[1] == 0.0f && h[2] == 0.0f && hn[1] == 1.0f);
        CHECK(func_0042CF00(gp_u32(pl), p, d1, 0, 0.25f) == 0);         /* t > maxT */
        CHECK(func_0042CF00(gp_u32(pl), p, d2, 0, 1.0f) == 0);          /* parallel, off-plane */
        CHECK(func_0042CF00(gp_u32(pl), o, d2, gp_u32(hit), 1.0f) == 1);           /* parallel, on-plane: p */
        memcpy(h, hit + 0x10, 12);
        CHECK(h[0] == 0.0f && h[1] == 0.0f && h[2] == 0.0f);
        float up[3] = {0, 4, 0};
        CHECK(func_0042CF00(gp_u32(pl), p, up, 0, 10.0f) == 0);         /* t = -0.5 < 0 */
    }
    printf("%s (%d failures)\n", fails ? "FAILED" : "ok", fails);
    return fails != 0;
}

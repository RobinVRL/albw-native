/* compilefix: USA 004CF600 (EU 004CF5D8), model_InFrustum: bounding sphere (centre +0x140 through
 * the model matrix, radius +0x14C times the largest scale) against the culling frustum's planes.
 * Callers: mapRoomVis_Update 00232F40 and the render list 00233450, both only decide what is
 * DRAWN. Port change (BOOT_LOG 160v / review): the sphere is tested a little larger (radius x1.3
 * + 0.6 at the default ALBW_CULL_MARGIN=15) so models and map pieces are drawn before they reach
 * the screen edge instead of popping in on screen. The game's own frustum (003FB1D0) stays as in
 * the original, so on-screen checks of game logic are unchanged. ALBW_CULL_MARGIN=0: original. */
char *getenv(const char *name);
int atoi(const char *s);
static void albw_cull_slack(float *grow, float *add) {
    /* read each call (cheap): a cached static would be restored by save states */
    const char *e = getenv("ALBW_CULL_MARGIN");
    int pct = e ? atoi(e) : 15;
    if (pct < 0) pct = 0;
    if (pct > 100) pct = 100;
    *grow = 1.0f + 2.0f * (float)pct / 100.0f;
    *add = 4.0f * (float)pct / 100.0f;
}
#include "ghidra_types.h"

extern int func_00115074(float *param_1,float *param_2,float *param_3);

// USA 004CF600 <- EU 004CF5D8 (Ghidra, non-matching)

int func_004CF600(int param_1,float *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define fStack_18 (*(float *)(albw_frame + 0x8))
  if (*(int *)(param_1 + 0x13c) < 0) {
    return *(int *)(param_1 + 0x13c);
  }
  func_00115074(&local_20,param_2,(float *)(param_1 + 0x140));
  fVar3 = *(float *)(param_1 + 0x78);
  if (fVar3 < *(float *)(param_1 + 0x74)) {
    fVar3 = *(float *)(param_1 + 0x74);
  }
  if (fVar3 <= *(float *)(param_1 + 0x7c)) {
    fVar3 = *(float *)(param_1 + 0x7c);
  }
  float cull_grow, cull_add;
  albw_cull_slack(&cull_grow, &cull_add);
  iVar2 = 0;
  if (*(byte *)(param_3 + 0x79) != 0) {
    do {
      iVar1 = param_3 + iVar2 * 0x10;
      if (*(float *)(param_1 + 0x14c) * fVar3 * cull_grow + cull_add <
          *(float *)(iVar1 + 0x1c) * local_1c + *(float *)(iVar1 + 0x20) * fStack_18 +
          *(float *)(iVar1 + 0x24) + *(float *)(iVar1 + 0x18) * local_20) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(param_3 + 0x79));
  }
  return 1;
}


/* compilefix: USA 0057F6C0 (EU 0057F698), sead PerspectiveProjection doUpdateMatrix (vt+0x14):
 * the frustum (near +0x94, far +0x98, tan(fovy/2) +0xA8, aspect +0xAC, offset +0xB0/+0xB4) ->
 * projection matrix. Widescreen: the top screen's 5:3 aspect is widened by albw_ws_factor (the
 * renderer draws the top screen that much wider), other aspects are left alone. Rest unchanged. */
float albw_ws_factor(void);
/* The matrix is rebuilt only while the projection is dirty (byte +4, set by its setters; caller
 * 0057D258 / 0057D5C4 then rebuilds the device matrix, byte +5). So every top-screen projection
 * is remembered with the factor its matrix was built with, and albw_ws_refresh (each frame, from
 * render_frame_end) marks the ones built with another factor dirty: after F10, and after loading a
 * save state taken in the other mode (these records are restored with the game heap they describe). */
#define WS_PROJS 64
static struct { unsigned int proj, vt; float f; } g_ws_proj[WS_PROJS];
static void ws_note(int param_1, float f) {
    unsigned int p = (unsigned int)param_1, vt = *(unsigned int *)param_1;
    int free_slot = -1;
    for (int i = 0; i < WS_PROJS; i++) {
        if (g_ws_proj[i].proj == p) { g_ws_proj[i].vt = vt; g_ws_proj[i].f = f; return; }
        if (free_slot < 0 && (!g_ws_proj[i].proj || *(unsigned int *)g_ws_proj[i].proj != g_ws_proj[i].vt)) free_slot = i;
    }
    if (free_slot >= 0) { g_ws_proj[free_slot].proj = p; g_ws_proj[free_slot].vt = vt; g_ws_proj[free_slot].f = f; }
}
void albw_ws_refresh(void) {
    float f = albw_ws_factor();
    for (int i = 0; i < WS_PROJS; i++) {
        unsigned int p = g_ws_proj[i].proj;
        if (!p) continue;
        if (*(unsigned int *)p != g_ws_proj[i].vt) { g_ws_proj[i].proj = 0; continue; }   /* object gone */
        if (g_ws_proj[i].f != f) *(unsigned char *)(p + 4) = 1;   /* dirty: rebuilt at its next use */
    }
}
static inline float albw_ws_aspect(int proj, float a) {
    /* 400/240 = 1.6667: the top screen (the bottom screen's 320/240 and square targets stay) */
    if (!(a > 1.66f && a < 1.672f)) return a;
    float f = albw_ws_factor();
    ws_note(proj, f);
    return a * f;
}
#include "ghidra_types.h"

extern float DAT_0057f790;
extern float DAT_0057f794;
extern float DAT_0057f798;
extern float DAT_0057f79c;
extern float DAT_0057f7a0;

// USA 0057F6C0 <- EU 0057F698 (Ghidra, non-matching)
// GLOBAL DAT_0057f790 float
// GLOBAL DAT_0057f794 float
// GLOBAL DAT_0057f798 float
// GLOBAL DAT_0057f79c float
// GLOBAL DAT_0057f7a0 float

undefined4 func_0057F6C0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar3 = DAT_0057f798;
  fVar2 = DAT_0057f790;
  fVar1 = *(float *)(param_1 + 0x94) * *(float *)(param_1 + 0xa8) * DAT_0057f790;
  fVar5 = fVar1 * albw_ws_aspect(param_1, *(float *)(param_1 + 0xac));
  fVar4 = *(float *)(param_1 + 0xb0) * fVar5;
  fVar5 = fVar5 * DAT_0057f794;
  fVar7 = fVar4 - fVar5;
  fVar5 = fVar5 + fVar4;
  fVar6 = *(float *)(param_1 + 0xb4) * fVar1;
  fVar8 = DAT_0057f798 / (fVar5 - fVar7);
  fVar4 = fVar1 * DAT_0057f794 + fVar6;
  fVar6 = fVar6 - fVar1 * DAT_0057f794;
  *param_2 = *(float *)(param_1 + 0x94) * fVar8 * DAT_0057f790;
  fVar1 = DAT_0057f79c;
  param_2[1] = DAT_0057f79c;
  param_2[2] = (fVar5 + fVar7) * fVar8;
  fVar5 = fVar3 / (fVar4 - fVar6);
  param_2[3] = fVar1;
  param_2[4] = fVar1;
  param_2[5] = *(float *)(param_1 + 0x94) * fVar5 * fVar2;
  param_2[6] = (fVar4 + fVar6) * fVar5;
  param_2[7] = fVar1;
  fVar2 = *(float *)(param_1 + 0x98);
  fVar4 = *(float *)(param_1 + 0x94);
  param_2[8] = fVar1;
  param_2[9] = fVar1;
  fVar3 = fVar3 / (fVar2 - fVar4);
  param_2[10] = -(*(float *)(param_1 + 0x98) * fVar3);
  param_2[0xb] = -(*(float *)(param_1 + 0x98) * *(float *)(param_1 + 0x94) * fVar3);
  fVar2 = DAT_0057f7a0;
  param_2[0xc] = fVar1;
  param_2[0xd] = fVar1;
  param_2[0xe] = fVar2;
  param_2[0xf] = fVar1;
  return (undefined4)param_1;
}


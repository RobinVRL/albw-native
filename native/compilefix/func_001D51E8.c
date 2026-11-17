/* compilefix: func_001D51E8, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/001/func_001D51E8.c) with inlined two-sided approaches
 * restored (tools/approach_fix.py, BOOT_LOG 150). */
#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0051E6D0(int param_1,float *param_2,float fparam_0);
extern int func_0058DA04(int param_1);
extern int DAT_001d547c;
extern int DAT_001d5480;
extern float DAT_001d5484;
extern float DAT_001d5488;
extern float DAT_001d548c;
extern float DAT_001d5490;
extern int *DAT_001d5494;
extern float DAT_001d5498;
extern undefined4 DAT_001d549c;
extern float DAT_001d54a0;
extern float DAT_001d54a4;
extern float DAT_001d54a8;
extern int *DAT_001d54ac;
extern int DAT_001d54b0;
extern float DAT_001d54b4;
extern int *DAT_001d54b8;

// USA 001D51E8 <- EU 001D51E8 (Ghidra, non-matching)
// GLOBAL DAT_001d547c int
// GLOBAL DAT_001d5480 int
// GLOBAL DAT_001d5484 float
// GLOBAL DAT_001d5488 float
// GLOBAL DAT_001d548c float
// GLOBAL DAT_001d5490 float
// GLOBAL DAT_001d5494 int *
// GLOBAL DAT_001d5498 float
// GLOBAL DAT_001d549c undefined4
// GLOBAL DAT_001d54a0 float
// GLOBAL DAT_001d54a4 float
// GLOBAL DAT_001d54a8 float
// GLOBAL DAT_001d54ac int *
// GLOBAL DAT_001d54b0 int
// GLOBAL DAT_001d54b4 float
// GLOBAL DAT_001d54b8 int *

/* WARNING: Removing unreachable block (ram,0x001d533c) */
/* WARNING: Removing unreachable block (ram,0x001d5340) */
/* WARNING: Removing unreachable block (ram,0x001d5350) */
/* WARNING: Removing unreachable block (ram,0x001d53ec) */
/* WARNING: Removing unreachable block (ram,0x001d53f0) */
/* WARNING: Removing unreachable block (ram,0x001d5400) */

#ifndef ALBW_APPROACH_DEFINED
#define ALBW_APPROACH_DEFINED
/* inlined two-sided approach (tools/approach_fix.py, BOOT_LOG 150): v -> t by s, no overshoot */
static float albw_approach(float v, float t, float s) {
    float n;
    if (v < t) { n = v + s; return (t <= n || v > n) ? t : n; }
    if (v > t) { n = v - s; if (n <= t) return t; return n <= v ? n : t; }
    return v;
}
#endif
void func_001D51E8(int param_1)

{
  char cVar1;
  float fparam_0;
  int *piVar2;
  bool bVar3;
  undefined1 uVar4;
  ushort uVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  func_0051D2F4((int *)(param_1 + 0x440),0,DAT_001d5480,DAT_001d547c,DAT_001d5484);
  cVar1 = *(char *)(param_1 + 0x4c1);
  if (cVar1 == '\x03' || cVar1 == '\x04') {
    if (*(uint *)(param_1 + 0x4a8) < *(uint *)(param_1 + 0x4ac)) {
      *(uint *)(param_1 + 0x4a8) = *(uint *)(param_1 + 0x4a8) + 1;
    }
    else if (*(char *)(param_1 + 0x4c2) == '\0') {
      *(undefined1 *)(param_1 + 0x4c2) = 1;
      *(undefined1 *)(param_1 + 0x4c3) = 1;
    }
  }
  fVar13 = DAT_001d5490;
  fparam_0 = DAT_001d548c;
  fVar11 = DAT_001d5488;
  uVar5 = *(short *)(param_1 + 0x4b6) + 1;
  *(ushort *)(param_1 + 0x4b6) = uVar5;
  piVar2 = DAT_001d5494;
  if (cVar1 == '\x02') {
    fVar10 = *(float *)(param_1 + 0x46c);
    fVar12 = *(float *)(param_1 + 0x3d4);
    fVar9 = (fVar10 - fVar12) * fVar11;
    if (fVar9 <= fVar13) {
      fVar9 = -fVar9;
    }
    fVar8 = DAT_001d5498;
    if ((DAT_001d5498 <= fVar9) && (fVar8 = fVar9, fparam_0 < fVar9)) {
      fVar8 = fparam_0;
    }
    *(float *)(param_1 + 0x3d4) = albw_approach(fVar12, fVar10, fVar8);   /* two-sided approach restored (approach_fix) */
    if (uVar5 < 0x28) {
      return;
    }
    *(undefined4 *)(param_1 + 0x3e0) = DAT_001d549c;
    *(undefined1 *)(param_1 + 0x4c1) = 3;
  }
  else if (cVar1 != '\x03') {
    if (cVar1 != '\x04') {
      return;
    }
    bVar3 = func_0058DA04(*DAT_001d5494);
    if (!bVar3) {
      return;
    }
    *(ushort *)(*piVar2 + 0x33e) = *(ushort *)(*piVar2 + 0x33e) | 0x80;
    uVar4 = 8;
    goto LAB_001d52bc;
  }
  fVar9 = *(float *)(param_1 + 0x3e0) + DAT_001d54a0;
  if (DAT_001d54a4 < fVar9) {
    fVar9 = DAT_001d54a4;
  }
  *(float *)(param_1 + 0x3e0) = fVar9;
  if (*(char *)(param_1 + 0x4c6) == '\0') {
    pfVar6 = (float *)(param_1 + 0x488);
    *pfVar6 = albw_approach(*pfVar6, DAT_001d54a8, fVar11);   /* two-sided approach restored (approach_fix) */
    func_0051D2F4((int *)(param_1 + 0x490),DAT_001d54b0,0,*DAT_001d54ac,fparam_0);
  }
  local_28 = *(float *)(param_1 + 0x3d0);
  uStack_24 = *(undefined4 *)(param_1 + 0x3d4);
  uStack_20 = *(undefined4 *)(param_1 + 0x3d8);
  iVar7 = func_0051E6D0(*DAT_001d54b8,&local_28,DAT_001d54b4);
  if (iVar7 != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x4c2) = 1;
  *(float *)(param_1 + 0x3dc) = fVar13;
  *(float *)(param_1 + 0x3e0) = fVar13;
  *(float *)(param_1 + 0x3e4) = fVar13;
  *(float *)(param_1 + 0x488) = fVar13;
  uVar4 = 4;
  *(undefined1 *)(param_1 + 0x4c3) = 1;
LAB_001d52bc:
  *(undefined1 *)(param_1 + 0x4c1) = uVar4;
  return;
}


/* compilefix: func_00269F0C, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/002/func_00269F0C.c) with inlined two-sided approaches
 * restored (tools/approach_fix.py, BOOT_LOG 150). */
#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_00267BD4(int param_1,int param_2);
extern int func_004ED46C(int param_1,int param_2);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0051D50C(int param_1);
extern int func_0053A554(int param_1,float *param_2,float *param_3);
extern int func_0053A900(int param_1);
extern int func_00660718(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float fRam0026a1fc;
extern float fRam0026a208;
extern float fRam0026a20c;
extern int *DAT_0026a1e4;
extern int *DAT_0026a1e8;
extern int *DAT_0026a1ec;
extern int *DAT_0026a1f0;
extern float DAT_0026a1f4;
extern float DAT_0026a1f8;
extern float DAT_0026a200;
extern float DAT_0026a204;
extern float DAT_0026a210;
extern float DAT_0026a214;
extern float DAT_0026a218;
extern float *DAT_0026a21c;

// USA 00269F0C <- EU 00269F34 (Ghidra, non-matching)
// GLOBAL DAT_0026a1e4 int *
// GLOBAL DAT_0026a1e8 int *
// GLOBAL DAT_0026a1ec int *
// GLOBAL DAT_0026a1f0 int *
// GLOBAL DAT_0026a1f4 float
// GLOBAL DAT_0026a1f8 float
// GLOBAL DAT_0026a200 float
// GLOBAL DAT_0026a204 float
// GLOBAL DAT_0026a210 float
// GLOBAL DAT_0026a214 float
// GLOBAL DAT_0026a218 float
// GLOBAL DAT_0026a21c float *
// GLOBAL UNK_0026a1fc float
// GLOBAL UNK_0026a208 float
// GLOBAL UNK_0026a20c float

/* WARNING: Removing unreachable block (ram,0x0026a07c) */
/* WARNING: Removing unreachable block (ram,0x0026a080) */
/* WARNING: Removing unreachable block (ram,0x0026a090) */

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
undefined4 func_00269F0C(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 ((float *)(albw_frame + 0x8))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define local_40 (*(float *)(albw_frame + 0x20))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_34 (*(float *)(albw_frame + 0x2c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x34))
  fVar6 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fVar6);
  piVar4 = DAT_0026a1e4;
  bVar2 = func_0051D50C(*DAT_0026a1e4);
  if (!bVar2) {
    func_004ED46C(*piVar4,1);
  }
  if ((*(int *)(param_1 + 0xb28) < 1) && (iVar3 = func_0053A900(param_1), iVar3 == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  bVar1 = 4 < *(int *)(param_1 + 0x994);
  func_00115C70(&local_34,(float *)(param_1 + 0x984),(float *)(param_1 + 0x3d0));
  local_40 = local_34;
  uStack_3c = uStack_30;
  uStack_38 = uStack_2c;
  iVar3 = func_0068C690(&local_40);
  *(int *)(param_1 + 0x974) = iVar3;
  piVar4 = DAT_0026a1e8;
  if (!bVar2) {
    piVar4 = DAT_0026a1ec;
  }
  func_0051D2F4((int *)(param_1 + 1000),iVar3,*DAT_0026a1f0,*piVar4,DAT_0026a1f4);
  fVar7 = fRam0026a1fc;
  fVar6 = DAT_0026a200;
  if (!bVar2) {
    fVar7 = DAT_0026a204;
    fVar6 = DAT_0026a1f8;
  }
  if ((bVar1) && (fVar7 = DAT_0026a210, fVar6 = DAT_0026a1f8, bVar2)) {
    fVar7 = fRam0026a208;
    fVar6 = fRam0026a20c;
  }
  pfVar5 = (float *)(param_1 + 0x990);
  *pfVar5 = albw_approach(*pfVar5, fVar7, fVar6);   /* two-sided approach restored (approach_fix) */
  func_0014FAFC(param_1,*(uint *)(param_1 + 1000),*(float *)(param_1 + 0x990));
  fVar6 = DAT_0026a214;
  func_004FB4E0(param_1,DAT_0026a214);
  if ((((*(char *)(param_1 + 0xbaa) != '\0') && (*(int *)(param_1 + 0xb28) < 1)) &&
      (0x17 < *(int *)(param_1 + 0xba0))) &&
     ((iVar3 = func_0053A900(param_1), iVar3 != 0 && (*(char *)(param_1 + 0xbab) == '\0')))) {
    return func_00660718((undefined4 *)(param_1 + 0x8c8),0xe);
  }
  if (((*(int *)(param_1 + 0xb28) < 1) && (0x17 < *(int *)(param_1 + 0xba0))) &&
     (iVar3 = func_0053A900(param_1), iVar3 == 0)) {
    fVar6 = DAT_0026a218;
  }
  func_0053A554(param_1,local_58,DAT_0026a21c);
  func_00115C54(local_58,local_58,(float *)(param_1 + 0x3d0));
  local_58[0] = local_58[0] - *(float *)(param_1 + 0x984);
  local_50 = local_50 - *(float *)(param_1 + 0x98c);
  if (local_58[0] * local_58[0] + local_50 * local_50 < fVar6 * fVar6) {
    if (!bVar1) {
      return func_00267BD4(param_1,0);
    }
    func_00660718((undefined4 *)(param_1 + 0x8c8),0);
  }
  return 0;
}


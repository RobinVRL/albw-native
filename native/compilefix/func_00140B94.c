/* compilefix: func_00140B94, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/001/func_00140B94.c) with inlined two-sided approaches
 * restored (tools/approach_fix.py, BOOT_LOG 150). */
#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0013EA58(int param_1);
extern int func_0013FC48(int param_1);
extern int func_0013FD5C(int *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_0052108C(int param_1);
extern int func_00588BE4(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_00657580(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern int *DAT_00140db0;
extern int DAT_00140dc8;
extern int *DAT_00140dcc;
extern float DAT_00140dd0;
extern float DAT_00140dd4;
extern float DAT_00140dd8;
extern float DAT_00140ddc;
extern uint DAT_00140de0;
extern char s_SE_GoroIwa_BREAK_00140db4[];

// USA 00140B94 <- EU 00140B94 (Ghidra, non-matching)
// GLOBAL DAT_00140db0 int *
// GLOBAL DAT_00140dc8 int
// GLOBAL DAT_00140dcc int *
// GLOBAL DAT_00140dd0 float
// GLOBAL DAT_00140dd4 float
// GLOBAL DAT_00140dd8 float
// GLOBAL DAT_00140ddc float
// GLOBAL DAT_00140de0 uint
// GLOBAL s_SE_GoroIwa_BREAK_00140db4 string

/* WARNING: Removing unreachable block (ram,0x00140ce4) */
/* WARNING: Removing unreachable block (ram,0x00140ce8) */
/* WARNING: Removing unreachable block (ram,0x00140cf8) */

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
undefined4 func_00140B94(int *param_1)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_2c (*(int *)(albw_frame + 0x4))
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 ((char * *)(albw_frame + 0xc))
  if (((char)param_1[0x148] != '\0') &&
     (iVar1 = func_00588BE4((int)param_1), iVar1 == *DAT_00140db0)) {
    iVar1 = func_0068C690((float *)(param_1 + 0xf7));
    local_2c = func_0068C690((float *)(param_1 + 0x12a));
    local_2c = iVar1 - local_2c;
    uVar2 = func_0058E2B8(&local_2c);
    if (0x5fffffff < uVar2) {
      if (*(char *)(param_1[0x104] + 0x30) != '\0') {
        func_0013FD5C(param_1);
        local_24[0] = s_SE_GoroIwa_BREAK_00140db4;
        local_28 = DAT_00140dc8;
        func_00150A84(param_1,&local_28,0);
      }
      return func_0013FC48((int)param_1);
    }
  }
  iVar1 = func_00588BE4((int)param_1);
  fparam_0 = DAT_00140dd0;
  if (iVar1 == *DAT_00140dcc) {
    pfVar3 = (float *)(param_1 + 0x13f);
    fVar6 = *(float *)(param_1[0x10b] + 0xc);
    fVar7 = *pfVar3;
    fVar5 = (fVar6 - fVar7) * DAT_00140dd0;
    if (fVar5 <= DAT_00140ddc) {
      fVar5 = -fVar5;
    }
    fVar4 = DAT_00140dd4;
    if ((DAT_00140dd4 <= fVar5) && (fVar4 = fVar5, DAT_00140dd8 < fVar5)) {
      fVar4 = DAT_00140dd8;
    }
    *pfVar3 = albw_approach(fVar7, fVar6, fVar4);   /* two-sided approach restored (approach_fix) */
    func_00115D70((float *)local_24,(float *)(param_1 + 0x12d),*(float *)(param_1[0x10b] + 0x14));
    func_004D838C((float *)(param_1 + 0xf7),(float *)local_24,fparam_0,ALBW_AS_F32(param_1[0x13f]),
                  ALBW_AS_F32(param_1[0x13f]));
  }
  iVar1 = func_0052108C((int)param_1);
  if (iVar1 == 0) {
    if (((param_1[0xe7] & 0x400U) != 0 || (param_1[0xe7] & 0x800U) != 0) ||
       (DAT_00140de0 <= (uint)param_1[0xf5])) {
      func_00657580(param_1 + 0x118,5);
    }
  }
  else {
    func_00657580(param_1 + 0x118,6);
  }
  return func_0013EA58((int)param_1);
}


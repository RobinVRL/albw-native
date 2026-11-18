#include "ghidra_types.h"

extern int func_0036B758(int param_1);
extern int func_0036BE78();
extern int func_004ED46C(int param_1,int param_2);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0058A8F0(int param_1);
extern float func_0058AA40(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern float func_0058AC38(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern float func_0059163C(float fparam_0);
extern int func_0065E8B8(undefined4 *param_1,undefined1 param_2);
extern undefined4 *DAT_00229da0;
extern float DAT_00229da4;
extern float DAT_00229da8;
extern float DAT_00229dac;
extern float DAT_00229db0;
extern float DAT_00229db4;
extern int *DAT_00229db8;

// USA 00229BE0 <- EU 00229BE0 (Ghidra, non-matching)
// GLOBAL DAT_00229da0 undefined4 *
// GLOBAL DAT_00229da4 float
// GLOBAL DAT_00229da8 float
// GLOBAL DAT_00229dac float
// GLOBAL DAT_00229db0 float
// GLOBAL DAT_00229db4 float
// GLOBAL DAT_00229db8 int *

undefined4 func_00229BE0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  uVar8 = func_0058AB74(param_1);
  puVar1 = DAT_00229da0;
  puVar3 = (undefined4 *)(param_1 + 0x8fc);
  if ((int)uVar8 == 8) {
    fVar4 = func_0058AA40(param_1);
    fVar4 = fVar4 + DAT_00229da4;
    fVar7 = DAT_00229da4;
    fVar5 = func_0058AC38(param_1);
    fVar4 = fVar4 / (fVar5 + fVar7);
    fVar5 = DAT_00229dac;
    fVar6 = func_0059163C(DAT_00229da8 * fVar4);
    fVar7 = DAT_00229db4;
    *(float *)(param_1 + 0xcbc) =
         (ALBW_AS_F32(puVar1[1]) - fVar6 * fVar5) -
         (DAT_00229db0 - (DAT_00229db0 - fVar4) * (DAT_00229db0 - fVar4)) * fVar5;
    *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_1 + 0xcb8);
    *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_1 + 0xcbc);
    *(undefined4 *)(param_1 + 0x578) = *(undefined4 *)(param_1 + 0xcc0);
    lVar9 = func_0058ACC8(param_1,fVar7);
    if ((int)lVar9 != 0) {
      func_004ED46C(*DAT_00229db8,2);
    }
    iVar2 = func_0058A8F0(param_1);
    if (iVar2 != 0) {
      if (*(char *)(param_1 + 0xd0a) == '\0') {
        func_004FC07C(param_1,0,0xffffffff,0);
        func_0036B758(param_1 + 0x968);
        *(undefined1 *)(param_1 + 0xd09) = 1;
        return 0;
      }
      if (*(uint *)(param_1 + 0xa80) <= *(uint *)(param_1 + 0xa7c)) {
        return func_0065E8B8(puVar3,0x10);
      }
      return func_0065E8B8(puVar3,0xd);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xcb8) = *DAT_00229da0;
    *(undefined4 *)(param_1 + 0xcbc) = puVar1[1];
    *(undefined4 *)(param_1 + 0xcc0) = puVar1[2];
    *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_1 + 0xcb8);
    *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_1 + 0xcbc);
    *(undefined4 *)(param_1 + 0x578) = *(undefined4 *)(param_1 + 0xcc0);
    if (*(uint *)(param_1 + 0xa70) < *(uint *)(param_1 + 0xa74)) {
      *(uint *)(param_1 + 0xa70) = *(uint *)(param_1 + 0xa70) + 1;
    }
    iVar2 = func_0036BE78(param_1 + 0x968);
    if ((iVar2 != 0) && (*(uint *)(param_1 + 0xa74) <= *(uint *)(param_1 + 0xa70))) {
      *(undefined1 *)(param_1 + 0xd08) = 1;
      *(undefined1 *)(param_1 + 0xd0a) = 1;
      func_0065E8B8(puVar3,0xc);
    }
  }
  return 0;
}


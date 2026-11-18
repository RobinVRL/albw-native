#include "ghidra_types.h"

extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern undefined4 DAT_004c12cc;
extern undefined4 DAT_004c12d0;

// USA 004C1194 <- EU 004C116C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// GLOBAL DAT_004c12cc undefined4
// GLOBAL DAT_004c12d0 undefined4

undefined4 func_004C1194(int param_1,int param_2,int param_3,int param_4,uint param_5,float fparam_0)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  float fVar6;
  ulonglong uVar7;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define aiStack_88 ((int *)(albw_frame + 0x8))
  uVar7 = (ulonglong)(uint)ALBW_AS_U32(fparam_0);
  if (param_5 == 0) {
    piVar4 = (int *)(param_1 + 0x7bc);
  }
  else {
    piVar4 = (int *)(param_1 + 0x7b4);
    if (*(int *)(param_1 + 0x798) == 0) {
      *(undefined4 *)(param_1 + 0x798) =
           *(undefined4 *)(*(int *)(param_1 + 0x2d0) + 0x1c8 + (param_5 ^ 1) * 4);
    }
  }
  iVar1 = func_0014E904(param_1,param_2,0);
  fVar6 = ALBW_AS_F32(uVar7);
  uVar3 = 0;
  *piVar4 = iVar1;
  if (0 < param_2) {
    do {
      if (param_5 == 0) {
        iVar1 = *(int *)(param_1 + 0x79c);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x798);
      }
      func_00169608((uint *)*piVar4,uVar3,(int *)(param_3 + uVar3 * 8),iVar1);
      fVar6 = ALBW_AS_F32(uVar7);
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < param_2);
  }
  func_0016A02C(*piVar4,-1,(int *)0xffffffff,0);
  puVar2 = (uint *)func_002C11E8(aiStack_88,0,0,0);
  func_0016898C(*piVar4,puVar2);
  iVar1 = *(int *)(*piVar4 + 0x14);
  if (*(float *)(iVar1 + 8) != fVar6) {
    *(float *)(iVar1 + 8) = fVar6;
    *(undefined1 *)(iVar1 + 0x26) = 1;
  }
  uVar5 = DAT_004c12cc;
  if (param_4 == 0) {
    uVar5 = DAT_004c12d0;
  }
  *(undefined4 *)(*(int *)(*piVar4 + 0x14) + 0x10) = uVar5;
  if (param_5 != 0) {
    return func_00168E9C((int *)*piVar4,*(int *)(param_1 + 0x7a0),(int *)0x0);
  }
  return func_00168E9C((int *)*piVar4,*(int *)(param_1 + 0x7a4),(int *)0x0);
}


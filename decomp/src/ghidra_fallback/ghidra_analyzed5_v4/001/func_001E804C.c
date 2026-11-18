#include "ghidra_types.h"

extern int func_002E1A5C(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4, float *param_5,int param_6,float fparam_0,float fparam_1);

// USA 001E804C <- EU 001E804C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4 *
// PARAM param_6 Stack[0x4]:4 undefined4 *
// PARAM param_7 Stack[0x8]:4 float *
// PARAM param_8 Stack[0xc]:4 int

undefined4
func_001E804C(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5,undefined4 *param_6,float *param_7,int param_8,float fparam_0,
             float fparam_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  iVar1 = *(int *)(param_1 + 0xeb4);
  iVar3 = *(int *)(param_1 + 0xeac);
  if (iVar3 <= iVar1) {
    return 0;
  }
  *(int *)(param_1 + 0xeb4) = iVar1 + 1;
  iVar1 = iVar1 + *(int *)(param_1 + 0xeb0);
  if (iVar3 <= iVar1) {
    iVar1 = iVar1 - iVar3;
  }
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0xea8) + iVar1 * 0x1c);
  *puVar2 = *param_3;
  puVar2[1] = param_3[1];
  puVar2[2] = param_3[2];
  puVar2[3] = param_3[3];
  puVar2[4] = param_3[4];
  puVar2[5] = param_3[5];
  puVar2[6] = param_3[6];
  iVar1 = *(int *)(param_1 + 0xef4);
  iVar3 = *(int *)(param_1 + 0xeec);
  if (iVar1 < iVar3) {
    *(int *)(param_1 + 0xef4) = iVar1 + 1;
    uVar4 = param_6[1];
    uVar5 = param_6[2];
    iVar1 = iVar1 + *(int *)(param_1 + 0xef0);
    if (iVar3 <= iVar1) {
      iVar1 = iVar1 - iVar3;
    }
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0xee8) + iVar1 * 0xc);
    *puVar2 = *param_6;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
  }
  iVar1 = *(int *)(param_1 + 0xe30);
  iVar3 = *(int *)(param_1 + 0xe28);
  if (iVar1 < iVar3) {
    *(int *)(param_1 + 0xe30) = iVar1 + 1;
    iVar1 = iVar1 + *(int *)(param_1 + 0xe2c);
    if (iVar3 <= iVar1) {
      iVar1 = iVar1 - iVar3;
    }
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0xe24) + iVar1 * 0x2d0);
    if (puVar2 != (undefined4 *)0x0) {
      local_18 = *(undefined4 *)(param_1 + 0x10);
      uVar4 = func_002E1A5C(puVar2,&local_18,param_4,param_5,param_7,param_8,fparam_0,fparam_1);
      goto LAB_001e8184;
    }
  }
  uVar4 = 0;
LAB_001e8184:
  *(undefined4 *)(param_1 + 0xe34) = uVar4;
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return 1;
}


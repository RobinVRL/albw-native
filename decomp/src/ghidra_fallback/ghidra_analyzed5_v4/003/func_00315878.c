#include "ghidra_types.h"

extern int func_001512B4(int param_1,float *param_2);
extern int func_0015133C(int param_1,undefined4 *param_2);
extern int func_004356B4(int *param_1);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);

// USA 00315878 <- EU 00315854 (Ghidra, non-matching)

undefined4 func_00315878(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define afStack_30 ((float *)(albw_frame + 0x0))
  iVar1 = *(int *)(param_1 + 0x420);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar1 + 0x80),*(uint *)(param_1 + 0x480),(float *)(param_1 + 0x3d0));
  iVar1 = *(int *)(param_1 + 0x420);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(param_1 + 0x43c);
  *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(param_1 + 0x440);
  *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(param_1 + 0x444);
  func_004CEAF0(*(int *)(param_1 + 0x420));
  func_00491624(afStack_30,0,*(uint *)(param_1 + 0x480),0);
  func_001512B4(*(int *)(param_1 + 0x438),(float *)(param_1 + 0x3d0));
  func_0015133C(*(int *)(param_1 + 0x438),afStack_30);
  uVar2 = *(undefined4 *)(param_1 + 0x3d4);
  uVar3 = *(undefined4 *)(param_1 + 0x3d8);
  iVar1 = *(int *)(param_1 + 0x434);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar1 + 8) = uVar2;
  *(undefined4 *)(iVar1 + 0xc) = uVar3;
  return func_004356B4(*(int **)(param_1 + 0x434));
}


#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern float *DAT_0025197c;
extern uint *DAT_00251980;

// USA 002518A4 <- EU 002518CC (Ghidra, non-matching)
// GLOBAL DAT_0025197c float *
// GLOBAL DAT_00251980 uint *

undefined4 func_002518A4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_18 (*(float *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  func_00115C54(&fStack_18,(float *)(param_1 + 0x3d0),DAT_0025197c);
  iVar1 = *(int *)(param_1 + 0x40c);
  piVar3 = (int *)(param_1 + 0x40c);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_00491E80((float *)(iVar1 + 0x80),*DAT_00251980,*(uint *)(param_1 + 1000),0);
  iVar1 = *piVar3;
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  *(float *)(iVar1 + 0x8c) = fStack_18;
  *(undefined4 *)(iVar1 + 0x9c) = uStack_14;
  *(undefined4 *)(iVar1 + 0xac) = uStack_10;
  iVar1 = *piVar3;
  uVar2 = **(undefined4 **)(*(int *)(param_1 + 0x2d0) + 0x14);
  *(undefined4 *)(iVar1 + 0x74) = uVar2;
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar1 + 0x78) = uVar2;
  *(undefined4 *)(iVar1 + 0x7c) = uVar2;
  return func_004CEAF0(*piVar3);
}


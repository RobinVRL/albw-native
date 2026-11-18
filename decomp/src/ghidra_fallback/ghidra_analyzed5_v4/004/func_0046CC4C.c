#include "ghidra_types.h"

extern int func_001B6C04(int param_1);
extern undefined4 func_002316CC(int param_1,float fparam_0);
extern int func_0055696C(int param_1,int param_2);
extern undefined4 func_0066E07C(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int func_00689B00(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int *DAT_0046ccf8;
extern undefined4 DAT_0046ccfc;
extern int *DAT_0046cd00;
extern int *DAT_0046cd04;

// USA 0046CC4C <- EU 0046CC24 (Ghidra, non-matching)
// GLOBAL DAT_0046ccf8 int *
// GLOBAL DAT_0046ccfc undefined4
// GLOBAL DAT_0046cd00 int *
// GLOBAL DAT_0046cd04 int *

undefined4 func_0046CC4C(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_r3;
  int *piVar3;
  uint in_fpscr;
  float in_s0;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define auStack_40 ((undefined4 *)(albw_frame + 0x0))
  func_001B6C04(param_1);
  *(char *)(param_1 + 0xcc) = (char)*(undefined4 *)(*DAT_0046ccf8 + 0x2d0);
  func_0066E07C((undefined4 *)(param_1 + 0x74),0,in_s0);
  piVar3 = *(int **)(param_1 + 0xc0);
  if (piVar3 != (int *)0x0) {
    piVar1 = func_00689B00(auStack_40,DAT_0046ccfc,(int)*(char *)(param_1 + 0xcc),in_r3);
    (**(code **)(*piVar1 + 8))(piVar1);
    (**(code **)(*piVar3 + 0x5c))(piVar3,piVar1[1],0);
  }
  *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) | 2;
  *(byte *)(*(int *)(*DAT_0046cd00 + 0x130) + 0x74) =
       *(byte *)(*(int *)(*DAT_0046cd00 + 0x130) + 0x74) | 1;
  *(undefined1 *)(*(int *)(param_1 + 0xb0) + 0xe) = 1;
  iVar2 = func_0055696C(*DAT_0046cd04,0x1f);
  fparam_0 = (float)VectorUnsignedToFloat(iVar2 + -2,(byte)(in_fpscr >> 0x15) & 3);
  return func_002316CC(param_1 + 0xa4,fparam_0);
}


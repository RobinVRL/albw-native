#include "ghidra_types.h"

extern int func_001B6C04(int param_1);
extern undefined4 func_002316CC(int param_1,float fparam_0);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_004EFFF8(int param_1);
extern int func_0055696C(int param_1,int param_2);
extern int func_005844EC(int param_1);
extern int func_0066F030(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00484614;
extern float DAT_00484618;
extern int *DAT_0048461c;

// USA 00484564 <- EU 0048453C (Ghidra, non-matching)
// GLOBAL DAT_00484614 int *
// GLOBAL DAT_00484618 float
// GLOBAL DAT_0048461c int *

undefined4 func_00484564(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  float fparam_0;
  undefined4 uVar4;
  
  func_001B6C04(param_1);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  iVar1 = func_005844EC(*DAT_00484614);
  uVar2 = func_004EFFF8(iVar1);
  *(undefined4 *)(param_1 + 0xa0) = uVar4;
  *(short *)(param_1 + 0x9a) = (short)uVar2 + 7;
  *(undefined2 *)(param_1 + 0x98) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x98),DAT_00484618);
  iVar3 = *(int *)(param_1 + 0x54);
  for (iVar1 = *(int *)(param_1 + 0x4c) - iVar3;
      iVar1 != (param_1 + 0x48) - *(int *)(param_1 + 0x54);
      iVar1 = *(int *)(iVar1 + iVar3 + 4) - iVar3) {
    *(undefined1 *)(iVar1 + 0xe) = 1;
  }
  *(uint *)(*(int *)(param_1 + 0xe4) + 0x18) =
       *(uint *)(*(int *)(param_1 + 0xe4) + 0x18) & 0xfffffffe;
  *(uint *)(*(int *)(param_1 + 0xe8) + 0x18) =
       *(uint *)(*(int *)(param_1 + 0xe8) + 0x18) & 0xfffffffe;
  func_0066F030((undefined4 *)(param_1 + 0x74),0);
  iVar1 = func_0055696C(*DAT_0048461c,0x1f);
  fparam_0 = (float)VectorUnsignedToFloat(iVar1 + -2,(byte)(in_fpscr >> 0x15) & 3);
  return func_002316CC(param_1 + 0xa4,fparam_0);
}


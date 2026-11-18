#include "ghidra_types.h"

extern int func_001B6C04(int param_1);
extern undefined4 func_002316CC(int param_1,float fparam_0);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0034C57C(int param_1,int param_2);
extern int func_004EFFF8(int param_1);
extern int func_0055696C(int param_1,int param_2);
extern int func_0066C9D0(undefined4 *param_1,undefined1 param_2);
extern float DAT_004438e4;
extern int *DAT_004438e8;

// USA 00443854 <- EU 00443834 (Ghidra, non-matching)
// GLOBAL DAT_004438e4 float
// GLOBAL DAT_004438e8 int *

undefined4 func_00443854(int param_1)

{
  int iVar1;
  uint in_fpscr;
  float fparam_0;
  
  func_001B6C04(param_1);
  func_0034C57C(*(int *)(param_1 + 0x98),*(int *)(param_1 + 0xd4));
  func_0034C57C(*(int *)(param_1 + 0x9c),*(int *)(param_1 + 0xd0));
  iVar1 = func_004EFFF8(*(int *)(param_1 + 0xd4));
  if ((iVar1 == 1 || iVar1 == 2) || iVar1 == 3) {
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x1c);
    *(short *)(param_1 + 0xae) = (short)iVar1 + 4;
    *(undefined2 *)(param_1 + 0xac) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0xae) = 4;
    *(undefined2 *)(param_1 + 0xac) = 0;
  }
  func_002317C0((undefined2 *)(param_1 + 0xac),DAT_004438e4);
  func_0066C9D0((undefined4 *)(param_1 + 0x74),0);
  iVar1 = func_0055696C(*DAT_004438e8,0x1f);
  fparam_0 = (float)VectorUnsignedToFloat(iVar1 + -2,(byte)(in_fpscr >> 0x15) & 3);
  return func_002316CC(param_1 + 0xc4,fparam_0);
}


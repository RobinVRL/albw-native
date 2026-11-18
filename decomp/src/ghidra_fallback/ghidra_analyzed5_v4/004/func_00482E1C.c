#include "ghidra_types.h"

extern int func_001B6C04(int param_1);
extern undefined4 func_002316CC(int param_1,float fparam_0);
extern int func_00369EBC(int param_1,int param_2);
extern int func_0048371C(int param_1);
extern int func_0055696C(int param_1,int param_2);
extern int func_0066EEEC(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00482e50;
extern int *DAT_00482e54;

// USA 00482E1C <- EU 00482DF4 (Ghidra, non-matching)
// GLOBAL DAT_00482e50 int *
// GLOBAL DAT_00482e54 int *

undefined4 func_00482E1C(int param_1)

{
  int iVar1;
  uint in_fpscr;
  float fparam_0;
  
  func_001B6C04(param_1);
  func_0048371C(param_1);
  func_00369EBC(*(int *)(*DAT_00482e50 + 0x130),3);
  func_0066EEEC((undefined4 *)(param_1 + 0x74),0);
  iVar1 = func_0055696C(*DAT_00482e54,0x1f);
  fparam_0 = (float)VectorUnsignedToFloat(iVar1 + -2,(byte)(in_fpscr >> 0x15) & 3);
  return func_002316CC(param_1 + 0xb0,fparam_0);
}


#include "ghidra_types.h"

extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004F9554(int param_1,ushort param_2,ushort param_3,int param_4);
extern int func_004FACD4(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_004FB024(int param_1);
extern int func_004FB070(int param_1,float fparam_0);
extern int DAT_002e48dc;
extern float DAT_002e48e0;

// USA 002E4858 <- EU 002E4834 (Ghidra, non-matching)
// GLOBAL DAT_002e48dc int
// GLOBAL DAT_002e48e0 float

undefined4 func_002E4858(int *param_1)

{
  int iVar1;
  undefined4 in_r2;
  int *in_r3;
  
  iVar1 = DAT_002e48dc;
  param_1[0xf9] = DAT_002e48dc;
  param_1[0xf7] = iVar1;
  func_004FB070((int)param_1,DAT_002e48e0);
  func_004FACD4((int)param_1,(int *)0x0,in_r2,in_r3);
  param_1[0x167] = param_1[0x167] & 0xfffffcfb;
  *(undefined1 *)(param_1[0x231] + 0x44) = 1;
  func_004F88A0(param_1,(undefined2 *)param_1[0x23c]);
  *(byte *)(param_1 + 0x1da) = *(byte *)(param_1 + 0x1da) & 0xfe;
  func_004F9554(param_1[0x10c],9,0,1);
  func_004F9554(param_1[0x10d],9,0,1);
  *(uint *)(param_1[0x10c] + 0x2c) = *(uint *)(param_1[0x10c] + 0x2c) & 0xfffff8ff | 0x500;
  return func_004FB024((int)param_1);
}


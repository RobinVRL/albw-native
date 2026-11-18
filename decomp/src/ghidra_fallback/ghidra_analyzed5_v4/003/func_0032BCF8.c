#include "ghidra_types.h"

extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_004FD038(int param_1,undefined1 param_2);
extern int func_004FD238(int param_1,undefined1 param_2);

// USA 0032BCF8 <- EU 0032BCD4 (Ghidra, non-matching)

undefined4 func_0032BCF8(int *param_1)

{
  param_1[0x167] = param_1[0x167] | 4;
  func_004FD038((int)(param_1 + 0x16a),1);
  param_1[0x167] = param_1[0x167] | 8;
  func_004FD238((int)(param_1 + 0x16a),1);
  param_1[0x167] = param_1[0x167] & 0xffffff7f;
  func_004F88A0(param_1,(undefined2 *)param_1[0x2a4]);
  *(undefined1 *)((int)param_1 + 0xc93) = 0;
  param_1[0x30f] = 0;
  param_1[0x318] = 0x28;
  *(undefined1 *)(param_1 + 0x324) = 5;
  return func_004FC07C((int)param_1,10,8,0);
}


#include "ghidra_types.h"

extern int func_004CF478(int param_1,int param_2);
extern void func_004D08B8(int param_1,float fparam_0);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_004FD038(int param_1,undefined1 param_2);
extern int func_004FD238(int param_1,undefined1 param_2);
extern float fRam0032c4ec;

// USA 0032C42C <- EU 0032C408 (Ghidra, non-matching)
// GLOBAL UNK_0032c4ec float

undefined4 func_0032C42C(int *param_1)

{
  float fparam_0;
  
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
  func_004CF478(param_1[0x2a2],1);
  fparam_0 = fRam0032c4ec;
  func_004D08B8(param_1[0x2a2],fRam0032c4ec);
  if (param_1[0x2a0] != 0) {
    func_004CF478(param_1[0x2a0],1);
    func_004D08B8(param_1[0x2a0],fparam_0);
  }
  return func_004FC07C((int)param_1,10,8,0);
}


#include "ghidra_types.h"

extern int func_0010C7F8(int param_1,int param_2,float fparam_0);
extern float DAT_00322248;
extern float DAT_0032224c;

// USA 003221DC <- EU 003221B8 (Ghidra, non-matching)
// GLOBAL DAT_00322248 float
// GLOBAL DAT_0032224c float

void func_003221DC(int param_1)

{
  float fparam_0;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  func_0010C7F8(param_1 + 0x30,0,DAT_00322248);
  fparam_0 = DAT_0032224c;
  func_0010C7F8(param_1 + 0x48,0,DAT_0032224c);
  func_0010C7F8(param_1 + 0x60,0,fparam_0);
  func_0010C7F8(param_1 + 0x78,0,fparam_0);
  func_0010C7F8(param_1 + 0x90,0,fparam_0);
  *(undefined1 *)(param_1 + 0xa8) = 0;
  return;
}


#include "ghidra_types.h"

extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004FAB60(int param_1,undefined4 param_2,int param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB4C4(int param_1,float fparam_0);
extern int func_0054DDF4(int param_1,uint param_2);
extern float fRam002b3a3c;
extern undefined4 DAT_002b3a38;

// USA 002B39D4 <- EU 002B39B0 (Ghidra, non-matching)
// GLOBAL DAT_002b3a38 undefined4
// GLOBAL UNK_002b3a3c float

void func_002B39D4(int param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_002b3a38;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_002b3a38;
  *(undefined4 *)(param_1 + 0x3e0) = uVar2;
  *(undefined4 *)(param_1 + 0x3e4) = uVar2;
  func_004FABDC(param_1,6,0xffffffff,0);
  func_004FAB60(param_1,1,0);
  func_004FB4C4(param_1,fRam002b3a3c);
  if (*(int *)(param_1 + 0x958) != 0) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x958) + 0x14) + 0x10) = uVar2;
  }
  puVar1 = (undefined2 *)func_0054DDF4(param_1,0);
  func_004F88A0((int *)param_1,puVar1);
  *(undefined1 *)(param_1 + 0x985) = 1;
  return;
}


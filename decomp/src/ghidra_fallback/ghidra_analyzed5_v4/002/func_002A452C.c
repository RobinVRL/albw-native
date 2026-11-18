#include "ghidra_types.h"

extern int func_002A45FC(int param_1,int param_2);
extern int func_002A6014(int param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern undefined4 DAT_002a457c;
extern undefined4 DAT_002a4580;

// USA 002A452C <- EU 002A4508 (Ghidra, non-matching)
// GLOBAL DAT_002a457c undefined4
// GLOBAL DAT_002a4580 undefined4

undefined4 func_002A452C(int param_1)

{
  undefined4 uVar1;
  
  func_002A45FC(param_1,0);
  uVar1 = DAT_002a457c;
  *(undefined4 *)(param_1 + 0xb64) = 100;
  *(undefined4 *)(param_1 + 0xb68) = uVar1;
  *(undefined4 *)(param_1 + 0xb60) = 0;
  uVar1 = DAT_002a4580;
  *(undefined4 *)(param_1 + 0xb70) = 2;
  *(undefined4 *)(param_1 + 0xb74) = uVar1;
  *(undefined4 *)(param_1 + 0xb6c) = 0;
  func_002A6014(param_1);
  *(undefined1 *)(param_1 + 0xb91) = 0;
  return func_004FABDC(param_1,10,0xffffffff,0);
}


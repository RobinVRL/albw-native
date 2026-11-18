#include "ghidra_types.h"

extern int func_004994FC(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_0066D024(undefined4 *param_1,undefined1 param_2);
extern int func_00689A64(int param_1,int *param_2,int param_3);
extern undefined DAT_00452974;

// USA 0045295C <- EU 00452934 (Ghidra, non-matching)
// GLOBAL DAT_00452974 undefined

undefined4 func_0045295C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  func_00689A64(param_1 + 0x144,(int *)(param_1 + 0xb8),-1);
  func_004994FC(param_1 + 0xb8,&DAT_00452974,uVar1,param_4);
  **(undefined2 **)(param_1 + 0x1d8) = 0;
  return func_0066D024((undefined4 *)(param_1 + 0x74),3);
}


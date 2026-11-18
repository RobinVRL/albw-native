#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FC5EC(int param_1,undefined1 param_2);
extern int func_0058A8F0(int param_1);
extern int func_0065D3A8(undefined4 *param_1,undefined1 param_2);

// USA 002040CC <- EU 002040CC (Ghidra, non-matching)

undefined4 func_002040CC(int param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + 0x8cc) == 0) {
    iVar1 = func_0058A8F0(param_1);
    if (iVar1 != 0) {
      *(undefined2 *)(param_1 + 0x8cc) = 1;
      return func_004FABDC(param_1,5,5,0);
    }
  }
  else {
    if (*(uint *)(param_1 + 0x8d8) <= *(uint *)(param_1 + 0x8d4)) {
      func_004FC5EC(param_1,10);
      func_0065D3A8((undefined4 *)(param_1 + 0x8f0),3);
      return func_004FC5EC(param_1,8);
    }
    *(uint *)(param_1 + 0x8d4) = *(uint *)(param_1 + 0x8d4) + 1;
  }
  return 0;
}


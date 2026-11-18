#include "ghidra_types.h"

extern int func_002AD0E4(undefined4 *param_1,int param_2,float *param_3,undefined1 param_4,int param_5);

// USA 004F9F40 <- EU 004F9F18 (Ghidra, non-matching)

void func_004F9F40(int param_1,float *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x7fc) == '\0' || *(char *)(param_1 + 0x7fc) == '\x05') {
    if (*(char *)(*(undefined4 **)(param_1 + 0x510) + 1) == '\0') {
      uVar2 = *(uint *)(param_1 + 0x5a0);
      *(uint *)(param_1 + 0x5a0) = uVar2 | 0x10000000;
      uVar2 = uVar2 | 0x30000000;
      *(float *)(param_1 + 0x78c) = *param_2;
      *(float *)(param_1 + 0x790) = param_2[1];
      *(float *)(param_1 + 0x794) = param_2[2];
    }
    else {
      iVar1 = func_002AD0E4(*(undefined4 **)(param_1 + 0x510),1,param_2,0,0);
      if (iVar1 == 0) {
        return;
      }
      uVar2 = *(uint *)(param_1 + 0x5a0) | 0x10000000;
    }
    *(uint *)(param_1 + 0x5a0) = uVar2;
  }
  return;
}


#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004FCD5C(int param_1,int param_2);

// USA 004FCDB0 <- EU 004FCD88 (Ghidra, non-matching)

void func_004FCDB0(int param_1)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 1;
  func_004FCD5C(param_1 + 0x5a8,1);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 2;
  uVar1 = 0;
  if (*(char *)(param_1 + 0x651) != '\0') {
    do {
      func_00151148(*(int *)(param_1 + 0x5a8 + uVar1 * 4 + 0x54),1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(byte *)(param_1 + 0x651));
  }
  return;
}


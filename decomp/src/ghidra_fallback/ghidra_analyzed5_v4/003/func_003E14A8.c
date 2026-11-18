#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);

// USA 003E14A8 <- EU 003E1488 (Ghidra, non-matching)

undefined4 func_003E14A8(int param_1,int param_2)

{
  int iVar1;
  short sVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 4) == 0) {
    *(undefined1 *)(param_2 + 0x11) = 3;
    return 0;
  }
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined1 *)(param_2 + 0x11) = 1;
  func_0010C0C0((int *)(param_1 + 0x70));
  iVar3 = *(int *)(param_1 + 0x30);
  if (iVar3 == 0) {
    *(int *)(param_1 + 0x30) = param_2;
  }
  else {
    for (iVar1 = *(int *)(iVar3 + 0x14); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
      iVar3 = iVar1;
    }
    *(int *)(iVar3 + 0x14) = param_2;
  }
  sVar2 = *(short *)(param_1 + 6);
  if (sVar2 == 0) {
    sVar2 = 1;
    *(undefined2 *)(param_1 + 6) = 1;
  }
  *(short *)(param_2 + 0x12) = sVar2;
  *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
  return func_0010C160((int *)(param_1 + 0x70));
}


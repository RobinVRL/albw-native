#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);

// USA 003E14A0 <- EU 003E1480 (Ghidra, non-matching)

undefined4 func_003E14A0(int param_1,int param_2)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x68);
  if (*(int *)(param_2 + 4) == 0) {
    *(undefined1 *)(param_2 + 0x11) = 3;
    return 0;
  }
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined1 *)(param_2 + 0x11) = 1;
  func_0010C0C0((int *)(iVar3 + 0x70));
  iVar4 = *(int *)(iVar3 + 0x30);
  if (iVar4 == 0) {
    *(int *)(iVar3 + 0x30) = param_2;
  }
  else {
    for (iVar1 = *(int *)(iVar4 + 0x14); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
      iVar4 = iVar1;
    }
    *(int *)(iVar4 + 0x14) = param_2;
  }
  sVar2 = *(short *)(iVar3 + 6);
  if (sVar2 == 0) {
    sVar2 = 1;
    *(undefined2 *)(iVar3 + 6) = 1;
  }
  *(short *)(param_2 + 0x12) = sVar2;
  *(short *)(iVar3 + 6) = *(short *)(iVar3 + 6) + 1;
  return func_0010C160((int *)(iVar3 + 0x70));
}


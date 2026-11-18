#include "ghidra_types.h"


// USA 0034C47C <- EU 0034C458 (Ghidra, non-matching)

void func_0034C47C(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if (param_2 == 0) {
    uVar3 = 0x4c;
    uVar4 = 0x23;
  }
  else {
    uVar3 = 0xfe;
    uVar4 = 0;
  }
  piVar2 = piVar1 + *(int *)(param_1 + 0x20);
  for (; piVar1 != piVar2; piVar1 = piVar1 + 1) {
    *(undefined1 *)(*piVar1 + 0x6c) = uVar3;
    *(undefined1 *)(*piVar1 + 0x6d) = uVar4;
  }
  return;
}


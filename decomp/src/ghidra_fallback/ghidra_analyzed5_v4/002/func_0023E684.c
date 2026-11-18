#include "ghidra_types.h"

extern int func_0014FD48(int param_1);
extern int func_004D0194(int param_1,undefined4 param_2);
extern int func_004D0268(int param_1,undefined4 param_2);
extern int func_00584E64(int param_1);
extern int func_00584E70(int param_1);

// USA 0023E684 <- EU 0023E684 (Ghidra, non-matching)

void func_0023E684(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  func_0014FD48(param_1);
  uVar3 = 0;
  piVar4 = (int *)(param_1 + 0x7b4);
  do {
    piVar1 = piVar4;
    if (uVar3 < 4) {
      piVar1 = piVar4 + uVar3;
    }
    if (*piVar1 != *(int *)(param_1 + 0x7c4)) {
      piVar1 = piVar4;
      if (uVar3 < 4) {
        piVar1 = piVar4 + uVar3;
      }
      iVar2 = func_00584E64(*(int *)(param_1 + 0x7c4));
      func_004D0194(*piVar1,iVar2);
      piVar1 = piVar4;
      if (uVar3 < 4) {
        piVar1 = piVar4 + uVar3;
      }
      iVar2 = func_00584E70(*(int *)(param_1 + 0x7c4));
      func_004D0268(*piVar1,iVar2);
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 4);
  return;
}


#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_00414FF0(void);

// USA 0056D550 <- EU 0056D528 (Ghidra, non-matching)

int func_0056D550(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  puVar2 = func_00414FF0();
  func_0010C0C0(puVar2 + 0x71);
  piVar3 = *(int **)(param_1 + 8);
  iVar4 = 0;
  if (piVar3 != (int *)(param_1 + 8)) {
    do {
      piVar1 = piVar3 + -0x14;
      piVar3 = (int *)*piVar3;
      iVar4 = iVar4 + *piVar1;
    } while (piVar3 != (int *)(param_1 + 8));
  }
  puVar2 = func_00414FF0();
  func_0010C160(puVar2 + 0x71);
  return iVar4;
}


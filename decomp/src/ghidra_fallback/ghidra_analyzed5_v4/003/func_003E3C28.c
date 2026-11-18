#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int DAT_003e3c50;

// USA 003E3C28 <- EU 003E3C08 (Ghidra, non-matching)
// GLOBAL DAT_003e3c50 int

int func_003E3C28(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(DAT_003e3c50 + 0x1c);
  iVar1 = 0;
  if (param_2 < 7) {
    func_0010C0C0(piVar2);
    iVar1 = piVar2[param_2 + 4];
    piVar2[param_2 + 4] = param_1;
    func_0010C160(piVar2);
  }
  return iVar1;
}


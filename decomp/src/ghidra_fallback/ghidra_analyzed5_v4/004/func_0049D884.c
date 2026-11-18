#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_0048DAB4(int *param_1,int *param_2,byte *param_3);

// USA 0049D884 <- EU 0049D85C (Ghidra, non-matching)

undefined4 func_0049D884(int param_1,byte *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1 + 4;
  func_0010C0B8(iVar3);
  piVar1 = *(int **)(param_2 + 100);
  if (piVar1 == (int *)0x0) {
    piVar1 = *(int **)(param_1 + 0x28);
  }
  if (((*(int **)(param_2 + 0x68))[0xc] & 1U) != 0) {
    func_0010EEE0(iVar3);
    return 0;
  }
  uVar2 = func_0048DAB4(piVar1,*(int **)(param_2 + 0x68),param_2);
  func_0010EEE0(iVar3);
  return uVar2;
}


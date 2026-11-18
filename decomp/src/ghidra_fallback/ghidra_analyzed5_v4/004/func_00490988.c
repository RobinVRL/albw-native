#include "ghidra_types.h"

extern int func_0011E674(int param_1);
extern int func_0011EC80(int param_1);
extern int func_0011EE2C(int param_1);
extern int func_0011F054(void *param_1,undefined4 param_2);
extern undefined4 *DAT_004909cc;
extern undefined4 DAT_004909d0;
extern undefined4 DAT_004909d4;

// USA 00490988 <- EU 00490960 (Ghidra, non-matching)
// GLOBAL DAT_004909cc undefined4 *
// GLOBAL DAT_004909d0 undefined4
// GLOBAL DAT_004909d4 undefined4

int func_00490988(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  uVar3 = DAT_004909d4;
  uVar2 = DAT_004909d0;
  puVar1 = DAT_004909cc;
  *DAT_004909cc = param_3;
  func_0011F054(uVar3,uVar2);
  piVar4 = func_0011EE2C(param_2);
  *(int **)(param_1 + 4) = piVar4;
  iVar5 = func_0011EC80((int)piVar4);
  if (iVar5 < 0) {
    func_0011E674(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    *(int *)(param_1 + 8) = iVar5;
  }
  func_0011F054(0,0);
  *puVar1 = 0;
  return (iVar5 >> 0x1f) + 1;
}


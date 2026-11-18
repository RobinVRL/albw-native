#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int *DAT_003e45a8;
extern int DAT_003e45ac;

// USA 003E4550 <- EU 003E4530 (Ghidra, non-matching)
// GLOBAL DAT_003e45a8 int *
// GLOBAL DAT_003e45ac int

undefined4 func_003E4550(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar1 = DAT_003e45a8;
  func_0010C0C0(DAT_003e45a8);
  iVar2 = DAT_003e45ac;
  piVar4 = *(int **)(DAT_003e45ac + 4);
  while( true ) {
    if (piVar4 == (int *)0x0) {
      return func_0010C160(piVar1);
    }
    if (piVar4 == param_1) break;
    piVar4 = (int *)piVar4[1];
  }
  iVar3 = *piVar4;
  piVar5 = (int *)piVar4[1];
  if (iVar3 == 0) {
    *(int **)(DAT_003e45ac + 4) = piVar5;
  }
  else {
    *(int **)(iVar3 + 4) = piVar5;
  }
  if (piVar5 == (int *)0x0) {
    *(int *)(iVar2 + 8) = iVar3;
  }
  else {
    *piVar5 = iVar3;
  }
  *piVar4 = 0;
  piVar4[1] = 0;
  return func_0010C160(piVar1);
}


#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int *DAT_00101684;
extern int *DAT_00101688;

// USA 001015FC <- EU 001015FC (Ghidra, non-matching)
// GLOBAL DAT_00101684 int *
// GLOBAL DAT_00101688 int *

undefined4 func_001015FC(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar1 = DAT_00101684;
  piVar3 = (int *)func_0010C0C0(DAT_00101684);
  piVar2 = DAT_00101688;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  if (param_1 != 0) {
    piVar3 = (int *)(param_1 + 4);
  }
  piVar5 = (int *)*piVar2;
  if (param_1 == 0) {
    piVar3 = (int *)0x0;
  }
  if (piVar5 == (int *)0x0) {
    if (param_1 != 0) {
      iVar4 = param_1 + 4;
    }
    else {
      iVar4 = 0;
    }
    *(int *)(param_1 + 8) = iVar4;
    *(int *)(param_1 + 4) = iVar4;
    if (param_1 != 0) {
      iVar4 = param_1 + 4;
    }
    else {
      iVar4 = 0;
    }
    *piVar2 = iVar4;
  }
  else {
    piVar3[1] = (int)piVar5;
    *(int **)(*piVar5 + 4) = piVar3;
    *piVar3 = *piVar5;
    *piVar5 = (int)piVar3;
  }
  func_0010C160(piVar1);
  return 0;
}


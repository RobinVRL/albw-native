#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int *DAT_002c34fc;

// USA 002C34A4 <- EU 002C3480 (Ghidra, non-matching)
// GLOBAL DAT_002c34fc int *

void func_002C34A4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  float in_s0;
  
  if (*(char *)(param_1 + 0xa1) != param_2) {
    uVar1 = (uint)*(char *)(param_1 + 0xa2);
    piVar3 = (int *)(*DAT_002c34fc + 0x118);
    if (param_2 == 0) {
      if (uVar1 < 2) {
        piVar3 = piVar3 + uVar1 * 4;
      }
      func_0010F1F8((int *)(piVar3[3] + param_1),in_s0);
      iVar2 = piVar3[2] + -1;
    }
    else {
      if (uVar1 < 2) {
        piVar3 = piVar3 + uVar1 * 4;
      }
      func_0010F1DC(piVar3,(int *)(piVar3[3] + param_1));
      iVar2 = piVar3[2] + 1;
    }
    piVar3[2] = iVar2;
    *(char *)(param_1 + 0xa1) = (char)param_2;
  }
  return;
}


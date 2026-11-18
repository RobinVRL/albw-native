#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int *DAT_002c34fc;

// USA 002C349C <- EU 002C3478 (Ghidra, non-matching)
// GLOBAL DAT_002c34fc int *

void func_002C349C(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  float in_s0;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (*(char *)(iVar1 + 0xa1) != param_2) {
    uVar2 = (uint)*(char *)(iVar1 + 0xa2);
    piVar4 = (int *)(*DAT_002c34fc + 0x118);
    if (param_2 == 0) {
      if (uVar2 < 2) {
        piVar4 = piVar4 + uVar2 * 4;
      }
      func_0010F1F8((int *)(piVar4[3] + iVar1),in_s0);
      iVar3 = piVar4[2] + -1;
    }
    else {
      if (uVar2 < 2) {
        piVar4 = piVar4 + uVar2 * 4;
      }
      func_0010F1DC(piVar4,(int *)(piVar4[3] + iVar1));
      iVar3 = piVar4[2] + 1;
    }
    piVar4[2] = iVar3;
    *(char *)(iVar1 + 0xa1) = (char)param_2;
  }
  return;
}


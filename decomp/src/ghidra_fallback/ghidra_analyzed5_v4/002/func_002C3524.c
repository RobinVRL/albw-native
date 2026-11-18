#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int *DAT_002c357c;

// USA 002C3524 <- EU 002C3500 (Ghidra, non-matching)
// GLOBAL DAT_002c357c int *

void func_002C3524(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  float in_s0;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  uVar2 = (uint)*(char *)(iVar1 + 0xa2);
  if (uVar2 != param_2) {
    iVar5 = *DAT_002c357c;
    iVar3 = iVar5 + 0x118;
    if (uVar2 < 2) {
      iVar3 = iVar3 + uVar2 * 0x10;
    }
    func_0010F1F8((int *)(*(int *)(iVar3 + 0xc) + iVar1),in_s0);
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + -1;
    piVar4 = (int *)(iVar5 + 0x118);
    if (param_2 < 2) {
      piVar4 = piVar4 + param_2 * 4;
    }
    *(char *)(iVar1 + 0xa2) = (char)param_2;
    func_0010F1DC(piVar4,(int *)(piVar4[3] + iVar1));
    piVar4[2] = piVar4[2] + 1;
  }
  return;
}


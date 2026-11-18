#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int *DAT_002c357c;

// USA 002C352C <- EU 002C3508 (Ghidra, non-matching)
// GLOBAL DAT_002c357c int *

void func_002C352C(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float in_s0;
  
  uVar1 = (uint)*(char *)(param_1 + 0xa2);
  if (uVar1 != param_2) {
    iVar4 = *DAT_002c357c;
    iVar2 = iVar4 + 0x118;
    if (uVar1 < 2) {
      iVar2 = iVar2 + uVar1 * 0x10;
    }
    func_0010F1F8((int *)(*(int *)(iVar2 + 0xc) + param_1),in_s0);
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
    piVar3 = (int *)(iVar4 + 0x118);
    if (param_2 < 2) {
      piVar3 = piVar3 + param_2 * 4;
    }
    *(char *)(param_1 + 0xa2) = (char)param_2;
    func_0010F1DC(piVar3,(int *)(piVar3[3] + param_1));
    piVar3[2] = piVar3[2] + 1;
  }
  return;
}


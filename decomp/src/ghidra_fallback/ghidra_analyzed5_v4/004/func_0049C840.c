#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_0010F0A8(int param_1,uint param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_00580204(int param_1);
extern int func_005802E8(int param_1);

// USA 0049C840 <- EU 0049C818 (Ghidra, non-matching)

undefined4 func_0049C840(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  float in_s0;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  if ((iVar1 != 0) && ((param_1[0x1c] & 2U) == 0)) {
    piVar3 = (int *)0x0;
    if ((param_1[0x1c] & 1U) != 0) {
      func_0010C0B8((int)(param_1 + 0x15));
      piVar3 = param_1 + 0x15;
    }
    if ((*(uint *)(param_2 + -4) & 1) == 0) {
      uVar2 = param_2 - 0x10;
    }
    else {
      uVar2 = *(uint *)(param_2 + -4) - 1;
    }
    if (uVar2 == 0) {
      func_00580204((int)param_1);
      func_005802E8((int)param_1);
    }
    else {
      func_0010F1F8((int *)(param_1[0x25] + uVar2),in_s0);
      param_1[0x24] = param_1[0x24] + -1;
      *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + *(int *)(uVar2 + 0xc);
      *(undefined4 *)(uVar2 + 0xc) = 0;
      func_0010F0A8((int)param_1,uVar2);
    }
    if (piVar3 != (int *)0x0) {
      return func_0010EEE0((int)piVar3);
    }
  }
  return 0;
}


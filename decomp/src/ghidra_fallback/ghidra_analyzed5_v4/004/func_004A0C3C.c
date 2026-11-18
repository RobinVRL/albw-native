#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);

// USA 004A0C3C <- EU 004A0C14 (Ghidra, non-matching)

int func_004A0C3C(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1[9] == 0) {
    return param_1[8];
  }
  piVar3 = (int *)0x0;
  if ((param_1[0x1c] & 1U) != 0) {
    func_0010C0B8((int)(param_1 + 0x15));
    piVar3 = param_1 + 0x15;
  }
  if ((char)param_1[0x14] == '\x01') {
    iVar1 = param_1[8];
    if (param_1[7] + iVar1 != param_1[0x1e]) goto LAB_004a0cb4;
    iVar1 = (**(code **)(*param_1 + 0x2c))(param_1);
    iVar1 = param_1[0x1d] - iVar1;
    iVar2 = (**(code **)(*(int *)param_1[9] + 0x24))((int *)param_1[9],param_1[7],iVar1);
    if (iVar2 != 0) {
      param_1[8] = iVar1;
      param_1[0x1e] = param_1[0x1d];
      goto LAB_004a0cb4;
    }
  }
  else if (param_1[7] == param_1[0x1d]) {
    iVar1 = (**(code **)(*param_1 + 0x30))(param_1);
    iVar1 = iVar1 - param_1[0x1e];
    iVar2 = (**(code **)(*(int *)param_1[9] + 0x20))((int *)param_1[9],param_1[7],iVar1);
    if (iVar2 != 0) {
      param_1[0x1d] = param_1[0x1e];
      param_1[7] = param_1[0x1e];
      param_1[8] = iVar1;
      goto LAB_004a0cb4;
    }
  }
  iVar1 = param_1[8];
LAB_004a0cb4:
  if (piVar3 != (int *)0x0) {
    func_0010EEE0((int)piVar3);
  }
  return iVar1;
}


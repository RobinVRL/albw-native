#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int DAT_004a0d9c;

// USA 004A0D58 <- EU 004A0D30 (Ghidra, non-matching)
// GLOBAL DAT_004a0d9c int

undefined4 func_004A0D58(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_004a0d9c;
  func_0010C0B8(DAT_004a0d9c);
  piVar3 = (int *)param_1[9];
  uVar4 = param_1[7];
  (**(code **)*param_1)(param_1);
  if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 0x44))(piVar3), iVar2 != 0)) {
    (**(code **)(*piVar3 + 0x1c))(piVar3,uVar4);
  }
  return func_0010EEE0(iVar1);
}


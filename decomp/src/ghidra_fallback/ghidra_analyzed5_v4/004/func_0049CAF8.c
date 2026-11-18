#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int DAT_0049cb3c;

// USA 0049CAF8 <- EU 0049CAD0 (Ghidra, non-matching)
// GLOBAL DAT_0049cb3c int

undefined4 func_0049CAF8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_0049cb3c;
  func_0010C0B8(DAT_0049cb3c);
  piVar3 = (int *)param_1[9];
  uVar4 = param_1[7];
  (**(code **)*param_1)(param_1);
  if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 0x44))(piVar3), iVar2 != 0)) {
    (**(code **)(*piVar3 + 0x1c))(piVar3,uVar4);
  }
  return func_0010EEE0(iVar1);
}


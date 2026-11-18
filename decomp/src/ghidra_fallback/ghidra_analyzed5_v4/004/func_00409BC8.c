#include "ghidra_types.h"

extern int *DAT_00409c3c;

// USA 00409BC8 <- EU 00409BA8 (Ghidra, non-matching)
// GLOBAL DAT_00409c3c int *

void func_00409BC8(int *param_1,int *param_2,float fparam_0)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *unaff_r5;
  
  *param_1 = 0;
  piVar1 = DAT_00409c3c;
  if (param_2 != (int *)0x0) {
    unaff_r5 = (int *)*param_2;
  }
  if (param_2 != (int *)0x0 && unaff_r5 != (int *)0x0) {
    piVar2 = (int *)(**(code **)*unaff_r5)(unaff_r5);
    do {
      if (piVar2 == piVar1) {
        if (unaff_r5 == (int *)0x0) {
          return;
        }
        *param_1 = (int)unaff_r5;
        iVar3 = (**(code **)(*unaff_r5 + 0x18))(unaff_r5);
        if (iVar3 != 0) {
          (**(code **)(*(int *)*param_1 + 0x1c))((int *)*param_1);
        }
        *(int **)(*param_1 + 0x29e0) = param_1;
        return;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)0x0);
  }
  return;
}


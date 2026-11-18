#include "ghidra_types.h"

extern int *DAT_0040c62c;

// USA 0040C5C0 <- EU 0040C5A0 (Ghidra, non-matching)
// GLOBAL DAT_0040c62c int *

void func_0040C5C0(int *param_1,int *param_2,float fparam_0)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *unaff_r5;
  
  *param_1 = 0;
  piVar1 = DAT_0040c62c;
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
        *(int **)(*param_1 + 0x114) = param_1;
        return;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)0x0);
  }
  return;
}


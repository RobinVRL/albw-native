#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);

// USA 0026E6DC <- EU 0026E704 (Ghidra, non-matching)

void func_0026E6DC(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int local_18;
  
  local_18 = 1;
  if ((*(int *)(param_1 + 0x10) == 0) ||
     (piVar1 = (int *)(*(int *)(param_1 + 0x14) + -4), piVar1 == (int *)0x0)) {
LAB_0026e7c4:
    if ((0 < local_18) && (iVar2 = func_0010CEE0(local_18,(int *)0x0,4), iVar2 != 0)) {
      *(undefined4 *)(param_1 + 0xb4) = 0;
      *(int *)(param_1 + 0xb8) = local_18;
      *(int *)(param_1 + 0xbc) = iVar2;
    }
    return;
  }
LAB_0026e734:
  iVar2 = (int)piVar1;
  local_18 = local_18 + 1;
  if (*(int *)(iVar2 + 0x10) != 0) goto code_r0x0026e74c;
  goto LAB_0026e760;
code_r0x0026e74c:
  piVar1 = (int *)(*(int *)(iVar2 + 0x14) + -4);
  if (piVar1 == (int *)0x0) {
LAB_0026e760:
    piVar3 = (int *)(*(int *)(iVar2 + 0xc) + 0x14);
    piVar1 = piVar3;
    if (iVar2 != 0) {
      piVar1 = (int *)(iVar2 + 4);
    }
    piVar1 = (int *)*piVar1;
    bVar4 = piVar1 == piVar3;
    if (!bVar4) {
      piVar1 = piVar1 + -1;
      bVar4 = piVar1 == (int *)0x0;
    }
    if (bVar4) {
      do {
        iVar2 = *(int *)(iVar2 + 0xc);
        if (iVar2 == param_1) {
          if (local_18 == 0) {
            return;
          }
          goto LAB_0026e7c4;
        }
        piVar3 = (int *)(*(int *)(iVar2 + 0xc) + 0x14);
        piVar1 = piVar3;
        if (iVar2 != 0) {
          piVar1 = (int *)(iVar2 + 4);
        }
        piVar1 = (int *)*piVar1;
        bVar4 = piVar1 == piVar3;
        if (!bVar4) {
          piVar1 = piVar1 + -1;
          bVar4 = piVar1 == (int *)0x0;
        }
      } while (bVar4);
    }
  }
  goto LAB_0026e734;
}


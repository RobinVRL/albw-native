#include "ghidra_types.h"


// USA 0067F3A8 <- EU 0067F380 (Ghidra, non-matching)

void func_0067F3A8(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  
  if ((*(byte *)(param_2 + 0x11) & 1) != 0) {
    iVar1 = (**(code **)(*param_2 + 0x44))(param_2,*param_1);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = param_2[4];
    }
    if ((iVar1 != 0 && iVar2 != 0) &&
       (piVar3 = (int *)(param_2[5] + -4), (int *)(param_2[5] + -4) != (int *)0x0)) {
LAB_0067f3c8:
      piVar4 = piVar3;
      if ((*(byte *)(piVar4 + 0x11) & 1) != 0) goto code_r0x0067f3dc;
      goto LAB_0067f40c;
    }
  }
  return;
code_r0x0067f3dc:
  iVar1 = (**(code **)(*piVar4 + 0x44))(piVar4,*param_1);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = piVar4[4];
  }
  if ((iVar1 == 0 || iVar2 == 0) ||
     (piVar3 = (int *)(piVar4[5] + -4), (int *)(piVar4[5] + -4) == (int *)0x0)) {
LAB_0067f40c:
    piVar3 = (int *)(piVar4[3] + 0x14);
    if (piVar4 != (int *)0x0) {
      piVar3 = piVar4 + 1;
    }
    piVar3 = (int *)*piVar3;
    bVar5 = piVar3 == (int *)(piVar4[3] + 0x14);
    if (!bVar5) {
      piVar3 = piVar3 + -1;
      bVar5 = piVar3 == (int *)0x0;
    }
    if (bVar5) {
      do {
        piVar4 = (int *)piVar4[3];
        if (piVar4 == param_2) {
          return;
        }
        piVar3 = (int *)(piVar4[3] + 0x14);
        if (piVar4 != (int *)0x0) {
          piVar3 = piVar4 + 1;
        }
        piVar3 = (int *)*piVar3;
        bVar5 = piVar3 == (int *)(piVar4[3] + 0x14);
        if (!bVar5) {
          piVar3 = piVar3 + -1;
          bVar5 = piVar3 == (int *)0x0;
        }
      } while (bVar5);
    }
  }
  goto LAB_0067f3c8;
}


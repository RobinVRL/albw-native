#include "ghidra_types.h"

extern int func_002E0150(uint param_1);
extern int func_002E01AC(uint param_1);

// USA 00527934 <- EU 0052790C (Ghidra, non-matching)

undefined4 func_00527934(int param_1,int *param_2)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  piVar2 = (int *)func_002E0150(*(uint *)(param_1 + 8));
  if (piVar2 != (int *)0x0) {
    bVar1 = func_002E01AC(*(uint *)(param_1 + 8));
    uVar3 = 0;
    if (bVar1 != 0) {
      do {
        (**(code **)(*piVar2 + 8))(piVar2);
        (**(code **)(*piVar2 + 8))(piVar2);
        iVar4 = piVar2[1];
        (**(code **)(*param_2 + 8))(param_2);
        if (iVar4 == param_2[1]) {
LAB_005279bc:
          if ((int)uVar3 < 0) {
            return 0;
          }
          return *(undefined4 *)(param_1 + uVar3 * 4 + 0x1c8);
        }
        iVar4 = 0;
        do {
          if (*(char *)(piVar2[1] + iVar4) != *(char *)(param_2[1] + iVar4)) break;
          if (*(char *)(piVar2[1] + iVar4) == '\0') goto LAB_005279bc;
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0x40001);
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 2;
      } while (uVar3 < bVar1);
    }
  }
  return 0;
}


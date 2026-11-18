#include "ghidra_types.h"

extern int func_005229AC(int *param_1,int *param_2);
extern int *DAT_0047fde0;
extern int *DAT_0047fde4;

// USA 0047FD30 <- EU 0047FD08 (Ghidra, non-matching)
// GLOBAL DAT_0047fde0 int *
// GLOBAL DAT_0047fde4 int *

undefined4 func_0047FD30(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  
  piVar2 = (int *)func_005229AC(*(int **)(param_1 + 0x1c),DAT_0047fde0);
  piVar1 = DAT_0047fde4;
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (piVar3 == piVar1) {
        if (piVar2 == (int *)0x0) {
          return 0;
        }
        (**(code **)(*param_2 + 8))(param_2);
        uVar4 = 0;
        goto LAB_0047fd6c;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)0x0);
  }
  return 0;
  while (uVar4 = uVar4 + 1, (int)uVar4 < 0x40001) {
LAB_0047fd6c:
    if (*(short *)(param_2[1] + uVar4 * 2) == 0) {
      if ((int)uVar4 < 0x40001) goto LAB_0047fda8;
      break;
    }
  }
  uVar4 = 0;
LAB_0047fda8:
  (**(code **)(*param_2 + 8))(param_2);
                    /* WARNING: Could not recover jumptable at 0x0047fddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*piVar2 + 0x60))(piVar2,param_2[1],0,uVar4 & 0xffff);
}


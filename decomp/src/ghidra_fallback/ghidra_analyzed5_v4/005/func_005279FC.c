#include "ghidra_types.h"

extern int func_002E0150(uint param_1);
extern int func_002E01AC(uint param_1);

// USA 005279FC <- EU 005279D4 (Ghidra, non-matching)

uint func_005279FC(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 0x2d0);
  piVar3 = (int *)func_002E0150(*(uint *)(iVar2 + 8));
  if (piVar3 != (int *)0x0) {
    bVar1 = func_002E01AC(*(uint *)(iVar2 + 8));
    uVar4 = 0;
    if (bVar1 != 0) {
      do {
        (**(code **)(*piVar3 + 8))(piVar3);
        (**(code **)(*piVar3 + 8))(piVar3);
        iVar2 = piVar3[1];
        (**(code **)(*param_2 + 8))(param_2);
        if (iVar2 == param_2[1]) {
          return uVar4;
        }
        iVar2 = 0;
        do {
          if (*(char *)(piVar3[1] + iVar2) != *(char *)(param_2[1] + iVar2)) break;
          if (*(char *)(piVar3[1] + iVar2) == '\0') {
            return uVar4;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0x40001);
        uVar4 = uVar4 + 1;
        piVar3 = piVar3 + 2;
      } while (uVar4 < bVar1);
    }
  }
  return 0xffffffff;
}


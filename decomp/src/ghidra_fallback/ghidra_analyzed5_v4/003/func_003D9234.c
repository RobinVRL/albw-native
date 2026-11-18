#include "ghidra_types.h"

extern int func_003DA498(int *param_1,int param_2);
extern int func_006769A8(undefined4 *param_1,undefined4 *param_2,int param_3);
extern int func_00676A20(undefined4 *param_1);

// USA 003D9234 <- EU 003D9214 (Ghidra, non-matching)

undefined4 func_003D9234(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (param_1[4] != 0) {
    do {
      if (*(char *)(*(int *)(*param_2 + 0x24) + uVar6) != '\0') {
        iVar1 = *(int *)(param_1[5] + uVar6 * 4);
        for (iVar5 = *(int *)(iVar1 + 0xc); iVar5 != iVar1 + 8; iVar5 = *(int *)(iVar5 + 4)) {
          if (*(char *)(iVar5 + 0xc) != '\x01') {
            piVar4 = (int *)(*param_2 + 0x14);
            piVar2 = (int *)func_003DA498(*(int **)(*param_2 + 0x1c),2);
            if (piVar2 == (int *)0x0) {
              return 0;
            }
            if (piVar2 + 2 != (int *)0x0) {
              func_00676A20(piVar2 + 2);
            }
            *piVar2 = *piVar4;
            piVar2[1] = (int)piVar4;
            *piVar4 = (int)piVar2;
            *(int **)(*piVar2 + 4) = piVar2;
            iVar3 = func_006769A8(piVar2 + 2,(undefined4 *)(iVar5 + 8),*param_1);
            if (iVar3 == 0) {
              return 0;
            }
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)param_1[4]);
  }
  return 1;
}


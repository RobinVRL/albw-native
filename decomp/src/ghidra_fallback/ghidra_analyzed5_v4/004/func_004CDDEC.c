#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);

// USA 004CDDEC <- EU 004CDDC4 (Ghidra, non-matching)

undefined1 func_004CDDEC(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  if (((*(char *)(param_1 + 0x10) != '\0') && (param_2 != (int *)0x0)) &&
     ((piVar1 = *(int **)(param_1 + 0x44), piVar1 == (int *)0x0 || (piVar1 != param_2)))) {
    iVar2 = param_2[9];
    bVar3 = iVar2 == 0;
    if (bVar3) {
      iVar2 = param_2[8];
    }
    if (bVar3 && iVar2 == 0) {
      iVar2 = param_2[0xb];
      bVar3 = iVar2 == 0;
      if (bVar3) {
        iVar2 = param_2[10];
      }
      if (bVar3 && iVar2 == 0) {
        if (*(char *)((int)param_2 + 0x12) != '\0') {
          param_3 = 1;
        }
        if ((piVar1 == (int *)0x0 || param_3 == 0) ||
           (*(char *)((int)param_2 + 0x13) <= *(char *)((int)piVar1 + 0x13))) {
          for (iVar2 = *(int *)(param_1 + 0x18); iVar2 = iVar2 - *(int *)(param_1 + 0x20),
              iVar2 != (param_1 + 0x14) - *(int *)(param_1 + 0x20);
              iVar2 = *(int *)(iVar2 + *(int *)(param_1 + 0x20) + 4)) {
            if (*(char *)(iVar2 + 0x13) < *(char *)((int)param_2 + 0x13)) {
              func_0010F1DC((int *)(iVar2 + *(int *)(param_1 + 0x20)),
                            (int *)(*(int *)(param_1 + 0x20) + (int)param_2));
              *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
              return 1;
            }
          }
          func_0010F1DC((int *)(param_1 + 0x14),(int *)(*(int *)(param_1 + 0x20) + (int)param_2));
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        }
        else {
          (**(code **)(*piVar1 + 0x14))(piVar1);
          func_0010F1DC((int *)(param_1 + 0x24),
                        (int *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x44)));
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
          *(int **)(param_1 + 0x44) = param_2;
          (**(code **)(*param_2 + 0x10))(param_2);
        }
        return 1;
      }
    }
  }
  return 0;
}


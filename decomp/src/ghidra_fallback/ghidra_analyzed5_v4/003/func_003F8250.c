#include "ghidra_types.h"

extern int func_003F8470(int param_1,int param_2);

// USA 003F8250 <- EU 003F8230 (Ghidra, non-matching)

int func_003F8250(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int local_30;
  
  iVar4 = *(int *)(param_3 + 4);
  iVar6 = iVar4;
  iVar7 = param_2;
  if (iVar4 < 1) {
    iVar6 = *(int *)(param_3 + 0x27c);
    iVar7 = iVar6;
  }
  if (iVar6 == 0) {
    iVar7 = *(int *)(param_3 + 0x278);
  }
  local_30 = param_2;
  if (iVar6 != 0 || iVar7 != 0) {
    bVar8 = *(char *)(param_3 + 0x283) != '\0';
    cVar1 = '\0';
    if (bVar8) {
      cVar1 = *(char *)(param_3 + 0x282);
    }
    if (!bVar8 || cVar1 == '\0') {
      bVar8 = *(char *)(param_3 + 0x282) != '\0';
      bVar2 = bVar8 || param_4 != 0;
      if (0 < iVar4) {
        iVar6 = *(int *)(param_3 + 8) + -1;
        if (iVar6 < 0) {
          return param_2;
        }
        do {
          iVar7 = *(int *)(param_3 + iVar6 * 4 + 0x10);
          if ((*(int *)(iVar7 + 0x20) == *(int *)(param_3 + 0xc)) &&
             (piVar5 = *(int **)(iVar7 + 0xd4), piVar5 != (int *)0x0)) {
            if (!bVar8 && param_4 == 0) {
              (**(code **)(*piVar5 + 8))(piVar5,iVar7);
              *(int *)(param_1 + 0x460) = *(int *)(param_1 + 0x460) + 1;
              piVar5 = *(int **)(iVar7 + 0xd4);
              if (piVar5 == (int *)0x0) goto LAB_003f8424;
            }
            local_30 = (**(code **)(*piVar5 + 0x10))(piVar5,local_30,iVar7,bVar2);
            if ((*(int *)(*(int *)(iVar7 + 0x1c) + 0xc) == 0) ||
               (*(char *)(param_3 + 0x283) != '\0')) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
              *(int *)(param_1 + 0x464) = *(int *)(param_1 + 0x464) + 1;
              *(int *)(param_1 + 0x4e0) =
                   *(int *)(*(int *)(iVar7 + 0xd4) + 8) + *(int *)(param_1 + 0x4e0);
              *(int *)(param_1 + 0x46c) =
                   *(int *)(*(int *)(iVar7 + 0xd4) + 0x10) + *(int *)(param_1 + 0x46c);
              *(int *)(param_1 + 0x480) =
                   *(int *)(*(int *)(iVar7 + 0xd4) + 0x14) + *(int *)(param_1 + 0x480);
            }
            if (((**(int **)(iVar7 + 0xd8) == 1) && (((*(int **)(iVar7 + 0xd8))[0x152] & 1U) != 0))
               && (local_30 = (**(code **)(**(int **)(iVar7 + 0xd4) + 0x14))
                                        (*(int **)(iVar7 + 0xd4),local_30,iVar7,bVar2), bVar3)) {
              *(int *)(param_1 + 0x4e0) =
                   *(int *)(param_1 + 0x4e0) + *(int *)(*(int *)(iVar7 + 0xd4) + 8);
            }
          }
LAB_003f8424:
          iVar6 = iVar6 + -1;
        } while (-1 < iVar6);
        if (0 < *(int *)(param_3 + 4)) {
          return local_30;
        }
      }
      func_003F8470(param_1,param_3);
    }
  }
  return local_30;
}


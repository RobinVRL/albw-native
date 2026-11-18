#include "ghidra_types.h"

extern int func_002E0024(int param_1);
extern int func_004ACBA0(int param_1,uint param_2);

// USA 004AD1F4 <- EU 004AD1CC (Ghidra, non-matching)

undefined4 func_004AD1F4(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  
  if (param_3 != 0) {
    if (param_2 == 0) {
      return 0;
    }
    uVar1 = func_002E0024(param_2);
    return func_004ACBA0(param_1,uVar1);
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (10 < param_2) {
    param_2 = 10;
  }
  piVar8 = (int *)(param_1 + 0x7690);
  piVar7 = (int *)(param_1 + 0x7684);
  if (*piVar8 == 0) {
    if (*(int *)(param_1 + 0x7688) < 1) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x7690) = 1;
    iVar3 = *(int *)(param_1 + 0x768c);
    if (*(int *)(param_1 + 0x7688) <= iVar3) {
      iVar3 = iVar3 - *(int *)(param_1 + 0x7688);
    }
    *(int *)(*piVar7 + iVar3 * 4) = param_2;
    return 0;
  }
  iVar3 = *piVar8 + -1;
  do {
    iVar2 = *(int *)(param_1 + 0x768c) + iVar3;
    if (*(int *)(param_1 + 0x7688) <= iVar2) {
      iVar2 = iVar2 - *(int *)(param_1 + 0x7688);
    }
    if (*(int *)(*piVar7 + iVar2 * 4) == param_2) {
      iVar3 = *piVar8;
      if (iVar3 != 1) {
        if (iVar3 < 1) {
          piVar8 = (int *)*piVar7;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x768c);
          if (*(int *)(param_1 + 0x7688) <= iVar2) {
            iVar2 = iVar2 - *(int *)(param_1 + 0x7688);
          }
          piVar8 = (int *)(*piVar7 + iVar2 * 4);
        }
        iVar2 = *piVar8;
        if (iVar3 < 1) {
          iVar3 = *(int *)(param_1 + 0x7690);
        }
        else {
          iVar3 = *(int *)(param_1 + 0x768c) + 1;
          *(int *)(param_1 + 0x768c) = iVar3;
          if (*(int *)(param_1 + 0x7688) <= iVar3) {
            *(undefined4 *)(param_1 + 0x768c) = 0;
          }
          iVar3 = *(int *)(param_1 + 0x7690) + -1;
          *(int *)(param_1 + 0x7690) = iVar3;
        }
        if (iVar3 < 1) {
          puVar4 = (undefined4 *)*piVar7;
        }
        else {
          iVar5 = *(int *)(param_1 + 0x768c);
          if (*(int *)(param_1 + 0x7688) <= iVar5) {
            iVar5 = iVar5 - *(int *)(param_1 + 0x7688);
          }
          puVar4 = (undefined4 *)(*piVar7 + iVar5 * 4);
        }
        uVar6 = *puVar4;
        if (0 < iVar3) {
          iVar3 = *(int *)(param_1 + 0x768c) + 1;
          *(int *)(param_1 + 0x768c) = iVar3;
          if (*(int *)(param_1 + 0x7688) <= iVar3) {
            *(undefined4 *)(param_1 + 0x768c) = 0;
          }
          *(int *)(param_1 + 0x7690) = *(int *)(param_1 + 0x7690) + -1;
        }
        iVar3 = *(int *)(param_1 + 0x7690);
        if (iVar2 == param_2) {
          if (iVar3 < *(int *)(param_1 + 0x7688)) {
            *(int *)(param_1 + 0x7690) = iVar3 + 1;
            iVar3 = iVar3 + *(int *)(param_1 + 0x768c);
            if (*(int *)(param_1 + 0x7688) <= iVar3) {
              iVar3 = iVar3 - *(int *)(param_1 + 0x7688);
            }
            *(undefined4 *)(*piVar7 + iVar3 * 4) = uVar6;
          }
          iVar3 = *(int *)(param_1 + 0x7690);
          if (iVar3 < *(int *)(param_1 + 0x7688)) {
            *(int *)(param_1 + 0x7690) = iVar3 + 1;
            iVar3 = iVar3 + *(int *)(param_1 + 0x768c);
            if (*(int *)(param_1 + 0x7688) <= iVar3) {
              iVar3 = iVar3 - *(int *)(param_1 + 0x7688);
            }
            *(int *)(*piVar7 + iVar3 * 4) = iVar2;
          }
        }
        else {
          if (iVar3 < *(int *)(param_1 + 0x7688)) {
            *(int *)(param_1 + 0x7690) = iVar3 + 1;
            iVar3 = iVar3 + *(int *)(param_1 + 0x768c);
            if (*(int *)(param_1 + 0x7688) <= iVar3) {
              iVar3 = iVar3 - *(int *)(param_1 + 0x7688);
            }
            *(int *)(*piVar7 + iVar3 * 4) = iVar2;
          }
          iVar3 = *(int *)(param_1 + 0x7690);
          if (iVar3 < *(int *)(param_1 + 0x7688)) {
            *(int *)(param_1 + 0x7690) = iVar3 + 1;
            iVar3 = iVar3 + *(int *)(param_1 + 0x768c);
            if (*(int *)(param_1 + 0x7688) <= iVar3) {
              iVar3 = iVar3 - *(int *)(param_1 + 0x7688);
            }
            *(undefined4 *)(*piVar7 + iVar3 * 4) = uVar6;
          }
        }
      }
      goto LAB_004ad4a0;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1);
  if (1 < *piVar8) {
    iVar3 = *(int *)(param_1 + 0x768c);
    if (*(int *)(param_1 + 0x7688) <= iVar3) {
      iVar3 = iVar3 - *(int *)(param_1 + 0x7688);
    }
    func_004ACBA0(param_1,*(uint *)(*piVar7 + iVar3 * 4));
    if (0 < *(int *)(param_1 + 0x7690)) {
      iVar3 = *(int *)(param_1 + 0x768c) + 1;
      *(int *)(param_1 + 0x768c) = iVar3;
      if (*(int *)(param_1 + 0x7688) <= iVar3) {
        *(undefined4 *)(param_1 + 0x768c) = 0;
      }
      *(int *)(param_1 + 0x7690) = *(int *)(param_1 + 0x7690) + -1;
    }
  }
LAB_004ad4a0:
  iVar3 = *(int *)(param_1 + 0x7690);
  iVar2 = *(int *)(param_1 + 0x7688);
  if (iVar3 < iVar2) {
    *(int *)(param_1 + 0x7690) = iVar3 + 1;
    iVar2 = *(int *)(param_1 + 0x7688);
    iVar3 = iVar3 + *(int *)(param_1 + 0x768c);
    if (iVar3 < iVar2) goto LAB_004ad520;
  }
  else {
    if (0 < iVar3) {
      iVar3 = *(int *)(param_1 + 0x768c) + 1;
      *(int *)(param_1 + 0x768c) = iVar3;
      if (iVar2 <= iVar3) {
        *(undefined4 *)(param_1 + 0x768c) = 0;
      }
      iVar3 = *(int *)(param_1 + 0x7690) + -1;
      *(int *)(param_1 + 0x7690) = iVar3;
    }
    if (iVar2 <= iVar3) {
      return 0;
    }
    *(int *)(param_1 + 0x7690) = iVar3 + 1;
    iVar2 = *(int *)(param_1 + 0x7688);
    iVar3 = iVar3 + *(int *)(param_1 + 0x768c);
    if (iVar3 < iVar2) goto LAB_004ad520;
  }
  iVar3 = iVar3 - iVar2;
LAB_004ad520:
  *(int *)(*piVar7 + iVar3 * 4) = param_2;
  return 0;
}


#include "ghidra_types.h"

extern int DAT_00522b3c;

// USA 00522A28 <- EU 00522A00 (Ghidra, non-matching)
// GLOBAL DAT_00522b3c int

uint func_00522A28(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(int *)(albw_frame + 0xc))
  #define iStack_30 (*(int *)(albw_frame + 0x10))
  #define piStack_2c (*(int * *)(albw_frame + 0x14))
  #define local_28 (*(int *)(albw_frame + 0x18))
  iVar1 = DAT_00522b3c;
  iVar5 = 0;
  uVar4 = 0;
  iStack_30 = param_1;
  piStack_2c = param_2;
  local_28 = param_3;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      if (uVar4 < *(uint *)(param_1 + 4)) {
        piVar2 = (int *)(*(int *)(param_1 + 8) + uVar4 * 4);
      }
      else {
        piVar2 = *(int **)(param_1 + 8);
      }
      if (*piVar2 != 0) {
        if (uVar4 < *(uint *)(param_1 + 4)) {
          puVar3 = (undefined4 *)(*(int *)(param_1 + 8) + uVar4 * 4);
        }
        else {
          puVar3 = *(undefined4 **)(param_1 + 8);
        }
        if (*(int **)*puVar3 == (int *)0x0) {
LAB_00522af0:
          bVar7 = false;
        }
        else {
          local_34 = **(int **)*puVar3;
          local_38 = iVar1;
          (**(code **)(*param_2 + 8))(param_2);
          (**(code **)(*param_2 + 8))(param_2);
          iVar6 = param_2[1];
          (**(code **)(local_38 + 8))(&local_38);
          if (iVar6 != local_34) {
            iVar6 = 0;
            do {
              if (*(char *)(param_2[1] + iVar6) != *(char *)(local_34 + iVar6)) break;
              if (*(char *)(param_2[1] + iVar6) == '\0') goto LAB_00522b18;
              iVar6 = iVar6 + 1;
            } while (iVar6 < 0x40001);
            goto LAB_00522af0;
          }
LAB_00522b18:
          bVar7 = true;
        }
        if ((bVar7) && (bVar7 = iVar5 == local_28, iVar5 = iVar5 + 1, bVar7)) {
          return uVar4;
        }
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < *(int *)(param_1 + 4));
  }
  return 0xffffffff;
}


#include "ghidra_types.h"

extern int func_004B0CD8(int *param_1,int param_2);
extern int func_0051AA44(int param_1);
extern int func_0058D840(int param_1);
extern int func_0058E0A8(int param_1);
extern int DAT_004b798c;
extern int *DAT_004b7990;

// USA 004B7810 <- EU 004B77E8 (Ghidra, non-matching)
// GLOBAL DAT_004b798c int
// GLOBAL DAT_004b7990 int *

void func_004B7810(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  char *pcVar9;
  
  puVar8 = (uint *)(param_1 + 0x18b4);
  uVar7 = *puVar8;
  iVar6 = 0;
  pcVar9 = (char *)(param_1 + 0x2400);
  if (0 < (int)uVar7) {
    if (uVar7 - 1 < uVar7) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x18bc) + (uVar7 - 1) * 4);
    }
    else {
      iVar3 = 0;
    }
    if (*(int *)(iVar3 + 4) == *(int *)(param_1 + 0x23d8)) {
      cVar1 = *(char *)(param_1 + 0x2401);
      do {
        if ((int)*puVar8 < 1) break;
        uVar7 = *puVar8 - 1;
        *puVar8 = uVar7;
        puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x18bc) + uVar7 * 4);
        if (puVar4 != (undefined4 *)0x0) {
          (**(code **)*puVar4)(puVar4,param_1);
        }
        uVar7 = *puVar8;
        if ((int)uVar7 < 1) break;
        if (uVar7 - 1 < uVar7) {
          iVar6 = *(int *)(*(int *)(param_1 + 0x18bc) + (uVar7 - 1) * 4);
        }
        else {
          iVar6 = 0;
        }
      } while (*(int *)(iVar6 + 4) == *(int *)(param_1 + 0x23d8));
      if (*(char *)(param_1 + 0x2401) == cVar1) {
        iVar6 = 0;
      }
      else {
        iVar6 = 1;
      }
    }
  }
  if ((((int)*(char *)(param_1 + 0x2401) & iVar6 - 1U) == 0) &&
     (*(int *)(param_1 + 0x23d8) = *(int *)(param_1 + 0x23d8) + 1,
     *(char *)(param_1 + 0x2414) != '\0')) {
    uVar5 = func_004B0CD8((int *)(param_1 + 0x2404),param_1 + 0x2418);
    *(char *)(DAT_004b798c + param_1) = (char)uVar5;
  }
  piVar2 = DAT_004b7990;
  if (*pcVar9 == '\0') {
    if ((0 < *(int *)(param_1 + 0x23f4)) &&
       (iVar6 = *(int *)(param_1 + 0x23f4) + -1, *(int *)(param_1 + 0x23f4) = iVar6, iVar6 == 0)) {
      func_0051AA44(*piVar2);
      *pcVar9 = '\x02';
    }
    iVar6 = func_0058D840(*piVar2);
    if (iVar6 != 0) {
      func_0051AA44(*piVar2);
      *pcVar9 = '\x02';
      *(undefined1 *)(param_1 + 0x2401) = 0;
    }
  }
  else if ((*pcVar9 == '\x01') && (iVar6 = func_0058E0A8(*DAT_004b7990), iVar6 != 0)) {
    *pcVar9 = '\x02';
    *(undefined1 *)(param_1 + 0x2401) = 0;
  }
  *(int *)(param_1 + 0x23d4) = *(int *)(param_1 + 0x23d4) + 1;
  return;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00111A64(uint *param_1);
extern int func_005126F8(int param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0066B808(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00510698;
extern int *DAT_0051069c;
extern uint *DAT_005106a0;
extern undefined4 DAT_005106a4;
extern undefined4 *DAT_005106a8;

// USA 00510388 <- EU 00510360 (Ghidra, non-matching)
// GLOBAL DAT_00510698 int *
// GLOBAL DAT_0051069c int *
// GLOBAL DAT_005106a0 uint *
// GLOBAL DAT_005106a4 undefined4
// GLOBAL DAT_005106a8 undefined4 *

undefined4 func_00510388(int param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define aiStack_3c ((int *)(albw_frame + 0x4))
  piVar1 = DAT_00510698;
  if (*(char *)(param_1 + 0x2d7) == '\0') {
    iVar4 = 0;
    do {
      if (*(char *)(param_1 + 0x46f + iVar4) != '\0') {
        if (*(char *)(param_1 + 0x477) == '\0') goto LAB_00510530;
        aiStack_3c[1] = 0;
        aiStack_3c[2] = 0;
        uVar11 = (uint)(*(char *)(param_1 + 0x473) != '\0');
        aiStack_3c[3] = 0;
        aiStack_3c[4] = 0;
        if (*(char *)(param_1 + 0x474) != '\0') {
          uVar11 = uVar11 + 1;
        }
        if (*(char *)(param_1 + 0x475) != '\0') {
          uVar11 = uVar11 + 1;
        }
        if (*(char *)(param_1 + 0x476) != '\0') {
          uVar11 = uVar11 + 1;
        }
        if (uVar11 == 0) goto LAB_00510530;
        uVar5 = func_00111A64((uint *)(*DAT_00510698 + 0x660));
        iVar7 = (int)((ulonglong)uVar11 * (ulonglong)uVar5 >> 0x20);
        iVar4 = 0;
        goto LAB_00510418;
      }
      iVar4 = iVar4 + 1;
      if (*(char *)(param_1 + 0x477) == '\0') {
        iVar7 = 1;
      }
      else {
        iVar7 = 4;
      }
    } while (iVar4 < iVar7);
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return 0;
  while (iVar4 = iVar4 + 1, iVar10 = -1, iVar4 < 4) {
LAB_00510418:
    if ((*(char *)(param_1 + iVar4 + 0x473) != '\0') &&
       (iVar7 = iVar7 + -1, iVar10 = iVar4, iVar7 < 0)) break;
  }
  aiStack_3c[1] = 0;
  aiStack_3c[2] = 5;
  aiStack_3c[3] = 10;
  aiStack_3c[4] = 0xf;
  iVar4 = 0;
  do {
    uVar11 = func_00111A64((uint *)(*piVar1 + 0x660));
    iVar12 = (int)((ulonglong)uVar11 * 4 >> 0x20);
    uVar11 = func_00111A64((uint *)(*piVar1 + 0x660));
    iVar7 = (int)((ulonglong)uVar11 * 4 >> 0x20);
    iVar4 = iVar4 + 1;
    iVar9 = aiStack_3c[iVar7 + 1];
    aiStack_3c[iVar7 + 1] = aiStack_3c[iVar12 + 1];
    aiStack_3c[iVar12 + 1] = iVar9;
  } while (iVar4 < 0x14);
  iVar4 = aiStack_3c[iVar10 + 1];
  if ((iVar4 != 0) &&
     ((((iVar7 = iVar4, iVar9 = aiStack_3c[2], iVar12 = aiStack_3c[3], iVar3 = aiStack_3c[4],
        aiStack_3c[1] == 0 || (iVar7 = aiStack_3c[1], iVar9 = iVar4, aiStack_3c[2] == 0)) ||
       (iVar9 = aiStack_3c[2], iVar12 = iVar4, aiStack_3c[3] == 0)) ||
      (iVar12 = aiStack_3c[3], iVar3 = iVar4, aiStack_3c[4] == 0)))) {
    aiStack_3c[4] = iVar3;
    aiStack_3c[3] = iVar12;
    aiStack_3c[2] = iVar9;
    aiStack_3c[1] = iVar7;
    aiStack_3c[iVar10 + 1] = 0;
  }
LAB_00510530:
  puVar2 = DAT_005106a0;
  piVar1 = DAT_0051069c;
  iVar4 = 0;
  aiStack_3c[5] = DAT_005106a4;
  do {
    uVar11 = *(uint *)(param_1 + iVar4 * 4 + 0x478);
    if (uVar11 != 0) {
      puVar6 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,uVar11);
      if (((*puVar2 & 1) == 0) && (iVar7 = func_00100174((int *)DAT_005106a0), iVar7 != 0)) {
        *DAT_005106a8 = aiStack_3c[5];
      }
      if ((puVar6 == (undefined4 *)0x0) ||
         (iVar7 = (**(code **)*puVar6)(puVar6,DAT_005106a8), iVar7 == 0)) {
        puVar6 = (undefined4 *)0x0;
      }
      if (puVar6 != (undefined4 *)0x0) {
        iVar7 = 0;
        if (*(char *)(param_1 + 0x477) != '\0') {
          iVar7 = aiStack_3c[iVar4 + 1];
        }
        func_005126F8((int)puVar6,iVar7);
      }
    }
    if (*(char *)(param_1 + 0x46f + iVar4) != '\0') {
      piVar8 = (int *)(param_1 + 0x48c + iVar4 * 8);
      iVar7 = *piVar8;
      if ((iVar7 != 0) && (*(int *)(iVar7 + 0x1c) == piVar8[1])) {
        iVar10 = *(int *)(iVar7 + 0x20);
        if ((iVar10 != 0) &&
           ((*(int *)(iVar7 + 0x24) == *(int *)(iVar10 + 0xc) && (0 < *(int *)(iVar10 + 4))))) {
          *(undefined1 *)(iVar10 + 0x280) = 1;
        }
        *(uint *)(iVar7 + 0x3c) = *(uint *)(iVar7 + 0x3c) & 0xfffffffb;
        *(uint *)(iVar7 + 0x3c) = *(uint *)(iVar7 + 0x3c) | 8;
      }
    }
    iVar4 = iVar4 + 1;
    if (*(char *)(param_1 + 0x477) == '\0') {
      iVar7 = 1;
    }
    else {
      iVar7 = 4;
    }
  } while (iVar4 < iVar7);
  func_0066B808((undefined4 *)(param_1 + 0x41c),1);
  return 1;
}


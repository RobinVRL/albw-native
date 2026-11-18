// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_00231524(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_003FF898(int param_1,int param_2);
extern int func_003FF904(int param_1,int param_2);
extern int func_003FFE34(int param_1,int param_2);
extern int func_00556984();
extern int func_005569F8();
extern undefined DAT_00000005;
extern int *DAT_0044007c;
extern uint DAT_00440080;

// USA 0043FC74 <- EU 0043FC54 (Ghidra, non-matching)
// GLOBAL DAT_00000005 undefined
// GLOBAL DAT_0044007c int *
// GLOBAL DAT_00440080 uint
// GLOBAL EXT_00000004 undefined

void func_0043FC74(int param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar8;
  int *unaff_r6;
  int iVar9;
  bool bVar10;
  bool bVar11;
  ulonglong uVar12;
  
  uVar8 = 1;
  iVar9 = *DAT_0044007c;
  do {
    piVar3 = (int *)(param_1 + 0xfc);
    if (uVar8 - 1 < 5) {
      piVar3 = piVar3 + (uVar8 - 1);
    }
    iVar4 = *piVar3;
    if (*(char *)(iVar4 + 0x40) == '\x02') {
      uVar7 = (uint)*(short *)(iVar4 + 0x2a);
      if (-1 < (int)uVar7) {
        iVar5 = *(int *)(*(int *)(iVar4 + 0x1c) + 0xc);
        if (uVar7 < *(uint *)(*(int *)(iVar4 + 0x1c) + 8)) {
          iVar5 = iVar5 + uVar7 * 0x38;
        }
        if (*(char *)(iVar5 + 0x35) != '\0') goto LAB_0043fd14;
      }
      piVar3 = (int *)(param_1 + 0xfc);
      if (uVar8 < 5) {
        piVar3 = piVar3 + uVar8;
      }
      if (*(char *)(*piVar3 + 0x40) == '\0') {
        piVar3 = (int *)(param_1 + 0xfc);
        if (uVar8 - 1 < 5) {
          piVar3 = piVar3 + (uVar8 - 1);
        }
        iVar4 = *piVar3;
        func_002313DC(iVar4 + 0x34);
        *(undefined1 *)(iVar4 + 0x40) = 0;
        *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)(iVar4 + 0x1c);
        *(undefined2 *)(iVar4 + 0x2a) = 0;
        *(undefined2 *)(iVar4 + 0x28) = 0;
        func_00231524(iVar4 + 0x28);
        func_003FF904(*(int *)(iVar4 + 0x24),*(int *)(iVar4 + 0x20));
        unaff_r6 = (int *)(iVar4 + 0x20);
        func_003FFE34(*(int *)(iVar4 + 0x24),*unaff_r6);
      }
      else {
        piVar3 = (int *)(param_1 + 0xfc);
        if (uVar8 < 5) {
          piVar3 = piVar3 + uVar8;
        }
        if (*(char *)(*piVar3 + 0x40) != '\x01') goto LAB_0043fd14;
        piVar3 = (int *)(param_1 + 0xfc);
        if (uVar8 - 1 < 5) {
          piVar3 = piVar3 + (uVar8 - 1);
        }
        iVar4 = *piVar3;
        func_00231524(iVar4 + 0x34);
        *(undefined1 *)(iVar4 + 0x40) = 1;
        *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)(iVar4 + 0x1c);
        *(undefined2 *)(iVar4 + 0x2a) = 0;
        *(undefined2 *)(iVar4 + 0x28) = 0;
        func_00231524(iVar4 + 0x28);
        func_003FF904(*(int *)(iVar4 + 0x24),*(int *)(iVar4 + 0x20));
        unaff_r6 = (int *)(iVar4 + 0x20);
        func_003FFE34(*(int *)(iVar4 + 0x24),*unaff_r6);
      }
      piVar3 = (int *)(param_1 + 0xfc);
      if (uVar8 < 5) {
        piVar3 = (int *)(param_1 + 0xfc + uVar8 * 4);
      }
      iVar4 = *piVar3;
      *(undefined1 *)(iVar4 + 0x40) = 2;
      *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)(iVar4 + 0x1c);
      *(undefined2 *)(iVar4 + 0x2a) = 2;
      *(undefined2 *)(iVar4 + 0x28) = 0;
      func_00231524(iVar4 + 0x28);
    }
LAB_0043fd14:
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 5);
  bVar2 = func_00556984(iVar9);
  uVar7 = (uint)bVar2;
  uVar6 = (uint)*(byte *)(param_1 + 0x176);
  uVar12 = (ulonglong)DAT_00440080;
  uVar8 = extraout_r1;
  if (uVar6 < uVar7) {
    uVar8 = (uint)*(byte *)(param_1 + 0x175);
  }
  if (uVar7 < uVar6) {
    unaff_r6 = (int *)&UndefinedInstruction;
  }
  if (uVar6 < uVar7) {
    unaff_r6 = (int *)(uVar8 + uVar6);
    while( true ) {
      uVar6 = uVar6 & 0xff;
      bVar10 = uVar7 <= uVar6;
      bVar11 = SBORROW4(uVar6,uVar7);
      puVar1 = (undefined1 *)(uVar6 - uVar7);
      if (uVar6 < uVar7) {
        bVar10 = &UndefinedInstruction < unaff_r6;
        bVar11 = SBORROW4((int)unaff_r6,5);
        puVar1 = (undefined1 *)((int)unaff_r6 + -5);
      }
      if ((int)puVar1 < 0 == bVar11) break;
      piVar3 = (int *)(param_1 + 0xfc);
      if (!bVar10) {
        piVar3 = piVar3 + (int)unaff_r6;
      }
      iVar4 = *piVar3;
      func_00231524(iVar4 + 0x34);
      *(undefined1 *)(iVar4 + 0x40) = 1;
      *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)(iVar4 + 0x1c);
      *(undefined2 *)(iVar4 + 0x2a) = 0;
      *(undefined2 *)(iVar4 + 0x28) = 0;
      func_002317C0((undefined2 *)(iVar4 + 0x28),ALBW_AS_F32(uVar12));
      func_003FF904(*(int *)(iVar4 + 0x24),*(int *)(iVar4 + 0x20));
      func_003FFE34(*(int *)(iVar4 + 0x24),*(int *)(iVar4 + 0x20));
      unaff_r6 = (int *)((int)unaff_r6 + 1);
      uVar6 = *(byte *)(param_1 + 0x176) + 1;
      *(char *)(param_1 + 0x176) = (char)uVar6;
    }
  }
  else if (uVar7 < uVar6) {
    do {
      piVar3 = (int *)(param_1 + 0xfc);
      if (unaff_r6 < &DAT_00000005) {
        piVar3 = piVar3 + (int)unaff_r6;
      }
      if (*(char *)(*piVar3 + 0x40) == '\x01') {
        piVar3 = (int *)(param_1 + 0xfc);
        if (unaff_r6 < &DAT_00000005) {
          piVar3 = piVar3 + (int)unaff_r6;
        }
        iVar4 = *piVar3;
        *(undefined1 *)(iVar4 + 0x40) = 2;
        *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)(iVar4 + 0x1c);
        *(undefined2 *)(iVar4 + 0x2a) = 2;
        *(undefined2 *)(iVar4 + 0x28) = 0;
        func_002317C0((undefined2 *)(iVar4 + 0x28),ALBW_AS_F32(uVar12));
        func_003FF904(*(int *)(iVar4 + 0x24),*(int *)(iVar4 + 0x20));
        func_003FF898(*(int *)(iVar4 + 0x24),*(int *)(iVar4 + 0x20));
        bVar2 = *(char *)(param_1 + 0x176) - 1;
        *(byte *)(param_1 + 0x176) = bVar2;
        if (bVar2 <= uVar7) break;
      }
      unaff_r6 = (int *)((int)unaff_r6 + -1);
    } while (-1 < (int)unaff_r6);
  }
  bVar2 = func_005569F8(iVar9);
  uVar7 = (uint)bVar2;
  uVar6 = (uint)*(byte *)(param_1 + 0x175);
  uVar8 = extraout_r1_00;
  if (uVar6 < uVar7) {
    uVar8 = (uint)*(byte *)(param_1 + 0x176);
  }
  if (uVar7 < uVar6) {
    unaff_r6 = (int *)&UndefinedInstruction;
  }
  if (uVar6 < uVar7) {
    uVar8 = uVar6 + uVar8;
    while( true ) {
      uVar6 = uVar6 & 0xff;
      bVar10 = uVar7 <= uVar6;
      bVar11 = SBORROW4(uVar6,uVar7);
      iVar9 = uVar6 - uVar7;
      if (uVar6 < uVar7) {
        bVar10 = 4 < uVar8;
        bVar11 = SBORROW4(uVar8,5);
        iVar9 = uVar8 - 5;
      }
      if (iVar9 < 0 == bVar11) break;
      piVar3 = (int *)(param_1 + 0xfc);
      if (!bVar10) {
        piVar3 = piVar3 + uVar8;
      }
      iVar9 = *piVar3;
      func_002313DC(iVar9 + 0x34);
      *(undefined1 *)(iVar9 + 0x40) = 0;
      *(undefined4 *)(iVar9 + 0x30) = *(undefined4 *)(iVar9 + 0x1c);
      *(undefined2 *)(iVar9 + 0x2a) = 0;
      *(undefined2 *)(iVar9 + 0x28) = 0;
      func_002317C0((undefined2 *)(iVar9 + 0x28),ALBW_AS_F32(uVar12));
      func_003FF904(*(int *)(iVar9 + 0x24),*(int *)(iVar9 + 0x20));
      func_003FFE34(*(int *)(iVar9 + 0x24),*(int *)(iVar9 + 0x20));
      uVar8 = uVar8 + 1;
      uVar6 = *(byte *)(param_1 + 0x175) + 1;
      *(char *)(param_1 + 0x175) = (char)uVar6;
    }
  }
  else if (uVar7 < uVar6) {
    do {
      piVar3 = (int *)(param_1 + 0xfc);
      if (unaff_r6 < &DAT_00000005) {
        piVar3 = piVar3 + (int)unaff_r6;
      }
      if (*(char *)(*piVar3 + 0x40) == '\0') {
        piVar3 = (int *)(param_1 + 0xfc);
        if (unaff_r6 < &DAT_00000005) {
          piVar3 = piVar3 + (int)unaff_r6;
        }
        iVar9 = *piVar3;
        *(undefined1 *)(iVar9 + 0x40) = 2;
        *(undefined4 *)(iVar9 + 0x30) = *(undefined4 *)(iVar9 + 0x1c);
        *(undefined2 *)(iVar9 + 0x2a) = 2;
        *(undefined2 *)(iVar9 + 0x28) = 0;
        func_002317C0((undefined2 *)(iVar9 + 0x28),ALBW_AS_F32(uVar12));
        func_003FF904(*(int *)(iVar9 + 0x24),*(int *)(iVar9 + 0x20));
        func_003FF898(*(int *)(iVar9 + 0x24),*(int *)(iVar9 + 0x20));
        bVar2 = *(char *)(param_1 + 0x175) - 1;
        *(byte *)(param_1 + 0x175) = bVar2;
        if (bVar2 <= uVar7) {
          return;
        }
      }
      unaff_r6 = (int *)((int)unaff_r6 + -1);
      if ((int)unaff_r6 < 0) {
        return;
      }
    } while( true );
  }
  return;
}


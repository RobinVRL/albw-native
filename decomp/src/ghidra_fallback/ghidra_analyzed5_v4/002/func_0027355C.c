#include "ghidra_types.h"

extern int DAT_002738d0;
extern int *DAT_002738d4;

// USA 0027355C <- EU 00273584 (Ghidra, non-matching)
// GLOBAL DAT_002738d0 int
// GLOBAL DAT_002738d4 int *

void func_0027355C(int param_1,float fparam_0,float fparam_1,float fparam_2)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  int iVar10;
  ushort *puVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ushort uVar16;
  
  uVar6 = *(uint *)(param_1 + 0x7cac);
  piVar12 = (int *)(param_1 + 0x3d68);
  if ((int)uVar6 < 0) {
    iVar13 = 0;
    iVar15 = iVar13;
  }
  else {
    if (uVar6 < *(uint *)(param_1 + 0x1c)) {
      iVar13 = *(int *)(param_1 + 0x24) + uVar6 * 0x620;
    }
    else {
      iVar13 = *(int *)(param_1 + 0x24);
    }
    iVar15 = 0;
    if ((iVar13 != 0) && (uVar3 = (uint)*(char *)(DAT_002738d0 + iVar13), (int)uVar3 < 3)) {
      if (uVar6 < *(uint *)(param_1 + 0x1c)) {
        iVar7 = *(int *)(param_1 + 0x24) + uVar6 * 0x620;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x24);
      }
      piVar9 = piVar12;
      if (uVar3 < 3) {
        piVar9 = piVar12 + uVar3;
      }
      iVar13 = 0;
      iVar15 = 1;
      *piVar9 = iVar7;
    }
  }
  piVar9 = DAT_002738d4;
  piVar4 = *(int **)(*(int *)(*DAT_002738d4 + 0xf74) + 0x24);
  if (piVar4 != (int *)0x0) {
    *(undefined1 *)((int)piVar4 + 0xa2) = 0;
    (**(code **)(*piVar4 + 0x14))(piVar4);
  }
  if ((iVar13 == 0) || (*(char *)(iVar13 + 0x580) < '\x01')) {
    uVar6 = 2;
    do {
      piVar4 = piVar12;
      if (uVar6 < 3) {
        piVar4 = piVar12 + uVar6;
      }
      if ('\0' < *(char *)(*piVar4 + 0x580)) {
        piVar5 = *(int **)(*(int *)(*piVar9 + 0xf74) + 0x24);
        if (piVar5 != (int *)0x0) {
          *(undefined1 *)((int)piVar5 + 0xa2) = *(undefined1 *)(*piVar4 + 0x580);
          (**(code **)(*piVar5 + 0x14))(piVar5);
        }
        break;
      }
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  else {
    piVar4 = *(int **)(*(int *)(*piVar9 + 0xf74) + 0x24);
    if (piVar4 != (int *)0x0) {
      *(char *)((int)piVar4 + 0xa2) = *(char *)(iVar13 + 0x580);
      (**(code **)(*piVar4 + 0x14))(piVar4);
    }
  }
  uVar6 = 0;
  do {
    bVar2 = false;
    if ((iVar13 == 0) || (((uint)*(byte *)(iVar13 + 0x57b) & 1 << (uVar6 & 0xff)) == 0)) {
      uVar3 = 2;
      do {
        piVar4 = piVar12;
        if (uVar3 < 3) {
          piVar4 = piVar12 + uVar3;
        }
        if (((uint)*(byte *)(*piVar4 + 0x57b) & 1 << (uVar6 & 0xff)) != 0) {
          pfVar8 = (float *)(*piVar4 + 0x368);
          if (1 < uVar6) goto LAB_0027372c;
          goto LAB_00273768;
        }
        uVar3 = uVar3 - 1;
      } while (-1 < (int)uVar3);
    }
    else {
      pfVar8 = (float *)(iVar13 + 0x368);
      if (uVar6 < 2) {
LAB_00273768:
        pfVar8 = pfVar8 + uVar6 * 3;
      }
LAB_0027372c:
      bVar2 = true;
      fparam_0 = *pfVar8;
      fparam_1 = pfVar8[1];
      fparam_2 = pfVar8[2];
    }
    iVar7 = *piVar9;
    if (uVar6 == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = 2;
    }
    iVar10 = *(int *)(*(int *)(iVar7 + 0xf74) + 0x20);
    if (iVar10 != 0 && uVar3 != 0) {
      if (uVar3 == 2) {
        iVar14 = 5;
      }
      else {
        iVar14 = 4;
      }
      puVar11 = (ushort *)(iVar10 + 0xa0);
      uVar1 = *puVar11;
      uVar16 = (ushort)(1 << iVar14);
      if (bVar2) {
        uVar16 = uVar16 | uVar1;
      }
      else {
        uVar16 = uVar1 & ~uVar16;
      }
      *puVar11 = uVar16;
    }
    iVar10 = *(int *)(*(int *)(iVar7 + 0xf74) + 0x24);
    if (iVar10 == 0 || uVar3 == 0) {
      if (bVar2) goto LAB_00273828;
    }
    else {
      if (uVar3 == 2) {
        iVar14 = 5;
      }
      else {
        iVar14 = 4;
      }
      uVar1 = (ushort)(1 << iVar14);
      puVar11 = (ushort *)(iVar10 + 0xa0);
      if (bVar2) {
        *puVar11 = uVar1 | *puVar11;
LAB_00273828:
        iVar10 = *(int *)(*(int *)(iVar7 + 0xf74) + 0x20);
        if (iVar10 != 0) {
          pfVar8 = (float *)(iVar10 + 0x58);
          if (uVar3 < 3) {
            pfVar8 = (float *)(iVar10 + 0x58 + uVar3 * 0xc);
          }
          *pfVar8 = fparam_0;
          pfVar8[1] = fparam_1;
          pfVar8[2] = fparam_2;
        }
        iVar7 = *(int *)(*(int *)(iVar7 + 0xf74) + 0x24);
        if (iVar7 != 0) {
          pfVar8 = (float *)(iVar7 + 0x58);
          if (uVar3 < 3) {
            pfVar8 = (float *)(iVar7 + 0x58 + uVar3 * 0xc);
          }
          *pfVar8 = fparam_0;
          pfVar8[1] = fparam_1;
          pfVar8[2] = fparam_2;
        }
      }
      else {
        *puVar11 = *puVar11 & ~uVar1;
      }
    }
    uVar6 = uVar6 + 1;
    if (1 < (int)uVar6) {
      if (iVar15 != 0) {
        uVar6 = *(uint *)(param_1 + 0x7cac);
        if (uVar6 < *(uint *)(param_1 + 0x1c)) {
          iVar15 = *(int *)(param_1 + 0x24) + uVar6 * 0x620;
        }
        else {
          iVar15 = *(int *)(param_1 + 0x24);
        }
        piVar9 = (int *)(param_1 + 0x10);
        uVar6 = (uint)*(char *)(iVar15 + 0x581);
        if (uVar6 < 3) {
          piVar9 = piVar9 + uVar6;
          piVar12 = piVar12 + uVar6;
        }
        *piVar12 = *piVar9;
      }
      return;
    }
  } while( true );
}


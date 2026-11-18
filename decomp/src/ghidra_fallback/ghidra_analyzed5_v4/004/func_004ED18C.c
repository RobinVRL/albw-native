#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00581B9C(int param_1);
extern int func_00582250(int param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_004ed2b0;
extern int *DAT_004ed2b4;
extern undefined4 *DAT_004ed2b8;
extern int DAT_004ed2bc;
extern uint *DAT_004ed2c0;
extern undefined4 DAT_004ed2c4;
extern undefined4 *DAT_004ed2c8;

// USA 004ED18C <- EU 004ED164 (Ghidra, non-matching)
// GLOBAL DAT_004ed2b0 int *
// GLOBAL DAT_004ed2b4 int *
// GLOBAL DAT_004ed2b8 undefined4 *
// GLOBAL DAT_004ed2bc int
// GLOBAL DAT_004ed2c0 uint *
// GLOBAL DAT_004ed2c4 undefined4
// GLOBAL DAT_004ed2c8 undefined4 *

undefined4 func_004ED18C(int param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int unaff_r6;
  bool bVar10;
  
  iVar4 = *DAT_004ed2b0;
  iVar5 = func_00581B9C(iVar4);
  if (((iVar5 == 1) &&
      (puVar6 = (uint *)func_00582250(iVar4), puVar3 = DAT_004ed2b8, piVar2 = DAT_004ed2b4,
      param_2 < *puVar6)) && (iVar4 = *(int *)(puVar6[2] + param_2 * 4), iVar4 != 0)) {
    piVar1 = (int *)(iVar4 + 0x28);
    bVar10 = (int *)*piVar1 != (int *)0x0;
    if (bVar10) {
      iVar4 = *(int *)(iVar4 + 0x20);
    }
    if (bVar10 && iVar4 != 0) {
      unaff_r6 = *(int *)*piVar1;
    }
    if (!bVar10 || iVar4 == 0) {
      unaff_r6 = 0;
    }
    puVar7 = (undefined4 *)
             func_005841A8(*DAT_004ed2b4,*DAT_004ed2b8,*(int **)(DAT_004ed2bc + *DAT_004ed2b4));
    uVar8 = DAT_004ed2c4;
    puVar6 = DAT_004ed2c0;
    if (*(undefined4 **)(*piVar2 + 0x3dbc8) != puVar7) {
      do {
        puVar9 = (undefined4 *)*puVar7;
        if (((*puVar6 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_004ed2c0), iVar4 != 0)) {
          *DAT_004ed2c8 = uVar8;
        }
        if ((puVar9 == (undefined4 *)0x0) ||
           (iVar4 = (**(code **)*puVar9)(puVar9,DAT_004ed2c8), iVar4 == 0)) {
          puVar9 = (undefined4 *)0x0;
        }
        if (*(int *)puVar9[0xd4] == unaff_r6) {
          uVar8 = puVar9[0xb3];
          goto LAB_004ed274;
        }
        puVar7 = (undefined4 *)func_005841A8(*piVar2,*puVar3,puVar7 + 1);
      } while (*(undefined4 **)(*piVar2 + 0x3dbc8) != puVar7);
    }
  }
  uVar8 = 0;
LAB_004ed274:
  *(undefined4 *)(param_1 + 0x7c) = uVar8;
  return uVar8;
}


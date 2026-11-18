#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00588BE4(int param_1);
extern int *DAT_0022331c;
extern float DAT_00223320;
extern int DAT_00223324;
extern uint *DAT_00223328;
extern int *DAT_0022332c;
extern undefined4 DAT_00223330;
extern undefined4 *DAT_00223334;

// USA 002231FC <- EU 002231FC (Ghidra, non-matching)
// GLOBAL DAT_0022331c int *
// GLOBAL DAT_00223320 float
// GLOBAL DAT_00223324 int
// GLOBAL DAT_00223328 uint *
// GLOBAL DAT_0022332c int *
// GLOBAL DAT_00223330 undefined4
// GLOBAL DAT_00223334 undefined4 *

void func_002231FC(int param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar10 = DAT_00223320;
  iVar4 = *DAT_0022331c;
  piVar7 = *(int **)(DAT_00223324 + iVar4);
  *(undefined4 *)(param_1 + 0x938) = 0;
  uVar3 = DAT_00223330;
  piVar2 = DAT_0022332c;
  puVar1 = DAT_00223328;
  for (piVar5 = *(int **)(iVar4 + 0x3dbc0); piVar5 != piVar7; piVar5 = piVar5 + 1) {
    puVar6 = (undefined4 *)*piVar5;
    if (((*puVar1 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_00223328), iVar4 != 0)) {
      *DAT_00223334 = uVar3;
    }
    if ((puVar6 == (undefined4 *)0x0) ||
       (iVar4 = (**(code **)*puVar6)(puVar6,DAT_00223334), iVar4 == 0)) {
      puVar6 = (undefined4 *)0x0;
    }
    if (puVar6 != (undefined4 *)0x0) {
      fVar9 = ALBW_AS_F32(puVar6[0xf4]) - *(float *)(param_1 + 0x3d0);
      fVar8 = ALBW_AS_F32(puVar6[0xf6]) - *(float *)(param_1 + 0x3d8);
      fVar8 = SQRT(fVar9 * fVar9 + fVar8 * fVar8);
      iVar4 = func_00588BE4(*piVar5);
      if (((iVar4 == *piVar2) && ((int)ALBW_AS_U32(fVar8) < 0x41000000)) && (fVar8 < fVar10)) {
        *(undefined4 **)(param_1 + 0x938) = puVar6;
        *(undefined1 *)(param_1 + 0x8fc) = 3;
        fVar10 = fVar8;
      }
    }
  }
  return;
}


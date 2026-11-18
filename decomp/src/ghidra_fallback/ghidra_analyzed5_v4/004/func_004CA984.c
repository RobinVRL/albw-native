#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00588BE4(int param_1);
extern int *DAT_004caa88;
extern float DAT_004caa8c;
extern int DAT_004caa90;
extern uint *DAT_004caa94;
extern int *DAT_004caa98;
extern int DAT_004caa9c;
extern undefined4 DAT_004caaa0;
extern undefined4 *DAT_004caaa4;

// USA 004CA984 <- EU 004CA95C (Ghidra, non-matching)
// GLOBAL DAT_004caa88 int *
// GLOBAL DAT_004caa8c float
// GLOBAL DAT_004caa90 int
// GLOBAL DAT_004caa94 uint *
// GLOBAL DAT_004caa98 int *
// GLOBAL DAT_004caa9c int
// GLOBAL DAT_004caaa0 undefined4
// GLOBAL DAT_004caaa4 undefined4 *

undefined4 func_004CA984(int param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar11 = DAT_004caa8c;
  iVar5 = *DAT_004caa88;
  piVar8 = *(int **)(DAT_004caa90 + iVar5);
  *(undefined4 *)(param_1 + 0x92c) = 0;
  uVar4 = DAT_004caaa0;
  iVar3 = DAT_004caa9c;
  piVar2 = DAT_004caa98;
  puVar1 = DAT_004caa94;
  for (piVar6 = *(int **)(iVar5 + 0x3dbc0); piVar6 != piVar8; piVar6 = piVar6 + 1) {
    puVar7 = (undefined4 *)*piVar6;
    if (((*puVar1 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_004caa94), iVar5 != 0)) {
      *DAT_004caaa4 = uVar4;
    }
    if ((puVar7 == (undefined4 *)0x0) ||
       (iVar5 = (**(code **)*puVar7)(puVar7,DAT_004caaa4), iVar5 == 0)) {
      puVar7 = (undefined4 *)0x0;
    }
    if (puVar7 != (undefined4 *)0x0) {
      fVar10 = ALBW_AS_F32(puVar7[0xf4]) - *(float *)(param_1 + 0x3d0);
      fVar9 = ALBW_AS_F32(puVar7[0xf6]) - *(float *)(param_1 + 0x3d8);
      fVar9 = SQRT(fVar10 * fVar10 + fVar9 * fVar9);
      iVar5 = func_00588BE4(*piVar6);
      if (((iVar5 == *piVar2) && ((int)ALBW_AS_U32(fVar9) < iVar3)) && (fVar9 < fVar11)) {
        *(undefined4 *)(param_1 + 0x92c) = *(undefined4 *)(*piVar6 + 0x2cc);
        fVar11 = fVar9;
      }
    }
  }
  return *(undefined4 *)(param_1 + 0x92c);
}


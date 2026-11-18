#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_002b86a0;
extern undefined4 DAT_002b86a4;
extern int DAT_002b86a8;
extern uint *DAT_002b86ac;
extern int *DAT_002b86b0;
extern undefined4 DAT_002b86b4;
extern undefined4 DAT_002b86b8;
extern undefined4 *DAT_002b86bc;

// USA 002B8568 <- EU 002B8544 (Ghidra, non-matching)
// GLOBAL DAT_002b86a0 int *
// GLOBAL DAT_002b86a4 undefined4
// GLOBAL DAT_002b86a8 int
// GLOBAL DAT_002b86ac uint *
// GLOBAL DAT_002b86b0 int *
// GLOBAL DAT_002b86b4 undefined4
// GLOBAL DAT_002b86b8 undefined4
// GLOBAL DAT_002b86bc undefined4 *

undefined4 * func_002B8568(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  
  piVar1 = DAT_002b86a0;
  puVar8 = (undefined4 *)0x0;
  uVar13 = DAT_002b86a4;
  puVar5 = (undefined4 *)
           func_005841A8(*DAT_002b86a0,param_2,*(int **)(DAT_002b86a8 + *DAT_002b86a0));
  uVar4 = DAT_002b86b8;
  piVar3 = DAT_002b86b0;
  puVar2 = DAT_002b86ac;
  if (*(undefined4 **)(*piVar1 + 0x3dbc8) != puVar5) {
    uVar14 = CONCAT44(DAT_002b86b4,uVar13);
    do {
      puVar7 = (undefined4 *)*puVar5;
      if (((*puVar2 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_002b86ac), iVar6 != 0)) {
        *DAT_002b86bc = uVar4;
      }
      if ((puVar7 == (undefined4 *)0x0) ||
         (iVar6 = (**(code **)*puVar7)(puVar7,DAT_002b86bc), iVar6 == 0)) {
        puVar7 = (undefined4 *)0x0;
      }
      if (puVar7 != (undefined4 *)0x0) {
        fVar12 = ALBW_AS_F32(puVar7[0xf4]) - *(float *)(param_1 + 0x3d0);
        fVar9 = ALBW_AS_F32(puVar7[0xf6]) - *(float *)(param_1 + 0x3d8);
        fVar10 = ALBW_AS_F32(puVar7[0xf4]) - **(float **)(*piVar3 + 0x1c);
        fVar11 = ALBW_AS_F32(puVar7[0xf6]) - (*(float **)(*piVar3 + 0x1c))[2];
        fVar9 = fVar12 * fVar12 + fVar9 * fVar9;
        fVar12 = ALBW_AS_F32(((ulonglong)uVar14 >> 0x20));
        if ((fVar9 <= fVar10 * fVar10 + fVar11 * fVar11 + fVar12) && (fVar9 <= ALBW_AS_F32(uVar14))) {
          uVar14 = CONCAT44(fVar12,fVar9);
          puVar8 = puVar7;
        }
      }
      puVar5 = (undefined4 *)func_005841A8(*piVar1,param_2,puVar5 + 1);
    } while (*(undefined4 **)(*piVar1 + 0x3dbc8) != puVar5);
  }
  return puVar8;
}


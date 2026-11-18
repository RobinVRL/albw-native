#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00588BE4(int param_1);
extern int *DAT_001810d4;
extern int *DAT_001810d8;
extern uint *DAT_001810dc;
extern undefined4 DAT_001810e0;
extern int *DAT_001810e4;
extern undefined4 *DAT_001810e8;
extern int DAT_001810ec;

// USA 00180F98 <- EU 00180F98 (Ghidra, non-matching)
// GLOBAL DAT_001810d4 int *
// GLOBAL DAT_001810d8 int *
// GLOBAL DAT_001810dc uint *
// GLOBAL DAT_001810e0 undefined4
// GLOBAL DAT_001810e4 int *
// GLOBAL DAT_001810e8 undefined4 *
// GLOBAL DAT_001810ec int

int func_00180F98(int param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar3 = DAT_001810e0;
  puVar2 = DAT_001810dc;
  piVar1 = DAT_001810d8;
  puVar5 = *(undefined4 **)(*DAT_001810d4 + 0x3dbc0);
  puVar7 = *(undefined4 **)(*DAT_001810d4 + 0x3dbc8);
  if (puVar5 != puVar7) {
    do {
      puVar6 = (undefined4 *)*puVar5;
      if ((puVar6 != (undefined4 *)0x0) &&
         ((iVar4 = func_00588BE4((int)puVar6), iVar4 == *piVar1 || (iVar4 == *DAT_001810e4)))) {
        if (((*puVar2 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_001810dc), iVar4 != 0)) {
          *DAT_001810e8 = uVar3;
        }
        iVar4 = (**(code **)*puVar6)(puVar6,DAT_001810e8);
        if (iVar4 == 0) {
          puVar6 = (undefined4 *)0x0;
        }
        if ((puVar6 != (undefined4 *)0x0) &&
           (fVar10 = *(float *)(param_1 + 0x3d0) - ALBW_AS_F32(puVar6[0xf4]),
           fVar9 = *(float *)(param_1 + 0x3d4) - ALBW_AS_F32(puVar6[0xf5]),
           fVar8 = *(float *)(param_1 + 0x3d8) - ALBW_AS_F32(puVar6[0xf6]),
           (int)ALBW_AS_U32((fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8)) < DAT_001810ec)) {
          *(undefined4 *)(param_1 + 0xa88) = puVar6[0xf4];
          *(undefined4 *)(param_1 + 0xa8c) = puVar6[0xf5];
          *(undefined4 *)(param_1 + 0xa90) = puVar6[0xf6];
          *(undefined1 *)(param_1 + 0xbf0) = 1;
        }
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar7);
  }
  return (int)*(char *)(param_1 + 0xbf0);
}


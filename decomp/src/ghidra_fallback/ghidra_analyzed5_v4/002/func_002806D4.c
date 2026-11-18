#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0014E138(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_002808cc;
extern int DAT_002808d0;
extern uint *DAT_002808d4;
extern int *DAT_002808d8;
extern uint DAT_002808dc;
extern undefined4 DAT_002808e0;
extern undefined4 *DAT_002808e4;
extern uint *DAT_002808e8;
extern undefined4 *DAT_002808ec;
extern undefined4 DAT_002808f0;

// USA 002806D4 <- EU 002806FC (Ghidra, non-matching)
// GLOBAL DAT_002808cc int *
// GLOBAL DAT_002808d0 int
// GLOBAL DAT_002808d4 uint *
// GLOBAL DAT_002808d8 int *
// GLOBAL DAT_002808dc uint
// GLOBAL DAT_002808e0 undefined4
// GLOBAL DAT_002808e4 undefined4 *
// GLOBAL DAT_002808e8 uint *
// GLOBAL DAT_002808ec undefined4 *
// GLOBAL DAT_002808f0 undefined4

undefined4 func_002806D4(int param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  
  uVar3 = DAT_002808e0;
  piVar2 = DAT_002808d8;
  puVar1 = DAT_002808d4;
  uVar4 = (uint)*(byte *)(param_1 + 0x454);
  bVar10 = uVar4 == 2;
  if (bVar10) {
    uVar4 = *(uint *)(param_1 + 0x470);
  }
  if (bVar10 && uVar4 == 0) {
    piVar8 = *(int **)(DAT_002808d0 + *DAT_002808cc);
    piVar6 = *(int **)(*DAT_002808cc + 0x3dbc0);
    if (piVar6 != piVar8) {
      uVar14 = (ulonglong)DAT_002808dc;
      do {
        puVar7 = (undefined4 *)*piVar6;
        if (((*puVar1 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_002808d4), iVar5 != 0)) {
          *DAT_002808e4 = uVar3;
        }
        if ((puVar7 == (undefined4 *)0x0) ||
           (iVar5 = (**(code **)*puVar7)(puVar7,DAT_002808e4), iVar5 == 0)) {
          puVar7 = (undefined4 *)0x0;
        }
        if ((puVar7 != (undefined4 *)0x0) && (iVar5 = func_00588BE4(*piVar6), iVar5 == *piVar2)) {
          fVar12 = ALBW_AS_F32(puVar7[0xf6]);
          fVar11 = ALBW_AS_F32(uVar14);
          if ((*(float *)(param_1 + 0x464) - fVar11 <= ALBW_AS_F32(puVar7[0xf4])) &&
             (ALBW_AS_F32(puVar7[0xf4]) <= *(float *)(param_1 + 0x464) + fVar11)) {
            fVar13 = *(float *)(param_1 + 0x46c) - fVar11;
            bVar10 = fVar13 == fVar12;
            bVar9 = fVar12 <= fVar13;
            if (!bVar9 || bVar10) {
              fVar11 = *(float *)(param_1 + 0x46c) + fVar11;
              bVar10 = fVar12 == fVar11;
              bVar9 = fVar11 <= fVar12;
            }
            if (!bVar9 || bVar10) {
              *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(*piVar6 + 0x2cc);
              if (((*DAT_002808e8 & 1) == 0) &&
                 (iVar5 = func_00100174((int *)DAT_002808e8), iVar5 != 0)) {
                *DAT_002808ec = DAT_002808f0;
              }
              iVar5 = (**(code **)*puVar7)(puVar7,DAT_002808ec);
              if (iVar5 == 0) {
                puVar7 = (undefined4 *)0x0;
              }
              if ((puVar7[0x107] != 0) && (*(char *)((int)puVar7 + 0x41a) != '\0')) {
                func_004CF478(puVar7[0x107],0);
              }
              break;
            }
          }
        }
        piVar6 = piVar6 + 1;
      } while (piVar6 != piVar8);
    }
  }
  return func_0014E138(param_1,param_2);
}


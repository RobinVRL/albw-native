// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052114C();
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_0058A168(int param_1);
extern int func_0058A744(int param_1);
extern int func_0058AD80(int param_1,float fparam_0);
extern int *DAT_004c9e90;
extern undefined4 DAT_004c9e94;
extern int DAT_004c9e98;
extern int *DAT_004c9e9c;
extern uint *DAT_004c9ea0;
extern undefined4 DAT_004c9ea4;
extern uint DAT_004c9ea8;
extern undefined4 DAT_004c9eac;
extern undefined4 *DAT_004c9eb0;
extern int DAT_004c9eb4;
extern int *DAT_004c9eb8;
extern int *DAT_004c9ebc;
extern int *DAT_004c9ec0;
extern int *DAT_004c9ec4;
extern int *DAT_004c9ec8;
extern int *DAT_004c9ecc;
extern int *DAT_004c9ed0;
extern int *DAT_004c9ed4;

// USA 004C9B74 <- EU 004C9B4C (Ghidra, non-matching)
// GLOBAL DAT_004c9e90 int *
// GLOBAL DAT_004c9e94 undefined4
// GLOBAL DAT_004c9e98 int
// GLOBAL DAT_004c9e9c int *
// GLOBAL DAT_004c9ea0 uint *
// GLOBAL DAT_004c9ea4 undefined4
// GLOBAL DAT_004c9ea8 uint
// GLOBAL DAT_004c9eac undefined4
// GLOBAL DAT_004c9eb0 undefined4 *
// GLOBAL DAT_004c9eb4 int
// GLOBAL DAT_004c9eb8 int *
// GLOBAL DAT_004c9ebc int *
// GLOBAL DAT_004c9ec0 int *
// GLOBAL DAT_004c9ec4 int *
// GLOBAL DAT_004c9ec8 int *
// GLOBAL DAT_004c9ecc int *
// GLOBAL DAT_004c9ed0 int *
// GLOBAL DAT_004c9ed4 int *

undefined4 func_004C9B74(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  
  uVar1 = DAT_004c9e94;
  iVar5 = *DAT_004c9e90;
  piVar10 = *(int **)(DAT_004c9e98 + iVar5);
  *(undefined4 *)(param_1 + 0x928) = 0;
  uVar4 = DAT_004c9eac;
  puVar3 = DAT_004c9ea0;
  piVar2 = DAT_004c9e9c;
  piVar8 = *(int **)(iVar5 + 0x3dbc0);
  if (piVar8 != piVar10) {
    uVar13 = CONCAT44(DAT_004c9ea4,uVar1);
    uVar14 = (ulonglong)DAT_004c9ea8;
    do {
      puVar9 = (undefined4 *)*piVar8;
      if (((*puVar3 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_004c9ea0), iVar5 != 0)) {
        *DAT_004c9eb0 = uVar4;
      }
      if ((puVar9 == (undefined4 *)0x0) ||
         (iVar5 = (**(code **)*puVar9)(puVar9,DAT_004c9eb0), iVar5 == 0)) {
        puVar9 = (undefined4 *)0x0;
      }
      if ((((puVar9 == (undefined4 *)0x0) ||
           (*(int *)(*piVar8 + 0x2cc) == *(int *)(param_1 + 0x2cc))) ||
          (iVar5 = func_00588BE4(*piVar8), iVar5 == *piVar2)) ||
         ((*(short *)(DAT_004c9eb4 + (int)puVar9) < 1 || ((puVar9[0x167] & 0x80) == 0))))
      goto LAB_004c9e74;
      if (*(uint *)(*piVar8 + 0x2cc) == 0) {
LAB_004c9d5c:
        iVar5 = func_00588BE4(*piVar8);
        if (((((iVar5 == *DAT_004c9ecc) ||
              ((iVar5 = func_00588BE4(*piVar8), iVar5 == *DAT_004c9ed0 ||
               (iVar5 = func_0058A168((int)puVar9), iVar5 != 0)))) &&
             ((iVar5 = func_00588BE4(*piVar8), iVar5 != *DAT_004c9ed4 ||
              ((*(char *)(param_1 + 0x8e5) != '\x04' && (*(char *)(param_1 + 0x98f) == '\0')))))) &&
            (iVar5 = func_0058AD80((int)puVar9,ALBW_AS_F32(((ulonglong)uVar13 >> 0x20))), iVar5 != 0)) &&
           ((iVar5 = func_0052114C(param_1,ALBW_AS_F32(puVar9[0xf5]),ALBW_AS_F32(uVar14)), iVar5 != 0 ||
            ((iVar5 = func_00588BE4(*piVar8), iVar5 == *DAT_004c9ed4 &&
             (iVar5 = func_0058A744((int)puVar9), iVar5 == 0)))))) {
          fVar12 = ALBW_AS_F32(puVar9[0xf4]) - *(float *)(param_1 + 0x3d0);
          fVar11 = ALBW_AS_F32(puVar9[0xf6]) - *(float *)(param_1 + 0x3d8);
          fVar11 = fVar12 * fVar12 + fVar11 * fVar11;
          if (fVar11 < ALBW_AS_F32(uVar13)) {
            uVar13 = CONCAT44((int)((ulonglong)uVar13 >> 0x20),fVar11);
            *(undefined4 *)(param_1 + 0x928) = *(undefined4 *)(*piVar8 + 0x2cc);
          }
        }
      }
      else {
        puVar6 = (undefined4 *)func_0052FBA0(*DAT_004c9e90 + 0x3dbbc,*(uint *)(*piVar8 + 0x2cc));
        if (puVar6 == (undefined4 *)0x0) goto LAB_004c9d5c;
        iVar5 = func_00588BE4((int)puVar6);
        if (((iVar5 != *DAT_004c9eb8) &&
            (iVar5 = func_00588BE4((int)puVar6), iVar5 != *DAT_004c9ebc)) &&
           ((iVar5 = func_00588BE4((int)puVar6), iVar5 != *DAT_004c9ec0 &&
            ((iVar5 = func_00588BE4((int)puVar6), iVar5 != *DAT_004c9ec4 &&
             (iVar5 = func_00588BE4((int)puVar6), iVar5 != *DAT_004c9ec8)))))) {
          if (((*puVar3 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_004c9ea0), iVar5 != 0)) {
            *DAT_004c9eb0 = uVar4;
          }
          iVar5 = (**(code **)*puVar6)(puVar6,DAT_004c9eb0);
          puVar7 = (undefined4 *)0x0;
          if (iVar5 != 0) {
            puVar7 = puVar6;
          }
          if ((puVar7 == (undefined4 *)0x0) || (*(char *)(puVar7 + 0x212) == '\0'))
          goto LAB_004c9d5c;
        }
      }
LAB_004c9e74:
      piVar8 = piVar8 + 1;
    } while (piVar8 != piVar10);
  }
  return *(undefined4 *)(param_1 + 0x928);
}


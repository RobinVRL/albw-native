#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_004BD1C8(int param_1);
extern int func_004BD9E0(int param_1,float *param_2,int param_3);
extern int func_004BF400(uint param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00547B20(int param_1);
extern int func_00564A78(int param_1,int *param_2);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_00588BE4(int param_1);
extern int *DAT_003370c4;
extern uint DAT_003370c8;
extern int DAT_003370cc;
extern int *DAT_003370d0;
extern int *DAT_003370d4;
extern int *DAT_003370d8;
extern int *DAT_003370dc;
extern int *DAT_003370e0;
extern int *DAT_003370e4;
extern uint *DAT_003370e8;
extern int DAT_003370ec;
extern undefined4 DAT_003370f0;
extern undefined4 *DAT_003370f4;

// USA 00336DB0 <- EU 00336D8C (Ghidra, non-matching)
// GLOBAL DAT_003370c4 int *
// GLOBAL DAT_003370c8 uint
// GLOBAL DAT_003370cc int
// GLOBAL DAT_003370d0 int *
// GLOBAL DAT_003370d4 int *
// GLOBAL DAT_003370d8 int *
// GLOBAL DAT_003370dc int *
// GLOBAL DAT_003370e0 int *
// GLOBAL DAT_003370e4 int *
// GLOBAL DAT_003370e8 uint *
// GLOBAL DAT_003370ec int
// GLOBAL DAT_003370f0 undefined4
// GLOBAL DAT_003370f4 undefined4 *

void func_00336DB0(int param_1)

{
  short sVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  float fVar15;
  ulonglong uVar16;
  
  piVar4 = DAT_003370c4;
  puVar13 = (uint *)(param_1 + 0x46c);
  if (*(char *)(param_1 + 0x48e) == '\0') {
    *(undefined1 *)(param_1 + 0x48e) = 1;
    iVar14 = *piVar4;
    if (iVar14 == 0) {
      return;
    }
    uVar12 = 0;
    uVar16 = (ulonglong)DAT_003370c8;
    do {
      uVar3 = func_004BF400(uVar12);
      piVar4 = (int *)func_005841A8(iVar14,uVar3,*(int **)(iVar14 + 0x3dbc0));
      if (*(int **)(iVar14 + 0x3dbc8) != piVar4) {
        do {
          iVar11 = *piVar4;
          if (iVar11 != 0) {
            uVar5 = func_00564A78(*(int *)(param_1 + 0x440),(int *)(DAT_003370cc + uVar12 * 8));
            func_004BD9E0(iVar11,(float *)(param_1 + 0x3d0),
                          *(int *)(*(int *)(*(int *)(param_1 + 0x440) + 0x24) + 0x14) + uVar5 * 0x30
                         );
            puVar6 = puVar13;
            if (uVar12 < 7) {
              puVar6 = puVar13 + uVar12;
            }
            *puVar6 = *(uint *)(iVar11 + 0x2cc);
            bVar2 = func_00547B20(iVar11 + 4);
            if ((bVar2) && (iVar7 = func_004BD1C8(iVar11), iVar7 == 0)) {
              iVar11 = func_00588BE4(iVar11);
              if (iVar11 == *DAT_003370d0) {
                uVar5 = 0;
              }
              else if (iVar11 == *DAT_003370d4) {
                uVar5 = 1;
              }
              else if (iVar11 == *DAT_003370d8) {
                uVar5 = 2;
              }
              else if (iVar11 == *DAT_003370dc) {
                uVar5 = 3;
              }
              else if (iVar11 == *DAT_003370e0) {
                uVar5 = 4;
              }
              else if (iVar11 == *DAT_003370e4) {
                uVar5 = 5;
              }
              else {
                uVar5 = 6;
              }
              piVar4 = (int *)(param_1 + 0x450);
              if (uVar5 < 7) {
                piVar4 = piVar4 + uVar5;
              }
              piVar8 = (int *)(param_1 + 0x450);
              if (uVar5 < 7) {
                piVar8 = piVar8 + uVar5;
              }
              iVar11 = *(int *)(*piVar8 + 0x14);
              fVar15 = *(float *)(*(int *)(*piVar4 + 0x14) + 0x14) - ALBW_AS_F32(uVar16);
              if (*(float *)(iVar11 + 8) != fVar15) {
                *(float *)(iVar11 + 8) = fVar15;
                *(undefined1 *)(iVar11 + 0x26) = 1;
              }
              puVar9 = (undefined4 *)(param_1 + 0x450);
              if (uVar5 < 7) {
                puVar9 = puVar9 + uVar5;
              }
              func_00168E9C((int *)*puVar9,*(int *)(param_1 + 0x440),(int *)0x0);
            }
            break;
          }
          piVar4 = (int *)func_005841A8(iVar14,uVar3,piVar4 + 1);
        } while (*(int **)(iVar14 + 0x3dbc8) != piVar4);
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < 7);
  }
  sVar1 = *(short *)(param_1 + 0x48c);
  if (((sVar1 != 0) &&
      (*(short *)(param_1 + 0x48c) = sVar1 + -1, uVar3 = DAT_003370f0, iVar14 = DAT_003370ec,
      puVar6 = DAT_003370e8, sVar1 == 1)) && (iVar11 = *DAT_003370c4, iVar11 != 0)) {
    uVar12 = 0;
    do {
      puVar10 = puVar13;
      if (uVar12 < 7) {
        puVar10 = puVar13 + uVar12;
      }
      puVar9 = (undefined4 *)func_0052FBA0(iVar11 + 0x3dbbc,*puVar10);
      if (puVar9 != (undefined4 *)0x0) {
        if (((*puVar6 & 1) == 0) && (iVar7 = func_00100174((int *)DAT_003370e8), iVar7 != 0)) {
          *DAT_003370f4 = uVar3;
        }
        iVar7 = (**(code **)*puVar9)(puVar9,DAT_003370f4);
        if (iVar7 == 0) {
          puVar9 = (undefined4 *)0x0;
        }
        puVar9[0xfa] = *(undefined4 *)(iVar14 + uVar12 * 4);
      }
      do {
        uVar12 = uVar12 + 1;
        if (6 < (int)uVar12) {
          return;
        }
      } while (iVar11 == 0);
    } while( true );
  }
  return;
}


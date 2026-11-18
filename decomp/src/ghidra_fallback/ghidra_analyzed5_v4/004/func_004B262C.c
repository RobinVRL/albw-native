#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004CEAC0(int param_1,int param_2);
extern int func_004D1884(int param_1,int param_2);
extern int func_004D2D24(int param_1,int param_2);
extern int func_00588BE4(int param_1);
extern int func_00691884(int *param_1,int *param_2);
extern int *DAT_004b2860;
extern int *DAT_004b2864;
extern int *DAT_004b2868;
extern int *DAT_004b286c;
extern int *DAT_004b2870;
extern int *DAT_004b2874;
extern undefined4 DAT_004b2878;
extern uint *DAT_004b287c;
extern undefined4 *DAT_004b2880;
extern uint *DAT_004b2884;
extern undefined4 *DAT_004b2888;
extern uint *DAT_004b288c;
extern undefined4 *DAT_004b2890;

// USA 004B262C <- EU 004B2604 (Ghidra, non-matching)
// GLOBAL DAT_004b2860 int *
// GLOBAL DAT_004b2864 int *
// GLOBAL DAT_004b2868 int *
// GLOBAL DAT_004b286c int *
// GLOBAL DAT_004b2870 int *
// GLOBAL DAT_004b2874 int *
// GLOBAL DAT_004b2878 undefined4
// GLOBAL DAT_004b287c uint *
// GLOBAL DAT_004b2880 undefined4 *
// GLOBAL DAT_004b2884 uint *
// GLOBAL DAT_004b2888 undefined4 *
// GLOBAL DAT_004b288c uint *
// GLOBAL DAT_004b2890 undefined4 *

undefined4 func_004B262C(undefined4 param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  
  uVar6 = DAT_004b2878;
  piVar5 = DAT_004b2874;
  piVar4 = DAT_004b2870;
  piVar3 = DAT_004b286c;
  piVar2 = DAT_004b2868;
  piVar1 = DAT_004b2864;
  iVar7 = *DAT_004b2860;
  if (iVar7 != 0) {
    piVar11 = *(int **)(iVar7 + 0x3dbc8);
    for (piVar9 = *(int **)(iVar7 + 0x3dbc0); piVar9 != piVar11; piVar9 = piVar9 + 1) {
      iVar7 = *piVar9;
      piVar8 = (int *)0x0;
      if (iVar7 != 0) {
        piVar8 = *(int **)(iVar7 + 0x2c0);
      }
      if ((iVar7 != 0 && piVar8 != (int *)0x0) &&
         (iVar7 = func_00691884(piVar8,param_2), iVar7 != 0)) {
        iVar7 = func_00588BE4(*piVar9);
        if ((iVar7 == *piVar1) || (iVar7 = func_00588BE4(*piVar9), iVar7 == *piVar2)) {
          puVar10 = (undefined4 *)*piVar9;
          if (((*DAT_004b287c & 1) == 0) && (iVar7 = func_00100174((int *)DAT_004b287c), iVar7 != 0)
             ) {
            *DAT_004b2880 = uVar6;
          }
          if ((puVar10 == (undefined4 *)0x0) ||
             (iVar7 = (**(code **)*puVar10)(puVar10,DAT_004b2880), iVar7 == 0)) {
            puVar10 = (undefined4 *)0x0;
          }
          if (puVar10 == (undefined4 *)0x0) {
            return 0;
          }
          return func_004D1884((int)puVar10,param_3);
        }
        iVar7 = func_00588BE4(*piVar9);
        if (iVar7 == *piVar3) {
          puVar10 = (undefined4 *)*piVar9;
          if (((*DAT_004b2884 & 1) == 0) && (iVar7 = func_00100174((int *)DAT_004b2884), iVar7 != 0)
             ) {
            *DAT_004b2888 = uVar6;
          }
          if ((puVar10 == (undefined4 *)0x0) ||
             (iVar7 = (**(code **)*puVar10)(puVar10,DAT_004b2888), iVar7 == 0)) {
            puVar10 = (undefined4 *)0x0;
          }
          if (puVar10 == (undefined4 *)0x0) {
            return 0;
          }
          return func_004CEAC0((int)puVar10,param_3);
        }
        iVar7 = func_00588BE4(*piVar9);
        if ((iVar7 == *piVar4) || (iVar7 = func_00588BE4(*piVar9), iVar7 == *piVar5)) {
          puVar10 = (undefined4 *)*piVar9;
          if (((*DAT_004b288c & 1) == 0) && (iVar7 = func_00100174((int *)DAT_004b288c), iVar7 != 0)
             ) {
            *DAT_004b2890 = uVar6;
          }
          if ((puVar10 == (undefined4 *)0x0) ||
             (iVar7 = (**(code **)*puVar10)(puVar10,DAT_004b2890), iVar7 == 0)) {
            puVar10 = (undefined4 *)0x0;
          }
          if (puVar10 == (undefined4 *)0x0) {
            return 0;
          }
          return func_004D2D24((int)puVar10,param_3);
        }
      }
    }
  }
  return 0;
}


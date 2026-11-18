#include "ghidra_types.h"

extern int DAT_00421200;
extern int DAT_00421204;
extern int DAT_00421208;
extern int DAT_0042120c;
extern int DAT_00421210;
extern int DAT_00421214;
extern int DAT_00421218;
extern int DAT_0042121c;
extern int DAT_00421220;

// USA 004210B4 <- EU 00421094 (Ghidra, non-matching)
// GLOBAL DAT_00421200 int
// GLOBAL DAT_00421204 int
// GLOBAL DAT_00421208 int
// GLOBAL DAT_0042120c int
// GLOBAL DAT_00421210 int
// GLOBAL DAT_00421214 int
// GLOBAL DAT_00421218 int
// GLOBAL DAT_0042121c int
// GLOBAL DAT_00421220 int

int * func_004210B4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  
  iVar6 = DAT_00421218;
  iVar5 = DAT_00421214;
  iVar4 = DAT_00421210;
  iVar3 = DAT_0042120c;
  iVar2 = DAT_00421208;
  iVar8 = DAT_00421204;
  iVar1 = DAT_00421200;
  piVar10 = (int *)0x0;
  iVar9 = 0;
  piVar7 = (int *)((uint)*(ushort *)((int)param_1 + 6) + (int)param_1);
  if ((short)param_1[4] != 0) {
    do {
      iVar11 = *piVar7;
      if (iVar11 == iVar8) {
        if (piVar7[4] != 0) {
          piVar7[4] = piVar7[4] + (int)param_1;
        }
      }
      else if (iVar11 < iVar8) {
        if (iVar11 + iVar2 == 0) {
          piVar10 = piVar7 + 2;
          if (*param_1 == iVar1) {
            piVar7[4] = piVar7[4] + (int)param_1;
            if (piVar7[5] != 0) {
              piVar7[5] = piVar7[5] + (int)param_1;
            }
            if (piVar7[6] != 0) {
              piVar7[6] = piVar7[6] + (int)param_1;
            }
          }
          else {
            piVar7[5] = piVar7[5] + (int)param_1;
            if (piVar7[6] != 0) {
              piVar7[6] = piVar7[6] + (int)param_1;
            }
            if (piVar7[7] != 0) {
              piVar7[7] = piVar7[7] + (int)param_1;
            }
          }
        }
        else {
          iVar11 = iVar11 + iVar2 + iVar3;
          if (iVar11 != 0) {
            if (iVar11 + iVar4 != 0) {
              return (int *)0x0;
            }
            if (piVar7[3] != 0) {
              piVar7[3] = piVar7[3] + (int)param_1;
            }
          }
        }
      }
      else {
        iVar11 = (iVar11 - iVar8) + iVar5;
        if (iVar11 == 0) {
          piVar7[7] = piVar7[7] + (int)param_1;
        }
        else if (iVar11 != iVar6) {
          return (int *)0x0;
        }
      }
      iVar9 = iVar9 + 1;
      piVar7 = (int *)((int)piVar7 + piVar7[1]);
    } while (iVar9 < (int)(uint)*(ushort *)(param_1 + 4));
  }
  iVar8 = DAT_0042121c;
  if (*param_1 != iVar1) {
    iVar8 = DAT_00421220;
  }
  *param_1 = iVar8;
  return piVar10;
}


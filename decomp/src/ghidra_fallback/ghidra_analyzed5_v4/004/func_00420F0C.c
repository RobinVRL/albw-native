#include "ghidra_types.h"

extern int func_003E6600(int *param_1,int param_2,uint param_3,int *param_4);
extern int func_004201B8(int *param_1);
extern int func_0042021C(int param_1,int *param_2,undefined1 *param_3,undefined4 param_4);
extern int func_004210B4(int *param_1);
extern int DAT_0042107c;
extern int DAT_00421080;
extern int DAT_00421084;
extern int DAT_00421088;
extern int DAT_0042108c;
extern int DAT_00421090;

// USA 00420F0C <- EU 00420EEC (Ghidra, non-matching)
// GLOBAL DAT_0042107c int
// GLOBAL DAT_00421080 int
// GLOBAL DAT_00421084 int
// GLOBAL DAT_00421088 int
// GLOBAL DAT_0042108c int
// GLOBAL DAT_00421090 int

undefined4 func_00420F0C(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_1[2] != 0) {
    return 0;
  }
  iVar2 = *param_2;
  piVar4 = (int *)0x0;
  if (iVar2 == DAT_0042107c) {
    iVar2 = 0;
    piVar3 = (int *)((uint)*(ushort *)((int)param_2 + 6) + (int)param_2);
    if (*(ushort *)(param_2 + 4) == 0) {
      return 0;
    }
    while (*piVar3 != DAT_00421080) {
      iVar2 = iVar2 + 1;
      piVar3 = (int *)((int)piVar3 + piVar3[1]);
      if ((int)(uint)*(ushort *)(param_2 + 4) <= iVar2) {
        return 0;
      }
    }
LAB_00420fb8:
    piVar3 = piVar3 + 2;
  }
  else {
    if (iVar2 == DAT_00421084) {
      iVar2 = func_003E6600(param_2,DAT_00421084,0x3000000,(int *)0x2);
    }
    else {
      if (iVar2 == DAT_00421088) {
        iVar2 = 0;
        piVar3 = (int *)((uint)*(ushort *)((int)param_2 + 6) + (int)param_2);
        if (*(ushort *)(param_2 + 4) == 0) {
          return 0;
        }
        while (*piVar3 != DAT_00421080) {
          iVar2 = iVar2 + 1;
          piVar3 = (int *)((int)piVar3 + piVar3[1]);
          if ((int)(uint)*(ushort *)(param_2 + 4) <= iVar2) {
            return 0;
          }
        }
        goto LAB_00420fb8;
      }
      iVar2 = func_003E6600(param_2,DAT_0042108c,0x4000000,(int *)0x2);
    }
    if (iVar2 == 0) {
      return 0;
    }
    piVar3 = func_004210B4(param_2);
  }
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  iVar2 = 0;
  piVar1 = (int *)((uint)*(ushort *)((int)param_2 + 6) + (int)param_2);
  if (*(ushort *)(param_2 + 4) != 0) {
    do {
      if (*piVar1 == DAT_00421090) {
        piVar4 = piVar1 + 2;
        break;
      }
      iVar2 = iVar2 + 1;
      piVar1 = (int *)((int)piVar1 + piVar1[1]);
    } while (iVar2 < (int)(uint)*(ushort *)(param_2 + 4));
  }
  func_0042021C((int)param_1,param_2,(undefined1 *)piVar3,piVar4);
  func_004201B8(param_1);
  return 1;
}


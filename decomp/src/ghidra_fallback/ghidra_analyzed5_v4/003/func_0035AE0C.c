#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_006665A0(undefined4 *param_1,undefined1 param_2);
extern float DAT_0035af18;

// USA 0035AE0C <- EU 0035ADE8 (Ghidra, non-matching)
// GLOBAL DAT_0035af18 float

undefined4 func_0035AE0C(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  piVar2 = *(int **)(param_1 + 0x434);
  iVar1 = piVar2[5];
  uVar5 = (uint)*(byte *)(iVar1 + 0x1c);
  if (uVar5 == 0) {
    if (*(float *)(iVar1 + 0x10) < DAT_0035af18) {
      if (*(float *)(iVar1 + 8) <= DAT_0035af18) goto LAB_0035ae44;
    }
    else if (*(float *)(iVar1 + 8) == *(float *)(iVar1 + 0x14)) {
LAB_0035ae44:
      iVar1 = *(int *)(*(int *)(param_1 + 0x43c) + 0x14);
      uVar3 = (uint)*(byte *)(iVar1 + 0x1c);
      if (uVar3 == 0) {
        if (*(float *)(iVar1 + 0x10) < DAT_0035af18) {
          if (*(float *)(iVar1 + 8) <= DAT_0035af18) goto LAB_0035ae9c;
        }
        else if (*(float *)(iVar1 + 8) == *(float *)(iVar1 + 0x14)) {
LAB_0035ae9c:
          if (*(char *)(param_1 + 0x440) != '\x02') {
            func_006665A0((undefined4 *)(param_1 + 0x40c),0);
            uVar3 = extraout_r1;
          }
        }
      }
      func_00169A80(*(int **)(param_1 + 0x43c),uVar3,uVar5,param_4);
      uVar6 = 0;
      func_00168E9C(*(int **)(param_1 + 0x43c),*(int *)(param_1 + 0x430),(int *)0x0);
      uVar4 = extraout_r1_00;
      goto LAB_0035aef4;
    }
  }
  func_00169A80(piVar2,piVar2,uVar5,param_4);
  uVar6 = 0;
  func_00168E9C(*(int **)(param_1 + 0x434),*(int *)(param_1 + 0x430),(int *)0x0);
  uVar4 = extraout_r1_01;
LAB_0035aef4:
  func_00169A80(*(int **)(param_1 + 0x438),uVar4,uVar6,param_4);
  return func_00168E9C(*(int **)(param_1 + 0x438),*(int *)(param_1 + 0x430),(int *)0x0);
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_005568E8(int param_1);
extern int *DAT_004377a0;
extern int *DAT_004377a4;
extern uint *DAT_004377a8;
extern uint *DAT_004377ac;
extern undefined4 DAT_004377b0;
extern undefined4 DAT_004377b4;
extern undefined4 *DAT_004377b8;
extern undefined4 *DAT_004377bc;

// USA 00437560 <- EU 00437540 (Ghidra, non-matching)
// GLOBAL DAT_004377a0 int *
// GLOBAL DAT_004377a4 int *
// GLOBAL DAT_004377a8 uint *
// GLOBAL DAT_004377ac uint *
// GLOBAL DAT_004377b0 undefined4
// GLOBAL DAT_004377b4 undefined4
// GLOBAL DAT_004377b8 undefined4 *
// GLOBAL DAT_004377bc undefined4 *

undefined4 func_00437560(int *param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  iVar5 = param_1[1];
  iVar7 = param_1[0xb3];
  iVar4 = func_005568E8(*DAT_004377a0);
  uVar3 = DAT_004377b4;
  uVar2 = DAT_004377b0;
  if (iVar7 != iVar4) {
    piVar1 = param_1;
    if (*(short *)((int)param_1 + 0x5a) < 0) {
      if ((param_1[0xb1] & 1U) != 0) {
        return 0;
      }
      if ((-1 < (short)param_1[0x15]) && ((int)(short)param_1[0x15] != param_2)) {
        return 0;
      }
      if (*DAT_004377a4 != param_1[0xb3]) {
        if (((*DAT_004377ac & 1) == 0) && (iVar4 = func_00100174((int *)DAT_004377ac), iVar4 != 0))
        {
          *DAT_004377bc = uVar3;
        }
        if ((param_1 == (int *)0x0) ||
           (iVar4 = (**(code **)*param_1)(param_1,DAT_004377bc), iVar4 == 0)) {
          piVar1 = (int *)0x0;
        }
joined_r0x00437788:
        if (piVar1 != (int *)0x0) {
          (**(code **)(piVar1[200] + 0x58))(piVar1 + 200,0);
        }
        *(undefined1 *)((int)param_1 + 0x2d7) = 1;
        return 0;
      }
      if (((*DAT_004377a8 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_004377a8), iVar4 != 0)) {
        *DAT_004377b8 = uVar2;
      }
      if ((param_1 == (int *)0x0) ||
         (iVar4 = (**(code **)*param_1)(param_1,DAT_004377b8), iVar4 == 0)) {
        param_1 = (int *)0x0;
      }
    }
    else {
      uVar6 = (uint)*(byte *)(iVar5 + 0x21);
      bVar8 = uVar6 != 1;
      if (!bVar8) {
        uVar6 = (uint)(short)param_1[0x15];
      }
      if (bVar8 || uVar6 != param_2) {
        return 0;
      }
      if (*DAT_004377a4 != param_1[0xb3]) {
        if (((*DAT_004377ac & 1) == 0) && (iVar4 = func_00100174((int *)DAT_004377ac), iVar4 != 0))
        {
          *DAT_004377bc = uVar3;
        }
        if ((param_1 == (int *)0x0) ||
           (iVar4 = (**(code **)*param_1)(param_1,DAT_004377bc), iVar4 == 0)) {
          piVar1 = (int *)0x0;
        }
        goto joined_r0x00437788;
      }
      if (((*DAT_004377a8 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_004377a8), iVar4 != 0)) {
        *DAT_004377b8 = uVar2;
      }
      if ((param_1 == (int *)0x0) ||
         (iVar4 = (**(code **)*param_1)(param_1,DAT_004377b8), iVar4 == 0)) {
        param_1 = (int *)0x0;
      }
    }
    if (param_1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00437724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)(*param_1 + 100))(param_1);
    }
  }
  return 0;
}


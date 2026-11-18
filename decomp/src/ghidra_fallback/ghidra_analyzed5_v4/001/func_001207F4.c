#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00317820(int param_1);
extern uint *DAT_00120a3c;
extern undefined4 *DAT_00120a40;
extern undefined4 DAT_00120a44;
extern uint *DAT_00120a48;
extern undefined4 DAT_00120a4c;
extern undefined4 *DAT_00120a50;
extern uint *DAT_00120a54;
extern undefined4 *DAT_00120a58;
extern uint *DAT_00120a5c;
extern undefined4 *DAT_00120a60;

// USA 001207F4 <- EU 001207F4 (Ghidra, non-matching)
// GLOBAL DAT_00120a3c uint *
// GLOBAL DAT_00120a40 undefined4 *
// GLOBAL DAT_00120a44 undefined4
// GLOBAL DAT_00120a48 uint *
// GLOBAL DAT_00120a4c undefined4
// GLOBAL DAT_00120a50 undefined4 *
// GLOBAL DAT_00120a54 uint *
// GLOBAL DAT_00120a58 undefined4 *
// GLOBAL DAT_00120a5c uint *
// GLOBAL DAT_00120a60 undefined4 *

undefined4 func_001207F4(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if (((*DAT_00120a3c & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00120a3c), iVar2 != 0)) {
    *DAT_00120a40 = DAT_00120a44;
  }
  if ((param_1 == (int *)0x0) ||
     (iVar2 = (**(code **)*param_1)(param_1,DAT_00120a40), piVar3 = param_1, iVar2 == 0)) {
    piVar3 = (int *)0x0;
  }
  uVar1 = DAT_00120a4c;
  if (piVar3 == (int *)0x0) {
    if (((*DAT_00120a48 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00120a48), iVar2 != 0)) {
      *DAT_00120a50 = uVar1;
    }
    if ((param_1 == (int *)0x0) ||
       (iVar2 = (**(code **)*param_1)(param_1,DAT_00120a50), piVar3 = param_1, iVar2 == 0)) {
      piVar3 = (int *)0x0;
    }
    if (piVar3 == (int *)0x0) {
      if (((*DAT_00120a54 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00120a54), iVar2 != 0)) {
        *DAT_00120a58 = uVar1;
      }
      if ((param_1 == (int *)0x0) ||
         (iVar2 = (**(code **)*param_1)(param_1,DAT_00120a58), piVar3 = param_1, iVar2 == 0)) {
        piVar3 = (int *)0x0;
      }
      if (piVar3 == (int *)0x0) {
        if (((*DAT_00120a5c & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00120a5c), iVar2 != 0))
        {
          *DAT_00120a60 = uVar1;
        }
        if ((param_1 == (int *)0x0) ||
           (iVar2 = (**(code **)*param_1)(param_1,DAT_00120a60), iVar2 == 0)) {
          param_1 = (int *)0x0;
        }
        if ((param_1 != (int *)0x0) &&
           ((param_2 == 0 || (*(int *)(param_2 + 0x2cc) == param_1[0x14])))) {
          *(undefined1 *)((int)param_1 + 0x2d7) = 1;
          return 0;
        }
      }
      else if ((param_2 == 0) || (*(int *)(param_2 + 0x2cc) == piVar3[0x14])) {
        *(undefined1 *)((int)piVar3 + 0x2d7) = 1;
        return 0;
      }
    }
    else if ((param_2 == 0) || (*(int *)(param_2 + 0x2cc) == piVar3[0x14])) {
      func_00317820((int)piVar3);
      *(undefined1 *)((int)piVar3 + 0x2d7) = 1;
    }
  }
  else if ((param_2 == 0) || (*(int *)(param_2 + 0x2cc) == piVar3[0x14])) {
                    /* WARNING: Could not recover jumptable at 0x00120894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(*piVar3 + 0x78))(piVar3,1,8);
  }
  return 0;
}


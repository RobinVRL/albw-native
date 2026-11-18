#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_004c16c8;
extern uint *DAT_004c16cc;
extern undefined4 *DAT_004c16d0;
extern undefined4 DAT_004c16d4;
extern uint *DAT_004c16d8;
extern undefined4 *DAT_004c16dc;
extern undefined4 DAT_004c16e0;

// USA 004C15EC <- EU 004C15C4 (Ghidra, non-matching)
// GLOBAL DAT_004c16c8 int *
// GLOBAL DAT_004c16cc uint *
// GLOBAL DAT_004c16d0 undefined4 *
// GLOBAL DAT_004c16d4 undefined4
// GLOBAL DAT_004c16d8 uint *
// GLOBAL DAT_004c16dc undefined4 *
// GLOBAL DAT_004c16e0 undefined4

undefined4 func_004C15EC(int param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if ((*DAT_004c16c8 == 0) ||
     (piVar1 = (int *)func_0052FBA0(*DAT_004c16c8 + 0x3dbbc,*param_2), piVar1 == (int *)0x0)) {
    return 0;
  }
  if (((*DAT_004c16cc & 1) == 0) && (iVar2 = func_00100174((int *)DAT_004c16cc), iVar2 != 0)) {
    *DAT_004c16d0 = DAT_004c16d4;
  }
  iVar2 = (**(code **)*piVar1)(piVar1,DAT_004c16d0);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = piVar1;
  }
  if (piVar3 == (int *)0x0) {
    if (((*DAT_004c16d8 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_004c16d8), iVar2 != 0)) {
      *DAT_004c16dc = DAT_004c16e0;
    }
    iVar2 = (**(code **)*piVar1)(piVar1,DAT_004c16dc);
    piVar3 = piVar1;
    if (iVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    if (piVar3 == (int *)0x0) {
      return 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x004c16c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*piVar3 + 0x60))(piVar3,param_1 + 0x7ec);
}


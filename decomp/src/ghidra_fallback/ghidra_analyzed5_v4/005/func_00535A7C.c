#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_00535af4;
extern undefined4 *DAT_00535af8;
extern undefined4 DAT_00535afc;
extern uint *DAT_00535b00;
extern undefined4 *DAT_00535b04;
extern undefined4 DAT_00535b08;

// USA 00535A7C <- EU 00535A54 (Ghidra, non-matching)
// GLOBAL DAT_00535af4 uint *
// GLOBAL DAT_00535af8 undefined4 *
// GLOBAL DAT_00535afc undefined4
// GLOBAL DAT_00535b00 uint *
// GLOBAL DAT_00535b04 undefined4 *
// GLOBAL DAT_00535b08 undefined4

undefined4 func_00535A7C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00535af4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00535af4), iVar1 != 0)) {
    *DAT_00535af8 = DAT_00535afc;
  }
  if (DAT_00535af8 != param_2) {
    if (((*DAT_00535b00 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00535b00), iVar1 != 0)) {
      *DAT_00535b04 = DAT_00535b08;
    }
    if (DAT_00535b04 != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}


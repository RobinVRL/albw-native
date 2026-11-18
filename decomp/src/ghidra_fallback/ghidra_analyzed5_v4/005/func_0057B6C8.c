#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0012CCE0(undefined4 *param_1);
extern uint *DAT_0057b740;
extern undefined4 *DAT_0057b744;
extern undefined4 DAT_0057b748;
extern uint *DAT_0057b74c;
extern undefined4 *DAT_0057b750;
extern undefined4 DAT_0057b754;

// USA 0057B6C8 <- EU 0057B6A0 (Ghidra, non-matching)
// GLOBAL DAT_0057b740 uint *
// GLOBAL DAT_0057b744 undefined4 *
// GLOBAL DAT_0057b748 undefined4
// GLOBAL DAT_0057b74c uint *
// GLOBAL DAT_0057b750 undefined4 *
// GLOBAL DAT_0057b754 undefined4

undefined4 func_0057B6C8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0057b740 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b740), iVar1 != 0)) {
    *DAT_0057b744 = DAT_0057b748;
  }
  if (DAT_0057b744 != param_2) {
    if (((*DAT_0057b74c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b74c), iVar1 != 0)) {
      *DAT_0057b750 = DAT_0057b754;
    }
    if (DAT_0057b750 != param_2) {
      uVar2 = func_0012CCE0(param_2);
      return uVar2;
    }
  }
  return 1;
}


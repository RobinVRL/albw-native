#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053500c;
extern undefined4 *DAT_00535010;
extern undefined4 DAT_00535014;
extern uint *DAT_00535018;
extern undefined4 *DAT_0053501c;
extern undefined4 DAT_00535020;
extern uint *DAT_00535024;
extern undefined4 *DAT_00535028;
extern undefined4 DAT_0053502c;

// USA 00534F54 <- EU 00534F2C (Ghidra, non-matching)
// GLOBAL DAT_0053500c uint *
// GLOBAL DAT_00535010 undefined4 *
// GLOBAL DAT_00535014 undefined4
// GLOBAL DAT_00535018 uint *
// GLOBAL DAT_0053501c undefined4 *
// GLOBAL DAT_00535020 undefined4
// GLOBAL DAT_00535024 uint *
// GLOBAL DAT_00535028 undefined4 *
// GLOBAL DAT_0053502c undefined4

undefined4 func_00534F54(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053500c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053500c), iVar1 != 0)) {
    *DAT_00535010 = DAT_00535014;
  }
  if (DAT_00535010 != param_2) {
    if (((*DAT_00535018 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00535018), iVar1 != 0)) {
      *DAT_0053501c = DAT_00535020;
    }
    if (DAT_0053501c != param_2) {
      if (((*DAT_00535024 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00535024), iVar1 != 0)) {
        *DAT_00535028 = DAT_0053502c;
      }
      if (DAT_00535028 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


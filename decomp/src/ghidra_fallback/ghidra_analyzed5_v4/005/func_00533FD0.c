#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00534088;
extern undefined4 *DAT_0053408c;
extern undefined4 DAT_00534090;
extern uint *DAT_00534094;
extern undefined4 *DAT_00534098;
extern undefined4 DAT_0053409c;
extern uint *DAT_005340a0;
extern undefined4 *DAT_005340a4;
extern undefined4 DAT_005340a8;

// USA 00533FD0 <- EU 00533FA8 (Ghidra, non-matching)
// GLOBAL DAT_00534088 uint *
// GLOBAL DAT_0053408c undefined4 *
// GLOBAL DAT_00534090 undefined4
// GLOBAL DAT_00534094 uint *
// GLOBAL DAT_00534098 undefined4 *
// GLOBAL DAT_0053409c undefined4
// GLOBAL DAT_005340a0 uint *
// GLOBAL DAT_005340a4 undefined4 *
// GLOBAL DAT_005340a8 undefined4

undefined4 func_00533FD0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00534088 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00534088), iVar1 != 0)) {
    *DAT_0053408c = DAT_00534090;
  }
  if (DAT_0053408c != param_2) {
    if (((*DAT_00534094 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00534094), iVar1 != 0)) {
      *DAT_00534098 = DAT_0053409c;
    }
    if (DAT_00534098 != param_2) {
      if (((*DAT_005340a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005340a0), iVar1 != 0)) {
        *DAT_005340a4 = DAT_005340a8;
      }
      if (DAT_005340a4 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


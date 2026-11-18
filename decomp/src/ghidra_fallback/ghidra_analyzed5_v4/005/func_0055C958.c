#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055ca10;
extern undefined4 *DAT_0055ca14;
extern undefined4 DAT_0055ca18;
extern uint *DAT_0055ca1c;
extern undefined4 *DAT_0055ca20;
extern undefined4 DAT_0055ca24;
extern uint *DAT_0055ca28;
extern undefined4 *DAT_0055ca2c;
extern undefined4 DAT_0055ca30;

// USA 0055C958 <- EU 0055C930 (Ghidra, non-matching)
// GLOBAL DAT_0055ca10 uint *
// GLOBAL DAT_0055ca14 undefined4 *
// GLOBAL DAT_0055ca18 undefined4
// GLOBAL DAT_0055ca1c uint *
// GLOBAL DAT_0055ca20 undefined4 *
// GLOBAL DAT_0055ca24 undefined4
// GLOBAL DAT_0055ca28 uint *
// GLOBAL DAT_0055ca2c undefined4 *
// GLOBAL DAT_0055ca30 undefined4

undefined4 func_0055C958(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055ca10 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055ca10), iVar1 != 0)) {
    *DAT_0055ca14 = DAT_0055ca18;
  }
  if (DAT_0055ca14 != param_2) {
    if (((*DAT_0055ca1c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055ca1c), iVar1 != 0)) {
      *DAT_0055ca20 = DAT_0055ca24;
    }
    if (DAT_0055ca20 != param_2) {
      if (((*DAT_0055ca28 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055ca28), iVar1 != 0)) {
        *DAT_0055ca2c = DAT_0055ca30;
      }
      if (DAT_0055ca2c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


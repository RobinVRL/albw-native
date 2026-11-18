#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005460f4;
extern undefined4 *DAT_005460f8;
extern undefined4 DAT_005460fc;
extern uint *DAT_00546100;
extern undefined4 *DAT_00546104;
extern undefined4 DAT_00546108;
extern uint *DAT_0054610c;
extern undefined4 *DAT_00546110;
extern undefined4 DAT_00546114;

// USA 0054603C <- EU 00546014 (Ghidra, non-matching)
// GLOBAL DAT_005460f4 uint *
// GLOBAL DAT_005460f8 undefined4 *
// GLOBAL DAT_005460fc undefined4
// GLOBAL DAT_00546100 uint *
// GLOBAL DAT_00546104 undefined4 *
// GLOBAL DAT_00546108 undefined4
// GLOBAL DAT_0054610c uint *
// GLOBAL DAT_00546110 undefined4 *
// GLOBAL DAT_00546114 undefined4

undefined4 func_0054603C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005460f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005460f4), iVar1 != 0)) {
    *DAT_005460f8 = DAT_005460fc;
  }
  if (DAT_005460f8 != param_2) {
    if (((*DAT_00546100 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00546100), iVar1 != 0)) {
      *DAT_00546104 = DAT_00546108;
    }
    if (DAT_00546104 != param_2) {
      if (((*DAT_0054610c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054610c), iVar1 != 0)) {
        *DAT_00546110 = DAT_00546114;
      }
      if (DAT_00546110 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


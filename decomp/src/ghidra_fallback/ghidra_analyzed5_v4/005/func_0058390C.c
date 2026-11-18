#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0060DDA0(undefined4 *param_1);
extern uint *DAT_00583984;
extern undefined4 *DAT_00583988;
extern undefined4 DAT_0058398c;
extern uint *DAT_00583990;
extern undefined4 *DAT_00583994;
extern undefined4 DAT_00583998;

// USA 0058390C <- EU 005838E4 (Ghidra, non-matching)
// GLOBAL DAT_00583984 uint *
// GLOBAL DAT_00583988 undefined4 *
// GLOBAL DAT_0058398c undefined4
// GLOBAL DAT_00583990 uint *
// GLOBAL DAT_00583994 undefined4 *
// GLOBAL DAT_00583998 undefined4

undefined4 func_0058390C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00583984 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00583984), iVar1 != 0)) {
    *DAT_00583988 = DAT_0058398c;
  }
  if (DAT_00583988 != param_2) {
    if (((*DAT_00583990 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00583990), iVar1 != 0)) {
      *DAT_00583994 = DAT_00583998;
    }
    if (DAT_00583994 != param_2) {
      uVar2 = func_0060DDA0(param_2);
      return uVar2;
    }
  }
  return 1;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0051f354;
extern undefined4 *DAT_0051f358;
extern undefined4 DAT_0051f35c;
extern uint *DAT_0051f360;
extern undefined4 *DAT_0051f364;
extern undefined4 DAT_0051f368;
extern uint *DAT_0051f36c;
extern undefined4 *DAT_0051f370;
extern undefined4 DAT_0051f374;

// USA 0051F29C <- EU 0051F274 (Ghidra, non-matching)
// GLOBAL DAT_0051f354 uint *
// GLOBAL DAT_0051f358 undefined4 *
// GLOBAL DAT_0051f35c undefined4
// GLOBAL DAT_0051f360 uint *
// GLOBAL DAT_0051f364 undefined4 *
// GLOBAL DAT_0051f368 undefined4
// GLOBAL DAT_0051f36c uint *
// GLOBAL DAT_0051f370 undefined4 *
// GLOBAL DAT_0051f374 undefined4

undefined4 func_0051F29C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0051f354 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051f354), iVar1 != 0)) {
    *DAT_0051f358 = DAT_0051f35c;
  }
  if (DAT_0051f358 != param_2) {
    if (((*DAT_0051f360 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051f360), iVar1 != 0)) {
      *DAT_0051f364 = DAT_0051f368;
    }
    if (DAT_0051f364 != param_2) {
      if (((*DAT_0051f36c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051f36c), iVar1 != 0)) {
        *DAT_0051f370 = DAT_0051f374;
      }
      if (DAT_0051f370 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


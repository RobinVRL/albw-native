#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0051de4c;
extern undefined4 *DAT_0051de50;
extern undefined4 DAT_0051de54;
extern uint *DAT_0051de58;
extern undefined4 *DAT_0051de5c;
extern undefined4 DAT_0051de60;
extern uint *DAT_0051de64;
extern undefined4 *DAT_0051de68;
extern undefined4 DAT_0051de6c;
extern uint *DAT_0051de70;
extern undefined4 *DAT_0051de74;
extern undefined4 DAT_0051de78;

// USA 0051DD50 <- EU 0051DD28 (Ghidra, non-matching)
// GLOBAL DAT_0051de4c uint *
// GLOBAL DAT_0051de50 undefined4 *
// GLOBAL DAT_0051de54 undefined4
// GLOBAL DAT_0051de58 uint *
// GLOBAL DAT_0051de5c undefined4 *
// GLOBAL DAT_0051de60 undefined4
// GLOBAL DAT_0051de64 uint *
// GLOBAL DAT_0051de68 undefined4 *
// GLOBAL DAT_0051de6c undefined4
// GLOBAL DAT_0051de70 uint *
// GLOBAL DAT_0051de74 undefined4 *
// GLOBAL DAT_0051de78 undefined4

undefined4 func_0051DD50(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0051de4c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051de4c), iVar1 != 0)) {
    *DAT_0051de50 = DAT_0051de54;
  }
  if (DAT_0051de50 != param_2) {
    if (((*DAT_0051de58 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051de58), iVar1 != 0)) {
      *DAT_0051de5c = DAT_0051de60;
    }
    if (DAT_0051de5c != param_2) {
      if (((*DAT_0051de64 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051de64), iVar1 != 0)) {
        *DAT_0051de68 = DAT_0051de6c;
      }
      if (DAT_0051de68 != param_2) {
        if (((*DAT_0051de70 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051de70), iVar1 != 0))
        {
          *DAT_0051de74 = DAT_0051de78;
        }
        if (DAT_0051de74 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


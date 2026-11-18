#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00521eb8;
extern undefined4 *DAT_00521ebc;
extern undefined4 DAT_00521ec0;
extern uint *DAT_00521ec4;
extern undefined4 *DAT_00521ec8;
extern undefined4 DAT_00521ecc;
extern uint *DAT_00521ed0;
extern undefined4 *DAT_00521ed4;
extern undefined4 DAT_00521ed8;
extern uint *DAT_00521edc;
extern undefined4 *DAT_00521ee0;
extern undefined4 DAT_00521ee4;

// USA 00521DBC <- EU 00521D94 (Ghidra, non-matching)
// GLOBAL DAT_00521eb8 uint *
// GLOBAL DAT_00521ebc undefined4 *
// GLOBAL DAT_00521ec0 undefined4
// GLOBAL DAT_00521ec4 uint *
// GLOBAL DAT_00521ec8 undefined4 *
// GLOBAL DAT_00521ecc undefined4
// GLOBAL DAT_00521ed0 uint *
// GLOBAL DAT_00521ed4 undefined4 *
// GLOBAL DAT_00521ed8 undefined4
// GLOBAL DAT_00521edc uint *
// GLOBAL DAT_00521ee0 undefined4 *
// GLOBAL DAT_00521ee4 undefined4

undefined4 func_00521DBC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00521eb8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00521eb8), iVar1 != 0)) {
    *DAT_00521ebc = DAT_00521ec0;
  }
  if (DAT_00521ebc != param_2) {
    if (((*DAT_00521ec4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00521ec4), iVar1 != 0)) {
      *DAT_00521ec8 = DAT_00521ecc;
    }
    if (DAT_00521ec8 != param_2) {
      if (((*DAT_00521ed0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00521ed0), iVar1 != 0)) {
        *DAT_00521ed4 = DAT_00521ed8;
      }
      if (DAT_00521ed4 != param_2) {
        if (((*DAT_00521edc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00521edc), iVar1 != 0))
        {
          *DAT_00521ee0 = DAT_00521ee4;
        }
        if (DAT_00521ee0 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


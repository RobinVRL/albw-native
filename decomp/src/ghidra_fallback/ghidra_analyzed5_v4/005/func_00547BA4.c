#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00547ce4;
extern undefined4 *DAT_00547ce8;
extern undefined4 DAT_00547cec;
extern uint *DAT_00547cf0;
extern undefined4 *DAT_00547cf4;
extern undefined4 DAT_00547cf8;
extern uint *DAT_00547cfc;
extern undefined4 *DAT_00547d00;
extern undefined4 DAT_00547d04;
extern uint *DAT_00547d08;
extern undefined4 *DAT_00547d0c;
extern undefined4 DAT_00547d10;
extern uint *DAT_00547d14;
extern undefined4 *DAT_00547d18;
extern undefined4 DAT_00547d1c;

// USA 00547BA4 <- EU 00547B7C (Ghidra, non-matching)
// GLOBAL DAT_00547ce4 uint *
// GLOBAL DAT_00547ce8 undefined4 *
// GLOBAL DAT_00547cec undefined4
// GLOBAL DAT_00547cf0 uint *
// GLOBAL DAT_00547cf4 undefined4 *
// GLOBAL DAT_00547cf8 undefined4
// GLOBAL DAT_00547cfc uint *
// GLOBAL DAT_00547d00 undefined4 *
// GLOBAL DAT_00547d04 undefined4
// GLOBAL DAT_00547d08 uint *
// GLOBAL DAT_00547d0c undefined4 *
// GLOBAL DAT_00547d10 undefined4
// GLOBAL DAT_00547d14 uint *
// GLOBAL DAT_00547d18 undefined4 *
// GLOBAL DAT_00547d1c undefined4

undefined4 func_00547BA4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00547ce4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00547ce4), iVar1 != 0)) {
    *DAT_00547ce8 = DAT_00547cec;
  }
  if (DAT_00547ce8 != param_2) {
    if (((*DAT_00547cf0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00547cf0), iVar1 != 0)) {
      *DAT_00547cf4 = DAT_00547cf8;
    }
    if (DAT_00547cf4 != param_2) {
      if (((*DAT_00547cfc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00547cfc), iVar1 != 0)) {
        *DAT_00547d00 = DAT_00547d04;
      }
      if (DAT_00547d00 != param_2) {
        if (((*DAT_00547d08 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00547d08), iVar1 != 0))
        {
          *DAT_00547d0c = DAT_00547d10;
        }
        if (DAT_00547d0c != param_2) {
          if (((*DAT_00547d14 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00547d14), iVar1 != 0)
             ) {
            *DAT_00547d18 = DAT_00547d1c;
          }
          if (DAT_00547d18 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00555f34;
extern undefined4 *DAT_00555f38;
extern undefined4 DAT_00555f3c;
extern uint *DAT_00555f40;
extern undefined4 *DAT_00555f44;
extern undefined4 DAT_00555f48;
extern uint *DAT_00555f4c;
extern undefined4 *DAT_00555f50;
extern undefined4 DAT_00555f54;
extern uint *DAT_00555f58;
extern undefined4 *DAT_00555f5c;
extern undefined4 DAT_00555f60;
extern uint *DAT_00555f64;
extern undefined4 *DAT_00555f68;
extern undefined4 DAT_00555f6c;

// USA 00555DF4 <- EU 00555DCC (Ghidra, non-matching)
// GLOBAL DAT_00555f34 uint *
// GLOBAL DAT_00555f38 undefined4 *
// GLOBAL DAT_00555f3c undefined4
// GLOBAL DAT_00555f40 uint *
// GLOBAL DAT_00555f44 undefined4 *
// GLOBAL DAT_00555f48 undefined4
// GLOBAL DAT_00555f4c uint *
// GLOBAL DAT_00555f50 undefined4 *
// GLOBAL DAT_00555f54 undefined4
// GLOBAL DAT_00555f58 uint *
// GLOBAL DAT_00555f5c undefined4 *
// GLOBAL DAT_00555f60 undefined4
// GLOBAL DAT_00555f64 uint *
// GLOBAL DAT_00555f68 undefined4 *
// GLOBAL DAT_00555f6c undefined4

undefined4 func_00555DF4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00555f34 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00555f34), iVar1 != 0)) {
    *DAT_00555f38 = DAT_00555f3c;
  }
  if (DAT_00555f38 != param_2) {
    if (((*DAT_00555f40 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00555f40), iVar1 != 0)) {
      *DAT_00555f44 = DAT_00555f48;
    }
    if (DAT_00555f44 != param_2) {
      if (((*DAT_00555f4c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00555f4c), iVar1 != 0)) {
        *DAT_00555f50 = DAT_00555f54;
      }
      if (DAT_00555f50 != param_2) {
        if (((*DAT_00555f58 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00555f58), iVar1 != 0))
        {
          *DAT_00555f5c = DAT_00555f60;
        }
        if (DAT_00555f5c != param_2) {
          if (((*DAT_00555f64 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00555f64), iVar1 != 0)
             ) {
            *DAT_00555f68 = DAT_00555f6c;
          }
          if (DAT_00555f68 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


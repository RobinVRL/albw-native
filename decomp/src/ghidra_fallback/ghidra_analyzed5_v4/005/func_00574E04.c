#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00574f44;
extern undefined4 *DAT_00574f48;
extern undefined4 DAT_00574f4c;
extern uint *DAT_00574f50;
extern undefined4 *DAT_00574f54;
extern undefined4 DAT_00574f58;
extern uint *DAT_00574f5c;
extern undefined4 *DAT_00574f60;
extern undefined4 DAT_00574f64;
extern uint *DAT_00574f68;
extern undefined4 *DAT_00574f6c;
extern undefined4 DAT_00574f70;
extern uint *DAT_00574f74;
extern undefined4 *DAT_00574f78;
extern undefined4 DAT_00574f7c;

// USA 00574E04 <- EU 00574DDC (Ghidra, non-matching)
// GLOBAL DAT_00574f44 uint *
// GLOBAL DAT_00574f48 undefined4 *
// GLOBAL DAT_00574f4c undefined4
// GLOBAL DAT_00574f50 uint *
// GLOBAL DAT_00574f54 undefined4 *
// GLOBAL DAT_00574f58 undefined4
// GLOBAL DAT_00574f5c uint *
// GLOBAL DAT_00574f60 undefined4 *
// GLOBAL DAT_00574f64 undefined4
// GLOBAL DAT_00574f68 uint *
// GLOBAL DAT_00574f6c undefined4 *
// GLOBAL DAT_00574f70 undefined4
// GLOBAL DAT_00574f74 uint *
// GLOBAL DAT_00574f78 undefined4 *
// GLOBAL DAT_00574f7c undefined4

undefined4 func_00574E04(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00574f44 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00574f44), iVar1 != 0)) {
    *DAT_00574f48 = DAT_00574f4c;
  }
  if (DAT_00574f48 != param_2) {
    if (((*DAT_00574f50 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00574f50), iVar1 != 0)) {
      *DAT_00574f54 = DAT_00574f58;
    }
    if (DAT_00574f54 != param_2) {
      if (((*DAT_00574f5c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00574f5c), iVar1 != 0)) {
        *DAT_00574f60 = DAT_00574f64;
      }
      if (DAT_00574f60 != param_2) {
        if (((*DAT_00574f68 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00574f68), iVar1 != 0))
        {
          *DAT_00574f6c = DAT_00574f70;
        }
        if (DAT_00574f6c != param_2) {
          if (((*DAT_00574f74 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00574f74), iVar1 != 0)
             ) {
            *DAT_00574f78 = DAT_00574f7c;
          }
          if (DAT_00574f78 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


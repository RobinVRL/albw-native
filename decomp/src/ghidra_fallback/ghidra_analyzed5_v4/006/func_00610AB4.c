#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00610c38;
extern undefined4 *DAT_00610c3c;
extern undefined4 DAT_00610c40;
extern uint *DAT_00610c44;
extern undefined4 *DAT_00610c48;
extern undefined4 DAT_00610c4c;
extern uint *DAT_00610c50;
extern undefined4 *DAT_00610c54;
extern undefined4 DAT_00610c58;
extern uint *DAT_00610c5c;
extern undefined4 *DAT_00610c60;
extern undefined4 DAT_00610c64;
extern uint *DAT_00610c68;
extern undefined4 *DAT_00610c6c;
extern undefined4 DAT_00610c70;
extern uint *DAT_00610c74;
extern undefined4 *DAT_00610c78;
extern undefined4 DAT_00610c7c;

// USA 00610AB4 <- EU 00610A8C (Ghidra, non-matching)
// GLOBAL DAT_00610c38 uint *
// GLOBAL DAT_00610c3c undefined4 *
// GLOBAL DAT_00610c40 undefined4
// GLOBAL DAT_00610c44 uint *
// GLOBAL DAT_00610c48 undefined4 *
// GLOBAL DAT_00610c4c undefined4
// GLOBAL DAT_00610c50 uint *
// GLOBAL DAT_00610c54 undefined4 *
// GLOBAL DAT_00610c58 undefined4
// GLOBAL DAT_00610c5c uint *
// GLOBAL DAT_00610c60 undefined4 *
// GLOBAL DAT_00610c64 undefined4
// GLOBAL DAT_00610c68 uint *
// GLOBAL DAT_00610c6c undefined4 *
// GLOBAL DAT_00610c70 undefined4
// GLOBAL DAT_00610c74 uint *
// GLOBAL DAT_00610c78 undefined4 *
// GLOBAL DAT_00610c7c undefined4

undefined4 func_00610AB4(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_00610c38 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00610c38), iVar1 != 0)) {
    *DAT_00610c3c = DAT_00610c40;
  }
  if (DAT_00610c3c != param_1) {
    if (((*DAT_00610c44 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00610c44), iVar1 != 0)) {
      *DAT_00610c48 = DAT_00610c4c;
    }
    if (DAT_00610c48 != param_1) {
      if (((*DAT_00610c50 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00610c50), iVar1 != 0)) {
        *DAT_00610c54 = DAT_00610c58;
      }
      if (DAT_00610c54 != param_1) {
        if (((*DAT_00610c5c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00610c5c), iVar1 != 0))
        {
          *DAT_00610c60 = DAT_00610c64;
        }
        if (DAT_00610c60 != param_1) {
          if (((*DAT_00610c68 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00610c68), iVar1 != 0)
             ) {
            *DAT_00610c6c = DAT_00610c70;
          }
          if (DAT_00610c6c != param_1) {
            if (((*DAT_00610c74 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_00610c74), iVar1 != 0)) {
              *DAT_00610c78 = DAT_00610c7c;
            }
            if (DAT_00610c78 != param_1) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052dc54;
extern undefined4 *DAT_0052dc58;
extern undefined4 DAT_0052dc5c;
extern uint *DAT_0052dc60;
extern undefined4 *DAT_0052dc64;
extern undefined4 DAT_0052dc68;
extern uint *DAT_0052dc6c;
extern undefined4 *DAT_0052dc70;
extern undefined4 DAT_0052dc74;
extern uint *DAT_0052dc78;
extern undefined4 *DAT_0052dc7c;
extern undefined4 DAT_0052dc80;

// USA 0052DB58 <- EU 0052DB30 (Ghidra, non-matching)
// GLOBAL DAT_0052dc54 uint *
// GLOBAL DAT_0052dc58 undefined4 *
// GLOBAL DAT_0052dc5c undefined4
// GLOBAL DAT_0052dc60 uint *
// GLOBAL DAT_0052dc64 undefined4 *
// GLOBAL DAT_0052dc68 undefined4
// GLOBAL DAT_0052dc6c uint *
// GLOBAL DAT_0052dc70 undefined4 *
// GLOBAL DAT_0052dc74 undefined4
// GLOBAL DAT_0052dc78 uint *
// GLOBAL DAT_0052dc7c undefined4 *
// GLOBAL DAT_0052dc80 undefined4

undefined4 func_0052DB58(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052dc54 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052dc54), iVar1 != 0)) {
    *DAT_0052dc58 = DAT_0052dc5c;
  }
  if (DAT_0052dc58 != param_2) {
    if (((*DAT_0052dc60 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052dc60), iVar1 != 0)) {
      *DAT_0052dc64 = DAT_0052dc68;
    }
    if (DAT_0052dc64 != param_2) {
      if (((*DAT_0052dc6c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052dc6c), iVar1 != 0)) {
        *DAT_0052dc70 = DAT_0052dc74;
      }
      if (DAT_0052dc70 != param_2) {
        if (((*DAT_0052dc78 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052dc78), iVar1 != 0))
        {
          *DAT_0052dc7c = DAT_0052dc80;
        }
        if (DAT_0052dc7c != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


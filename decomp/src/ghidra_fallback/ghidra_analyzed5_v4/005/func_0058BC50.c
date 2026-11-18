#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058bd4c;
extern undefined4 *DAT_0058bd50;
extern undefined4 DAT_0058bd54;
extern uint *DAT_0058bd58;
extern undefined4 *DAT_0058bd5c;
extern undefined4 DAT_0058bd60;
extern uint *DAT_0058bd64;
extern undefined4 *DAT_0058bd68;
extern undefined4 DAT_0058bd6c;
extern uint *DAT_0058bd70;
extern undefined4 *DAT_0058bd74;
extern undefined4 DAT_0058bd78;

// USA 0058BC50 <- EU 0058BC28 (Ghidra, non-matching)
// GLOBAL DAT_0058bd4c uint *
// GLOBAL DAT_0058bd50 undefined4 *
// GLOBAL DAT_0058bd54 undefined4
// GLOBAL DAT_0058bd58 uint *
// GLOBAL DAT_0058bd5c undefined4 *
// GLOBAL DAT_0058bd60 undefined4
// GLOBAL DAT_0058bd64 uint *
// GLOBAL DAT_0058bd68 undefined4 *
// GLOBAL DAT_0058bd6c undefined4
// GLOBAL DAT_0058bd70 uint *
// GLOBAL DAT_0058bd74 undefined4 *
// GLOBAL DAT_0058bd78 undefined4

undefined4 func_0058BC50(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058bd4c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058bd4c), iVar1 != 0)) {
    *DAT_0058bd50 = DAT_0058bd54;
  }
  if (DAT_0058bd50 != param_2) {
    if (((*DAT_0058bd58 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058bd58), iVar1 != 0)) {
      *DAT_0058bd5c = DAT_0058bd60;
    }
    if (DAT_0058bd5c != param_2) {
      if (((*DAT_0058bd64 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058bd64), iVar1 != 0)) {
        *DAT_0058bd68 = DAT_0058bd6c;
      }
      if (DAT_0058bd68 != param_2) {
        if (((*DAT_0058bd70 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058bd70), iVar1 != 0))
        {
          *DAT_0058bd74 = DAT_0058bd78;
        }
        if (DAT_0058bd74 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


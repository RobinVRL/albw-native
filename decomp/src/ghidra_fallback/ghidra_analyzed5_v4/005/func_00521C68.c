#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00521d64;
extern undefined4 *DAT_00521d68;
extern undefined4 DAT_00521d6c;
extern uint *DAT_00521d70;
extern undefined4 *DAT_00521d74;
extern undefined4 DAT_00521d78;
extern uint *DAT_00521d7c;
extern undefined4 *DAT_00521d80;
extern undefined4 DAT_00521d84;
extern uint *DAT_00521d88;
extern undefined4 *DAT_00521d8c;
extern undefined4 DAT_00521d90;

// USA 00521C68 <- EU 00521C40 (Ghidra, non-matching)
// GLOBAL DAT_00521d64 uint *
// GLOBAL DAT_00521d68 undefined4 *
// GLOBAL DAT_00521d6c undefined4
// GLOBAL DAT_00521d70 uint *
// GLOBAL DAT_00521d74 undefined4 *
// GLOBAL DAT_00521d78 undefined4
// GLOBAL DAT_00521d7c uint *
// GLOBAL DAT_00521d80 undefined4 *
// GLOBAL DAT_00521d84 undefined4
// GLOBAL DAT_00521d88 uint *
// GLOBAL DAT_00521d8c undefined4 *
// GLOBAL DAT_00521d90 undefined4

undefined4 func_00521C68(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00521d64 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00521d64), iVar1 != 0)) {
    *DAT_00521d68 = DAT_00521d6c;
  }
  if (DAT_00521d68 != param_2) {
    if (((*DAT_00521d70 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00521d70), iVar1 != 0)) {
      *DAT_00521d74 = DAT_00521d78;
    }
    if (DAT_00521d74 != param_2) {
      if (((*DAT_00521d7c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00521d7c), iVar1 != 0)) {
        *DAT_00521d80 = DAT_00521d84;
      }
      if (DAT_00521d80 != param_2) {
        if (((*DAT_00521d88 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00521d88), iVar1 != 0))
        {
          *DAT_00521d8c = DAT_00521d90;
        }
        if (DAT_00521d8c != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


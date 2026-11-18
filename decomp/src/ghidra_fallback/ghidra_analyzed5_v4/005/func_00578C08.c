#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00578d48;
extern undefined4 *DAT_00578d4c;
extern undefined4 DAT_00578d50;
extern uint *DAT_00578d54;
extern undefined4 *DAT_00578d58;
extern undefined4 DAT_00578d5c;
extern uint *DAT_00578d60;
extern undefined4 *DAT_00578d64;
extern undefined4 DAT_00578d68;
extern uint *DAT_00578d6c;
extern undefined4 *DAT_00578d70;
extern undefined4 DAT_00578d74;
extern uint *DAT_00578d78;
extern undefined4 *DAT_00578d7c;
extern undefined4 DAT_00578d80;

// USA 00578C08 <- EU 00578BE0 (Ghidra, non-matching)
// GLOBAL DAT_00578d48 uint *
// GLOBAL DAT_00578d4c undefined4 *
// GLOBAL DAT_00578d50 undefined4
// GLOBAL DAT_00578d54 uint *
// GLOBAL DAT_00578d58 undefined4 *
// GLOBAL DAT_00578d5c undefined4
// GLOBAL DAT_00578d60 uint *
// GLOBAL DAT_00578d64 undefined4 *
// GLOBAL DAT_00578d68 undefined4
// GLOBAL DAT_00578d6c uint *
// GLOBAL DAT_00578d70 undefined4 *
// GLOBAL DAT_00578d74 undefined4
// GLOBAL DAT_00578d78 uint *
// GLOBAL DAT_00578d7c undefined4 *
// GLOBAL DAT_00578d80 undefined4

undefined4 func_00578C08(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00578d48 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578d48), iVar1 != 0)) {
    *DAT_00578d4c = DAT_00578d50;
  }
  if (DAT_00578d4c != param_2) {
    if (((*DAT_00578d54 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578d54), iVar1 != 0)) {
      *DAT_00578d58 = DAT_00578d5c;
    }
    if (DAT_00578d58 != param_2) {
      if (((*DAT_00578d60 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578d60), iVar1 != 0)) {
        *DAT_00578d64 = DAT_00578d68;
      }
      if (DAT_00578d64 != param_2) {
        if (((*DAT_00578d6c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578d6c), iVar1 != 0))
        {
          *DAT_00578d70 = DAT_00578d74;
        }
        if (DAT_00578d70 != param_2) {
          if (((*DAT_00578d78 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578d78), iVar1 != 0)
             ) {
            *DAT_00578d7c = DAT_00578d80;
          }
          if (DAT_00578d7c != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00536a44;
extern undefined4 *DAT_00536a48;
extern undefined4 DAT_00536a4c;
extern uint *DAT_00536a50;
extern undefined4 *DAT_00536a54;
extern undefined4 DAT_00536a58;
extern uint *DAT_00536a5c;
extern undefined4 *DAT_00536a60;
extern undefined4 DAT_00536a64;
extern uint *DAT_00536a68;
extern undefined4 *DAT_00536a6c;
extern undefined4 DAT_00536a70;

// USA 00536948 <- EU 00536920 (Ghidra, non-matching)
// GLOBAL DAT_00536a44 uint *
// GLOBAL DAT_00536a48 undefined4 *
// GLOBAL DAT_00536a4c undefined4
// GLOBAL DAT_00536a50 uint *
// GLOBAL DAT_00536a54 undefined4 *
// GLOBAL DAT_00536a58 undefined4
// GLOBAL DAT_00536a5c uint *
// GLOBAL DAT_00536a60 undefined4 *
// GLOBAL DAT_00536a64 undefined4
// GLOBAL DAT_00536a68 uint *
// GLOBAL DAT_00536a6c undefined4 *
// GLOBAL DAT_00536a70 undefined4

undefined4 func_00536948(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00536a44 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00536a44), iVar1 != 0)) {
    *DAT_00536a48 = DAT_00536a4c;
  }
  if (DAT_00536a48 != param_2) {
    if (((*DAT_00536a50 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00536a50), iVar1 != 0)) {
      *DAT_00536a54 = DAT_00536a58;
    }
    if (DAT_00536a54 != param_2) {
      if (((*DAT_00536a5c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00536a5c), iVar1 != 0)) {
        *DAT_00536a60 = DAT_00536a64;
      }
      if (DAT_00536a60 != param_2) {
        if (((*DAT_00536a68 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00536a68), iVar1 != 0))
        {
          *DAT_00536a6c = DAT_00536a70;
        }
        if (DAT_00536a6c != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


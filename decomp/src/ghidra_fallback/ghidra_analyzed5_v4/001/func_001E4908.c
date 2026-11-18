#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_001e4a2c;
extern undefined4 *DAT_001e4a30;
extern undefined4 DAT_001e4a34;
extern uint *DAT_001e4a38;
extern undefined4 *DAT_001e4a3c;
extern undefined4 DAT_001e4a40;
extern uint *DAT_001e4a44;
extern undefined4 *DAT_001e4a48;
extern undefined4 DAT_001e4a4c;
extern uint *DAT_001e4a50;
extern undefined4 *DAT_001e4a54;
extern undefined4 DAT_001e4a58;

// USA 001E4908 <- EU 001E4908 (Ghidra, non-matching)
// GLOBAL DAT_001e4a2c uint *
// GLOBAL DAT_001e4a30 undefined4 *
// GLOBAL DAT_001e4a34 undefined4
// GLOBAL DAT_001e4a38 uint *
// GLOBAL DAT_001e4a3c undefined4 *
// GLOBAL DAT_001e4a40 undefined4
// GLOBAL DAT_001e4a44 uint *
// GLOBAL DAT_001e4a48 undefined4 *
// GLOBAL DAT_001e4a4c undefined4
// GLOBAL DAT_001e4a50 uint *
// GLOBAL DAT_001e4a54 undefined4 *
// GLOBAL DAT_001e4a58 undefined4

undefined4 func_001E4908(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_001e4a2c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_001e4a2c), iVar1 != 0)) {
    *DAT_001e4a30 = DAT_001e4a34;
  }
  if (DAT_001e4a30 != param_1) {
    if (((*DAT_001e4a38 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_001e4a38), iVar1 != 0)) {
      *DAT_001e4a3c = DAT_001e4a40;
    }
    if (DAT_001e4a3c != param_1) {
      if (((*DAT_001e4a44 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_001e4a44), iVar1 != 0)) {
        *DAT_001e4a48 = DAT_001e4a4c;
      }
      if (DAT_001e4a48 != param_1) {
        if (((*DAT_001e4a50 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_001e4a50), iVar1 != 0))
        {
          *DAT_001e4a54 = DAT_001e4a58;
        }
        if (DAT_001e4a54 != param_1) {
          return 0;
        }
      }
    }
  }
  return 1;
}


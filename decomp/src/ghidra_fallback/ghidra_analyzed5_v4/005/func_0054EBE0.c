#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054ecdc;
extern undefined4 *DAT_0054ece0;
extern undefined4 DAT_0054ece4;
extern uint *DAT_0054ece8;
extern undefined4 *DAT_0054ecec;
extern undefined4 DAT_0054ecf0;
extern uint *DAT_0054ecf4;
extern undefined4 *DAT_0054ecf8;
extern undefined4 DAT_0054ecfc;
extern uint *DAT_0054ed00;
extern undefined4 *DAT_0054ed04;
extern undefined4 DAT_0054ed08;

// USA 0054EBE0 <- EU 0054EBB8 (Ghidra, non-matching)
// GLOBAL DAT_0054ecdc uint *
// GLOBAL DAT_0054ece0 undefined4 *
// GLOBAL DAT_0054ece4 undefined4
// GLOBAL DAT_0054ece8 uint *
// GLOBAL DAT_0054ecec undefined4 *
// GLOBAL DAT_0054ecf0 undefined4
// GLOBAL DAT_0054ecf4 uint *
// GLOBAL DAT_0054ecf8 undefined4 *
// GLOBAL DAT_0054ecfc undefined4
// GLOBAL DAT_0054ed00 uint *
// GLOBAL DAT_0054ed04 undefined4 *
// GLOBAL DAT_0054ed08 undefined4

undefined4 func_0054EBE0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054ecdc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054ecdc), iVar1 != 0)) {
    *DAT_0054ece0 = DAT_0054ece4;
  }
  if (DAT_0054ece0 != param_2) {
    if (((*DAT_0054ece8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054ece8), iVar1 != 0)) {
      *DAT_0054ecec = DAT_0054ecf0;
    }
    if (DAT_0054ecec != param_2) {
      if (((*DAT_0054ecf4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054ecf4), iVar1 != 0)) {
        *DAT_0054ecf8 = DAT_0054ecfc;
      }
      if (DAT_0054ecf8 != param_2) {
        if (((*DAT_0054ed00 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054ed00), iVar1 != 0))
        {
          *DAT_0054ed04 = DAT_0054ed08;
        }
        if (DAT_0054ed04 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


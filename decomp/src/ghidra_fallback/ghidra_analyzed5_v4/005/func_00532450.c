#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00532508;
extern undefined4 *DAT_0053250c;
extern undefined4 DAT_00532510;
extern uint *DAT_00532514;
extern undefined4 *DAT_00532518;
extern undefined4 DAT_0053251c;
extern uint *DAT_00532520;
extern undefined4 *DAT_00532524;
extern undefined4 DAT_00532528;

// USA 00532450 <- EU 00532428 (Ghidra, non-matching)
// GLOBAL DAT_00532508 uint *
// GLOBAL DAT_0053250c undefined4 *
// GLOBAL DAT_00532510 undefined4
// GLOBAL DAT_00532514 uint *
// GLOBAL DAT_00532518 undefined4 *
// GLOBAL DAT_0053251c undefined4
// GLOBAL DAT_00532520 uint *
// GLOBAL DAT_00532524 undefined4 *
// GLOBAL DAT_00532528 undefined4

undefined4 func_00532450(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00532508 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00532508), iVar1 != 0)) {
    *DAT_0053250c = DAT_00532510;
  }
  if (DAT_0053250c != param_2) {
    if (((*DAT_00532514 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00532514), iVar1 != 0)) {
      *DAT_00532518 = DAT_0053251c;
    }
    if (DAT_00532518 != param_2) {
      if (((*DAT_00532520 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00532520), iVar1 != 0)) {
        *DAT_00532524 = DAT_00532528;
      }
      if (DAT_00532524 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057ed78;
extern undefined4 *DAT_0057ed7c;
extern undefined4 DAT_0057ed80;
extern uint *DAT_0057ed84;
extern undefined4 *DAT_0057ed88;
extern undefined4 DAT_0057ed8c;
extern uint *DAT_0057ed90;
extern undefined4 *DAT_0057ed94;
extern undefined4 DAT_0057ed98;
extern uint *DAT_0057ed9c;
extern undefined4 *DAT_0057eda0;
extern undefined4 DAT_0057eda4;

// USA 0057EC7C <- EU 0057EC54 (Ghidra, non-matching)
// GLOBAL DAT_0057ed78 uint *
// GLOBAL DAT_0057ed7c undefined4 *
// GLOBAL DAT_0057ed80 undefined4
// GLOBAL DAT_0057ed84 uint *
// GLOBAL DAT_0057ed88 undefined4 *
// GLOBAL DAT_0057ed8c undefined4
// GLOBAL DAT_0057ed90 uint *
// GLOBAL DAT_0057ed94 undefined4 *
// GLOBAL DAT_0057ed98 undefined4
// GLOBAL DAT_0057ed9c uint *
// GLOBAL DAT_0057eda0 undefined4 *
// GLOBAL DAT_0057eda4 undefined4

undefined4 func_0057EC7C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057ed78 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057ed78), iVar1 != 0)) {
    *DAT_0057ed7c = DAT_0057ed80;
  }
  if (DAT_0057ed7c != param_2) {
    if (((*DAT_0057ed84 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057ed84), iVar1 != 0)) {
      *DAT_0057ed88 = DAT_0057ed8c;
    }
    if (DAT_0057ed88 != param_2) {
      if (((*DAT_0057ed90 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057ed90), iVar1 != 0)) {
        *DAT_0057ed94 = DAT_0057ed98;
      }
      if (DAT_0057ed94 != param_2) {
        if (((*DAT_0057ed9c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057ed9c), iVar1 != 0))
        {
          *DAT_0057eda0 = DAT_0057eda4;
        }
        if (DAT_0057eda0 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


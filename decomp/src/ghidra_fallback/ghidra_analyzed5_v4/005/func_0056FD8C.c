#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0056fe88;
extern undefined4 *DAT_0056fe8c;
extern undefined4 DAT_0056fe90;
extern uint *DAT_0056fe94;
extern undefined4 *DAT_0056fe98;
extern undefined4 DAT_0056fe9c;
extern uint *DAT_0056fea0;
extern undefined4 *DAT_0056fea4;
extern undefined4 DAT_0056fea8;
extern uint *DAT_0056feac;
extern undefined4 *DAT_0056feb0;
extern undefined4 DAT_0056feb4;

// USA 0056FD8C <- EU 0056FD64 (Ghidra, non-matching)
// GLOBAL DAT_0056fe88 uint *
// GLOBAL DAT_0056fe8c undefined4 *
// GLOBAL DAT_0056fe90 undefined4
// GLOBAL DAT_0056fe94 uint *
// GLOBAL DAT_0056fe98 undefined4 *
// GLOBAL DAT_0056fe9c undefined4
// GLOBAL DAT_0056fea0 uint *
// GLOBAL DAT_0056fea4 undefined4 *
// GLOBAL DAT_0056fea8 undefined4
// GLOBAL DAT_0056feac uint *
// GLOBAL DAT_0056feb0 undefined4 *
// GLOBAL DAT_0056feb4 undefined4

undefined4 func_0056FD8C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0056fe88 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0056fe88), iVar1 != 0)) {
    *DAT_0056fe8c = DAT_0056fe90;
  }
  if (DAT_0056fe8c != param_2) {
    if (((*DAT_0056fe94 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0056fe94), iVar1 != 0)) {
      *DAT_0056fe98 = DAT_0056fe9c;
    }
    if (DAT_0056fe98 != param_2) {
      if (((*DAT_0056fea0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0056fea0), iVar1 != 0)) {
        *DAT_0056fea4 = DAT_0056fea8;
      }
      if (DAT_0056fea4 != param_2) {
        if (((*DAT_0056feac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0056feac), iVar1 != 0))
        {
          *DAT_0056feb0 = DAT_0056feb4;
        }
        if (DAT_0056feb0 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


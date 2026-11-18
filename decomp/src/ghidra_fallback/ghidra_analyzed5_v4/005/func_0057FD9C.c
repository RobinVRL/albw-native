#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057fe98;
extern undefined4 *DAT_0057fe9c;
extern undefined4 DAT_0057fea0;
extern uint *DAT_0057fea4;
extern undefined4 *DAT_0057fea8;
extern undefined4 DAT_0057feac;
extern uint *DAT_0057feb0;
extern undefined4 *DAT_0057feb4;
extern undefined4 DAT_0057feb8;
extern uint *DAT_0057febc;
extern undefined4 *DAT_0057fec0;
extern undefined4 DAT_0057fec4;

// USA 0057FD9C <- EU 0057FD74 (Ghidra, non-matching)
// GLOBAL DAT_0057fe98 uint *
// GLOBAL DAT_0057fe9c undefined4 *
// GLOBAL DAT_0057fea0 undefined4
// GLOBAL DAT_0057fea4 uint *
// GLOBAL DAT_0057fea8 undefined4 *
// GLOBAL DAT_0057feac undefined4
// GLOBAL DAT_0057feb0 uint *
// GLOBAL DAT_0057feb4 undefined4 *
// GLOBAL DAT_0057feb8 undefined4
// GLOBAL DAT_0057febc uint *
// GLOBAL DAT_0057fec0 undefined4 *
// GLOBAL DAT_0057fec4 undefined4

undefined4 func_0057FD9C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057fe98 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057fe98), iVar1 != 0)) {
    *DAT_0057fe9c = DAT_0057fea0;
  }
  if (DAT_0057fe9c != param_2) {
    if (((*DAT_0057fea4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057fea4), iVar1 != 0)) {
      *DAT_0057fea8 = DAT_0057feac;
    }
    if (DAT_0057fea8 != param_2) {
      if (((*DAT_0057feb0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057feb0), iVar1 != 0)) {
        *DAT_0057feb4 = DAT_0057feb8;
      }
      if (DAT_0057feb4 != param_2) {
        if (((*DAT_0057febc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057febc), iVar1 != 0))
        {
          *DAT_0057fec0 = DAT_0057fec4;
        }
        if (DAT_0057fec0 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


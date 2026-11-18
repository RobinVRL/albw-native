#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057c4e4;
extern undefined4 *DAT_0057c4e8;
extern undefined4 DAT_0057c4ec;
extern uint *DAT_0057c4f0;
extern undefined4 *DAT_0057c4f4;
extern undefined4 DAT_0057c4f8;
extern uint *DAT_0057c4fc;
extern undefined4 *DAT_0057c500;
extern undefined4 DAT_0057c504;
extern uint *DAT_0057c508;
extern undefined4 *DAT_0057c50c;
extern undefined4 DAT_0057c510;
extern uint *DAT_0057c514;
extern undefined4 *DAT_0057c518;
extern undefined4 DAT_0057c51c;

// USA 0057C3A4 <- EU 0057C37C (Ghidra, non-matching)
// GLOBAL DAT_0057c4e4 uint *
// GLOBAL DAT_0057c4e8 undefined4 *
// GLOBAL DAT_0057c4ec undefined4
// GLOBAL DAT_0057c4f0 uint *
// GLOBAL DAT_0057c4f4 undefined4 *
// GLOBAL DAT_0057c4f8 undefined4
// GLOBAL DAT_0057c4fc uint *
// GLOBAL DAT_0057c500 undefined4 *
// GLOBAL DAT_0057c504 undefined4
// GLOBAL DAT_0057c508 uint *
// GLOBAL DAT_0057c50c undefined4 *
// GLOBAL DAT_0057c510 undefined4
// GLOBAL DAT_0057c514 uint *
// GLOBAL DAT_0057c518 undefined4 *
// GLOBAL DAT_0057c51c undefined4

undefined4 func_0057C3A4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057c4e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c4e4), iVar1 != 0)) {
    *DAT_0057c4e8 = DAT_0057c4ec;
  }
  if (DAT_0057c4e8 != param_2) {
    if (((*DAT_0057c4f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c4f0), iVar1 != 0)) {
      *DAT_0057c4f4 = DAT_0057c4f8;
    }
    if (DAT_0057c4f4 != param_2) {
      if (((*DAT_0057c4fc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c4fc), iVar1 != 0)) {
        *DAT_0057c500 = DAT_0057c504;
      }
      if (DAT_0057c500 != param_2) {
        if (((*DAT_0057c508 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c508), iVar1 != 0))
        {
          *DAT_0057c50c = DAT_0057c510;
        }
        if (DAT_0057c50c != param_2) {
          if (((*DAT_0057c514 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c514), iVar1 != 0)
             ) {
            *DAT_0057c518 = DAT_0057c51c;
          }
          if (DAT_0057c518 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


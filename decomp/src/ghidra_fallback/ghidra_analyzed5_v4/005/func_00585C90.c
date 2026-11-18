#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00585dd0;
extern undefined4 *DAT_00585dd4;
extern undefined4 DAT_00585dd8;
extern uint *DAT_00585ddc;
extern undefined4 *DAT_00585de0;
extern undefined4 DAT_00585de4;
extern uint *DAT_00585de8;
extern undefined4 *DAT_00585dec;
extern undefined4 DAT_00585df0;
extern uint *DAT_00585df4;
extern undefined4 *DAT_00585df8;
extern undefined4 DAT_00585dfc;
extern uint *DAT_00585e00;
extern undefined4 *DAT_00585e04;
extern undefined4 DAT_00585e08;

// USA 00585C90 <- EU 00585C68 (Ghidra, non-matching)
// GLOBAL DAT_00585dd0 uint *
// GLOBAL DAT_00585dd4 undefined4 *
// GLOBAL DAT_00585dd8 undefined4
// GLOBAL DAT_00585ddc uint *
// GLOBAL DAT_00585de0 undefined4 *
// GLOBAL DAT_00585de4 undefined4
// GLOBAL DAT_00585de8 uint *
// GLOBAL DAT_00585dec undefined4 *
// GLOBAL DAT_00585df0 undefined4
// GLOBAL DAT_00585df4 uint *
// GLOBAL DAT_00585df8 undefined4 *
// GLOBAL DAT_00585dfc undefined4
// GLOBAL DAT_00585e00 uint *
// GLOBAL DAT_00585e04 undefined4 *
// GLOBAL DAT_00585e08 undefined4

undefined4 func_00585C90(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00585dd0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00585dd0), iVar1 != 0)) {
    *DAT_00585dd4 = DAT_00585dd8;
  }
  if (DAT_00585dd4 != param_2) {
    if (((*DAT_00585ddc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00585ddc), iVar1 != 0)) {
      *DAT_00585de0 = DAT_00585de4;
    }
    if (DAT_00585de0 != param_2) {
      if (((*DAT_00585de8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00585de8), iVar1 != 0)) {
        *DAT_00585dec = DAT_00585df0;
      }
      if (DAT_00585dec != param_2) {
        if (((*DAT_00585df4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00585df4), iVar1 != 0))
        {
          *DAT_00585df8 = DAT_00585dfc;
        }
        if (DAT_00585df8 != param_2) {
          if (((*DAT_00585e00 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00585e00), iVar1 != 0)
             ) {
            *DAT_00585e04 = DAT_00585e08;
          }
          if (DAT_00585e04 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


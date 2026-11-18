#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00544de8;
extern undefined4 *DAT_00544dec;
extern undefined4 DAT_00544df0;
extern uint *DAT_00544df4;
extern undefined4 *DAT_00544df8;
extern undefined4 DAT_00544dfc;
extern uint *DAT_00544e00;
extern undefined4 *DAT_00544e04;
extern undefined4 DAT_00544e08;
extern uint *DAT_00544e0c;
extern undefined4 *DAT_00544e10;
extern undefined4 DAT_00544e14;
extern uint *DAT_00544e18;
extern undefined4 *DAT_00544e1c;
extern undefined4 DAT_00544e20;

// USA 00544CA8 <- EU 00544C80 (Ghidra, non-matching)
// GLOBAL DAT_00544de8 uint *
// GLOBAL DAT_00544dec undefined4 *
// GLOBAL DAT_00544df0 undefined4
// GLOBAL DAT_00544df4 uint *
// GLOBAL DAT_00544df8 undefined4 *
// GLOBAL DAT_00544dfc undefined4
// GLOBAL DAT_00544e00 uint *
// GLOBAL DAT_00544e04 undefined4 *
// GLOBAL DAT_00544e08 undefined4
// GLOBAL DAT_00544e0c uint *
// GLOBAL DAT_00544e10 undefined4 *
// GLOBAL DAT_00544e14 undefined4
// GLOBAL DAT_00544e18 uint *
// GLOBAL DAT_00544e1c undefined4 *
// GLOBAL DAT_00544e20 undefined4

undefined4 func_00544CA8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00544de8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00544de8), iVar1 != 0)) {
    *DAT_00544dec = DAT_00544df0;
  }
  if (DAT_00544dec != param_2) {
    if (((*DAT_00544df4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00544df4), iVar1 != 0)) {
      *DAT_00544df8 = DAT_00544dfc;
    }
    if (DAT_00544df8 != param_2) {
      if (((*DAT_00544e00 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00544e00), iVar1 != 0)) {
        *DAT_00544e04 = DAT_00544e08;
      }
      if (DAT_00544e04 != param_2) {
        if (((*DAT_00544e0c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00544e0c), iVar1 != 0))
        {
          *DAT_00544e10 = DAT_00544e14;
        }
        if (DAT_00544e10 != param_2) {
          if (((*DAT_00544e18 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00544e18), iVar1 != 0)
             ) {
            *DAT_00544e1c = DAT_00544e20;
          }
          if (DAT_00544e1c != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


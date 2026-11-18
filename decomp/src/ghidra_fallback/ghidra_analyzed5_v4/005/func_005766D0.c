#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00576810;
extern undefined4 *DAT_00576814;
extern undefined4 DAT_00576818;
extern uint *DAT_0057681c;
extern undefined4 *DAT_00576820;
extern undefined4 DAT_00576824;
extern uint *DAT_00576828;
extern undefined4 *DAT_0057682c;
extern undefined4 DAT_00576830;
extern uint *DAT_00576834;
extern undefined4 *DAT_00576838;
extern undefined4 DAT_0057683c;
extern uint *DAT_00576840;
extern undefined4 *DAT_00576844;
extern undefined4 DAT_00576848;

// USA 005766D0 <- EU 005766A8 (Ghidra, non-matching)
// GLOBAL DAT_00576810 uint *
// GLOBAL DAT_00576814 undefined4 *
// GLOBAL DAT_00576818 undefined4
// GLOBAL DAT_0057681c uint *
// GLOBAL DAT_00576820 undefined4 *
// GLOBAL DAT_00576824 undefined4
// GLOBAL DAT_00576828 uint *
// GLOBAL DAT_0057682c undefined4 *
// GLOBAL DAT_00576830 undefined4
// GLOBAL DAT_00576834 uint *
// GLOBAL DAT_00576838 undefined4 *
// GLOBAL DAT_0057683c undefined4
// GLOBAL DAT_00576840 uint *
// GLOBAL DAT_00576844 undefined4 *
// GLOBAL DAT_00576848 undefined4

undefined4 func_005766D0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00576810 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576810), iVar1 != 0)) {
    *DAT_00576814 = DAT_00576818;
  }
  if (DAT_00576814 != param_2) {
    if (((*DAT_0057681c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057681c), iVar1 != 0)) {
      *DAT_00576820 = DAT_00576824;
    }
    if (DAT_00576820 != param_2) {
      if (((*DAT_00576828 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576828), iVar1 != 0)) {
        *DAT_0057682c = DAT_00576830;
      }
      if (DAT_0057682c != param_2) {
        if (((*DAT_00576834 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576834), iVar1 != 0))
        {
          *DAT_00576838 = DAT_0057683c;
        }
        if (DAT_00576838 != param_2) {
          if (((*DAT_00576840 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576840), iVar1 != 0)
             ) {
            *DAT_00576844 = DAT_00576848;
          }
          if (DAT_00576844 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


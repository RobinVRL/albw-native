#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00533808;
extern undefined4 *DAT_0053380c;
extern undefined4 DAT_00533810;
extern uint *DAT_00533814;
extern undefined4 *DAT_00533818;
extern undefined4 DAT_0053381c;
extern uint *DAT_00533820;
extern undefined4 *DAT_00533824;
extern undefined4 DAT_00533828;
extern uint *DAT_0053382c;
extern undefined4 *DAT_00533830;
extern undefined4 DAT_00533834;
extern uint *DAT_00533838;
extern undefined4 *DAT_0053383c;
extern undefined4 DAT_00533840;
extern uint *DAT_00533844;
extern undefined4 *DAT_00533848;
extern undefined4 DAT_0053384c;

// USA 00533684 <- EU 0053365C (Ghidra, non-matching)
// GLOBAL DAT_00533808 uint *
// GLOBAL DAT_0053380c undefined4 *
// GLOBAL DAT_00533810 undefined4
// GLOBAL DAT_00533814 uint *
// GLOBAL DAT_00533818 undefined4 *
// GLOBAL DAT_0053381c undefined4
// GLOBAL DAT_00533820 uint *
// GLOBAL DAT_00533824 undefined4 *
// GLOBAL DAT_00533828 undefined4
// GLOBAL DAT_0053382c uint *
// GLOBAL DAT_00533830 undefined4 *
// GLOBAL DAT_00533834 undefined4
// GLOBAL DAT_00533838 uint *
// GLOBAL DAT_0053383c undefined4 *
// GLOBAL DAT_00533840 undefined4
// GLOBAL DAT_00533844 uint *
// GLOBAL DAT_00533848 undefined4 *
// GLOBAL DAT_0053384c undefined4

undefined4 func_00533684(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00533808 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00533808), iVar1 != 0)) {
    *DAT_0053380c = DAT_00533810;
  }
  if (DAT_0053380c != param_2) {
    if (((*DAT_00533814 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00533814), iVar1 != 0)) {
      *DAT_00533818 = DAT_0053381c;
    }
    if (DAT_00533818 != param_2) {
      if (((*DAT_00533820 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00533820), iVar1 != 0)) {
        *DAT_00533824 = DAT_00533828;
      }
      if (DAT_00533824 != param_2) {
        if (((*DAT_0053382c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053382c), iVar1 != 0))
        {
          *DAT_00533830 = DAT_00533834;
        }
        if (DAT_00533830 != param_2) {
          if (((*DAT_00533838 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00533838), iVar1 != 0)
             ) {
            *DAT_0053383c = DAT_00533840;
          }
          if (DAT_0053383c != param_2) {
            if (((*DAT_00533844 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_00533844), iVar1 != 0)) {
              *DAT_00533848 = DAT_0053384c;
            }
            if (DAT_00533848 != param_2) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}


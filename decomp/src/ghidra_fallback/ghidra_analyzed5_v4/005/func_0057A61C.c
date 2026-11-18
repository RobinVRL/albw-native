#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057a75c;
extern undefined4 *DAT_0057a760;
extern undefined4 DAT_0057a764;
extern uint *DAT_0057a768;
extern undefined4 *DAT_0057a76c;
extern undefined4 DAT_0057a770;
extern uint *DAT_0057a774;
extern undefined4 *DAT_0057a778;
extern undefined4 DAT_0057a77c;
extern uint *DAT_0057a780;
extern undefined4 *DAT_0057a784;
extern undefined4 DAT_0057a788;
extern uint *DAT_0057a78c;
extern undefined4 *DAT_0057a790;
extern undefined4 DAT_0057a794;

// USA 0057A61C <- EU 0057A5F4 (Ghidra, non-matching)
// GLOBAL DAT_0057a75c uint *
// GLOBAL DAT_0057a760 undefined4 *
// GLOBAL DAT_0057a764 undefined4
// GLOBAL DAT_0057a768 uint *
// GLOBAL DAT_0057a76c undefined4 *
// GLOBAL DAT_0057a770 undefined4
// GLOBAL DAT_0057a774 uint *
// GLOBAL DAT_0057a778 undefined4 *
// GLOBAL DAT_0057a77c undefined4
// GLOBAL DAT_0057a780 uint *
// GLOBAL DAT_0057a784 undefined4 *
// GLOBAL DAT_0057a788 undefined4
// GLOBAL DAT_0057a78c uint *
// GLOBAL DAT_0057a790 undefined4 *
// GLOBAL DAT_0057a794 undefined4

undefined4 func_0057A61C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057a75c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057a75c), iVar1 != 0)) {
    *DAT_0057a760 = DAT_0057a764;
  }
  if (DAT_0057a760 != param_2) {
    if (((*DAT_0057a768 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057a768), iVar1 != 0)) {
      *DAT_0057a76c = DAT_0057a770;
    }
    if (DAT_0057a76c != param_2) {
      if (((*DAT_0057a774 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057a774), iVar1 != 0)) {
        *DAT_0057a778 = DAT_0057a77c;
      }
      if (DAT_0057a778 != param_2) {
        if (((*DAT_0057a780 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057a780), iVar1 != 0))
        {
          *DAT_0057a784 = DAT_0057a788;
        }
        if (DAT_0057a784 != param_2) {
          if (((*DAT_0057a78c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057a78c), iVar1 != 0)
             ) {
            *DAT_0057a790 = DAT_0057a794;
          }
          if (DAT_0057a790 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


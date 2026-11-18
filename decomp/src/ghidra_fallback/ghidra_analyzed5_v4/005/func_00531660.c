#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053175c;
extern undefined4 *DAT_00531760;
extern undefined4 DAT_00531764;
extern uint *DAT_00531768;
extern undefined4 *DAT_0053176c;
extern undefined4 DAT_00531770;
extern uint *DAT_00531774;
extern undefined4 *DAT_00531778;
extern undefined4 DAT_0053177c;
extern uint *DAT_00531780;
extern undefined4 *DAT_00531784;
extern undefined4 DAT_00531788;

// USA 00531660 <- EU 00531638 (Ghidra, non-matching)
// GLOBAL DAT_0053175c uint *
// GLOBAL DAT_00531760 undefined4 *
// GLOBAL DAT_00531764 undefined4
// GLOBAL DAT_00531768 uint *
// GLOBAL DAT_0053176c undefined4 *
// GLOBAL DAT_00531770 undefined4
// GLOBAL DAT_00531774 uint *
// GLOBAL DAT_00531778 undefined4 *
// GLOBAL DAT_0053177c undefined4
// GLOBAL DAT_00531780 uint *
// GLOBAL DAT_00531784 undefined4 *
// GLOBAL DAT_00531788 undefined4

undefined4 func_00531660(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053175c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053175c), iVar1 != 0)) {
    *DAT_00531760 = DAT_00531764;
  }
  if (DAT_00531760 != param_2) {
    if (((*DAT_00531768 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00531768), iVar1 != 0)) {
      *DAT_0053176c = DAT_00531770;
    }
    if (DAT_0053176c != param_2) {
      if (((*DAT_00531774 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00531774), iVar1 != 0)) {
        *DAT_00531778 = DAT_0053177c;
      }
      if (DAT_00531778 != param_2) {
        if (((*DAT_00531780 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00531780), iVar1 != 0))
        {
          *DAT_00531784 = DAT_00531788;
        }
        if (DAT_00531784 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


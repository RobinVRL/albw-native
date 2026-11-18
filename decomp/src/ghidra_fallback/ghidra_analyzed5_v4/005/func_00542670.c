#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054276c;
extern undefined4 *DAT_00542770;
extern undefined4 DAT_00542774;
extern uint *DAT_00542778;
extern undefined4 *DAT_0054277c;
extern undefined4 DAT_00542780;
extern uint *DAT_00542784;
extern undefined4 *DAT_00542788;
extern undefined4 DAT_0054278c;
extern uint *DAT_00542790;
extern undefined4 *DAT_00542794;
extern undefined4 DAT_00542798;

// USA 00542670 <- EU 00542648 (Ghidra, non-matching)
// GLOBAL DAT_0054276c uint *
// GLOBAL DAT_00542770 undefined4 *
// GLOBAL DAT_00542774 undefined4
// GLOBAL DAT_00542778 uint *
// GLOBAL DAT_0054277c undefined4 *
// GLOBAL DAT_00542780 undefined4
// GLOBAL DAT_00542784 uint *
// GLOBAL DAT_00542788 undefined4 *
// GLOBAL DAT_0054278c undefined4
// GLOBAL DAT_00542790 uint *
// GLOBAL DAT_00542794 undefined4 *
// GLOBAL DAT_00542798 undefined4

undefined4 func_00542670(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054276c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054276c), iVar1 != 0)) {
    *DAT_00542770 = DAT_00542774;
  }
  if (DAT_00542770 != param_2) {
    if (((*DAT_00542778 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00542778), iVar1 != 0)) {
      *DAT_0054277c = DAT_00542780;
    }
    if (DAT_0054277c != param_2) {
      if (((*DAT_00542784 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00542784), iVar1 != 0)) {
        *DAT_00542788 = DAT_0054278c;
      }
      if (DAT_00542788 != param_2) {
        if (((*DAT_00542790 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00542790), iVar1 != 0))
        {
          *DAT_00542794 = DAT_00542798;
        }
        if (DAT_00542794 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


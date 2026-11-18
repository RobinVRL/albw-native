#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004B9748(undefined4 *param_1);
extern uint *DAT_00572828;
extern undefined4 *DAT_0057282c;
extern undefined4 DAT_00572830;
extern uint *DAT_00572834;
extern undefined4 *DAT_00572838;
extern undefined4 DAT_0057283c;
extern uint *DAT_00572840;
extern undefined4 *DAT_00572844;
extern undefined4 DAT_00572848;

// USA 0057276C <- EU 00572744 (Ghidra, non-matching)
// GLOBAL DAT_00572828 uint *
// GLOBAL DAT_0057282c undefined4 *
// GLOBAL DAT_00572830 undefined4
// GLOBAL DAT_00572834 uint *
// GLOBAL DAT_00572838 undefined4 *
// GLOBAL DAT_0057283c undefined4
// GLOBAL DAT_00572840 uint *
// GLOBAL DAT_00572844 undefined4 *
// GLOBAL DAT_00572848 undefined4

undefined4 func_0057276C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00572828 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572828), iVar1 != 0)) {
    *DAT_0057282c = DAT_00572830;
  }
  if (DAT_0057282c != param_2) {
    if (((*DAT_00572834 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572834), iVar1 != 0)) {
      *DAT_00572838 = DAT_0057283c;
    }
    if (DAT_00572838 != param_2) {
      if (((*DAT_00572840 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572840), iVar1 != 0)) {
        *DAT_00572844 = DAT_00572848;
      }
      if (DAT_00572844 != param_2) {
        uVar2 = func_004B9748(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}


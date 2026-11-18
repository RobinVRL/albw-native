#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057f214;
extern undefined4 *DAT_0057f218;
extern undefined4 DAT_0057f21c;
extern uint *DAT_0057f220;
extern undefined4 *DAT_0057f224;
extern undefined4 DAT_0057f228;
extern uint *DAT_0057f22c;
extern undefined4 *DAT_0057f230;
extern undefined4 DAT_0057f234;

// USA 0057F15C <- EU 0057F134 (Ghidra, non-matching)
// GLOBAL DAT_0057f214 uint *
// GLOBAL DAT_0057f218 undefined4 *
// GLOBAL DAT_0057f21c undefined4
// GLOBAL DAT_0057f220 uint *
// GLOBAL DAT_0057f224 undefined4 *
// GLOBAL DAT_0057f228 undefined4
// GLOBAL DAT_0057f22c uint *
// GLOBAL DAT_0057f230 undefined4 *
// GLOBAL DAT_0057f234 undefined4

undefined4 func_0057F15C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057f214 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057f214), iVar1 != 0)) {
    *DAT_0057f218 = DAT_0057f21c;
  }
  if (DAT_0057f218 != param_2) {
    if (((*DAT_0057f220 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057f220), iVar1 != 0)) {
      *DAT_0057f224 = DAT_0057f228;
    }
    if (DAT_0057f224 != param_2) {
      if (((*DAT_0057f22c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057f22c), iVar1 != 0)) {
        *DAT_0057f230 = DAT_0057f234;
      }
      if (DAT_0057f230 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


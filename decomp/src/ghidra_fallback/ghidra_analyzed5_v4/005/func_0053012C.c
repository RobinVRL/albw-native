#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00530228;
extern undefined4 *DAT_0053022c;
extern undefined4 DAT_00530230;
extern uint *DAT_00530234;
extern undefined4 *DAT_00530238;
extern undefined4 DAT_0053023c;
extern uint *DAT_00530240;
extern undefined4 *DAT_00530244;
extern undefined4 DAT_00530248;
extern uint *DAT_0053024c;
extern undefined4 *DAT_00530250;
extern undefined4 DAT_00530254;

// USA 0053012C <- EU 00530104 (Ghidra, non-matching)
// GLOBAL DAT_00530228 uint *
// GLOBAL DAT_0053022c undefined4 *
// GLOBAL DAT_00530230 undefined4
// GLOBAL DAT_00530234 uint *
// GLOBAL DAT_00530238 undefined4 *
// GLOBAL DAT_0053023c undefined4
// GLOBAL DAT_00530240 uint *
// GLOBAL DAT_00530244 undefined4 *
// GLOBAL DAT_00530248 undefined4
// GLOBAL DAT_0053024c uint *
// GLOBAL DAT_00530250 undefined4 *
// GLOBAL DAT_00530254 undefined4

undefined4 func_0053012C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00530228 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00530228), iVar1 != 0)) {
    *DAT_0053022c = DAT_00530230;
  }
  if (DAT_0053022c != param_2) {
    if (((*DAT_00530234 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00530234), iVar1 != 0)) {
      *DAT_00530238 = DAT_0053023c;
    }
    if (DAT_00530238 != param_2) {
      if (((*DAT_00530240 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00530240), iVar1 != 0)) {
        *DAT_00530244 = DAT_00530248;
      }
      if (DAT_00530244 != param_2) {
        if (((*DAT_0053024c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053024c), iVar1 != 0))
        {
          *DAT_00530250 = DAT_00530254;
        }
        if (DAT_00530250 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00573ee8;
extern undefined4 *DAT_00573eec;
extern undefined4 DAT_00573ef0;
extern uint *DAT_00573ef4;
extern undefined4 *DAT_00573ef8;
extern undefined4 DAT_00573efc;
extern uint *DAT_00573f00;
extern undefined4 *DAT_00573f04;
extern undefined4 DAT_00573f08;

// USA 00573E30 <- EU 00573E08 (Ghidra, non-matching)
// GLOBAL DAT_00573ee8 uint *
// GLOBAL DAT_00573eec undefined4 *
// GLOBAL DAT_00573ef0 undefined4
// GLOBAL DAT_00573ef4 uint *
// GLOBAL DAT_00573ef8 undefined4 *
// GLOBAL DAT_00573efc undefined4
// GLOBAL DAT_00573f00 uint *
// GLOBAL DAT_00573f04 undefined4 *
// GLOBAL DAT_00573f08 undefined4

undefined4 func_00573E30(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00573ee8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00573ee8), iVar1 != 0)) {
    *DAT_00573eec = DAT_00573ef0;
  }
  if (DAT_00573eec != param_2) {
    if (((*DAT_00573ef4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00573ef4), iVar1 != 0)) {
      *DAT_00573ef8 = DAT_00573efc;
    }
    if (DAT_00573ef8 != param_2) {
      if (((*DAT_00573f00 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00573f00), iVar1 != 0)) {
        *DAT_00573f04 = DAT_00573f08;
      }
      if (DAT_00573f04 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


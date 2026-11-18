#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053751c;
extern undefined4 *DAT_00537520;
extern undefined4 DAT_00537524;
extern uint *DAT_00537528;
extern undefined4 *DAT_0053752c;
extern undefined4 DAT_00537530;
extern uint *DAT_00537534;
extern undefined4 *DAT_00537538;
extern undefined4 DAT_0053753c;

// USA 00537464 <- EU 0053743C (Ghidra, non-matching)
// GLOBAL DAT_0053751c uint *
// GLOBAL DAT_00537520 undefined4 *
// GLOBAL DAT_00537524 undefined4
// GLOBAL DAT_00537528 uint *
// GLOBAL DAT_0053752c undefined4 *
// GLOBAL DAT_00537530 undefined4
// GLOBAL DAT_00537534 uint *
// GLOBAL DAT_00537538 undefined4 *
// GLOBAL DAT_0053753c undefined4

undefined4 func_00537464(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053751c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053751c), iVar1 != 0)) {
    *DAT_00537520 = DAT_00537524;
  }
  if (DAT_00537520 != param_2) {
    if (((*DAT_00537528 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00537528), iVar1 != 0)) {
      *DAT_0053752c = DAT_00537530;
    }
    if (DAT_0053752c != param_2) {
      if (((*DAT_00537534 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00537534), iVar1 != 0)) {
        *DAT_00537538 = DAT_0053753c;
      }
      if (DAT_00537538 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


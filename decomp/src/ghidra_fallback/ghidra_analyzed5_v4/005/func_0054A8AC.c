#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054a964;
extern undefined4 *DAT_0054a968;
extern undefined4 DAT_0054a96c;
extern uint *DAT_0054a970;
extern undefined4 *DAT_0054a974;
extern undefined4 DAT_0054a978;
extern uint *DAT_0054a97c;
extern undefined4 *DAT_0054a980;
extern undefined4 DAT_0054a984;

// USA 0054A8AC <- EU 0054A884 (Ghidra, non-matching)
// GLOBAL DAT_0054a964 uint *
// GLOBAL DAT_0054a968 undefined4 *
// GLOBAL DAT_0054a96c undefined4
// GLOBAL DAT_0054a970 uint *
// GLOBAL DAT_0054a974 undefined4 *
// GLOBAL DAT_0054a978 undefined4
// GLOBAL DAT_0054a97c uint *
// GLOBAL DAT_0054a980 undefined4 *
// GLOBAL DAT_0054a984 undefined4

undefined4 func_0054A8AC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054a964 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054a964), iVar1 != 0)) {
    *DAT_0054a968 = DAT_0054a96c;
  }
  if (DAT_0054a968 != param_2) {
    if (((*DAT_0054a970 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054a970), iVar1 != 0)) {
      *DAT_0054a974 = DAT_0054a978;
    }
    if (DAT_0054a974 != param_2) {
      if (((*DAT_0054a97c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054a97c), iVar1 != 0)) {
        *DAT_0054a980 = DAT_0054a984;
      }
      if (DAT_0054a980 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


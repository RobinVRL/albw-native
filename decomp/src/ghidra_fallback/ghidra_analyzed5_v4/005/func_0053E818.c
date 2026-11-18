#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053e958;
extern undefined4 *DAT_0053e95c;
extern undefined4 DAT_0053e960;
extern uint *DAT_0053e964;
extern undefined4 *DAT_0053e968;
extern undefined4 DAT_0053e96c;
extern uint *DAT_0053e970;
extern undefined4 *DAT_0053e974;
extern undefined4 DAT_0053e978;
extern uint *DAT_0053e97c;
extern undefined4 *DAT_0053e980;
extern undefined4 DAT_0053e984;
extern uint *DAT_0053e988;
extern undefined4 *DAT_0053e98c;
extern undefined4 DAT_0053e990;

// USA 0053E818 <- EU 0053E7F0 (Ghidra, non-matching)
// GLOBAL DAT_0053e958 uint *
// GLOBAL DAT_0053e95c undefined4 *
// GLOBAL DAT_0053e960 undefined4
// GLOBAL DAT_0053e964 uint *
// GLOBAL DAT_0053e968 undefined4 *
// GLOBAL DAT_0053e96c undefined4
// GLOBAL DAT_0053e970 uint *
// GLOBAL DAT_0053e974 undefined4 *
// GLOBAL DAT_0053e978 undefined4
// GLOBAL DAT_0053e97c uint *
// GLOBAL DAT_0053e980 undefined4 *
// GLOBAL DAT_0053e984 undefined4
// GLOBAL DAT_0053e988 uint *
// GLOBAL DAT_0053e98c undefined4 *
// GLOBAL DAT_0053e990 undefined4

undefined4 func_0053E818(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053e958 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e958), iVar1 != 0)) {
    *DAT_0053e95c = DAT_0053e960;
  }
  if (DAT_0053e95c != param_2) {
    if (((*DAT_0053e964 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e964), iVar1 != 0)) {
      *DAT_0053e968 = DAT_0053e96c;
    }
    if (DAT_0053e968 != param_2) {
      if (((*DAT_0053e970 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e970), iVar1 != 0)) {
        *DAT_0053e974 = DAT_0053e978;
      }
      if (DAT_0053e974 != param_2) {
        if (((*DAT_0053e97c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e97c), iVar1 != 0))
        {
          *DAT_0053e980 = DAT_0053e984;
        }
        if (DAT_0053e980 != param_2) {
          if (((*DAT_0053e988 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e988), iVar1 != 0)
             ) {
            *DAT_0053e98c = DAT_0053e990;
          }
          if (DAT_0053e98c != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


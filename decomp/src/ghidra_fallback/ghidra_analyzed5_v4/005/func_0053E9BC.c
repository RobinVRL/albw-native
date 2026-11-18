#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053eab8;
extern undefined4 *DAT_0053eabc;
extern undefined4 DAT_0053eac0;
extern uint *DAT_0053eac4;
extern undefined4 *DAT_0053eac8;
extern undefined4 DAT_0053eacc;
extern uint *DAT_0053ead0;
extern undefined4 *DAT_0053ead4;
extern undefined4 DAT_0053ead8;
extern uint *DAT_0053eadc;
extern undefined4 *DAT_0053eae0;
extern undefined4 DAT_0053eae4;

// USA 0053E9BC <- EU 0053E994 (Ghidra, non-matching)
// GLOBAL DAT_0053eab8 uint *
// GLOBAL DAT_0053eabc undefined4 *
// GLOBAL DAT_0053eac0 undefined4
// GLOBAL DAT_0053eac4 uint *
// GLOBAL DAT_0053eac8 undefined4 *
// GLOBAL DAT_0053eacc undefined4
// GLOBAL DAT_0053ead0 uint *
// GLOBAL DAT_0053ead4 undefined4 *
// GLOBAL DAT_0053ead8 undefined4
// GLOBAL DAT_0053eadc uint *
// GLOBAL DAT_0053eae0 undefined4 *
// GLOBAL DAT_0053eae4 undefined4

undefined4 func_0053E9BC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053eab8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053eab8), iVar1 != 0)) {
    *DAT_0053eabc = DAT_0053eac0;
  }
  if (DAT_0053eabc != param_2) {
    if (((*DAT_0053eac4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053eac4), iVar1 != 0)) {
      *DAT_0053eac8 = DAT_0053eacc;
    }
    if (DAT_0053eac8 != param_2) {
      if (((*DAT_0053ead0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053ead0), iVar1 != 0)) {
        *DAT_0053ead4 = DAT_0053ead8;
      }
      if (DAT_0053ead4 != param_2) {
        if (((*DAT_0053eadc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053eadc), iVar1 != 0))
        {
          *DAT_0053eae0 = DAT_0053eae4;
        }
        if (DAT_0053eae0 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


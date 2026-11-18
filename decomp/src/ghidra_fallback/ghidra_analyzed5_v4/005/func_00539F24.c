#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00539fdc;
extern undefined4 *DAT_00539fe0;
extern undefined4 DAT_00539fe4;
extern uint *DAT_00539fe8;
extern undefined4 *DAT_00539fec;
extern undefined4 DAT_00539ff0;
extern uint *DAT_00539ff4;
extern undefined4 *DAT_00539ff8;
extern undefined4 DAT_00539ffc;

// USA 00539F24 <- EU 00539EFC (Ghidra, non-matching)
// GLOBAL DAT_00539fdc uint *
// GLOBAL DAT_00539fe0 undefined4 *
// GLOBAL DAT_00539fe4 undefined4
// GLOBAL DAT_00539fe8 uint *
// GLOBAL DAT_00539fec undefined4 *
// GLOBAL DAT_00539ff0 undefined4
// GLOBAL DAT_00539ff4 uint *
// GLOBAL DAT_00539ff8 undefined4 *
// GLOBAL DAT_00539ffc undefined4

undefined4 func_00539F24(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00539fdc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00539fdc), iVar1 != 0)) {
    *DAT_00539fe0 = DAT_00539fe4;
  }
  if (DAT_00539fe0 != param_2) {
    if (((*DAT_00539fe8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00539fe8), iVar1 != 0)) {
      *DAT_00539fec = DAT_00539ff0;
    }
    if (DAT_00539fec != param_2) {
      if (((*DAT_00539ff4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00539ff4), iVar1 != 0)) {
        *DAT_00539ff8 = DAT_00539ffc;
      }
      if (DAT_00539ff8 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


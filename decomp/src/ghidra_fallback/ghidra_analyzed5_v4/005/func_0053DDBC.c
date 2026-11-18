#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053de74;
extern undefined4 *DAT_0053de78;
extern undefined4 DAT_0053de7c;
extern uint *DAT_0053de80;
extern undefined4 *DAT_0053de84;
extern undefined4 DAT_0053de88;
extern uint *DAT_0053de8c;
extern undefined4 *DAT_0053de90;
extern undefined4 DAT_0053de94;

// USA 0053DDBC <- EU 0053DD94 (Ghidra, non-matching)
// GLOBAL DAT_0053de74 uint *
// GLOBAL DAT_0053de78 undefined4 *
// GLOBAL DAT_0053de7c undefined4
// GLOBAL DAT_0053de80 uint *
// GLOBAL DAT_0053de84 undefined4 *
// GLOBAL DAT_0053de88 undefined4
// GLOBAL DAT_0053de8c uint *
// GLOBAL DAT_0053de90 undefined4 *
// GLOBAL DAT_0053de94 undefined4

undefined4 func_0053DDBC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053de74 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053de74), iVar1 != 0)) {
    *DAT_0053de78 = DAT_0053de7c;
  }
  if (DAT_0053de78 != param_2) {
    if (((*DAT_0053de80 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053de80), iVar1 != 0)) {
      *DAT_0053de84 = DAT_0053de88;
    }
    if (DAT_0053de84 != param_2) {
      if (((*DAT_0053de8c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053de8c), iVar1 != 0)) {
        *DAT_0053de90 = DAT_0053de94;
      }
      if (DAT_0053de90 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


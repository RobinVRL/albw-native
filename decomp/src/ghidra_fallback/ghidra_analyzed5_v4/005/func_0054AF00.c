#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054affc;
extern undefined4 *DAT_0054b000;
extern undefined4 DAT_0054b004;
extern uint *DAT_0054b008;
extern undefined4 *DAT_0054b00c;
extern undefined4 DAT_0054b010;
extern uint *DAT_0054b014;
extern undefined4 *DAT_0054b018;
extern undefined4 DAT_0054b01c;
extern uint *DAT_0054b020;
extern undefined4 *DAT_0054b024;
extern undefined4 DAT_0054b028;

// USA 0054AF00 <- EU 0054AED8 (Ghidra, non-matching)
// GLOBAL DAT_0054affc uint *
// GLOBAL DAT_0054b000 undefined4 *
// GLOBAL DAT_0054b004 undefined4
// GLOBAL DAT_0054b008 uint *
// GLOBAL DAT_0054b00c undefined4 *
// GLOBAL DAT_0054b010 undefined4
// GLOBAL DAT_0054b014 uint *
// GLOBAL DAT_0054b018 undefined4 *
// GLOBAL DAT_0054b01c undefined4
// GLOBAL DAT_0054b020 uint *
// GLOBAL DAT_0054b024 undefined4 *
// GLOBAL DAT_0054b028 undefined4

undefined4 func_0054AF00(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054affc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054affc), iVar1 != 0)) {
    *DAT_0054b000 = DAT_0054b004;
  }
  if (DAT_0054b000 != param_2) {
    if (((*DAT_0054b008 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054b008), iVar1 != 0)) {
      *DAT_0054b00c = DAT_0054b010;
    }
    if (DAT_0054b00c != param_2) {
      if (((*DAT_0054b014 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054b014), iVar1 != 0)) {
        *DAT_0054b018 = DAT_0054b01c;
      }
      if (DAT_0054b018 != param_2) {
        if (((*DAT_0054b020 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054b020), iVar1 != 0))
        {
          *DAT_0054b024 = DAT_0054b028;
        }
        if (DAT_0054b024 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


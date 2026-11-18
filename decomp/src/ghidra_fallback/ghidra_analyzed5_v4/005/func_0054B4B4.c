#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_0054b52c;
extern undefined4 *DAT_0054b530;
extern undefined4 DAT_0054b534;
extern uint *DAT_0054b538;
extern undefined4 *DAT_0054b53c;
extern undefined4 DAT_0054b540;

// USA 0054B4B4 <- EU 0054B48C (Ghidra, non-matching)
// GLOBAL DAT_0054b52c uint *
// GLOBAL DAT_0054b530 undefined4 *
// GLOBAL DAT_0054b534 undefined4
// GLOBAL DAT_0054b538 uint *
// GLOBAL DAT_0054b53c undefined4 *
// GLOBAL DAT_0054b540 undefined4

undefined4 func_0054B4B4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0054b52c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054b52c), iVar1 != 0)) {
    *DAT_0054b530 = DAT_0054b534;
  }
  if (DAT_0054b530 != param_2) {
    if (((*DAT_0054b538 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054b538), iVar1 != 0)) {
      *DAT_0054b53c = DAT_0054b540;
    }
    if (DAT_0054b53c != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}


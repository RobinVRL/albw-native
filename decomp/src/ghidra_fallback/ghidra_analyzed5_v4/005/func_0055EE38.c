#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055eef0;
extern undefined4 *DAT_0055eef4;
extern undefined4 DAT_0055eef8;
extern uint *DAT_0055eefc;
extern undefined4 *DAT_0055ef00;
extern undefined4 DAT_0055ef04;
extern uint *DAT_0055ef08;
extern undefined4 *DAT_0055ef0c;
extern undefined4 DAT_0055ef10;

// USA 0055EE38 <- EU 0055EE10 (Ghidra, non-matching)
// GLOBAL DAT_0055eef0 uint *
// GLOBAL DAT_0055eef4 undefined4 *
// GLOBAL DAT_0055eef8 undefined4
// GLOBAL DAT_0055eefc uint *
// GLOBAL DAT_0055ef00 undefined4 *
// GLOBAL DAT_0055ef04 undefined4
// GLOBAL DAT_0055ef08 uint *
// GLOBAL DAT_0055ef0c undefined4 *
// GLOBAL DAT_0055ef10 undefined4

undefined4 func_0055EE38(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055eef0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055eef0), iVar1 != 0)) {
    *DAT_0055eef4 = DAT_0055eef8;
  }
  if (DAT_0055eef4 != param_2) {
    if (((*DAT_0055eefc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055eefc), iVar1 != 0)) {
      *DAT_0055ef00 = DAT_0055ef04;
    }
    if (DAT_0055ef00 != param_2) {
      if (((*DAT_0055ef08 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055ef08), iVar1 != 0)) {
        *DAT_0055ef0c = DAT_0055ef10;
      }
      if (DAT_0055ef0c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


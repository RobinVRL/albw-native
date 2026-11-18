#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055b248;
extern undefined4 *DAT_0055b24c;
extern undefined4 DAT_0055b250;
extern uint *DAT_0055b254;
extern undefined4 *DAT_0055b258;
extern undefined4 DAT_0055b25c;
extern uint *DAT_0055b260;
extern undefined4 *DAT_0055b264;
extern undefined4 DAT_0055b268;

// USA 0055B190 <- EU 0055B168 (Ghidra, non-matching)
// GLOBAL DAT_0055b248 uint *
// GLOBAL DAT_0055b24c undefined4 *
// GLOBAL DAT_0055b250 undefined4
// GLOBAL DAT_0055b254 uint *
// GLOBAL DAT_0055b258 undefined4 *
// GLOBAL DAT_0055b25c undefined4
// GLOBAL DAT_0055b260 uint *
// GLOBAL DAT_0055b264 undefined4 *
// GLOBAL DAT_0055b268 undefined4

undefined4 func_0055B190(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055b248 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055b248), iVar1 != 0)) {
    *DAT_0055b24c = DAT_0055b250;
  }
  if (DAT_0055b24c != param_2) {
    if (((*DAT_0055b254 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055b254), iVar1 != 0)) {
      *DAT_0055b258 = DAT_0055b25c;
    }
    if (DAT_0055b258 != param_2) {
      if (((*DAT_0055b260 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055b260), iVar1 != 0)) {
        *DAT_0055b264 = DAT_0055b268;
      }
      if (DAT_0055b264 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


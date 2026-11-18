#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052b248;
extern undefined4 *DAT_0052b24c;
extern undefined4 DAT_0052b250;
extern uint *DAT_0052b254;
extern undefined4 *DAT_0052b258;
extern undefined4 DAT_0052b25c;
extern uint *DAT_0052b260;
extern undefined4 *DAT_0052b264;
extern undefined4 DAT_0052b268;

// USA 0052B190 <- EU 0052B168 (Ghidra, non-matching)
// GLOBAL DAT_0052b248 uint *
// GLOBAL DAT_0052b24c undefined4 *
// GLOBAL DAT_0052b250 undefined4
// GLOBAL DAT_0052b254 uint *
// GLOBAL DAT_0052b258 undefined4 *
// GLOBAL DAT_0052b25c undefined4
// GLOBAL DAT_0052b260 uint *
// GLOBAL DAT_0052b264 undefined4 *
// GLOBAL DAT_0052b268 undefined4

undefined4 func_0052B190(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052b248 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052b248), iVar1 != 0)) {
    *DAT_0052b24c = DAT_0052b250;
  }
  if (DAT_0052b24c != param_2) {
    if (((*DAT_0052b254 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052b254), iVar1 != 0)) {
      *DAT_0052b258 = DAT_0052b25c;
    }
    if (DAT_0052b258 != param_2) {
      if (((*DAT_0052b260 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052b260), iVar1 != 0)) {
        *DAT_0052b264 = DAT_0052b268;
      }
      if (DAT_0052b264 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057e518;
extern undefined4 *DAT_0057e51c;
extern undefined4 DAT_0057e520;
extern uint *DAT_0057e524;
extern undefined4 *DAT_0057e528;
extern undefined4 DAT_0057e52c;

// USA 0057E4A4 <- EU 0057E47C (Ghidra, non-matching)
// GLOBAL DAT_0057e518 uint *
// GLOBAL DAT_0057e51c undefined4 *
// GLOBAL DAT_0057e520 undefined4
// GLOBAL DAT_0057e524 uint *
// GLOBAL DAT_0057e528 undefined4 *
// GLOBAL DAT_0057e52c undefined4

undefined4 func_0057E4A4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057e518 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057e518), iVar1 != 0)) {
    *DAT_0057e51c = DAT_0057e520;
  }
  if (DAT_0057e51c != param_2) {
    if (((*DAT_0057e524 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057e524), iVar1 != 0)) {
      *DAT_0057e528 = DAT_0057e52c;
    }
    if (DAT_0057e528 != param_2) {
      return 0;
    }
  }
  return 1;
}


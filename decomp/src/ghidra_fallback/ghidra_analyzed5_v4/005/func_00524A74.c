#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_00524aec;
extern undefined4 *DAT_00524af0;
extern undefined4 DAT_00524af4;
extern uint *DAT_00524af8;
extern undefined4 *DAT_00524afc;
extern undefined4 DAT_00524b00;

// USA 00524A74 <- EU 00524A4C (Ghidra, non-matching)
// GLOBAL DAT_00524aec uint *
// GLOBAL DAT_00524af0 undefined4 *
// GLOBAL DAT_00524af4 undefined4
// GLOBAL DAT_00524af8 uint *
// GLOBAL DAT_00524afc undefined4 *
// GLOBAL DAT_00524b00 undefined4

undefined4 func_00524A74(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00524aec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00524aec), iVar1 != 0)) {
    *DAT_00524af0 = DAT_00524af4;
  }
  if (DAT_00524af0 != param_2) {
    if (((*DAT_00524af8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00524af8), iVar1 != 0)) {
      *DAT_00524afc = DAT_00524b00;
    }
    if (DAT_00524afc != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}


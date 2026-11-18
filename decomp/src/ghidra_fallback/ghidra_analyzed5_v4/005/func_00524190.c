#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00524248;
extern undefined4 *DAT_0052424c;
extern undefined4 DAT_00524250;
extern uint *DAT_00524254;
extern undefined4 *DAT_00524258;
extern undefined4 DAT_0052425c;
extern uint *DAT_00524260;
extern undefined4 *DAT_00524264;
extern undefined4 DAT_00524268;

// USA 00524190 <- EU 00524168 (Ghidra, non-matching)
// GLOBAL DAT_00524248 uint *
// GLOBAL DAT_0052424c undefined4 *
// GLOBAL DAT_00524250 undefined4
// GLOBAL DAT_00524254 uint *
// GLOBAL DAT_00524258 undefined4 *
// GLOBAL DAT_0052425c undefined4
// GLOBAL DAT_00524260 uint *
// GLOBAL DAT_00524264 undefined4 *
// GLOBAL DAT_00524268 undefined4

undefined4 func_00524190(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00524248 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00524248), iVar1 != 0)) {
    *DAT_0052424c = DAT_00524250;
  }
  if (DAT_0052424c != param_2) {
    if (((*DAT_00524254 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00524254), iVar1 != 0)) {
      *DAT_00524258 = DAT_0052425c;
    }
    if (DAT_00524258 != param_2) {
      if (((*DAT_00524260 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00524260), iVar1 != 0)) {
        *DAT_00524264 = DAT_00524268;
      }
      if (DAT_00524264 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


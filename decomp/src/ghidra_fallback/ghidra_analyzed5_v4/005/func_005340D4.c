#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053418c;
extern undefined4 *DAT_00534190;
extern undefined4 DAT_00534194;
extern uint *DAT_00534198;
extern undefined4 *DAT_0053419c;
extern undefined4 DAT_005341a0;
extern uint *DAT_005341a4;
extern undefined4 *DAT_005341a8;
extern undefined4 DAT_005341ac;

// USA 005340D4 <- EU 005340AC (Ghidra, non-matching)
// GLOBAL DAT_0053418c uint *
// GLOBAL DAT_00534190 undefined4 *
// GLOBAL DAT_00534194 undefined4
// GLOBAL DAT_00534198 uint *
// GLOBAL DAT_0053419c undefined4 *
// GLOBAL DAT_005341a0 undefined4
// GLOBAL DAT_005341a4 uint *
// GLOBAL DAT_005341a8 undefined4 *
// GLOBAL DAT_005341ac undefined4

undefined4 func_005340D4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053418c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053418c), iVar1 != 0)) {
    *DAT_00534190 = DAT_00534194;
  }
  if (DAT_00534190 != param_2) {
    if (((*DAT_00534198 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00534198), iVar1 != 0)) {
      *DAT_0053419c = DAT_005341a0;
    }
    if (DAT_0053419c != param_2) {
      if (((*DAT_005341a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005341a4), iVar1 != 0)) {
        *DAT_005341a8 = DAT_005341ac;
      }
      if (DAT_005341a8 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


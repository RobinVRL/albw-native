#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053e50c;
extern undefined4 *DAT_0053e510;
extern undefined4 DAT_0053e514;
extern uint *DAT_0053e518;
extern undefined4 *DAT_0053e51c;
extern undefined4 DAT_0053e520;
extern uint *DAT_0053e524;
extern undefined4 *DAT_0053e528;
extern undefined4 DAT_0053e52c;
extern uint *DAT_0053e530;
extern undefined4 *DAT_0053e534;
extern undefined4 DAT_0053e538;

// USA 0053E410 <- EU 0053E3E8 (Ghidra, non-matching)
// GLOBAL DAT_0053e50c uint *
// GLOBAL DAT_0053e510 undefined4 *
// GLOBAL DAT_0053e514 undefined4
// GLOBAL DAT_0053e518 uint *
// GLOBAL DAT_0053e51c undefined4 *
// GLOBAL DAT_0053e520 undefined4
// GLOBAL DAT_0053e524 uint *
// GLOBAL DAT_0053e528 undefined4 *
// GLOBAL DAT_0053e52c undefined4
// GLOBAL DAT_0053e530 uint *
// GLOBAL DAT_0053e534 undefined4 *
// GLOBAL DAT_0053e538 undefined4

undefined4 func_0053E410(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053e50c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e50c), iVar1 != 0)) {
    *DAT_0053e510 = DAT_0053e514;
  }
  if (DAT_0053e510 != param_2) {
    if (((*DAT_0053e518 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e518), iVar1 != 0)) {
      *DAT_0053e51c = DAT_0053e520;
    }
    if (DAT_0053e51c != param_2) {
      if (((*DAT_0053e524 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e524), iVar1 != 0)) {
        *DAT_0053e528 = DAT_0053e52c;
      }
      if (DAT_0053e528 != param_2) {
        if (((*DAT_0053e530 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e530), iVar1 != 0))
        {
          *DAT_0053e534 = DAT_0053e538;
        }
        if (DAT_0053e534 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005218a4;
extern undefined4 *DAT_005218a8;
extern undefined4 DAT_005218ac;
extern uint *DAT_005218b0;
extern undefined4 *DAT_005218b4;
extern undefined4 DAT_005218b8;
extern uint *DAT_005218bc;
extern undefined4 *DAT_005218c0;
extern undefined4 DAT_005218c4;
extern uint *DAT_005218c8;
extern undefined4 *DAT_005218cc;
extern undefined4 DAT_005218d0;

// USA 005217A8 <- EU 00521780 (Ghidra, non-matching)
// GLOBAL DAT_005218a4 uint *
// GLOBAL DAT_005218a8 undefined4 *
// GLOBAL DAT_005218ac undefined4
// GLOBAL DAT_005218b0 uint *
// GLOBAL DAT_005218b4 undefined4 *
// GLOBAL DAT_005218b8 undefined4
// GLOBAL DAT_005218bc uint *
// GLOBAL DAT_005218c0 undefined4 *
// GLOBAL DAT_005218c4 undefined4
// GLOBAL DAT_005218c8 uint *
// GLOBAL DAT_005218cc undefined4 *
// GLOBAL DAT_005218d0 undefined4

undefined4 func_005217A8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005218a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005218a4), iVar1 != 0)) {
    *DAT_005218a8 = DAT_005218ac;
  }
  if (DAT_005218a8 != param_2) {
    if (((*DAT_005218b0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005218b0), iVar1 != 0)) {
      *DAT_005218b4 = DAT_005218b8;
    }
    if (DAT_005218b4 != param_2) {
      if (((*DAT_005218bc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005218bc), iVar1 != 0)) {
        *DAT_005218c0 = DAT_005218c4;
      }
      if (DAT_005218c0 != param_2) {
        if (((*DAT_005218c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005218c8), iVar1 != 0))
        {
          *DAT_005218cc = DAT_005218d0;
        }
        if (DAT_005218cc != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0060DDA0(undefined4 *param_1);
extern uint *DAT_00524850;
extern undefined4 *DAT_00524854;
extern undefined4 DAT_00524858;
extern uint *DAT_0052485c;
extern undefined4 *DAT_00524860;
extern undefined4 DAT_00524864;

// USA 005247D8 <- EU 005247B0 (Ghidra, non-matching)
// GLOBAL DAT_00524850 uint *
// GLOBAL DAT_00524854 undefined4 *
// GLOBAL DAT_00524858 undefined4
// GLOBAL DAT_0052485c uint *
// GLOBAL DAT_00524860 undefined4 *
// GLOBAL DAT_00524864 undefined4

undefined4 func_005247D8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00524850 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00524850), iVar1 != 0)) {
    *DAT_00524854 = DAT_00524858;
  }
  if (DAT_00524854 != param_2) {
    if (((*DAT_0052485c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052485c), iVar1 != 0)) {
      *DAT_00524860 = DAT_00524864;
    }
    if (DAT_00524860 != param_2) {
      uVar2 = func_0060DDA0(param_2);
      return uVar2;
    }
  }
  return 1;
}


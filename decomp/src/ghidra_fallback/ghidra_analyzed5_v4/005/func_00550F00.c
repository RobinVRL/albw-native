#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00551040;
extern undefined4 *DAT_00551044;
extern undefined4 DAT_00551048;
extern uint *DAT_0055104c;
extern undefined4 *DAT_00551050;
extern undefined4 DAT_00551054;
extern uint *DAT_00551058;
extern undefined4 *DAT_0055105c;
extern undefined4 DAT_00551060;
extern uint *DAT_00551064;
extern undefined4 *DAT_00551068;
extern undefined4 DAT_0055106c;
extern uint *DAT_00551070;
extern undefined4 *DAT_00551074;
extern undefined4 DAT_00551078;

// USA 00550F00 <- EU 00550ED8 (Ghidra, non-matching)
// GLOBAL DAT_00551040 uint *
// GLOBAL DAT_00551044 undefined4 *
// GLOBAL DAT_00551048 undefined4
// GLOBAL DAT_0055104c uint *
// GLOBAL DAT_00551050 undefined4 *
// GLOBAL DAT_00551054 undefined4
// GLOBAL DAT_00551058 uint *
// GLOBAL DAT_0055105c undefined4 *
// GLOBAL DAT_00551060 undefined4
// GLOBAL DAT_00551064 uint *
// GLOBAL DAT_00551068 undefined4 *
// GLOBAL DAT_0055106c undefined4
// GLOBAL DAT_00551070 uint *
// GLOBAL DAT_00551074 undefined4 *
// GLOBAL DAT_00551078 undefined4

undefined4 func_00550F00(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00551040 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551040), iVar1 != 0)) {
    *DAT_00551044 = DAT_00551048;
  }
  if (DAT_00551044 != param_2) {
    if (((*DAT_0055104c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055104c), iVar1 != 0)) {
      *DAT_00551050 = DAT_00551054;
    }
    if (DAT_00551050 != param_2) {
      if (((*DAT_00551058 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551058), iVar1 != 0)) {
        *DAT_0055105c = DAT_00551060;
      }
      if (DAT_0055105c != param_2) {
        if (((*DAT_00551064 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551064), iVar1 != 0))
        {
          *DAT_00551068 = DAT_0055106c;
        }
        if (DAT_00551068 != param_2) {
          if (((*DAT_00551070 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551070), iVar1 != 0)
             ) {
            *DAT_00551074 = DAT_00551078;
          }
          if (DAT_00551074 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


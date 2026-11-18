#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005322a4;
extern undefined4 *DAT_005322a8;
extern undefined4 DAT_005322ac;
extern uint *DAT_005322b0;
extern undefined4 *DAT_005322b4;
extern undefined4 DAT_005322b8;
extern uint *DAT_005322bc;
extern undefined4 *DAT_005322c0;
extern undefined4 DAT_005322c4;
extern uint *DAT_005322c8;
extern undefined4 *DAT_005322cc;
extern undefined4 DAT_005322d0;

// USA 005321A8 <- EU 00532180 (Ghidra, non-matching)
// GLOBAL DAT_005322a4 uint *
// GLOBAL DAT_005322a8 undefined4 *
// GLOBAL DAT_005322ac undefined4
// GLOBAL DAT_005322b0 uint *
// GLOBAL DAT_005322b4 undefined4 *
// GLOBAL DAT_005322b8 undefined4
// GLOBAL DAT_005322bc uint *
// GLOBAL DAT_005322c0 undefined4 *
// GLOBAL DAT_005322c4 undefined4
// GLOBAL DAT_005322c8 uint *
// GLOBAL DAT_005322cc undefined4 *
// GLOBAL DAT_005322d0 undefined4

undefined4 func_005321A8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005322a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005322a4), iVar1 != 0)) {
    *DAT_005322a8 = DAT_005322ac;
  }
  if (DAT_005322a8 != param_2) {
    if (((*DAT_005322b0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005322b0), iVar1 != 0)) {
      *DAT_005322b4 = DAT_005322b8;
    }
    if (DAT_005322b4 != param_2) {
      if (((*DAT_005322bc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005322bc), iVar1 != 0)) {
        *DAT_005322c0 = DAT_005322c4;
      }
      if (DAT_005322c0 != param_2) {
        if (((*DAT_005322c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005322c8), iVar1 != 0))
        {
          *DAT_005322cc = DAT_005322d0;
        }
        if (DAT_005322cc != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


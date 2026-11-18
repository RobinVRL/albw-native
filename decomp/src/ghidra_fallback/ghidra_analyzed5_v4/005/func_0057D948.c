#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057d9bc;
extern undefined4 *DAT_0057d9c0;
extern undefined4 DAT_0057d9c4;
extern uint *DAT_0057d9c8;
extern undefined4 *DAT_0057d9cc;
extern undefined4 DAT_0057d9d0;

// USA 0057D948 <- EU 0057D920 (Ghidra, non-matching)
// GLOBAL DAT_0057d9bc uint *
// GLOBAL DAT_0057d9c0 undefined4 *
// GLOBAL DAT_0057d9c4 undefined4
// GLOBAL DAT_0057d9c8 uint *
// GLOBAL DAT_0057d9cc undefined4 *
// GLOBAL DAT_0057d9d0 undefined4

undefined4 func_0057D948(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057d9bc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057d9bc), iVar1 != 0)) {
    *DAT_0057d9c0 = DAT_0057d9c4;
  }
  if (DAT_0057d9c0 != param_2) {
    if (((*DAT_0057d9c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057d9c8), iVar1 != 0)) {
      *DAT_0057d9cc = DAT_0057d9d0;
    }
    if (DAT_0057d9cc != param_2) {
      return 0;
    }
  }
  return 1;
}


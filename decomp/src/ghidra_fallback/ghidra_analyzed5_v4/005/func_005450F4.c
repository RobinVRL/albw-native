#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005451f0;
extern undefined4 *DAT_005451f4;
extern undefined4 DAT_005451f8;
extern uint *DAT_005451fc;
extern undefined4 *DAT_00545200;
extern undefined4 DAT_00545204;
extern uint *DAT_00545208;
extern undefined4 *DAT_0054520c;
extern undefined4 DAT_00545210;
extern uint *DAT_00545214;
extern undefined4 *DAT_00545218;
extern undefined4 DAT_0054521c;

// USA 005450F4 <- EU 005450CC (Ghidra, non-matching)
// GLOBAL DAT_005451f0 uint *
// GLOBAL DAT_005451f4 undefined4 *
// GLOBAL DAT_005451f8 undefined4
// GLOBAL DAT_005451fc uint *
// GLOBAL DAT_00545200 undefined4 *
// GLOBAL DAT_00545204 undefined4
// GLOBAL DAT_00545208 uint *
// GLOBAL DAT_0054520c undefined4 *
// GLOBAL DAT_00545210 undefined4
// GLOBAL DAT_00545214 uint *
// GLOBAL DAT_00545218 undefined4 *
// GLOBAL DAT_0054521c undefined4

undefined4 func_005450F4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005451f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005451f0), iVar1 != 0)) {
    *DAT_005451f4 = DAT_005451f8;
  }
  if (DAT_005451f4 != param_2) {
    if (((*DAT_005451fc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005451fc), iVar1 != 0)) {
      *DAT_00545200 = DAT_00545204;
    }
    if (DAT_00545200 != param_2) {
      if (((*DAT_00545208 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00545208), iVar1 != 0)) {
        *DAT_0054520c = DAT_00545210;
      }
      if (DAT_0054520c != param_2) {
        if (((*DAT_00545214 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00545214), iVar1 != 0))
        {
          *DAT_00545218 = DAT_0054521c;
        }
        if (DAT_00545218 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


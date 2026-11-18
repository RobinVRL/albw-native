#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00524a10;
extern undefined4 *DAT_00524a14;
extern undefined4 DAT_00524a18;
extern uint *DAT_00524a1c;
extern undefined4 *DAT_00524a20;
extern undefined4 DAT_00524a24;
extern uint *DAT_00524a28;
extern undefined4 *DAT_00524a2c;
extern undefined4 DAT_00524a30;
extern uint *DAT_00524a34;
extern undefined4 *DAT_00524a38;
extern undefined4 DAT_00524a3c;
extern uint *DAT_00524a40;
extern undefined4 *DAT_00524a44;
extern undefined4 DAT_00524a48;

// USA 005248D0 <- EU 005248A8 (Ghidra, non-matching)
// GLOBAL DAT_00524a10 uint *
// GLOBAL DAT_00524a14 undefined4 *
// GLOBAL DAT_00524a18 undefined4
// GLOBAL DAT_00524a1c uint *
// GLOBAL DAT_00524a20 undefined4 *
// GLOBAL DAT_00524a24 undefined4
// GLOBAL DAT_00524a28 uint *
// GLOBAL DAT_00524a2c undefined4 *
// GLOBAL DAT_00524a30 undefined4
// GLOBAL DAT_00524a34 uint *
// GLOBAL DAT_00524a38 undefined4 *
// GLOBAL DAT_00524a3c undefined4
// GLOBAL DAT_00524a40 uint *
// GLOBAL DAT_00524a44 undefined4 *
// GLOBAL DAT_00524a48 undefined4

undefined4 func_005248D0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00524a10 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00524a10), iVar1 != 0)) {
    *DAT_00524a14 = DAT_00524a18;
  }
  if (DAT_00524a14 != param_2) {
    if (((*DAT_00524a1c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00524a1c), iVar1 != 0)) {
      *DAT_00524a20 = DAT_00524a24;
    }
    if (DAT_00524a20 != param_2) {
      if (((*DAT_00524a28 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00524a28), iVar1 != 0)) {
        *DAT_00524a2c = DAT_00524a30;
      }
      if (DAT_00524a2c != param_2) {
        if (((*DAT_00524a34 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00524a34), iVar1 != 0))
        {
          *DAT_00524a38 = DAT_00524a3c;
        }
        if (DAT_00524a38 != param_2) {
          if (((*DAT_00524a40 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00524a40), iVar1 != 0)
             ) {
            *DAT_00524a44 = DAT_00524a48;
          }
          if (DAT_00524a44 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


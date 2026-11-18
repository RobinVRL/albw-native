#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00583268;
extern undefined4 *DAT_0058326c;
extern undefined4 DAT_00583270;
extern uint *DAT_00583274;
extern undefined4 *DAT_00583278;
extern undefined4 DAT_0058327c;
extern uint *DAT_00583280;
extern undefined4 *DAT_00583284;
extern undefined4 DAT_00583288;
extern uint *DAT_0058328c;
extern undefined4 *DAT_00583290;
extern undefined4 DAT_00583294;
extern uint *DAT_00583298;
extern undefined4 *DAT_0058329c;
extern undefined4 DAT_005832a0;

// USA 00583128 <- EU 00583100 (Ghidra, non-matching)
// GLOBAL DAT_00583268 uint *
// GLOBAL DAT_0058326c undefined4 *
// GLOBAL DAT_00583270 undefined4
// GLOBAL DAT_00583274 uint *
// GLOBAL DAT_00583278 undefined4 *
// GLOBAL DAT_0058327c undefined4
// GLOBAL DAT_00583280 uint *
// GLOBAL DAT_00583284 undefined4 *
// GLOBAL DAT_00583288 undefined4
// GLOBAL DAT_0058328c uint *
// GLOBAL DAT_00583290 undefined4 *
// GLOBAL DAT_00583294 undefined4
// GLOBAL DAT_00583298 uint *
// GLOBAL DAT_0058329c undefined4 *
// GLOBAL DAT_005832a0 undefined4

undefined4 func_00583128(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00583268 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00583268), iVar1 != 0)) {
    *DAT_0058326c = DAT_00583270;
  }
  if (DAT_0058326c != param_2) {
    if (((*DAT_00583274 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00583274), iVar1 != 0)) {
      *DAT_00583278 = DAT_0058327c;
    }
    if (DAT_00583278 != param_2) {
      if (((*DAT_00583280 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00583280), iVar1 != 0)) {
        *DAT_00583284 = DAT_00583288;
      }
      if (DAT_00583284 != param_2) {
        if (((*DAT_0058328c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058328c), iVar1 != 0))
        {
          *DAT_00583290 = DAT_00583294;
        }
        if (DAT_00583290 != param_2) {
          if (((*DAT_00583298 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00583298), iVar1 != 0)
             ) {
            *DAT_0058329c = DAT_005832a0;
          }
          if (DAT_0058329c != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


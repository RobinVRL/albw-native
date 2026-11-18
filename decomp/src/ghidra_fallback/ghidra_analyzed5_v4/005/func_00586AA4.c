#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00586c6c;
extern undefined4 *DAT_00586c70;
extern undefined4 DAT_00586c74;
extern uint *DAT_00586c78;
extern undefined4 *DAT_00586c7c;
extern undefined4 DAT_00586c80;
extern uint *DAT_00586c84;
extern undefined4 *DAT_00586c88;
extern undefined4 DAT_00586c8c;
extern uint *DAT_00586c90;
extern undefined4 *DAT_00586c94;
extern undefined4 DAT_00586c98;
extern uint *DAT_00586c9c;
extern undefined4 *DAT_00586ca0;
extern undefined4 DAT_00586ca4;
extern uint *DAT_00586ca8;
extern undefined4 *DAT_00586cac;
extern undefined4 DAT_00586cb0;
extern uint *DAT_00586cb4;
extern undefined4 *DAT_00586cb8;
extern undefined4 DAT_00586cbc;

// USA 00586AA4 <- EU 00586A7C (Ghidra, non-matching)
// GLOBAL DAT_00586c6c uint *
// GLOBAL DAT_00586c70 undefined4 *
// GLOBAL DAT_00586c74 undefined4
// GLOBAL DAT_00586c78 uint *
// GLOBAL DAT_00586c7c undefined4 *
// GLOBAL DAT_00586c80 undefined4
// GLOBAL DAT_00586c84 uint *
// GLOBAL DAT_00586c88 undefined4 *
// GLOBAL DAT_00586c8c undefined4
// GLOBAL DAT_00586c90 uint *
// GLOBAL DAT_00586c94 undefined4 *
// GLOBAL DAT_00586c98 undefined4
// GLOBAL DAT_00586c9c uint *
// GLOBAL DAT_00586ca0 undefined4 *
// GLOBAL DAT_00586ca4 undefined4
// GLOBAL DAT_00586ca8 uint *
// GLOBAL DAT_00586cac undefined4 *
// GLOBAL DAT_00586cb0 undefined4
// GLOBAL DAT_00586cb4 uint *
// GLOBAL DAT_00586cb8 undefined4 *
// GLOBAL DAT_00586cbc undefined4

undefined4 func_00586AA4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00586c6c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00586c6c), iVar1 != 0)) {
    *DAT_00586c70 = DAT_00586c74;
  }
  if (DAT_00586c70 != param_2) {
    if (((*DAT_00586c78 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00586c78), iVar1 != 0)) {
      *DAT_00586c7c = DAT_00586c80;
    }
    if (DAT_00586c7c != param_2) {
      if (((*DAT_00586c84 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00586c84), iVar1 != 0)) {
        *DAT_00586c88 = DAT_00586c8c;
      }
      if (DAT_00586c88 != param_2) {
        if (((*DAT_00586c90 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00586c90), iVar1 != 0))
        {
          *DAT_00586c94 = DAT_00586c98;
        }
        if (DAT_00586c94 != param_2) {
          if (((*DAT_00586c9c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00586c9c), iVar1 != 0)
             ) {
            *DAT_00586ca0 = DAT_00586ca4;
          }
          if (DAT_00586ca0 != param_2) {
            if (((*DAT_00586ca8 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_00586ca8), iVar1 != 0)) {
              *DAT_00586cac = DAT_00586cb0;
            }
            if (DAT_00586cac != param_2) {
              if (((*DAT_00586cb4 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_00586cb4), iVar1 != 0)) {
                *DAT_00586cb8 = DAT_00586cbc;
              }
              if (DAT_00586cb8 != param_2) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return 1;
}


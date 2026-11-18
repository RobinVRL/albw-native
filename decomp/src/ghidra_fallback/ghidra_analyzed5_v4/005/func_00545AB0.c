#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00545c78;
extern undefined4 *DAT_00545c7c;
extern undefined4 DAT_00545c80;
extern uint *DAT_00545c84;
extern undefined4 *DAT_00545c88;
extern undefined4 DAT_00545c8c;
extern uint *DAT_00545c90;
extern undefined4 *DAT_00545c94;
extern undefined4 DAT_00545c98;
extern uint *DAT_00545c9c;
extern undefined4 *DAT_00545ca0;
extern undefined4 DAT_00545ca4;
extern uint *DAT_00545ca8;
extern undefined4 *DAT_00545cac;
extern undefined4 DAT_00545cb0;
extern uint *DAT_00545cb4;
extern undefined4 *DAT_00545cb8;
extern undefined4 DAT_00545cbc;
extern uint *DAT_00545cc0;
extern undefined4 *DAT_00545cc4;
extern undefined4 DAT_00545cc8;

// USA 00545AB0 <- EU 00545A88 (Ghidra, non-matching)
// GLOBAL DAT_00545c78 uint *
// GLOBAL DAT_00545c7c undefined4 *
// GLOBAL DAT_00545c80 undefined4
// GLOBAL DAT_00545c84 uint *
// GLOBAL DAT_00545c88 undefined4 *
// GLOBAL DAT_00545c8c undefined4
// GLOBAL DAT_00545c90 uint *
// GLOBAL DAT_00545c94 undefined4 *
// GLOBAL DAT_00545c98 undefined4
// GLOBAL DAT_00545c9c uint *
// GLOBAL DAT_00545ca0 undefined4 *
// GLOBAL DAT_00545ca4 undefined4
// GLOBAL DAT_00545ca8 uint *
// GLOBAL DAT_00545cac undefined4 *
// GLOBAL DAT_00545cb0 undefined4
// GLOBAL DAT_00545cb4 uint *
// GLOBAL DAT_00545cb8 undefined4 *
// GLOBAL DAT_00545cbc undefined4
// GLOBAL DAT_00545cc0 uint *
// GLOBAL DAT_00545cc4 undefined4 *
// GLOBAL DAT_00545cc8 undefined4

undefined4 func_00545AB0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00545c78 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00545c78), iVar1 != 0)) {
    *DAT_00545c7c = DAT_00545c80;
  }
  if (DAT_00545c7c != param_2) {
    if (((*DAT_00545c84 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00545c84), iVar1 != 0)) {
      *DAT_00545c88 = DAT_00545c8c;
    }
    if (DAT_00545c88 != param_2) {
      if (((*DAT_00545c90 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00545c90), iVar1 != 0)) {
        *DAT_00545c94 = DAT_00545c98;
      }
      if (DAT_00545c94 != param_2) {
        if (((*DAT_00545c9c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00545c9c), iVar1 != 0))
        {
          *DAT_00545ca0 = DAT_00545ca4;
        }
        if (DAT_00545ca0 != param_2) {
          if (((*DAT_00545ca8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00545ca8), iVar1 != 0)
             ) {
            *DAT_00545cac = DAT_00545cb0;
          }
          if (DAT_00545cac != param_2) {
            if (((*DAT_00545cb4 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_00545cb4), iVar1 != 0)) {
              *DAT_00545cb8 = DAT_00545cbc;
            }
            if (DAT_00545cb8 != param_2) {
              if (((*DAT_00545cc0 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_00545cc0), iVar1 != 0)) {
                *DAT_00545cc4 = DAT_00545cc8;
              }
              if (DAT_00545cc4 != param_2) {
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


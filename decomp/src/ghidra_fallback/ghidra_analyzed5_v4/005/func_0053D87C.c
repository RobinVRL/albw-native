#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053da44;
extern undefined4 *DAT_0053da48;
extern undefined4 DAT_0053da4c;
extern uint *DAT_0053da50;
extern undefined4 *DAT_0053da54;
extern undefined4 DAT_0053da58;
extern uint *DAT_0053da5c;
extern undefined4 *DAT_0053da60;
extern undefined4 DAT_0053da64;
extern uint *DAT_0053da68;
extern undefined4 *DAT_0053da6c;
extern undefined4 DAT_0053da70;
extern uint *DAT_0053da74;
extern undefined4 *DAT_0053da78;
extern undefined4 DAT_0053da7c;
extern uint *DAT_0053da80;
extern undefined4 *DAT_0053da84;
extern undefined4 DAT_0053da88;
extern uint *DAT_0053da8c;
extern undefined4 *DAT_0053da90;
extern undefined4 DAT_0053da94;

// USA 0053D87C <- EU 0053D854 (Ghidra, non-matching)
// GLOBAL DAT_0053da44 uint *
// GLOBAL DAT_0053da48 undefined4 *
// GLOBAL DAT_0053da4c undefined4
// GLOBAL DAT_0053da50 uint *
// GLOBAL DAT_0053da54 undefined4 *
// GLOBAL DAT_0053da58 undefined4
// GLOBAL DAT_0053da5c uint *
// GLOBAL DAT_0053da60 undefined4 *
// GLOBAL DAT_0053da64 undefined4
// GLOBAL DAT_0053da68 uint *
// GLOBAL DAT_0053da6c undefined4 *
// GLOBAL DAT_0053da70 undefined4
// GLOBAL DAT_0053da74 uint *
// GLOBAL DAT_0053da78 undefined4 *
// GLOBAL DAT_0053da7c undefined4
// GLOBAL DAT_0053da80 uint *
// GLOBAL DAT_0053da84 undefined4 *
// GLOBAL DAT_0053da88 undefined4
// GLOBAL DAT_0053da8c uint *
// GLOBAL DAT_0053da90 undefined4 *
// GLOBAL DAT_0053da94 undefined4

undefined4 func_0053D87C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053da44 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053da44), iVar1 != 0)) {
    *DAT_0053da48 = DAT_0053da4c;
  }
  if (DAT_0053da48 != param_2) {
    if (((*DAT_0053da50 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053da50), iVar1 != 0)) {
      *DAT_0053da54 = DAT_0053da58;
    }
    if (DAT_0053da54 != param_2) {
      if (((*DAT_0053da5c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053da5c), iVar1 != 0)) {
        *DAT_0053da60 = DAT_0053da64;
      }
      if (DAT_0053da60 != param_2) {
        if (((*DAT_0053da68 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053da68), iVar1 != 0))
        {
          *DAT_0053da6c = DAT_0053da70;
        }
        if (DAT_0053da6c != param_2) {
          if (((*DAT_0053da74 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053da74), iVar1 != 0)
             ) {
            *DAT_0053da78 = DAT_0053da7c;
          }
          if (DAT_0053da78 != param_2) {
            if (((*DAT_0053da80 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0053da80), iVar1 != 0)) {
              *DAT_0053da84 = DAT_0053da88;
            }
            if (DAT_0053da84 != param_2) {
              if (((*DAT_0053da8c & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_0053da8c), iVar1 != 0)) {
                *DAT_0053da90 = DAT_0053da94;
              }
              if (DAT_0053da90 != param_2) {
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


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058cc80;
extern undefined4 *DAT_0058cc84;
extern undefined4 DAT_0058cc88;
extern uint *DAT_0058cc8c;
extern undefined4 *DAT_0058cc90;
extern undefined4 DAT_0058cc94;
extern uint *DAT_0058cc98;
extern undefined4 *DAT_0058cc9c;
extern undefined4 DAT_0058cca0;
extern uint *DAT_0058cca4;
extern undefined4 *DAT_0058cca8;
extern undefined4 DAT_0058ccac;
extern uint *DAT_0058ccb0;
extern undefined4 *DAT_0058ccb4;
extern undefined4 DAT_0058ccb8;
extern uint *DAT_0058ccbc;
extern undefined4 *DAT_0058ccc0;
extern undefined4 DAT_0058ccc4;
extern uint *DAT_0058ccc8;
extern undefined4 *DAT_0058cccc;
extern undefined4 DAT_0058ccd0;

// USA 0058CAB8 <- EU 0058CA90 (Ghidra, non-matching)
// GLOBAL DAT_0058cc80 uint *
// GLOBAL DAT_0058cc84 undefined4 *
// GLOBAL DAT_0058cc88 undefined4
// GLOBAL DAT_0058cc8c uint *
// GLOBAL DAT_0058cc90 undefined4 *
// GLOBAL DAT_0058cc94 undefined4
// GLOBAL DAT_0058cc98 uint *
// GLOBAL DAT_0058cc9c undefined4 *
// GLOBAL DAT_0058cca0 undefined4
// GLOBAL DAT_0058cca4 uint *
// GLOBAL DAT_0058cca8 undefined4 *
// GLOBAL DAT_0058ccac undefined4
// GLOBAL DAT_0058ccb0 uint *
// GLOBAL DAT_0058ccb4 undefined4 *
// GLOBAL DAT_0058ccb8 undefined4
// GLOBAL DAT_0058ccbc uint *
// GLOBAL DAT_0058ccc0 undefined4 *
// GLOBAL DAT_0058ccc4 undefined4
// GLOBAL DAT_0058ccc8 uint *
// GLOBAL DAT_0058cccc undefined4 *
// GLOBAL DAT_0058ccd0 undefined4

undefined4 func_0058CAB8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058cc80 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058cc80), iVar1 != 0)) {
    *DAT_0058cc84 = DAT_0058cc88;
  }
  if (DAT_0058cc84 != param_2) {
    if (((*DAT_0058cc8c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058cc8c), iVar1 != 0)) {
      *DAT_0058cc90 = DAT_0058cc94;
    }
    if (DAT_0058cc90 != param_2) {
      if (((*DAT_0058cc98 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058cc98), iVar1 != 0)) {
        *DAT_0058cc9c = DAT_0058cca0;
      }
      if (DAT_0058cc9c != param_2) {
        if (((*DAT_0058cca4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058cca4), iVar1 != 0))
        {
          *DAT_0058cca8 = DAT_0058ccac;
        }
        if (DAT_0058cca8 != param_2) {
          if (((*DAT_0058ccb0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058ccb0), iVar1 != 0)
             ) {
            *DAT_0058ccb4 = DAT_0058ccb8;
          }
          if (DAT_0058ccb4 != param_2) {
            if (((*DAT_0058ccbc & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0058ccbc), iVar1 != 0)) {
              *DAT_0058ccc0 = DAT_0058ccc4;
            }
            if (DAT_0058ccc0 != param_2) {
              if (((*DAT_0058ccc8 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_0058ccc8), iVar1 != 0)) {
                *DAT_0058cccc = DAT_0058ccd0;
              }
              if (DAT_0058cccc != param_2) {
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


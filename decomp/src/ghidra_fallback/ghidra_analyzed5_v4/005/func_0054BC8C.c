#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054be98;
extern undefined4 *DAT_0054be9c;
extern undefined4 DAT_0054bea0;
extern uint *DAT_0054bea4;
extern undefined4 *DAT_0054bea8;
extern undefined4 DAT_0054beac;
extern uint *DAT_0054beb0;
extern undefined4 *DAT_0054beb4;
extern undefined4 DAT_0054beb8;
extern uint *DAT_0054bebc;
extern undefined4 *DAT_0054bec0;
extern undefined4 DAT_0054bec4;
extern uint *DAT_0054bec8;
extern undefined4 *DAT_0054becc;
extern undefined4 DAT_0054bed0;
extern uint *DAT_0054bed4;
extern undefined4 *DAT_0054bed8;
extern undefined4 DAT_0054bedc;
extern uint *DAT_0054bee0;
extern undefined4 *DAT_0054bee4;
extern undefined4 DAT_0054bee8;
extern uint *DAT_0054beec;
extern undefined4 *DAT_0054bef0;
extern undefined4 DAT_0054bef4;

// USA 0054BC8C <- EU 0054BC64 (Ghidra, non-matching)
// GLOBAL DAT_0054be98 uint *
// GLOBAL DAT_0054be9c undefined4 *
// GLOBAL DAT_0054bea0 undefined4
// GLOBAL DAT_0054bea4 uint *
// GLOBAL DAT_0054bea8 undefined4 *
// GLOBAL DAT_0054beac undefined4
// GLOBAL DAT_0054beb0 uint *
// GLOBAL DAT_0054beb4 undefined4 *
// GLOBAL DAT_0054beb8 undefined4
// GLOBAL DAT_0054bebc uint *
// GLOBAL DAT_0054bec0 undefined4 *
// GLOBAL DAT_0054bec4 undefined4
// GLOBAL DAT_0054bec8 uint *
// GLOBAL DAT_0054becc undefined4 *
// GLOBAL DAT_0054bed0 undefined4
// GLOBAL DAT_0054bed4 uint *
// GLOBAL DAT_0054bed8 undefined4 *
// GLOBAL DAT_0054bedc undefined4
// GLOBAL DAT_0054bee0 uint *
// GLOBAL DAT_0054bee4 undefined4 *
// GLOBAL DAT_0054bee8 undefined4
// GLOBAL DAT_0054beec uint *
// GLOBAL DAT_0054bef0 undefined4 *
// GLOBAL DAT_0054bef4 undefined4

undefined4 func_0054BC8C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054be98 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054be98), iVar1 != 0)) {
    *DAT_0054be9c = DAT_0054bea0;
  }
  if (DAT_0054be9c != param_2) {
    if (((*DAT_0054bea4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054bea4), iVar1 != 0)) {
      *DAT_0054bea8 = DAT_0054beac;
    }
    if (DAT_0054bea8 != param_2) {
      if (((*DAT_0054beb0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054beb0), iVar1 != 0)) {
        *DAT_0054beb4 = DAT_0054beb8;
      }
      if (DAT_0054beb4 != param_2) {
        if (((*DAT_0054bebc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054bebc), iVar1 != 0))
        {
          *DAT_0054bec0 = DAT_0054bec4;
        }
        if (DAT_0054bec0 != param_2) {
          if (((*DAT_0054bec8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054bec8), iVar1 != 0)
             ) {
            *DAT_0054becc = DAT_0054bed0;
          }
          if (DAT_0054becc != param_2) {
            if (((*DAT_0054bed4 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0054bed4), iVar1 != 0)) {
              *DAT_0054bed8 = DAT_0054bedc;
            }
            if (DAT_0054bed8 != param_2) {
              if (((*DAT_0054bee0 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_0054bee0), iVar1 != 0)) {
                *DAT_0054bee4 = DAT_0054bee8;
              }
              if (DAT_0054bee4 != param_2) {
                if (((*DAT_0054beec & 1) == 0) &&
                   (iVar1 = func_00100174((int *)DAT_0054beec), iVar1 != 0)) {
                  *DAT_0054bef0 = DAT_0054bef4;
                }
                if (DAT_0054bef0 != param_2) {
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}


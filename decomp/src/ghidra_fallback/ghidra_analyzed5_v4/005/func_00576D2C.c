#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00576e6c;
extern undefined4 *DAT_00576e70;
extern undefined4 DAT_00576e74;
extern uint *DAT_00576e78;
extern undefined4 *DAT_00576e7c;
extern undefined4 DAT_00576e80;
extern uint *DAT_00576e84;
extern undefined4 *DAT_00576e88;
extern undefined4 DAT_00576e8c;
extern uint *DAT_00576e90;
extern undefined4 *DAT_00576e94;
extern undefined4 DAT_00576e98;
extern uint *DAT_00576e9c;
extern undefined4 *DAT_00576ea0;
extern undefined4 DAT_00576ea4;

// USA 00576D2C <- EU 00576D04 (Ghidra, non-matching)
// GLOBAL DAT_00576e6c uint *
// GLOBAL DAT_00576e70 undefined4 *
// GLOBAL DAT_00576e74 undefined4
// GLOBAL DAT_00576e78 uint *
// GLOBAL DAT_00576e7c undefined4 *
// GLOBAL DAT_00576e80 undefined4
// GLOBAL DAT_00576e84 uint *
// GLOBAL DAT_00576e88 undefined4 *
// GLOBAL DAT_00576e8c undefined4
// GLOBAL DAT_00576e90 uint *
// GLOBAL DAT_00576e94 undefined4 *
// GLOBAL DAT_00576e98 undefined4
// GLOBAL DAT_00576e9c uint *
// GLOBAL DAT_00576ea0 undefined4 *
// GLOBAL DAT_00576ea4 undefined4

undefined4 func_00576D2C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00576e6c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576e6c), iVar1 != 0)) {
    *DAT_00576e70 = DAT_00576e74;
  }
  if (DAT_00576e70 != param_2) {
    if (((*DAT_00576e78 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576e78), iVar1 != 0)) {
      *DAT_00576e7c = DAT_00576e80;
    }
    if (DAT_00576e7c != param_2) {
      if (((*DAT_00576e84 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576e84), iVar1 != 0)) {
        *DAT_00576e88 = DAT_00576e8c;
      }
      if (DAT_00576e88 != param_2) {
        if (((*DAT_00576e90 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576e90), iVar1 != 0))
        {
          *DAT_00576e94 = DAT_00576e98;
        }
        if (DAT_00576e94 != param_2) {
          if (((*DAT_00576e9c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576e9c), iVar1 != 0)
             ) {
            *DAT_00576ea0 = DAT_00576ea4;
          }
          if (DAT_00576ea0 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


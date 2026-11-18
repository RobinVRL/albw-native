#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0051ee74;
extern undefined4 *DAT_0051ee78;
extern undefined4 DAT_0051ee7c;
extern uint *DAT_0051ee80;
extern undefined4 *DAT_0051ee84;
extern undefined4 DAT_0051ee88;
extern uint *DAT_0051ee8c;
extern undefined4 *DAT_0051ee90;
extern undefined4 DAT_0051ee94;
extern uint *DAT_0051ee98;
extern undefined4 *DAT_0051ee9c;
extern undefined4 DAT_0051eea0;
extern uint *DAT_0051eea4;
extern undefined4 *DAT_0051eea8;
extern undefined4 DAT_0051eeac;

// USA 0051ED34 <- EU 0051ED0C (Ghidra, non-matching)
// GLOBAL DAT_0051ee74 uint *
// GLOBAL DAT_0051ee78 undefined4 *
// GLOBAL DAT_0051ee7c undefined4
// GLOBAL DAT_0051ee80 uint *
// GLOBAL DAT_0051ee84 undefined4 *
// GLOBAL DAT_0051ee88 undefined4
// GLOBAL DAT_0051ee8c uint *
// GLOBAL DAT_0051ee90 undefined4 *
// GLOBAL DAT_0051ee94 undefined4
// GLOBAL DAT_0051ee98 uint *
// GLOBAL DAT_0051ee9c undefined4 *
// GLOBAL DAT_0051eea0 undefined4
// GLOBAL DAT_0051eea4 uint *
// GLOBAL DAT_0051eea8 undefined4 *
// GLOBAL DAT_0051eeac undefined4

undefined4 func_0051ED34(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0051ee74 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051ee74), iVar1 != 0)) {
    *DAT_0051ee78 = DAT_0051ee7c;
  }
  if (DAT_0051ee78 != param_2) {
    if (((*DAT_0051ee80 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051ee80), iVar1 != 0)) {
      *DAT_0051ee84 = DAT_0051ee88;
    }
    if (DAT_0051ee84 != param_2) {
      if (((*DAT_0051ee8c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051ee8c), iVar1 != 0)) {
        *DAT_0051ee90 = DAT_0051ee94;
      }
      if (DAT_0051ee90 != param_2) {
        if (((*DAT_0051ee98 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051ee98), iVar1 != 0))
        {
          *DAT_0051ee9c = DAT_0051eea0;
        }
        if (DAT_0051ee9c != param_2) {
          if (((*DAT_0051eea4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051eea4), iVar1 != 0)
             ) {
            *DAT_0051eea8 = DAT_0051eeac;
          }
          if (DAT_0051eea8 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00541be0;
extern undefined4 *DAT_00541be4;
extern undefined4 DAT_00541be8;
extern uint *DAT_00541bec;
extern undefined4 *DAT_00541bf0;
extern undefined4 DAT_00541bf4;
extern uint *DAT_00541bf8;
extern undefined4 *DAT_00541bfc;
extern undefined4 DAT_00541c00;
extern uint *DAT_00541c04;
extern undefined4 *DAT_00541c08;
extern undefined4 DAT_00541c0c;

// USA 00541AE4 <- EU 00541ABC (Ghidra, non-matching)
// GLOBAL DAT_00541be0 uint *
// GLOBAL DAT_00541be4 undefined4 *
// GLOBAL DAT_00541be8 undefined4
// GLOBAL DAT_00541bec uint *
// GLOBAL DAT_00541bf0 undefined4 *
// GLOBAL DAT_00541bf4 undefined4
// GLOBAL DAT_00541bf8 uint *
// GLOBAL DAT_00541bfc undefined4 *
// GLOBAL DAT_00541c00 undefined4
// GLOBAL DAT_00541c04 uint *
// GLOBAL DAT_00541c08 undefined4 *
// GLOBAL DAT_00541c0c undefined4

undefined4 func_00541AE4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00541be0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00541be0), iVar1 != 0)) {
    *DAT_00541be4 = DAT_00541be8;
  }
  if (DAT_00541be4 != param_2) {
    if (((*DAT_00541bec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00541bec), iVar1 != 0)) {
      *DAT_00541bf0 = DAT_00541bf4;
    }
    if (DAT_00541bf0 != param_2) {
      if (((*DAT_00541bf8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00541bf8), iVar1 != 0)) {
        *DAT_00541bfc = DAT_00541c00;
      }
      if (DAT_00541bfc != param_2) {
        if (((*DAT_00541c04 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00541c04), iVar1 != 0))
        {
          *DAT_00541c08 = DAT_00541c0c;
        }
        if (DAT_00541c08 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


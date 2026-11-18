#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054aea8;
extern undefined4 *DAT_0054aeac;
extern undefined4 DAT_0054aeb0;
extern uint *DAT_0054aeb4;
extern undefined4 *DAT_0054aeb8;
extern undefined4 DAT_0054aebc;
extern uint *DAT_0054aec0;
extern undefined4 *DAT_0054aec4;
extern undefined4 DAT_0054aec8;
extern uint *DAT_0054aecc;
extern undefined4 *DAT_0054aed0;
extern undefined4 DAT_0054aed4;

// USA 0054ADAC <- EU 0054AD84 (Ghidra, non-matching)
// GLOBAL DAT_0054aea8 uint *
// GLOBAL DAT_0054aeac undefined4 *
// GLOBAL DAT_0054aeb0 undefined4
// GLOBAL DAT_0054aeb4 uint *
// GLOBAL DAT_0054aeb8 undefined4 *
// GLOBAL DAT_0054aebc undefined4
// GLOBAL DAT_0054aec0 uint *
// GLOBAL DAT_0054aec4 undefined4 *
// GLOBAL DAT_0054aec8 undefined4
// GLOBAL DAT_0054aecc uint *
// GLOBAL DAT_0054aed0 undefined4 *
// GLOBAL DAT_0054aed4 undefined4

undefined4 func_0054ADAC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054aea8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054aea8), iVar1 != 0)) {
    *DAT_0054aeac = DAT_0054aeb0;
  }
  if (DAT_0054aeac != param_2) {
    if (((*DAT_0054aeb4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054aeb4), iVar1 != 0)) {
      *DAT_0054aeb8 = DAT_0054aebc;
    }
    if (DAT_0054aeb8 != param_2) {
      if (((*DAT_0054aec0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054aec0), iVar1 != 0)) {
        *DAT_0054aec4 = DAT_0054aec8;
      }
      if (DAT_0054aec4 != param_2) {
        if (((*DAT_0054aecc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054aecc), iVar1 != 0))
        {
          *DAT_0054aed0 = DAT_0054aed4;
        }
        if (DAT_0054aed0 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00541144;
extern undefined4 *DAT_00541148;
extern undefined4 DAT_0054114c;
extern uint *DAT_00541150;
extern undefined4 *DAT_00541154;
extern undefined4 DAT_00541158;
extern uint *DAT_0054115c;
extern undefined4 *DAT_00541160;
extern undefined4 DAT_00541164;

// USA 0054108C <- EU 00541064 (Ghidra, non-matching)
// GLOBAL DAT_00541144 uint *
// GLOBAL DAT_00541148 undefined4 *
// GLOBAL DAT_0054114c undefined4
// GLOBAL DAT_00541150 uint *
// GLOBAL DAT_00541154 undefined4 *
// GLOBAL DAT_00541158 undefined4
// GLOBAL DAT_0054115c uint *
// GLOBAL DAT_00541160 undefined4 *
// GLOBAL DAT_00541164 undefined4

undefined4 func_0054108C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00541144 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00541144), iVar1 != 0)) {
    *DAT_00541148 = DAT_0054114c;
  }
  if (DAT_00541148 != param_2) {
    if (((*DAT_00541150 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00541150), iVar1 != 0)) {
      *DAT_00541154 = DAT_00541158;
    }
    if (DAT_00541154 != param_2) {
      if (((*DAT_0054115c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054115c), iVar1 != 0)) {
        *DAT_00541160 = DAT_00541164;
      }
      if (DAT_00541160 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


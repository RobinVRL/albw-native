#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00559148;
extern undefined4 *DAT_0055914c;
extern undefined4 DAT_00559150;
extern uint *DAT_00559154;
extern undefined4 *DAT_00559158;
extern undefined4 DAT_0055915c;
extern uint *DAT_00559160;
extern undefined4 *DAT_00559164;
extern undefined4 DAT_00559168;
extern uint *DAT_0055916c;
extern undefined4 *DAT_00559170;
extern undefined4 DAT_00559174;

// USA 0055904C <- EU 00559024 (Ghidra, non-matching)
// GLOBAL DAT_00559148 uint *
// GLOBAL DAT_0055914c undefined4 *
// GLOBAL DAT_00559150 undefined4
// GLOBAL DAT_00559154 uint *
// GLOBAL DAT_00559158 undefined4 *
// GLOBAL DAT_0055915c undefined4
// GLOBAL DAT_00559160 uint *
// GLOBAL DAT_00559164 undefined4 *
// GLOBAL DAT_00559168 undefined4
// GLOBAL DAT_0055916c uint *
// GLOBAL DAT_00559170 undefined4 *
// GLOBAL DAT_00559174 undefined4

undefined4 func_0055904C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00559148 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00559148), iVar1 != 0)) {
    *DAT_0055914c = DAT_00559150;
  }
  if (DAT_0055914c != param_2) {
    if (((*DAT_00559154 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00559154), iVar1 != 0)) {
      *DAT_00559158 = DAT_0055915c;
    }
    if (DAT_00559158 != param_2) {
      if (((*DAT_00559160 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00559160), iVar1 != 0)) {
        *DAT_00559164 = DAT_00559168;
      }
      if (DAT_00559164 != param_2) {
        if (((*DAT_0055916c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055916c), iVar1 != 0))
        {
          *DAT_00559170 = DAT_00559174;
        }
        if (DAT_00559170 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


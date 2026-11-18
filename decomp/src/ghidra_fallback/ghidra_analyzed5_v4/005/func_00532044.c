#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00532140;
extern undefined4 *DAT_00532144;
extern undefined4 DAT_00532148;
extern uint *DAT_0053214c;
extern undefined4 *DAT_00532150;
extern undefined4 DAT_00532154;
extern uint *DAT_00532158;
extern undefined4 *DAT_0053215c;
extern undefined4 DAT_00532160;
extern uint *DAT_00532164;
extern undefined4 *DAT_00532168;
extern undefined4 DAT_0053216c;

// USA 00532044 <- EU 0053201C (Ghidra, non-matching)
// GLOBAL DAT_00532140 uint *
// GLOBAL DAT_00532144 undefined4 *
// GLOBAL DAT_00532148 undefined4
// GLOBAL DAT_0053214c uint *
// GLOBAL DAT_00532150 undefined4 *
// GLOBAL DAT_00532154 undefined4
// GLOBAL DAT_00532158 uint *
// GLOBAL DAT_0053215c undefined4 *
// GLOBAL DAT_00532160 undefined4
// GLOBAL DAT_00532164 uint *
// GLOBAL DAT_00532168 undefined4 *
// GLOBAL DAT_0053216c undefined4

undefined4 func_00532044(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00532140 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00532140), iVar1 != 0)) {
    *DAT_00532144 = DAT_00532148;
  }
  if (DAT_00532144 != param_2) {
    if (((*DAT_0053214c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053214c), iVar1 != 0)) {
      *DAT_00532150 = DAT_00532154;
    }
    if (DAT_00532150 != param_2) {
      if (((*DAT_00532158 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00532158), iVar1 != 0)) {
        *DAT_0053215c = DAT_00532160;
      }
      if (DAT_0053215c != param_2) {
        if (((*DAT_00532164 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00532164), iVar1 != 0))
        {
          *DAT_00532168 = DAT_0053216c;
        }
        if (DAT_00532168 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


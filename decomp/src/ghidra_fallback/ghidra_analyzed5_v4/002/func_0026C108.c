#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0026c254;
extern undefined4 *DAT_0026c258;
extern undefined4 DAT_0026c25c;
extern uint *DAT_0026c260;
extern undefined4 *DAT_0026c264;
extern undefined4 DAT_0026c268;
extern uint *DAT_0026c26c;
extern undefined4 *DAT_0026c270;
extern undefined4 DAT_0026c274;
extern uint *DAT_0026c278;
extern undefined4 *DAT_0026c27c;
extern undefined4 DAT_0026c280;

// USA 0026C108 <- EU 0026C130 (Ghidra, non-matching)
// GLOBAL DAT_0026c254 uint *
// GLOBAL DAT_0026c258 undefined4 *
// GLOBAL DAT_0026c25c undefined4
// GLOBAL DAT_0026c260 uint *
// GLOBAL DAT_0026c264 undefined4 *
// GLOBAL DAT_0026c268 undefined4
// GLOBAL DAT_0026c26c uint *
// GLOBAL DAT_0026c270 undefined4 *
// GLOBAL DAT_0026c274 undefined4
// GLOBAL DAT_0026c278 uint *
// GLOBAL DAT_0026c27c undefined4 *
// GLOBAL DAT_0026c280 undefined4

undefined4 func_0026C108(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_0026c254 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0026c254), iVar1 != 0)) {
    *DAT_0026c258 = DAT_0026c25c;
  }
  if (DAT_0026c258 != param_1) {
    if (((*DAT_0026c260 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0026c260), iVar1 != 0)) {
      *DAT_0026c264 = DAT_0026c268;
    }
    if (DAT_0026c264 != param_1) {
      if (((*DAT_0026c26c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0026c26c), iVar1 != 0)) {
        *DAT_0026c270 = DAT_0026c274;
      }
      if (DAT_0026c270 != param_1) {
        if (((*DAT_0026c278 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0026c278), iVar1 != 0))
        {
          *DAT_0026c27c = DAT_0026c280;
        }
        if (DAT_0026c27c != param_1) {
          return 0;
        }
      }
    }
  }
  return 1;
}


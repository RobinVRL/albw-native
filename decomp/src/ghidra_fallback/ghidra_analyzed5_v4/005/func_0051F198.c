#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0051f250;
extern undefined4 *DAT_0051f254;
extern undefined4 DAT_0051f258;
extern uint *DAT_0051f25c;
extern undefined4 *DAT_0051f260;
extern undefined4 DAT_0051f264;
extern uint *DAT_0051f268;
extern undefined4 *DAT_0051f26c;
extern undefined4 DAT_0051f270;

// USA 0051F198 <- EU 0051F170 (Ghidra, non-matching)
// GLOBAL DAT_0051f250 uint *
// GLOBAL DAT_0051f254 undefined4 *
// GLOBAL DAT_0051f258 undefined4
// GLOBAL DAT_0051f25c uint *
// GLOBAL DAT_0051f260 undefined4 *
// GLOBAL DAT_0051f264 undefined4
// GLOBAL DAT_0051f268 uint *
// GLOBAL DAT_0051f26c undefined4 *
// GLOBAL DAT_0051f270 undefined4

undefined4 func_0051F198(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0051f250 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051f250), iVar1 != 0)) {
    *DAT_0051f254 = DAT_0051f258;
  }
  if (DAT_0051f254 != param_2) {
    if (((*DAT_0051f25c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051f25c), iVar1 != 0)) {
      *DAT_0051f260 = DAT_0051f264;
    }
    if (DAT_0051f260 != param_2) {
      if (((*DAT_0051f268 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051f268), iVar1 != 0)) {
        *DAT_0051f26c = DAT_0051f270;
      }
      if (DAT_0051f26c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


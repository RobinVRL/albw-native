#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052148c;
extern undefined4 *DAT_00521490;
extern undefined4 DAT_00521494;
extern uint *DAT_00521498;
extern undefined4 *DAT_0052149c;
extern undefined4 DAT_005214a0;
extern uint *DAT_005214a4;
extern undefined4 *DAT_005214a8;
extern undefined4 DAT_005214ac;

// USA 005213D4 <- EU 005213AC (Ghidra, non-matching)
// GLOBAL DAT_0052148c uint *
// GLOBAL DAT_00521490 undefined4 *
// GLOBAL DAT_00521494 undefined4
// GLOBAL DAT_00521498 uint *
// GLOBAL DAT_0052149c undefined4 *
// GLOBAL DAT_005214a0 undefined4
// GLOBAL DAT_005214a4 uint *
// GLOBAL DAT_005214a8 undefined4 *
// GLOBAL DAT_005214ac undefined4

undefined4 func_005213D4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052148c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052148c), iVar1 != 0)) {
    *DAT_00521490 = DAT_00521494;
  }
  if (DAT_00521490 != param_2) {
    if (((*DAT_00521498 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00521498), iVar1 != 0)) {
      *DAT_0052149c = DAT_005214a0;
    }
    if (DAT_0052149c != param_2) {
      if (((*DAT_005214a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005214a4), iVar1 != 0)) {
        *DAT_005214a8 = DAT_005214ac;
      }
      if (DAT_005214a8 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


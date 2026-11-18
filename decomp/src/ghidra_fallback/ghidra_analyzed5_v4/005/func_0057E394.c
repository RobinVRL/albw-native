#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057e408;
extern undefined4 *DAT_0057e40c;
extern undefined4 DAT_0057e410;
extern uint *DAT_0057e414;
extern undefined4 *DAT_0057e418;
extern undefined4 DAT_0057e41c;

// USA 0057E394 <- EU 0057E36C (Ghidra, non-matching)
// GLOBAL DAT_0057e408 uint *
// GLOBAL DAT_0057e40c undefined4 *
// GLOBAL DAT_0057e410 undefined4
// GLOBAL DAT_0057e414 uint *
// GLOBAL DAT_0057e418 undefined4 *
// GLOBAL DAT_0057e41c undefined4

undefined4 func_0057E394(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057e408 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057e408), iVar1 != 0)) {
    *DAT_0057e40c = DAT_0057e410;
  }
  if (DAT_0057e40c != param_2) {
    if (((*DAT_0057e414 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057e414), iVar1 != 0)) {
      *DAT_0057e418 = DAT_0057e41c;
    }
    if (DAT_0057e418 != param_2) {
      return 0;
    }
  }
  return 1;
}


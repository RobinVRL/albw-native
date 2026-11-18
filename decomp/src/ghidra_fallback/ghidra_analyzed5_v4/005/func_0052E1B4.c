#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052e26c;
extern undefined4 *DAT_0052e270;
extern undefined4 DAT_0052e274;
extern uint *DAT_0052e278;
extern undefined4 *DAT_0052e27c;
extern undefined4 DAT_0052e280;
extern uint *DAT_0052e284;
extern undefined4 *DAT_0052e288;
extern undefined4 DAT_0052e28c;

// USA 0052E1B4 <- EU 0052E18C (Ghidra, non-matching)
// GLOBAL DAT_0052e26c uint *
// GLOBAL DAT_0052e270 undefined4 *
// GLOBAL DAT_0052e274 undefined4
// GLOBAL DAT_0052e278 uint *
// GLOBAL DAT_0052e27c undefined4 *
// GLOBAL DAT_0052e280 undefined4
// GLOBAL DAT_0052e284 uint *
// GLOBAL DAT_0052e288 undefined4 *
// GLOBAL DAT_0052e28c undefined4

undefined4 func_0052E1B4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052e26c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052e26c), iVar1 != 0)) {
    *DAT_0052e270 = DAT_0052e274;
  }
  if (DAT_0052e270 != param_2) {
    if (((*DAT_0052e278 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052e278), iVar1 != 0)) {
      *DAT_0052e27c = DAT_0052e280;
    }
    if (DAT_0052e27c != param_2) {
      if (((*DAT_0052e284 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052e284), iVar1 != 0)) {
        *DAT_0052e288 = DAT_0052e28c;
      }
      if (DAT_0052e288 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


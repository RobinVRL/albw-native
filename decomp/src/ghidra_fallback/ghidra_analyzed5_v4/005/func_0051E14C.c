#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0051e248;
extern undefined4 *DAT_0051e24c;
extern undefined4 DAT_0051e250;
extern uint *DAT_0051e254;
extern undefined4 *DAT_0051e258;
extern undefined4 DAT_0051e25c;
extern uint *DAT_0051e260;
extern undefined4 *DAT_0051e264;
extern undefined4 DAT_0051e268;
extern uint *DAT_0051e26c;
extern undefined4 *DAT_0051e270;
extern undefined4 DAT_0051e274;

// USA 0051E14C <- EU 0051E124 (Ghidra, non-matching)
// GLOBAL DAT_0051e248 uint *
// GLOBAL DAT_0051e24c undefined4 *
// GLOBAL DAT_0051e250 undefined4
// GLOBAL DAT_0051e254 uint *
// GLOBAL DAT_0051e258 undefined4 *
// GLOBAL DAT_0051e25c undefined4
// GLOBAL DAT_0051e260 uint *
// GLOBAL DAT_0051e264 undefined4 *
// GLOBAL DAT_0051e268 undefined4
// GLOBAL DAT_0051e26c uint *
// GLOBAL DAT_0051e270 undefined4 *
// GLOBAL DAT_0051e274 undefined4

undefined4 func_0051E14C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0051e248 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051e248), iVar1 != 0)) {
    *DAT_0051e24c = DAT_0051e250;
  }
  if (DAT_0051e24c != param_2) {
    if (((*DAT_0051e254 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051e254), iVar1 != 0)) {
      *DAT_0051e258 = DAT_0051e25c;
    }
    if (DAT_0051e258 != param_2) {
      if (((*DAT_0051e260 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051e260), iVar1 != 0)) {
        *DAT_0051e264 = DAT_0051e268;
      }
      if (DAT_0051e264 != param_2) {
        if (((*DAT_0051e26c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051e26c), iVar1 != 0))
        {
          *DAT_0051e270 = DAT_0051e274;
        }
        if (DAT_0051e270 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


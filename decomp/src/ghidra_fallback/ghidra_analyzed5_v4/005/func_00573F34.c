#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00574074;
extern undefined4 *DAT_00574078;
extern undefined4 DAT_0057407c;
extern uint *DAT_00574080;
extern undefined4 *DAT_00574084;
extern undefined4 DAT_00574088;
extern uint *DAT_0057408c;
extern undefined4 *DAT_00574090;
extern undefined4 DAT_00574094;
extern uint *DAT_00574098;
extern undefined4 *DAT_0057409c;
extern undefined4 DAT_005740a0;
extern uint *DAT_005740a4;
extern undefined4 *DAT_005740a8;
extern undefined4 DAT_005740ac;

// USA 00573F34 <- EU 00573F0C (Ghidra, non-matching)
// GLOBAL DAT_00574074 uint *
// GLOBAL DAT_00574078 undefined4 *
// GLOBAL DAT_0057407c undefined4
// GLOBAL DAT_00574080 uint *
// GLOBAL DAT_00574084 undefined4 *
// GLOBAL DAT_00574088 undefined4
// GLOBAL DAT_0057408c uint *
// GLOBAL DAT_00574090 undefined4 *
// GLOBAL DAT_00574094 undefined4
// GLOBAL DAT_00574098 uint *
// GLOBAL DAT_0057409c undefined4 *
// GLOBAL DAT_005740a0 undefined4
// GLOBAL DAT_005740a4 uint *
// GLOBAL DAT_005740a8 undefined4 *
// GLOBAL DAT_005740ac undefined4

undefined4 func_00573F34(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00574074 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00574074), iVar1 != 0)) {
    *DAT_00574078 = DAT_0057407c;
  }
  if (DAT_00574078 != param_2) {
    if (((*DAT_00574080 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00574080), iVar1 != 0)) {
      *DAT_00574084 = DAT_00574088;
    }
    if (DAT_00574084 != param_2) {
      if (((*DAT_0057408c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057408c), iVar1 != 0)) {
        *DAT_00574090 = DAT_00574094;
      }
      if (DAT_00574090 != param_2) {
        if (((*DAT_00574098 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00574098), iVar1 != 0))
        {
          *DAT_0057409c = DAT_005740a0;
        }
        if (DAT_0057409c != param_2) {
          if (((*DAT_005740a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005740a4), iVar1 != 0)
             ) {
            *DAT_005740a8 = DAT_005740ac;
          }
          if (DAT_005740a8 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


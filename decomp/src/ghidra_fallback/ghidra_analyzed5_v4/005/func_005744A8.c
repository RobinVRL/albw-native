#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005745e8;
extern undefined4 *DAT_005745ec;
extern undefined4 DAT_005745f0;
extern uint *DAT_005745f4;
extern undefined4 *DAT_005745f8;
extern undefined4 DAT_005745fc;
extern uint *DAT_00574600;
extern undefined4 *DAT_00574604;
extern undefined4 DAT_00574608;
extern uint *DAT_0057460c;
extern undefined4 *DAT_00574610;
extern undefined4 DAT_00574614;
extern uint *DAT_00574618;
extern undefined4 *DAT_0057461c;
extern undefined4 DAT_00574620;

// USA 005744A8 <- EU 00574480 (Ghidra, non-matching)
// GLOBAL DAT_005745e8 uint *
// GLOBAL DAT_005745ec undefined4 *
// GLOBAL DAT_005745f0 undefined4
// GLOBAL DAT_005745f4 uint *
// GLOBAL DAT_005745f8 undefined4 *
// GLOBAL DAT_005745fc undefined4
// GLOBAL DAT_00574600 uint *
// GLOBAL DAT_00574604 undefined4 *
// GLOBAL DAT_00574608 undefined4
// GLOBAL DAT_0057460c uint *
// GLOBAL DAT_00574610 undefined4 *
// GLOBAL DAT_00574614 undefined4
// GLOBAL DAT_00574618 uint *
// GLOBAL DAT_0057461c undefined4 *
// GLOBAL DAT_00574620 undefined4

undefined4 func_005744A8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005745e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005745e8), iVar1 != 0)) {
    *DAT_005745ec = DAT_005745f0;
  }
  if (DAT_005745ec != param_2) {
    if (((*DAT_005745f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005745f4), iVar1 != 0)) {
      *DAT_005745f8 = DAT_005745fc;
    }
    if (DAT_005745f8 != param_2) {
      if (((*DAT_00574600 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00574600), iVar1 != 0)) {
        *DAT_00574604 = DAT_00574608;
      }
      if (DAT_00574604 != param_2) {
        if (((*DAT_0057460c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057460c), iVar1 != 0))
        {
          *DAT_00574610 = DAT_00574614;
        }
        if (DAT_00574610 != param_2) {
          if (((*DAT_00574618 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00574618), iVar1 != 0)
             ) {
            *DAT_0057461c = DAT_00574620;
          }
          if (DAT_0057461c != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


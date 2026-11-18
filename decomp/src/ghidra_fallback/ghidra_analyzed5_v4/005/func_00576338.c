#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00576478;
extern undefined4 *DAT_0057647c;
extern undefined4 DAT_00576480;
extern uint *DAT_00576484;
extern undefined4 *DAT_00576488;
extern undefined4 DAT_0057648c;
extern uint *DAT_00576490;
extern undefined4 *DAT_00576494;
extern undefined4 DAT_00576498;
extern uint *DAT_0057649c;
extern undefined4 *DAT_005764a0;
extern undefined4 DAT_005764a4;
extern uint *DAT_005764a8;
extern undefined4 *DAT_005764ac;
extern undefined4 DAT_005764b0;

// USA 00576338 <- EU 00576310 (Ghidra, non-matching)
// GLOBAL DAT_00576478 uint *
// GLOBAL DAT_0057647c undefined4 *
// GLOBAL DAT_00576480 undefined4
// GLOBAL DAT_00576484 uint *
// GLOBAL DAT_00576488 undefined4 *
// GLOBAL DAT_0057648c undefined4
// GLOBAL DAT_00576490 uint *
// GLOBAL DAT_00576494 undefined4 *
// GLOBAL DAT_00576498 undefined4
// GLOBAL DAT_0057649c uint *
// GLOBAL DAT_005764a0 undefined4 *
// GLOBAL DAT_005764a4 undefined4
// GLOBAL DAT_005764a8 uint *
// GLOBAL DAT_005764ac undefined4 *
// GLOBAL DAT_005764b0 undefined4

undefined4 func_00576338(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00576478 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576478), iVar1 != 0)) {
    *DAT_0057647c = DAT_00576480;
  }
  if (DAT_0057647c != param_2) {
    if (((*DAT_00576484 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576484), iVar1 != 0)) {
      *DAT_00576488 = DAT_0057648c;
    }
    if (DAT_00576488 != param_2) {
      if (((*DAT_00576490 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576490), iVar1 != 0)) {
        *DAT_00576494 = DAT_00576498;
      }
      if (DAT_00576494 != param_2) {
        if (((*DAT_0057649c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057649c), iVar1 != 0))
        {
          *DAT_005764a0 = DAT_005764a4;
        }
        if (DAT_005764a0 != param_2) {
          if (((*DAT_005764a8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005764a8), iVar1 != 0)
             ) {
            *DAT_005764ac = DAT_005764b0;
          }
          if (DAT_005764ac != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


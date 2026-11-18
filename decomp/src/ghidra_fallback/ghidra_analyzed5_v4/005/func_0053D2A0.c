#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053d468;
extern undefined4 *DAT_0053d46c;
extern undefined4 DAT_0053d470;
extern uint *DAT_0053d474;
extern undefined4 *DAT_0053d478;
extern undefined4 DAT_0053d47c;
extern uint *DAT_0053d480;
extern undefined4 *DAT_0053d484;
extern undefined4 DAT_0053d488;
extern uint *DAT_0053d48c;
extern undefined4 *DAT_0053d490;
extern undefined4 DAT_0053d494;
extern uint *DAT_0053d498;
extern undefined4 *DAT_0053d49c;
extern undefined4 DAT_0053d4a0;
extern uint *DAT_0053d4a4;
extern undefined4 *DAT_0053d4a8;
extern undefined4 DAT_0053d4ac;
extern uint *DAT_0053d4b0;
extern undefined4 *DAT_0053d4b4;
extern undefined4 DAT_0053d4b8;

// USA 0053D2A0 <- EU 0053D278 (Ghidra, non-matching)
// GLOBAL DAT_0053d468 uint *
// GLOBAL DAT_0053d46c undefined4 *
// GLOBAL DAT_0053d470 undefined4
// GLOBAL DAT_0053d474 uint *
// GLOBAL DAT_0053d478 undefined4 *
// GLOBAL DAT_0053d47c undefined4
// GLOBAL DAT_0053d480 uint *
// GLOBAL DAT_0053d484 undefined4 *
// GLOBAL DAT_0053d488 undefined4
// GLOBAL DAT_0053d48c uint *
// GLOBAL DAT_0053d490 undefined4 *
// GLOBAL DAT_0053d494 undefined4
// GLOBAL DAT_0053d498 uint *
// GLOBAL DAT_0053d49c undefined4 *
// GLOBAL DAT_0053d4a0 undefined4
// GLOBAL DAT_0053d4a4 uint *
// GLOBAL DAT_0053d4a8 undefined4 *
// GLOBAL DAT_0053d4ac undefined4
// GLOBAL DAT_0053d4b0 uint *
// GLOBAL DAT_0053d4b4 undefined4 *
// GLOBAL DAT_0053d4b8 undefined4

undefined4 func_0053D2A0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053d468 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053d468), iVar1 != 0)) {
    *DAT_0053d46c = DAT_0053d470;
  }
  if (DAT_0053d46c != param_2) {
    if (((*DAT_0053d474 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053d474), iVar1 != 0)) {
      *DAT_0053d478 = DAT_0053d47c;
    }
    if (DAT_0053d478 != param_2) {
      if (((*DAT_0053d480 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053d480), iVar1 != 0)) {
        *DAT_0053d484 = DAT_0053d488;
      }
      if (DAT_0053d484 != param_2) {
        if (((*DAT_0053d48c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053d48c), iVar1 != 0))
        {
          *DAT_0053d490 = DAT_0053d494;
        }
        if (DAT_0053d490 != param_2) {
          if (((*DAT_0053d498 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053d498), iVar1 != 0)
             ) {
            *DAT_0053d49c = DAT_0053d4a0;
          }
          if (DAT_0053d49c != param_2) {
            if (((*DAT_0053d4a4 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0053d4a4), iVar1 != 0)) {
              *DAT_0053d4a8 = DAT_0053d4ac;
            }
            if (DAT_0053d4a8 != param_2) {
              if (((*DAT_0053d4b0 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_0053d4b0), iVar1 != 0)) {
                *DAT_0053d4b4 = DAT_0053d4b8;
              }
              if (DAT_0053d4b4 != param_2) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return 1;
}


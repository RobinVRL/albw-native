#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054d42c;
extern undefined4 *DAT_0054d430;
extern undefined4 DAT_0054d434;
extern uint *DAT_0054d438;
extern undefined4 *DAT_0054d43c;
extern undefined4 DAT_0054d440;
extern uint *DAT_0054d444;
extern undefined4 *DAT_0054d448;
extern undefined4 DAT_0054d44c;
extern uint *DAT_0054d450;
extern undefined4 *DAT_0054d454;
extern undefined4 DAT_0054d458;
extern uint *DAT_0054d45c;
extern undefined4 *DAT_0054d460;
extern undefined4 DAT_0054d464;
extern uint *DAT_0054d468;
extern undefined4 *DAT_0054d46c;
extern undefined4 DAT_0054d470;

// USA 0054D2A8 <- EU 0054D280 (Ghidra, non-matching)
// GLOBAL DAT_0054d42c uint *
// GLOBAL DAT_0054d430 undefined4 *
// GLOBAL DAT_0054d434 undefined4
// GLOBAL DAT_0054d438 uint *
// GLOBAL DAT_0054d43c undefined4 *
// GLOBAL DAT_0054d440 undefined4
// GLOBAL DAT_0054d444 uint *
// GLOBAL DAT_0054d448 undefined4 *
// GLOBAL DAT_0054d44c undefined4
// GLOBAL DAT_0054d450 uint *
// GLOBAL DAT_0054d454 undefined4 *
// GLOBAL DAT_0054d458 undefined4
// GLOBAL DAT_0054d45c uint *
// GLOBAL DAT_0054d460 undefined4 *
// GLOBAL DAT_0054d464 undefined4
// GLOBAL DAT_0054d468 uint *
// GLOBAL DAT_0054d46c undefined4 *
// GLOBAL DAT_0054d470 undefined4

undefined4 func_0054D2A8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054d42c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054d42c), iVar1 != 0)) {
    *DAT_0054d430 = DAT_0054d434;
  }
  if (DAT_0054d430 != param_2) {
    if (((*DAT_0054d438 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054d438), iVar1 != 0)) {
      *DAT_0054d43c = DAT_0054d440;
    }
    if (DAT_0054d43c != param_2) {
      if (((*DAT_0054d444 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054d444), iVar1 != 0)) {
        *DAT_0054d448 = DAT_0054d44c;
      }
      if (DAT_0054d448 != param_2) {
        if (((*DAT_0054d450 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054d450), iVar1 != 0))
        {
          *DAT_0054d454 = DAT_0054d458;
        }
        if (DAT_0054d454 != param_2) {
          if (((*DAT_0054d45c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054d45c), iVar1 != 0)
             ) {
            *DAT_0054d460 = DAT_0054d464;
          }
          if (DAT_0054d460 != param_2) {
            if (((*DAT_0054d468 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0054d468), iVar1 != 0)) {
              *DAT_0054d46c = DAT_0054d470;
            }
            if (DAT_0054d46c != param_2) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}


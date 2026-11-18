#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058635c;
extern undefined4 *DAT_00586360;
extern undefined4 DAT_00586364;
extern uint *DAT_00586368;
extern undefined4 *DAT_0058636c;
extern undefined4 DAT_00586370;
extern uint *DAT_00586374;
extern undefined4 *DAT_00586378;
extern undefined4 DAT_0058637c;
extern uint *DAT_00586380;
extern undefined4 *DAT_00586384;
extern undefined4 DAT_00586388;
extern uint *DAT_0058638c;
extern undefined4 *DAT_00586390;
extern undefined4 DAT_00586394;
extern uint *DAT_00586398;
extern undefined4 *DAT_0058639c;
extern undefined4 DAT_005863a0;
extern uint *DAT_005863a4;
extern undefined4 *DAT_005863a8;
extern undefined4 DAT_005863ac;

// USA 00586194 <- EU 0058616C (Ghidra, non-matching)
// GLOBAL DAT_0058635c uint *
// GLOBAL DAT_00586360 undefined4 *
// GLOBAL DAT_00586364 undefined4
// GLOBAL DAT_00586368 uint *
// GLOBAL DAT_0058636c undefined4 *
// GLOBAL DAT_00586370 undefined4
// GLOBAL DAT_00586374 uint *
// GLOBAL DAT_00586378 undefined4 *
// GLOBAL DAT_0058637c undefined4
// GLOBAL DAT_00586380 uint *
// GLOBAL DAT_00586384 undefined4 *
// GLOBAL DAT_00586388 undefined4
// GLOBAL DAT_0058638c uint *
// GLOBAL DAT_00586390 undefined4 *
// GLOBAL DAT_00586394 undefined4
// GLOBAL DAT_00586398 uint *
// GLOBAL DAT_0058639c undefined4 *
// GLOBAL DAT_005863a0 undefined4
// GLOBAL DAT_005863a4 uint *
// GLOBAL DAT_005863a8 undefined4 *
// GLOBAL DAT_005863ac undefined4

undefined4 func_00586194(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058635c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058635c), iVar1 != 0)) {
    *DAT_00586360 = DAT_00586364;
  }
  if (DAT_00586360 != param_2) {
    if (((*DAT_00586368 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00586368), iVar1 != 0)) {
      *DAT_0058636c = DAT_00586370;
    }
    if (DAT_0058636c != param_2) {
      if (((*DAT_00586374 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00586374), iVar1 != 0)) {
        *DAT_00586378 = DAT_0058637c;
      }
      if (DAT_00586378 != param_2) {
        if (((*DAT_00586380 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00586380), iVar1 != 0))
        {
          *DAT_00586384 = DAT_00586388;
        }
        if (DAT_00586384 != param_2) {
          if (((*DAT_0058638c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058638c), iVar1 != 0)
             ) {
            *DAT_00586390 = DAT_00586394;
          }
          if (DAT_00586390 != param_2) {
            if (((*DAT_00586398 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_00586398), iVar1 != 0)) {
              *DAT_0058639c = DAT_005863a0;
            }
            if (DAT_0058639c != param_2) {
              if (((*DAT_005863a4 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_005863a4), iVar1 != 0)) {
                *DAT_005863a8 = DAT_005863ac;
              }
              if (DAT_005863a8 != param_2) {
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


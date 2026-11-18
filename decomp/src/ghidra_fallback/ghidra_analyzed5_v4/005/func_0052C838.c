#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052ca00;
extern undefined4 *DAT_0052ca04;
extern undefined4 DAT_0052ca08;
extern uint *DAT_0052ca0c;
extern undefined4 *DAT_0052ca10;
extern undefined4 DAT_0052ca14;
extern uint *DAT_0052ca18;
extern undefined4 *DAT_0052ca1c;
extern undefined4 DAT_0052ca20;
extern uint *DAT_0052ca24;
extern undefined4 *DAT_0052ca28;
extern undefined4 DAT_0052ca2c;
extern uint *DAT_0052ca30;
extern undefined4 *DAT_0052ca34;
extern undefined4 DAT_0052ca38;
extern uint *DAT_0052ca3c;
extern undefined4 *DAT_0052ca40;
extern undefined4 DAT_0052ca44;
extern uint *DAT_0052ca48;
extern undefined4 *DAT_0052ca4c;
extern undefined4 DAT_0052ca50;

// USA 0052C838 <- EU 0052C810 (Ghidra, non-matching)
// GLOBAL DAT_0052ca00 uint *
// GLOBAL DAT_0052ca04 undefined4 *
// GLOBAL DAT_0052ca08 undefined4
// GLOBAL DAT_0052ca0c uint *
// GLOBAL DAT_0052ca10 undefined4 *
// GLOBAL DAT_0052ca14 undefined4
// GLOBAL DAT_0052ca18 uint *
// GLOBAL DAT_0052ca1c undefined4 *
// GLOBAL DAT_0052ca20 undefined4
// GLOBAL DAT_0052ca24 uint *
// GLOBAL DAT_0052ca28 undefined4 *
// GLOBAL DAT_0052ca2c undefined4
// GLOBAL DAT_0052ca30 uint *
// GLOBAL DAT_0052ca34 undefined4 *
// GLOBAL DAT_0052ca38 undefined4
// GLOBAL DAT_0052ca3c uint *
// GLOBAL DAT_0052ca40 undefined4 *
// GLOBAL DAT_0052ca44 undefined4
// GLOBAL DAT_0052ca48 uint *
// GLOBAL DAT_0052ca4c undefined4 *
// GLOBAL DAT_0052ca50 undefined4

undefined4 func_0052C838(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052ca00 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052ca00), iVar1 != 0)) {
    *DAT_0052ca04 = DAT_0052ca08;
  }
  if (DAT_0052ca04 != param_2) {
    if (((*DAT_0052ca0c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052ca0c), iVar1 != 0)) {
      *DAT_0052ca10 = DAT_0052ca14;
    }
    if (DAT_0052ca10 != param_2) {
      if (((*DAT_0052ca18 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052ca18), iVar1 != 0)) {
        *DAT_0052ca1c = DAT_0052ca20;
      }
      if (DAT_0052ca1c != param_2) {
        if (((*DAT_0052ca24 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052ca24), iVar1 != 0))
        {
          *DAT_0052ca28 = DAT_0052ca2c;
        }
        if (DAT_0052ca28 != param_2) {
          if (((*DAT_0052ca30 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052ca30), iVar1 != 0)
             ) {
            *DAT_0052ca34 = DAT_0052ca38;
          }
          if (DAT_0052ca34 != param_2) {
            if (((*DAT_0052ca3c & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0052ca3c), iVar1 != 0)) {
              *DAT_0052ca40 = DAT_0052ca44;
            }
            if (DAT_0052ca40 != param_2) {
              if (((*DAT_0052ca48 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_0052ca48), iVar1 != 0)) {
                *DAT_0052ca4c = DAT_0052ca50;
              }
              if (DAT_0052ca4c != param_2) {
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


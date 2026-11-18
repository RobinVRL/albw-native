#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057a954;
extern undefined4 *DAT_0057a958;
extern undefined4 DAT_0057a95c;
extern uint *DAT_0057a960;
extern undefined4 *DAT_0057a964;
extern undefined4 DAT_0057a968;
extern uint *DAT_0057a96c;
extern undefined4 *DAT_0057a970;
extern undefined4 DAT_0057a974;
extern uint *DAT_0057a978;
extern undefined4 *DAT_0057a97c;
extern undefined4 DAT_0057a980;
extern uint *DAT_0057a984;
extern undefined4 *DAT_0057a988;
extern undefined4 DAT_0057a98c;
extern uint *DAT_0057a990;
extern undefined4 *DAT_0057a994;
extern undefined4 DAT_0057a998;

// USA 0057A7D0 <- EU 0057A7A8 (Ghidra, non-matching)
// GLOBAL DAT_0057a954 uint *
// GLOBAL DAT_0057a958 undefined4 *
// GLOBAL DAT_0057a95c undefined4
// GLOBAL DAT_0057a960 uint *
// GLOBAL DAT_0057a964 undefined4 *
// GLOBAL DAT_0057a968 undefined4
// GLOBAL DAT_0057a96c uint *
// GLOBAL DAT_0057a970 undefined4 *
// GLOBAL DAT_0057a974 undefined4
// GLOBAL DAT_0057a978 uint *
// GLOBAL DAT_0057a97c undefined4 *
// GLOBAL DAT_0057a980 undefined4
// GLOBAL DAT_0057a984 uint *
// GLOBAL DAT_0057a988 undefined4 *
// GLOBAL DAT_0057a98c undefined4
// GLOBAL DAT_0057a990 uint *
// GLOBAL DAT_0057a994 undefined4 *
// GLOBAL DAT_0057a998 undefined4

undefined4 func_0057A7D0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057a954 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057a954), iVar1 != 0)) {
    *DAT_0057a958 = DAT_0057a95c;
  }
  if (DAT_0057a958 != param_2) {
    if (((*DAT_0057a960 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057a960), iVar1 != 0)) {
      *DAT_0057a964 = DAT_0057a968;
    }
    if (DAT_0057a964 != param_2) {
      if (((*DAT_0057a96c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057a96c), iVar1 != 0)) {
        *DAT_0057a970 = DAT_0057a974;
      }
      if (DAT_0057a970 != param_2) {
        if (((*DAT_0057a978 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057a978), iVar1 != 0))
        {
          *DAT_0057a97c = DAT_0057a980;
        }
        if (DAT_0057a97c != param_2) {
          if (((*DAT_0057a984 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057a984), iVar1 != 0)
             ) {
            *DAT_0057a988 = DAT_0057a98c;
          }
          if (DAT_0057a988 != param_2) {
            if (((*DAT_0057a990 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0057a990), iVar1 != 0)) {
              *DAT_0057a994 = DAT_0057a998;
            }
            if (DAT_0057a994 != param_2) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}


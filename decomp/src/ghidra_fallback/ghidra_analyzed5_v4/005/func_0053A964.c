#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053aae8;
extern undefined4 *DAT_0053aaec;
extern undefined4 DAT_0053aaf0;
extern uint *DAT_0053aaf4;
extern undefined4 *DAT_0053aaf8;
extern undefined4 DAT_0053aafc;
extern uint *DAT_0053ab00;
extern undefined4 *DAT_0053ab04;
extern undefined4 DAT_0053ab08;
extern uint *DAT_0053ab0c;
extern undefined4 *DAT_0053ab10;
extern undefined4 DAT_0053ab14;
extern uint *DAT_0053ab18;
extern undefined4 *DAT_0053ab1c;
extern undefined4 DAT_0053ab20;
extern uint *DAT_0053ab24;
extern undefined4 *DAT_0053ab28;
extern undefined4 DAT_0053ab2c;

// USA 0053A964 <- EU 0053A93C (Ghidra, non-matching)
// GLOBAL DAT_0053aae8 uint *
// GLOBAL DAT_0053aaec undefined4 *
// GLOBAL DAT_0053aaf0 undefined4
// GLOBAL DAT_0053aaf4 uint *
// GLOBAL DAT_0053aaf8 undefined4 *
// GLOBAL DAT_0053aafc undefined4
// GLOBAL DAT_0053ab00 uint *
// GLOBAL DAT_0053ab04 undefined4 *
// GLOBAL DAT_0053ab08 undefined4
// GLOBAL DAT_0053ab0c uint *
// GLOBAL DAT_0053ab10 undefined4 *
// GLOBAL DAT_0053ab14 undefined4
// GLOBAL DAT_0053ab18 uint *
// GLOBAL DAT_0053ab1c undefined4 *
// GLOBAL DAT_0053ab20 undefined4
// GLOBAL DAT_0053ab24 uint *
// GLOBAL DAT_0053ab28 undefined4 *
// GLOBAL DAT_0053ab2c undefined4

undefined4 func_0053A964(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053aae8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053aae8), iVar1 != 0)) {
    *DAT_0053aaec = DAT_0053aaf0;
  }
  if (DAT_0053aaec != param_2) {
    if (((*DAT_0053aaf4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053aaf4), iVar1 != 0)) {
      *DAT_0053aaf8 = DAT_0053aafc;
    }
    if (DAT_0053aaf8 != param_2) {
      if (((*DAT_0053ab00 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053ab00), iVar1 != 0)) {
        *DAT_0053ab04 = DAT_0053ab08;
      }
      if (DAT_0053ab04 != param_2) {
        if (((*DAT_0053ab0c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053ab0c), iVar1 != 0))
        {
          *DAT_0053ab10 = DAT_0053ab14;
        }
        if (DAT_0053ab10 != param_2) {
          if (((*DAT_0053ab18 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053ab18), iVar1 != 0)
             ) {
            *DAT_0053ab1c = DAT_0053ab20;
          }
          if (DAT_0053ab1c != param_2) {
            if (((*DAT_0053ab24 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0053ab24), iVar1 != 0)) {
              *DAT_0053ab28 = DAT_0053ab2c;
            }
            if (DAT_0053ab28 != param_2) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}


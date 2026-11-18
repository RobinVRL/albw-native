#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057ab04;
extern undefined4 *DAT_0057ab08;
extern undefined4 DAT_0057ab0c;
extern uint *DAT_0057ab10;
extern undefined4 *DAT_0057ab14;
extern undefined4 DAT_0057ab18;
extern uint *DAT_0057ab1c;
extern undefined4 *DAT_0057ab20;
extern undefined4 DAT_0057ab24;
extern uint *DAT_0057ab28;
extern undefined4 *DAT_0057ab2c;
extern undefined4 DAT_0057ab30;
extern uint *DAT_0057ab34;
extern undefined4 *DAT_0057ab38;
extern undefined4 DAT_0057ab3c;

// USA 0057A9C4 <- EU 0057A99C (Ghidra, non-matching)
// GLOBAL DAT_0057ab04 uint *
// GLOBAL DAT_0057ab08 undefined4 *
// GLOBAL DAT_0057ab0c undefined4
// GLOBAL DAT_0057ab10 uint *
// GLOBAL DAT_0057ab14 undefined4 *
// GLOBAL DAT_0057ab18 undefined4
// GLOBAL DAT_0057ab1c uint *
// GLOBAL DAT_0057ab20 undefined4 *
// GLOBAL DAT_0057ab24 undefined4
// GLOBAL DAT_0057ab28 uint *
// GLOBAL DAT_0057ab2c undefined4 *
// GLOBAL DAT_0057ab30 undefined4
// GLOBAL DAT_0057ab34 uint *
// GLOBAL DAT_0057ab38 undefined4 *
// GLOBAL DAT_0057ab3c undefined4

undefined4 func_0057A9C4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057ab04 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057ab04), iVar1 != 0)) {
    *DAT_0057ab08 = DAT_0057ab0c;
  }
  if (DAT_0057ab08 != param_2) {
    if (((*DAT_0057ab10 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057ab10), iVar1 != 0)) {
      *DAT_0057ab14 = DAT_0057ab18;
    }
    if (DAT_0057ab14 != param_2) {
      if (((*DAT_0057ab1c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057ab1c), iVar1 != 0)) {
        *DAT_0057ab20 = DAT_0057ab24;
      }
      if (DAT_0057ab20 != param_2) {
        if (((*DAT_0057ab28 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057ab28), iVar1 != 0))
        {
          *DAT_0057ab2c = DAT_0057ab30;
        }
        if (DAT_0057ab2c != param_2) {
          if (((*DAT_0057ab34 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057ab34), iVar1 != 0)
             ) {
            *DAT_0057ab38 = DAT_0057ab3c;
          }
          if (DAT_0057ab38 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


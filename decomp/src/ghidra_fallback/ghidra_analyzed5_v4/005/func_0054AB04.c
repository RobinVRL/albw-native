#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054ac00;
extern undefined4 *DAT_0054ac04;
extern undefined4 DAT_0054ac08;
extern uint *DAT_0054ac0c;
extern undefined4 *DAT_0054ac10;
extern undefined4 DAT_0054ac14;
extern uint *DAT_0054ac18;
extern undefined4 *DAT_0054ac1c;
extern undefined4 DAT_0054ac20;
extern uint *DAT_0054ac24;
extern undefined4 *DAT_0054ac28;
extern undefined4 DAT_0054ac2c;

// USA 0054AB04 <- EU 0054AADC (Ghidra, non-matching)
// GLOBAL DAT_0054ac00 uint *
// GLOBAL DAT_0054ac04 undefined4 *
// GLOBAL DAT_0054ac08 undefined4
// GLOBAL DAT_0054ac0c uint *
// GLOBAL DAT_0054ac10 undefined4 *
// GLOBAL DAT_0054ac14 undefined4
// GLOBAL DAT_0054ac18 uint *
// GLOBAL DAT_0054ac1c undefined4 *
// GLOBAL DAT_0054ac20 undefined4
// GLOBAL DAT_0054ac24 uint *
// GLOBAL DAT_0054ac28 undefined4 *
// GLOBAL DAT_0054ac2c undefined4

undefined4 func_0054AB04(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054ac00 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054ac00), iVar1 != 0)) {
    *DAT_0054ac04 = DAT_0054ac08;
  }
  if (DAT_0054ac04 != param_2) {
    if (((*DAT_0054ac0c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054ac0c), iVar1 != 0)) {
      *DAT_0054ac10 = DAT_0054ac14;
    }
    if (DAT_0054ac10 != param_2) {
      if (((*DAT_0054ac18 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054ac18), iVar1 != 0)) {
        *DAT_0054ac1c = DAT_0054ac20;
      }
      if (DAT_0054ac1c != param_2) {
        if (((*DAT_0054ac24 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054ac24), iVar1 != 0))
        {
          *DAT_0054ac28 = DAT_0054ac2c;
        }
        if (DAT_0054ac28 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


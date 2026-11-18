#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00572708;
extern undefined4 *DAT_0057270c;
extern undefined4 DAT_00572710;
extern uint *DAT_00572714;
extern undefined4 *DAT_00572718;
extern undefined4 DAT_0057271c;
extern uint *DAT_00572720;
extern undefined4 *DAT_00572724;
extern undefined4 DAT_00572728;
extern uint *DAT_0057272c;
extern undefined4 *DAT_00572730;
extern undefined4 DAT_00572734;
extern uint *DAT_00572738;
extern undefined4 *DAT_0057273c;
extern undefined4 DAT_00572740;

// USA 005725C8 <- EU 005725A0 (Ghidra, non-matching)
// GLOBAL DAT_00572708 uint *
// GLOBAL DAT_0057270c undefined4 *
// GLOBAL DAT_00572710 undefined4
// GLOBAL DAT_00572714 uint *
// GLOBAL DAT_00572718 undefined4 *
// GLOBAL DAT_0057271c undefined4
// GLOBAL DAT_00572720 uint *
// GLOBAL DAT_00572724 undefined4 *
// GLOBAL DAT_00572728 undefined4
// GLOBAL DAT_0057272c uint *
// GLOBAL DAT_00572730 undefined4 *
// GLOBAL DAT_00572734 undefined4
// GLOBAL DAT_00572738 uint *
// GLOBAL DAT_0057273c undefined4 *
// GLOBAL DAT_00572740 undefined4

undefined4 func_005725C8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00572708 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572708), iVar1 != 0)) {
    *DAT_0057270c = DAT_00572710;
  }
  if (DAT_0057270c != param_2) {
    if (((*DAT_00572714 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572714), iVar1 != 0)) {
      *DAT_00572718 = DAT_0057271c;
    }
    if (DAT_00572718 != param_2) {
      if (((*DAT_00572720 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572720), iVar1 != 0)) {
        *DAT_00572724 = DAT_00572728;
      }
      if (DAT_00572724 != param_2) {
        if (((*DAT_0057272c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057272c), iVar1 != 0))
        {
          *DAT_00572730 = DAT_00572734;
        }
        if (DAT_00572730 != param_2) {
          if (((*DAT_00572738 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572738), iVar1 != 0)
             ) {
            *DAT_0057273c = DAT_00572740;
          }
          if (DAT_0057273c != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057b8f0;
extern undefined4 *DAT_0057b8f4;
extern undefined4 DAT_0057b8f8;
extern uint *DAT_0057b8fc;
extern undefined4 *DAT_0057b900;
extern undefined4 DAT_0057b904;
extern uint *DAT_0057b908;
extern undefined4 *DAT_0057b90c;
extern undefined4 DAT_0057b910;

// USA 0057B838 <- EU 0057B810 (Ghidra, non-matching)
// GLOBAL DAT_0057b8f0 uint *
// GLOBAL DAT_0057b8f4 undefined4 *
// GLOBAL DAT_0057b8f8 undefined4
// GLOBAL DAT_0057b8fc uint *
// GLOBAL DAT_0057b900 undefined4 *
// GLOBAL DAT_0057b904 undefined4
// GLOBAL DAT_0057b908 uint *
// GLOBAL DAT_0057b90c undefined4 *
// GLOBAL DAT_0057b910 undefined4

undefined4 func_0057B838(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057b8f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b8f0), iVar1 != 0)) {
    *DAT_0057b8f4 = DAT_0057b8f8;
  }
  if (DAT_0057b8f4 != param_2) {
    if (((*DAT_0057b8fc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b8fc), iVar1 != 0)) {
      *DAT_0057b900 = DAT_0057b904;
    }
    if (DAT_0057b900 != param_2) {
      if (((*DAT_0057b908 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b908), iVar1 != 0)) {
        *DAT_0057b90c = DAT_0057b910;
      }
      if (DAT_0057b90c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057e77c;
extern undefined4 *DAT_0057e780;
extern undefined4 DAT_0057e784;
extern uint *DAT_0057e788;
extern undefined4 *DAT_0057e78c;
extern undefined4 DAT_0057e790;

// USA 0057E708 <- EU 0057E6E0 (Ghidra, non-matching)
// GLOBAL DAT_0057e77c uint *
// GLOBAL DAT_0057e780 undefined4 *
// GLOBAL DAT_0057e784 undefined4
// GLOBAL DAT_0057e788 uint *
// GLOBAL DAT_0057e78c undefined4 *
// GLOBAL DAT_0057e790 undefined4

undefined4 func_0057E708(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057e77c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057e77c), iVar1 != 0)) {
    *DAT_0057e780 = DAT_0057e784;
  }
  if (DAT_0057e780 != param_2) {
    if (((*DAT_0057e788 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057e788), iVar1 != 0)) {
      *DAT_0057e78c = DAT_0057e790;
    }
    if (DAT_0057e78c != param_2) {
      return 0;
    }
  }
  return 1;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052e00c;
extern undefined4 *DAT_0052e010;
extern undefined4 DAT_0052e014;
extern uint *DAT_0052e018;
extern undefined4 *DAT_0052e01c;
extern undefined4 DAT_0052e020;
extern uint *DAT_0052e024;
extern undefined4 *DAT_0052e028;
extern undefined4 DAT_0052e02c;

// USA 0052DF54 <- EU 0052DF2C (Ghidra, non-matching)
// GLOBAL DAT_0052e00c uint *
// GLOBAL DAT_0052e010 undefined4 *
// GLOBAL DAT_0052e014 undefined4
// GLOBAL DAT_0052e018 uint *
// GLOBAL DAT_0052e01c undefined4 *
// GLOBAL DAT_0052e020 undefined4
// GLOBAL DAT_0052e024 uint *
// GLOBAL DAT_0052e028 undefined4 *
// GLOBAL DAT_0052e02c undefined4

undefined4 func_0052DF54(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052e00c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052e00c), iVar1 != 0)) {
    *DAT_0052e010 = DAT_0052e014;
  }
  if (DAT_0052e010 != param_2) {
    if (((*DAT_0052e018 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052e018), iVar1 != 0)) {
      *DAT_0052e01c = DAT_0052e020;
    }
    if (DAT_0052e01c != param_2) {
      if (((*DAT_0052e024 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052e024), iVar1 != 0)) {
        *DAT_0052e028 = DAT_0052e02c;
      }
      if (DAT_0052e028 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


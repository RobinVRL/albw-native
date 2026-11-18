#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054d70c;
extern undefined4 *DAT_0054d710;
extern undefined4 DAT_0054d714;
extern uint *DAT_0054d718;
extern undefined4 *DAT_0054d71c;
extern undefined4 DAT_0054d720;
extern uint *DAT_0054d724;
extern undefined4 *DAT_0054d728;
extern undefined4 DAT_0054d72c;

// USA 0054D654 <- EU 0054D62C (Ghidra, non-matching)
// GLOBAL DAT_0054d70c uint *
// GLOBAL DAT_0054d710 undefined4 *
// GLOBAL DAT_0054d714 undefined4
// GLOBAL DAT_0054d718 uint *
// GLOBAL DAT_0054d71c undefined4 *
// GLOBAL DAT_0054d720 undefined4
// GLOBAL DAT_0054d724 uint *
// GLOBAL DAT_0054d728 undefined4 *
// GLOBAL DAT_0054d72c undefined4

undefined4 func_0054D654(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054d70c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054d70c), iVar1 != 0)) {
    *DAT_0054d710 = DAT_0054d714;
  }
  if (DAT_0054d710 != param_2) {
    if (((*DAT_0054d718 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054d718), iVar1 != 0)) {
      *DAT_0054d71c = DAT_0054d720;
    }
    if (DAT_0054d71c != param_2) {
      if (((*DAT_0054d724 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054d724), iVar1 != 0)) {
        *DAT_0054d728 = DAT_0054d72c;
      }
      if (DAT_0054d728 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


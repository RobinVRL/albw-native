#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004B9748(undefined4 *param_1);
extern uint *DAT_00572930;
extern undefined4 *DAT_00572934;
extern undefined4 DAT_00572938;
extern uint *DAT_0057293c;
extern undefined4 *DAT_00572940;
extern undefined4 DAT_00572944;
extern uint *DAT_00572948;
extern undefined4 *DAT_0057294c;
extern undefined4 DAT_00572950;

// USA 00572874 <- EU 0057284C (Ghidra, non-matching)
// GLOBAL DAT_00572930 uint *
// GLOBAL DAT_00572934 undefined4 *
// GLOBAL DAT_00572938 undefined4
// GLOBAL DAT_0057293c uint *
// GLOBAL DAT_00572940 undefined4 *
// GLOBAL DAT_00572944 undefined4
// GLOBAL DAT_00572948 uint *
// GLOBAL DAT_0057294c undefined4 *
// GLOBAL DAT_00572950 undefined4

undefined4 func_00572874(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00572930 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572930), iVar1 != 0)) {
    *DAT_00572934 = DAT_00572938;
  }
  if (DAT_00572934 != param_2) {
    if (((*DAT_0057293c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057293c), iVar1 != 0)) {
      *DAT_00572940 = DAT_00572944;
    }
    if (DAT_00572940 != param_2) {
      if (((*DAT_00572948 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572948), iVar1 != 0)) {
        *DAT_0057294c = DAT_00572950;
      }
      if (DAT_0057294c != param_2) {
        uVar2 = func_004B9748(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}


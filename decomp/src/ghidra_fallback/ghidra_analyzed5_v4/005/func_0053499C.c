#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E41C4(undefined4 *param_1);
extern uint *DAT_00534a58;
extern undefined4 *DAT_00534a5c;
extern undefined4 DAT_00534a60;
extern uint *DAT_00534a64;
extern undefined4 *DAT_00534a68;
extern undefined4 DAT_00534a6c;
extern uint *DAT_00534a70;
extern undefined4 *DAT_00534a74;
extern undefined4 DAT_00534a78;

// USA 0053499C <- EU 00534974 (Ghidra, non-matching)
// GLOBAL DAT_00534a58 uint *
// GLOBAL DAT_00534a5c undefined4 *
// GLOBAL DAT_00534a60 undefined4
// GLOBAL DAT_00534a64 uint *
// GLOBAL DAT_00534a68 undefined4 *
// GLOBAL DAT_00534a6c undefined4
// GLOBAL DAT_00534a70 uint *
// GLOBAL DAT_00534a74 undefined4 *
// GLOBAL DAT_00534a78 undefined4

undefined4 func_0053499C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00534a58 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00534a58), iVar1 != 0)) {
    *DAT_00534a5c = DAT_00534a60;
  }
  if (DAT_00534a5c != param_2) {
    if (((*DAT_00534a64 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00534a64), iVar1 != 0)) {
      *DAT_00534a68 = DAT_00534a6c;
    }
    if (DAT_00534a68 != param_2) {
      if (((*DAT_00534a70 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00534a70), iVar1 != 0)) {
        *DAT_00534a74 = DAT_00534a78;
      }
      if (DAT_00534a74 != param_2) {
        uVar2 = func_001E41C4(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}


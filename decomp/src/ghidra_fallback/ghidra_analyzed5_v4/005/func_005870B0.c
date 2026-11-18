#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E4908(undefined4 *param_1);
extern uint *DAT_00587128;
extern undefined4 *DAT_0058712c;
extern undefined4 DAT_00587130;
extern uint *DAT_00587134;
extern undefined4 *DAT_00587138;
extern undefined4 DAT_0058713c;

// USA 005870B0 <- EU 00587088 (Ghidra, non-matching)
// GLOBAL DAT_00587128 uint *
// GLOBAL DAT_0058712c undefined4 *
// GLOBAL DAT_00587130 undefined4
// GLOBAL DAT_00587134 uint *
// GLOBAL DAT_00587138 undefined4 *
// GLOBAL DAT_0058713c undefined4

undefined4 func_005870B0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00587128 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00587128), iVar1 != 0)) {
    *DAT_0058712c = DAT_00587130;
  }
  if (DAT_0058712c != param_2) {
    if (((*DAT_00587134 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00587134), iVar1 != 0)) {
      *DAT_00587138 = DAT_0058713c;
    }
    if (DAT_00587138 != param_2) {
      uVar2 = func_001E4908(param_2);
      return uVar2;
    }
  }
  return 1;
}


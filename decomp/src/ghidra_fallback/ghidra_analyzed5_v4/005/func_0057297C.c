#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004B9748(undefined4 *param_1);
extern uint *DAT_00572a38;
extern undefined4 *DAT_00572a3c;
extern undefined4 DAT_00572a40;
extern uint *DAT_00572a44;
extern undefined4 *DAT_00572a48;
extern undefined4 DAT_00572a4c;
extern uint *DAT_00572a50;
extern undefined4 *DAT_00572a54;
extern undefined4 DAT_00572a58;

// USA 0057297C <- EU 00572954 (Ghidra, non-matching)
// GLOBAL DAT_00572a38 uint *
// GLOBAL DAT_00572a3c undefined4 *
// GLOBAL DAT_00572a40 undefined4
// GLOBAL DAT_00572a44 uint *
// GLOBAL DAT_00572a48 undefined4 *
// GLOBAL DAT_00572a4c undefined4
// GLOBAL DAT_00572a50 uint *
// GLOBAL DAT_00572a54 undefined4 *
// GLOBAL DAT_00572a58 undefined4

undefined4 func_0057297C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00572a38 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572a38), iVar1 != 0)) {
    *DAT_00572a3c = DAT_00572a40;
  }
  if (DAT_00572a3c != param_2) {
    if (((*DAT_00572a44 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572a44), iVar1 != 0)) {
      *DAT_00572a48 = DAT_00572a4c;
    }
    if (DAT_00572a48 != param_2) {
      if (((*DAT_00572a50 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572a50), iVar1 != 0)) {
        *DAT_00572a54 = DAT_00572a58;
      }
      if (DAT_00572a54 != param_2) {
        uVar2 = func_004B9748(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0018D3E4(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_003c40ac;
extern uint *DAT_003c40b0;
extern undefined4 *DAT_003c40b4;
extern undefined4 DAT_003c40b8;

// USA 003C4034 <- EU 003C4010 (Ghidra, non-matching)
// GLOBAL DAT_003c40ac int *
// GLOBAL DAT_003c40b0 uint *
// GLOBAL DAT_003c40b4 undefined4 *
// GLOBAL DAT_003c40b8 undefined4

undefined4 func_003C4034(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)
           func_0052FBA0(*DAT_003c40ac + 0x3dbbc,*(uint *)(*(int *)(param_1 + 0x48) + 0x1158));
  if (((*DAT_003c40b0 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_003c40b0), iVar2 != 0)) {
    *DAT_003c40b4 = DAT_003c40b8;
  }
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*puVar1)(puVar1,DAT_003c40b4), iVar2 == 0)) {
    puVar1 = (undefined4 *)0x0;
  }
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = func_0018D3E4((int)puVar1);
    return uVar3;
  }
  return 0;
}


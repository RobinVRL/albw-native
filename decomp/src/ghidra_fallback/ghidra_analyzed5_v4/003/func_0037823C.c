#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0018D3E4(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_003782a0;
extern uint *DAT_003782a4;
extern undefined4 *DAT_003782a8;
extern undefined4 DAT_003782ac;

// USA 0037823C <- EU 00378218 (Ghidra, non-matching)
// GLOBAL DAT_003782a0 int *
// GLOBAL DAT_003782a4 uint *
// GLOBAL DAT_003782a8 undefined4 *
// GLOBAL DAT_003782ac undefined4

undefined4 func_0037823C(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_003782a0 + 0x3dbbc,*(uint *)(param_1 + 0x80));
  if (puVar1 != (undefined4 *)0x0) {
    if (((*DAT_003782a4 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_003782a4), iVar2 != 0)) {
      *DAT_003782a8 = DAT_003782ac;
    }
    iVar2 = (**(code **)*puVar1)(puVar1,DAT_003782a8);
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)0x0;
    }
    if (puVar1 != (undefined4 *)0x0) {
      uVar3 = func_0018D3E4((int)puVar1);
      return uVar3;
    }
  }
  return 0;
}


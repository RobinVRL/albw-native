#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0018E508(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_004fa924;
extern uint *DAT_004fa928;
extern undefined4 *DAT_004fa92c;
extern undefined4 DAT_004fa930;

// USA 004FA8A0 <- EU 004FA878 (Ghidra, non-matching)
// GLOBAL DAT_004fa924 int *
// GLOBAL DAT_004fa928 uint *
// GLOBAL DAT_004fa92c undefined4 *
// GLOBAL DAT_004fa930 undefined4

undefined4 func_004FA8A0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (((*(int *)(param_1 + 0x2c) != 0) && (*(char *)(*(int *)(param_1 + 0x2c) + 1) == '\t')) &&
     (puVar1 = (undefined4 *)func_0052FBA0(*DAT_004fa924 + 0x3dbbc,*(uint *)(param_1 + 0x28)),
     puVar1 != (undefined4 *)0x0)) {
    if (((*DAT_004fa928 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_004fa928), iVar2 != 0)) {
      *DAT_004fa92c = DAT_004fa930;
    }
    iVar2 = (**(code **)*puVar1)(puVar1,DAT_004fa92c);
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)0x0;
    }
    if ((puVar1 != (undefined4 *)0x0) && (iVar2 = func_0018E508((int)puVar1), iVar2 != 0)) {
      return 1;
    }
  }
  return 0;
}


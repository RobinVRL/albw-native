#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_004ece60;
extern undefined4 *DAT_004ece64;
extern undefined4 DAT_004ece68;

// USA 004ECDE4 <- EU 004ECDBC (Ghidra, non-matching)
// GLOBAL DAT_004ece60 uint *
// GLOBAL DAT_004ece64 undefined4 *
// GLOBAL DAT_004ece68 undefined4

void func_004ECDE4(undefined4 *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_2 != 1) || ((*(byte *)(param_1 + 0xb5) == param_3 && ((param_1[0xb1] & 1) == 0)))) {
    if (((*DAT_004ece60 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_004ece60), iVar1 != 0)) {
      *DAT_004ece64 = DAT_004ece68;
    }
    iVar1 = (**(code **)*param_1)(param_1,DAT_004ece64);
    puVar2 = (undefined4 *)0x0;
    if (iVar1 != 0) {
      puVar2 = param_1;
    }
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)(puVar2[200] + 0x58))(puVar2 + 200,0);
    }
    *(undefined1 *)((int)param_1 + 0x2d7) = 1;
  }
  return;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057f4d4;
extern undefined4 DAT_0057f4d8;
extern undefined4 *DAT_0057f4dc;

// USA 0057F3D0 <- EU 0057F3A8 (Ghidra, non-matching)
// GLOBAL DAT_0057f4d4 uint *
// GLOBAL DAT_0057f4d8 undefined4
// GLOBAL DAT_0057f4dc undefined4 *

undefined4 func_0057F3D0(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  uVar2 = DAT_0057f4d8;
  switch(param_2) {
  case 2:
    puVar4 = *(undefined4 **)(param_1 + 0x20);
    if (((*DAT_0057f4d4 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_0057f4d4), iVar3 != 0)) {
      *DAT_0057f4dc = uVar2;
    }
    if ((puVar4 == (undefined4 *)0x0) ||
       (iVar3 = (**(code **)*puVar4)(puVar4,DAT_0057f4dc), iVar3 == 0)) {
      puVar4 = (undefined4 *)0x0;
    }
    cVar1 = *(char *)(puVar4 + 0xe4);
    break;
  case 3:
  case 4:
    puVar4 = *(undefined4 **)(param_1 + 0x20);
    if (((*DAT_0057f4d4 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_0057f4d4), iVar3 != 0)) {
      *DAT_0057f4dc = uVar2;
    }
    if ((puVar4 == (undefined4 *)0x0) ||
       (iVar3 = (**(code **)*puVar4)(puVar4,DAT_0057f4dc), iVar3 == 0)) {
      puVar4 = (undefined4 *)0x0;
    }
    cVar1 = *(char *)((int)puVar4 + 0x391);
    break;
  case 5:
  case 6:
  case 7:
    goto switchD_0057f3c4_caseD_5;
  case 8:
  case 9:
  case 10:
    goto switchD_0057f3c4_caseD_8;
  default:
    return 0;
  }
  if (cVar1 == '\0') {
switchD_0057f3c4_caseD_5:
    return *(undefined4 *)(param_1 + 0x11c);
  }
switchD_0057f3c4_caseD_8:
  return *(undefined4 *)(param_1 + 0x120);
}


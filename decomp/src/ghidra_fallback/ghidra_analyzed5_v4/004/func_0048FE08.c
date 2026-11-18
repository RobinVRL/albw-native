#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00580850(int param_1);
extern uint *DAT_0048ff44;
extern undefined4 *DAT_0048ff48;
extern undefined4 DAT_0048ff4c;

// USA 0048FE08 <- EU 0048FDE0 (Ghidra, non-matching)
// GLOBAL DAT_0048ff44 uint *
// GLOBAL DAT_0048ff48 undefined4 *
// GLOBAL DAT_0048ff4c undefined4

int func_0048FE08(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  
  switch(param_2) {
  case 0:
  case 1:
    return param_1 + 0x6c;
  case 2:
    puVar2 = (undefined4 *)func_00580850(param_1);
    if (((*DAT_0048ff44 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_0048ff44), iVar3 != 0)) {
      *DAT_0048ff48 = DAT_0048ff4c;
    }
    if ((puVar2 == (undefined4 *)0x0) ||
       (iVar3 = (**(code **)*puVar2)(puVar2,DAT_0048ff48), iVar3 == 0)) {
      puVar2 = (undefined4 *)0x0;
    }
    cVar1 = *(char *)(puVar2 + 0xe4);
    break;
  case 3:
  case 4:
    puVar2 = (undefined4 *)func_00580850(param_1);
    if (((*DAT_0048ff44 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_0048ff44), iVar3 != 0)) {
      *DAT_0048ff48 = DAT_0048ff4c;
    }
    if ((puVar2 == (undefined4 *)0x0) ||
       (iVar3 = (**(code **)*puVar2)(puVar2,DAT_0048ff48), iVar3 == 0)) {
      puVar2 = (undefined4 *)0x0;
    }
    cVar1 = *(char *)((int)puVar2 + 0x391);
    break;
  case 5:
  case 6:
  case 7:
    return param_1 + 0xbc;
  case 8:
  case 9:
  case 10:
    return param_1 + 0x10c;
  default:
    return 0;
  }
  if (cVar1 != '\0') {
    return param_1 + 0x10c;
  }
  return param_1 + 0xbc;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00375288(int param_1,undefined1 param_2,undefined4 param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_0032a40c;
extern uint *DAT_0032a410;
extern undefined4 DAT_0032a414;
extern undefined4 *DAT_0032a418;

// USA 0032A2C0 <- EU 0032A29C (Ghidra, non-matching)
// GLOBAL DAT_0032a40c int *
// GLOBAL DAT_0032a410 uint *
// GLOBAL DAT_0032a414 undefined4
// GLOBAL DAT_0032a418 undefined4 *

undefined4 func_0032A2C0(int param_1,int param_2,undefined1 param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  
  uVar3 = DAT_0032a414;
  puVar2 = DAT_0032a410;
  piVar1 = DAT_0032a40c;
  if (param_2 != 0) {
    iVar9 = param_1 + 0x8c4;
  }
  else {
    iVar9 = param_1 + 0x99c;
  }
  uVar8 = 0;
  if (param_2 != 0) {
    do {
      puVar4 = (uint *)(iVar9 + 0x28);
      if (uVar8 < 3) {
        puVar4 = puVar4 + uVar8;
      }
      puVar5 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,*puVar4);
      if (((*puVar2 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0032a410), iVar6 != 0)) {
        *DAT_0032a418 = uVar3;
      }
      if ((puVar5 == (undefined4 *)0x0) ||
         (iVar6 = (**(code **)*puVar5)(puVar5,DAT_0032a418), iVar6 == 0)) {
        puVar5 = (undefined4 *)0x0;
      }
      uVar7 = 0;
      if (puVar5 != (undefined4 *)0x0) {
        uVar7 = func_00375288((int)puVar5,param_3,7);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 3);
    return uVar7;
  }
  do {
    puVar4 = (uint *)(iVar9 + 0x28);
    if (uVar8 < 3) {
      puVar4 = puVar4 + uVar8;
    }
    puVar5 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,*puVar4);
    if (((*puVar2 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0032a410), iVar6 != 0)) {
      *DAT_0032a418 = uVar3;
    }
    if ((puVar5 == (undefined4 *)0x0) ||
       (iVar6 = (**(code **)*puVar5)(puVar5,DAT_0032a418), iVar6 == 0)) {
      puVar5 = (undefined4 *)0x0;
    }
    uVar7 = 0;
    if (puVar5 != (undefined4 *)0x0) {
      uVar7 = func_00375288((int)puVar5,param_3,7);
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 3);
  return uVar7;
}


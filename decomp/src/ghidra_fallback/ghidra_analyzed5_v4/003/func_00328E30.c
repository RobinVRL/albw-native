#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00374FA0(int param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_00328f6c;
extern uint *DAT_00328f70;
extern undefined4 DAT_00328f74;
extern undefined4 *DAT_00328f78;

// USA 00328E30 <- EU 00328E0C (Ghidra, non-matching)
// GLOBAL DAT_00328f6c int *
// GLOBAL DAT_00328f70 uint *
// GLOBAL DAT_00328f74 undefined4
// GLOBAL DAT_00328f78 undefined4 *

void func_00328E30(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  uVar3 = DAT_00328f74;
  puVar2 = DAT_00328f70;
  piVar1 = DAT_00328f6c;
  if (param_2 != 0) {
    iVar8 = param_1 + 0x8c4;
  }
  else {
    iVar8 = param_1 + 0x99c;
  }
  uVar7 = 0;
  if (param_2 != 0) {
    do {
      puVar4 = (uint *)(iVar8 + 0x28);
      if (uVar7 < 3) {
        puVar4 = puVar4 + uVar7;
      }
      puVar5 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,*puVar4);
      if (((*puVar2 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_00328f70), iVar6 != 0)) {
        *DAT_00328f78 = uVar3;
      }
      if ((puVar5 == (undefined4 *)0x0) || (iVar6 = (**(code **)*puVar5)(puVar5), iVar6 == 0)) {
        puVar5 = (undefined4 *)0x0;
      }
      if (puVar5 != (undefined4 *)0x0) {
        func_00374FA0((int)puVar5,param_3 & 0xff);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 3);
    return;
  }
  do {
    puVar4 = (uint *)(iVar8 + 0x28);
    if (uVar7 < 3) {
      puVar4 = puVar4 + uVar7;
    }
    puVar5 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,*puVar4);
    if (((*puVar2 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_00328f70), iVar6 != 0)) {
      *DAT_00328f78 = uVar3;
    }
    if ((puVar5 == (undefined4 *)0x0) || (iVar6 = (**(code **)*puVar5)(puVar5), iVar6 == 0)) {
      puVar5 = (undefined4 *)0x0;
    }
    if (puVar5 != (undefined4 *)0x0) {
      func_00374FA0((int)puVar5,param_3 & 0xff);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 3);
  return;
}


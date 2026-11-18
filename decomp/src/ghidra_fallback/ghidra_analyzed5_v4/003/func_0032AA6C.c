#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_003752F8(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_0032ab9c;
extern uint *DAT_0032aba0;
extern undefined4 DAT_0032aba4;
extern undefined4 *DAT_0032aba8;

// USA 0032AA6C <- EU 0032AA48 (Ghidra, non-matching)
// GLOBAL DAT_0032ab9c int *
// GLOBAL DAT_0032aba0 uint *
// GLOBAL DAT_0032aba4 undefined4
// GLOBAL DAT_0032aba8 undefined4 *

void func_0032AA6C(int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  uVar3 = DAT_0032aba4;
  puVar2 = DAT_0032aba0;
  piVar1 = DAT_0032ab9c;
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
      if (((*puVar2 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0032aba0), iVar6 != 0)) {
        *DAT_0032aba8 = uVar3;
      }
      if ((puVar5 == (undefined4 *)0x0) ||
         (iVar6 = (**(code **)*puVar5)(puVar5,DAT_0032aba8), iVar6 == 0)) {
        puVar5 = (undefined4 *)0x0;
      }
      if (puVar5 != (undefined4 *)0x0) {
        func_003752F8((int)puVar5);
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
    if (((*puVar2 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0032aba0), iVar6 != 0)) {
      *DAT_0032aba8 = uVar3;
    }
    if ((puVar5 == (undefined4 *)0x0) ||
       (iVar6 = (**(code **)*puVar5)(puVar5,DAT_0032aba8), iVar6 == 0)) {
      puVar5 = (undefined4 *)0x0;
    }
    if (puVar5 != (undefined4 *)0x0) {
      func_003752F8((int)puVar5);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 3);
  return;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0018E508(int param_1);
extern int func_00192A48(int param_1,undefined4 param_2,uint param_3);
extern int func_00315930(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int *DAT_00192e0c;
extern undefined4 DAT_00192e10;
extern undefined4 DAT_00192e14;
extern uint *DAT_00192e18;
extern undefined4 *DAT_00192e1c;
extern uint *DAT_00192e20;
extern undefined4 *DAT_00192e24;
extern int *DAT_00192e28;

// USA 00192BF4 <- EU 00192BF4 (Ghidra, non-matching)
// GLOBAL DAT_00192e0c int *
// GLOBAL DAT_00192e10 undefined4
// GLOBAL DAT_00192e14 undefined4
// GLOBAL DAT_00192e18 uint *
// GLOBAL DAT_00192e1c undefined4 *
// GLOBAL DAT_00192e20 uint *
// GLOBAL DAT_00192e24 undefined4 *
// GLOBAL DAT_00192e28 int *

undefined4 func_00192BF4(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  
  bVar3 = func_00588BF0(param_1,1);
  uVar2 = DAT_00192e14;
  if (bVar3) {
    return 0;
  }
  if (*(char *)(param_1 + 0x410) == '\x01') {
    return 0;
  }
  if (*(int *)(param_2 + 0x2c) == 0) {
    return 0;
  }
  cVar1 = *(char *)(*(int *)(param_2 + 0x2c) + 1);
  uVar7 = DAT_00192e10;
  if (cVar1 == '\t') {
    if (*(int *)(param_1 + 0x440) != 0) {
      return 0;
    }
    puVar4 = (undefined4 *)func_0052FBA0(*DAT_00192e0c + 0x3dbbc,*(uint *)(param_2 + 0x28));
    if (puVar4 == (undefined4 *)0x0) {
      return 0;
    }
    if (((*DAT_00192e18 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_00192e18), iVar5 != 0)) {
      *DAT_00192e1c = uVar2;
    }
    pcVar6 = *(code **)*puVar4;
    iVar5 = (*pcVar6)(puVar4,DAT_00192e1c);
    if (iVar5 == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    if (puVar4 == (undefined4 *)0x0) {
      return 0;
    }
    iVar5 = func_0018E508((int)puVar4);
  }
  else {
    if (cVar1 != '\n') {
      if (cVar1 != '\x11') {
        return 0;
      }
      if (**(int **)(*DAT_00192e28 + 0x2c) != 0) {
        return 0;
      }
      *(undefined1 *)(param_1 + 0x444) = 1;
      func_004CF478(*(int *)(param_1 + 0x40c),0);
      func_00151148(*(int *)(param_1 + 0x428),0);
      return 1;
    }
    if (*(int *)(param_1 + 0x440) != 0) {
      return 0;
    }
    puVar4 = (undefined4 *)func_0052FBA0(*DAT_00192e0c + 0x3dbbc,*(uint *)(param_2 + 0x28));
    if (puVar4 == (undefined4 *)0x0) {
      return 0;
    }
    if (((*DAT_00192e20 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_00192e20), iVar5 != 0)) {
      *DAT_00192e24 = uVar2;
    }
    pcVar6 = *(code **)*puVar4;
    iVar5 = (*pcVar6)(puVar4,DAT_00192e24);
    if (iVar5 == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    if (puVar4 == (undefined4 *)0x0) {
      return 0;
    }
    iVar5 = func_00315930((int)puVar4);
  }
  if (iVar5 != 0) {
    *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x44c) = uVar7;
    *(undefined4 *)(param_1 + 0x450) = uVar7;
    *(undefined4 *)(param_1 + 0x454) = uVar7;
    func_00192A48(param_1,4,(uint)pcVar6);
  }
  return 0;
}


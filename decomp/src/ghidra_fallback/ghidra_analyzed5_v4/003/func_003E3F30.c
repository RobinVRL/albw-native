#include "ghidra_types.h"

extern undefined8 func_001163A0(uint *param_1,uint *param_2,uint param_3);
extern int func_001164F4(undefined4 *param_1,uint param_2);
extern uint DAT_003e40d0;

// USA 003E3F30 <- EU 003E3F10 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint *
// PARAM param_6 Stack[0x4]:4 uint *
// PARAM param_7 Stack[0x8]:4 uint *
// GLOBAL DAT_003e40d0 uint

undefined4
func_003E3F30(int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,
             uint *param_7)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  
  puVar4 = (uint *)0x0;
  if (param_2 == (uint *)0x0 || param_3 == (uint *)0x0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      return 0;
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    if (param_4 == (uint *)0x0) {
      *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
      puVar2 = (uint *)0x0;
    }
    else {
      iVar1 = (uint)*(ushort *)(param_1 + 0x20) * 2;
      uVar3 = iVar1 + 2;
      puVar2 = (uint *)(iVar1 + 5);
      puVar4 = (uint *)((uint)puVar2 & 0xfffffffc);
      if (param_3 < puVar4) {
        return 0;
      }
      if (param_4 < param_2) {
        puVar2 = (uint *)((int)param_4 + uVar3);
      }
      if (param_4 < param_2 && param_2 < puVar2) {
        uVar3 = (int)param_2 - (int)param_4;
      }
      uVar6 = func_001163A0(param_2,param_4,uVar3);
      puVar2 = (uint *)((ulonglong)uVar6 >> 0x20);
      *(undefined4 *)(param_1 + 0x120) = 0;
    }
    if (param_5 == (uint *)0x0) {
      *(undefined4 *)(param_1 + 0x124) = 0xffffffff;
      puVar5 = puVar4;
    }
    else {
      uVar3 = (uint)*(ushort *)(param_1 + 0x22) * 0xa6;
      puVar5 = (uint *)((int)puVar4 + (uVar3 + 3 & 0xfffffffc));
      if (param_3 < puVar5) {
        return 0;
      }
      uVar6 = func_001163A0((uint *)((int)param_2 + (int)puVar4),param_5,uVar3);
      puVar2 = (uint *)((ulonglong)uVar6 >> 0x20);
      *(uint **)(param_1 + 0x124) = puVar4;
    }
    if (param_6 == (uint *)0x0) {
      *(undefined4 *)(param_1 + 0x128) = 0xffffffff;
    }
    else {
      uVar3 = 0x44;
      if (param_3 < puVar5 + 0x11) {
        return 0;
      }
      puVar4 = (uint *)((int)param_2 + (int)puVar5);
      if (param_6 < puVar4) {
        puVar2 = param_6 + 0x11;
      }
      if (param_6 < puVar4 && puVar4 < puVar2) {
        uVar3 = (int)puVar4 - (int)param_6;
      }
      func_001163A0(puVar4,param_6,uVar3);
      *(uint **)(param_1 + 0x128) = puVar5;
      puVar5 = puVar5 + 0x11;
    }
    if (param_7 == (uint *)0x0) {
      *(undefined4 *)(param_1 + 300) = 0xffffffff;
    }
    else {
      puVar4 = (uint *)((int)puVar5 + DAT_003e40d0);
      if (param_3 < puVar4) {
        return 0;
      }
      puVar2 = (uint *)((int)param_2 + (int)puVar5);
      if (param_7 < puVar2) {
        puVar4 = param_7 + 0x291b;
      }
      uVar3 = DAT_003e40d0;
      if (param_7 < puVar2 && puVar2 < puVar4) {
        uVar3 = (int)puVar2 - (int)param_7;
      }
      func_001163A0(puVar2,param_7,uVar3);
      *(uint **)(param_1 + 300) = puVar5;
    }
    *(undefined2 *)(param_1 + 0x11e) = 0;
    *(undefined2 *)(param_1 + 0x136) = 0;
    *(undefined2 *)(param_1 + 0x14a) = 0;
    *(undefined2 *)(param_1 + 0x352) = 0;
    func_001164F4((undefined4 *)(param_1 + 0x355),0xab);
    *(uint **)(param_1 + 0x130) = param_3;
    *(undefined2 *)(param_1 + 0x134) = 5;
    return 1;
  }
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x124) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x128) = 0xffffffff;
  *(undefined4 *)(param_1 + 300) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined2 *)(param_1 + 0x134) = 5;
  return 1;
}


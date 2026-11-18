#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0018B718(uint param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005568E8(int param_1);
extern int *DAT_00139ccc;
extern int *DAT_00139cd0;
extern uint *DAT_00139cd4;
extern undefined4 DAT_00139cd8;
extern undefined4 *DAT_00139cdc;
extern uint *DAT_00139ce0;
extern undefined4 *DAT_00139ce4;
extern uint *DAT_00139ce8;
extern undefined4 *DAT_00139cec;

// USA 00139B44 <- EU 00139B44 (Ghidra, non-matching)
// GLOBAL DAT_00139ccc int *
// GLOBAL DAT_00139cd0 int *
// GLOBAL DAT_00139cd4 uint *
// GLOBAL DAT_00139cd8 undefined4
// GLOBAL DAT_00139cdc undefined4 *
// GLOBAL DAT_00139ce0 uint *
// GLOBAL DAT_00139ce4 undefined4 *
// GLOBAL DAT_00139ce8 uint *
// GLOBAL DAT_00139cec undefined4 *

void func_00139B44(int param_1,uint *param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if ((*DAT_00139ccc == 0) || (uVar3 = func_005568E8(*DAT_00139ccc), *param_2 != uVar3)) {
    if ((*param_2 != 0) &&
       (puVar4 = (undefined4 *)func_0052FBA0(*DAT_00139cd0 + 0x3dbbc,*param_2), uVar1 = DAT_00139cd8
       , puVar4 != (undefined4 *)0x0)) {
      if (((*DAT_00139cd4 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_00139cd4), iVar5 != 0)) {
        *DAT_00139cdc = uVar1;
      }
      iVar5 = (**(code **)*puVar4)(puVar4,DAT_00139cdc);
      puVar2 = DAT_00139ce0;
      puVar6 = (undefined4 *)0x0;
      if (iVar5 != 0) {
        puVar6 = puVar4;
      }
      if (puVar6 != (undefined4 *)0x0) {
        *(undefined1 *)(param_1 + 0x4a0) = 1;
      }
      if (((*puVar2 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_00139ce0), iVar5 != 0)) {
        *DAT_00139ce4 = uVar1;
      }
      iVar5 = (**(code **)*puVar4)(puVar4,DAT_00139ce4);
      puVar6 = (undefined4 *)0x0;
      if (iVar5 != 0) {
        puVar6 = puVar4;
      }
      if (puVar6 != (undefined4 *)0x0) {
        func_0018B718((uint)puVar6);
        *(undefined1 *)(param_1 + 0x4a0) = 1;
      }
      if (((*DAT_00139ce8 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_00139ce8), iVar5 != 0)) {
        *DAT_00139cec = uVar1;
      }
      iVar5 = (**(code **)*puVar4)(puVar4,DAT_00139cec);
      if (iVar5 == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      if (puVar4 != (undefined4 *)0x0) {
        *(undefined1 *)(param_1 + 0x4a2) = 1;
      }
      return;
    }
  }
  else {
    **(uint **)(param_1 + 0x444) = **(uint **)(param_1 + 0x444) | 0x20000;
  }
  return;
}


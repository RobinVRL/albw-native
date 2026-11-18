#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0018B718(uint param_1);
extern int func_0018E508(int param_1);
extern int func_0051228C(int *param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_004f813c;
extern undefined4 DAT_004f8140;
extern uint *DAT_004f8144;
extern undefined4 *DAT_004f8148;
extern uint *DAT_004f814c;
extern undefined4 *DAT_004f8150;
extern uint *DAT_004f8154;
extern undefined4 *DAT_004f8158;

// USA 0037F7E4 <- EU 0037F7C0 (Ghidra, non-matching)
// GLOBAL DAT_004f813c int *
// GLOBAL DAT_004f8140 undefined4
// GLOBAL DAT_004f8144 uint *
// GLOBAL DAT_004f8148 undefined4 *
// GLOBAL DAT_004f814c uint *
// GLOBAL DAT_004f8150 undefined4 *
// GLOBAL DAT_004f8154 uint *
// GLOBAL DAT_004f8158 undefined4 *

undefined4 func_004F7E8C(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  piVar1 = DAT_004f813c;
  puVar5 = *(undefined4 **)(param_1 + 0x43c);
  *puVar5 = *(undefined4 *)(param_1 + 0x7b4);
  puVar5[1] = *(undefined4 *)(param_1 + 0x7b8);
  puVar5[2] = *(undefined4 *)(param_1 + 0x7bc);
  puVar5[3] = *(undefined4 *)(param_1 + 0x7c0);
  puVar5[4] = *(undefined4 *)(param_1 + 0x7c4);
  puVar5[5] = *(undefined4 *)(param_1 + 0x7c8);
  puVar5[6] = *(undefined4 *)(param_1 + 0x7cc);
  puVar5[7] = *(undefined4 *)(param_1 + 2000);
  *(undefined1 *)(puVar5 + 8) = *(undefined1 *)(param_1 + 0x7d4);
  *(undefined1 *)((int)puVar5 + 0x21) = *(undefined1 *)(param_1 + 0x7d5);
  *(undefined1 *)((int)puVar5 + 0x22) = *(undefined1 *)(param_1 + 0x7d6);
  *(undefined1 *)((int)puVar5 + 0x23) = *(undefined1 *)(param_1 + 0x7d7);
  puVar5[9] = *(undefined4 *)(param_1 + 0x7d8);
  puVar5[10] = *(undefined4 *)(param_1 + 0x7dc);
  puVar5[0xb] = *(undefined4 *)(param_1 + 0x7e0);
  *(undefined2 *)(puVar5 + 0xc) = *(undefined2 *)(param_1 + 0x7e4);
  *(undefined2 *)((int)puVar5 + 0x32) = *(undefined2 *)(param_1 + 0x7e6);
  puVar5[0xd] = *(undefined4 *)(param_1 + 0x7e8);
  puVar5[0xe] = *(undefined4 *)(param_1 + 0x7ec);
  puVar5[0xf] = *(undefined4 *)(param_1 + 0x7f0);
  puVar5[0x10] = *(undefined4 *)(param_1 + 0x7f4);
  puVar5[0x11] = *(undefined4 *)(param_1 + 0x7f8);
  *(undefined4 *)(param_1 + 0x7a4) = *(undefined4 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x4b5) = *(undefined1 *)(param_1 + 0x4b4);
  iVar6 = *(int *)(param_2 + 0x2c);
  piVar3 = (int *)func_0052FBA0(*piVar1 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  uVar2 = DAT_004f8140;
  if (piVar3 != (int *)0x0) {
    if (((*DAT_004f8144 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_004f8144), iVar4 != 0)) {
      *DAT_004f8148 = uVar2;
    }
    iVar4 = (**(code **)*piVar3)(piVar3,DAT_004f8148);
    if (iVar4 == 0) {
      piVar3 = (int *)0x0;
    }
    if (piVar3 != (int *)0x0) {
      func_0051228C(piVar3,1);
      return 0;
    }
  }
  if (((*(uint *)(param_1 + 0x59c) & 0x2000000) != 0) &&
     (puVar5 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,*(uint *)(param_2 + 0x28)),
     puVar5 != (undefined4 *)0x0)) {
    if (((*DAT_004f814c & 1) == 0) && (iVar4 = func_00100174((int *)DAT_004f814c), iVar4 != 0)) {
      *DAT_004f8150 = uVar2;
    }
    iVar4 = (**(code **)*puVar5)(puVar5,DAT_004f8150);
    if (iVar4 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    if (puVar5 != (undefined4 *)0x0) {
      func_0018B718((uint)puVar5);
      return 0;
    }
  }
  if ((((iVar6 != 0) && (*(char *)(iVar6 + 1) == '\t')) && (*(int *)(param_2 + 0x2c) != 0)) &&
     ((*(char *)(*(int *)(param_2 + 0x2c) + 1) == '\t' &&
      (puVar5 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,*(uint *)(param_2 + 0x28)),
      puVar5 != (undefined4 *)0x0)))) {
    if (((*DAT_004f8154 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_004f8154), iVar6 != 0)) {
      *DAT_004f8158 = uVar2;
    }
    iVar6 = (**(code **)*puVar5)(puVar5,DAT_004f8158);
    if (iVar6 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    if ((puVar5 != (undefined4 *)0x0) && (iVar6 = func_0018E508((int)puVar5), iVar6 != 0)) {
      *(undefined4 *)(param_1 + 0x79c) = *(undefined4 *)(param_2 + 0x28);
      *(undefined4 *)(param_1 + 0x7a0) = *(undefined4 *)(param_2 + 0x28);
      return 0;
    }
  }
  return 0;
}


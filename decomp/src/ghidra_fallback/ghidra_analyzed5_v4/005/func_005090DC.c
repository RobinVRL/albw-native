#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001C4508(int *param_1,int param_2,undefined4 param_3,undefined4 param_4);
extern int func_0027EA00(int *param_1,int param_2);
extern int func_0035227C(int param_1,undefined4 param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_00509250;
extern int *DAT_00509254;
extern undefined4 DAT_00509258;
extern uint *DAT_0050925c;
extern undefined4 DAT_00509260;
extern undefined4 *DAT_00509264;
extern int *DAT_00509268;
extern uint *DAT_0050926c;
extern undefined4 *DAT_00509270;

// USA 005090DC <- EU 005090B4 (Ghidra, non-matching)
// GLOBAL DAT_00509250 int *
// GLOBAL DAT_00509254 int *
// GLOBAL DAT_00509258 undefined4
// GLOBAL DAT_0050925c uint *
// GLOBAL DAT_00509260 undefined4
// GLOBAL DAT_00509264 undefined4 *
// GLOBAL DAT_00509268 int *
// GLOBAL DAT_0050926c uint *
// GLOBAL DAT_00509270 undefined4 *

undefined4 func_005090DC(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 in_r3;
  undefined4 uVar5;
  
  if ((*(int *)(param_2 + 0x34) != 0) && (*(short *)(*(int *)(param_2 + 0x34) + 10) == 4)) {
    uVar3 = *(undefined4 *)(param_2 + 0x10);
    uVar5 = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x45c) = uVar3;
    *(undefined4 *)(param_1 + 0x460) = uVar5;
    func_0035227C(param_1 + 0x324,5);
    uVar3 = DAT_00509260;
    *(undefined4 *)(param_1 + 0x4b0) = 5;
    *(undefined4 *)(param_1 + 0x4b4) = uVar3;
    *(undefined4 *)(param_1 + 0x4ac) = 0;
    *(undefined1 *)(param_1 + 0x535) = 1;
    return 1;
  }
  piVar1 = (int *)func_0052FBA0(*DAT_00509250 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if (piVar1 != (int *)0x0) {
    iVar2 = func_00588BE4((int)piVar1);
    uVar3 = DAT_00509258;
    if (iVar2 == *DAT_00509254) {
      if (((*DAT_0050925c & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0050925c), iVar2 != 0)) {
        *DAT_00509264 = uVar3;
      }
      pcVar4 = *(code **)*piVar1;
      iVar2 = (*pcVar4)(piVar1,DAT_00509264);
      if (iVar2 == 0) {
        piVar1 = (int *)0x0;
      }
      if (piVar1 != (int *)0x0) {
        func_001C4508(piVar1,1,pcVar4,in_r3);
        return 0;
      }
    }
    else if (iVar2 == *DAT_00509268) {
      if (((*DAT_0050926c & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0050926c), iVar2 != 0)) {
        *DAT_00509270 = uVar3;
      }
      iVar2 = (**(code **)*piVar1)(piVar1,DAT_00509270);
      if (iVar2 == 0) {
        piVar1 = (int *)0x0;
      }
      if (piVar1 != (int *)0x0) {
        func_0027EA00(piVar1,1);
        return 0;
      }
    }
  }
  return 1;
}


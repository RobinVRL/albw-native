#include "ghidra_types.h"

extern void func_001B6DE0(int param_1);
extern int func_004994FC(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_004B9528(int param_1,int param_2);
extern undefined DAT_0045306c;

// USA 00452EEC <- EU 00452EC4 (Ghidra, non-matching)
// GLOBAL DAT_0045306c undefined

undefined4 func_00452EEC(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  bool bVar4;
  
  func_001B6DE0(param_1);
  *(undefined1 *)(param_1 + 0x280) = 0;
  func_004994FC(param_1 + 0xb8,&DAT_0045306c,param_3,param_4);
  func_004994FC(param_1 + 0x144,&DAT_0045306c,param_3,param_4);
  piVar3 = *(int **)(param_1 + 0xb0);
  (**(code **)(*(int *)(param_1 + 0xb8) + 8))(param_1 + 0xb8);
  uVar2 = 0;
  do {
    if (*(short *)(*(int *)(param_1 + 0xbc) + uVar2 * 2) == 0) {
      if ((int)uVar2 < 0x40001) goto LAB_00452f3c;
      break;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x40001);
  uVar2 = 0;
LAB_00452f3c:
  (**(code **)(*(int *)(param_1 + 0xb8) + 8))(param_1 + 0xb8);
  (**(code **)(*piVar3 + 0x60))(piVar3,*(undefined4 *)(param_1 + 0xbc),0,uVar2 & 0xffff);
  piVar3 = *(int **)(param_1 + 0xb4);
  (**(code **)(*(int *)(param_1 + 0xb8) + 8))(param_1 + 0xb8);
  uVar2 = 0;
  do {
    if (*(short *)(*(int *)(param_1 + 0xbc) + uVar2 * 2) == 0) {
      if ((int)uVar2 < 0x40001) goto LAB_00452fbc;
      break;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x40001);
  uVar2 = 0;
LAB_00452fbc:
  (**(code **)(*(int *)(param_1 + 0xb8) + 8))(param_1 + 0xb8);
  (**(code **)(*piVar3 + 0x60))(piVar3,*(undefined4 *)(param_1 + 0xbc),0,uVar2 & 0xffff);
  piVar3 = *(int **)(param_1 + 0x260);
  cVar1 = *(char *)((int)piVar3 + 0xd);
  bVar4 = cVar1 == '\0';
  if (bVar4) {
    cVar1 = *(char *)((int)piVar3 + 0xe);
  }
  if (!bVar4 || cVar1 != '\0') {
    (**(code **)(*piVar3 + 0x34))(piVar3);
    *(undefined1 *)((int)piVar3 + 0xe) = 0;
    *(undefined1 *)((int)piVar3 + 0xd) = 0;
  }
  func_004B9528(param_1,*(int *)(param_1 + 0x260));
  piVar3 = *(int **)(param_1 + 0x264);
  cVar1 = *(char *)((int)piVar3 + 0xd);
  bVar4 = cVar1 == '\0';
  if (bVar4) {
    cVar1 = *(char *)((int)piVar3 + 0xe);
  }
  if (!bVar4 || cVar1 != '\0') {
    (**(code **)(*piVar3 + 0x34))(piVar3);
    *(undefined1 *)((int)piVar3 + 0xe) = 0;
    *(undefined1 *)((int)piVar3 + 0xd) = 0;
  }
  return func_004B9528(param_1,*(int *)(param_1 + 0x264));
}


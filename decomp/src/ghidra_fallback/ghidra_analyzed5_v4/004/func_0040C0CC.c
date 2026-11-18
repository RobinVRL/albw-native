#include "ghidra_types.h"

extern int func_003E69B8(int *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_00407AB8(int param_1,int param_2);
extern int func_00412BB4(void);
extern int func_00412C8C(int *param_1,int param_2);
extern int func_00412EF4(int param_1,int param_2);
extern int func_004137D4(undefined4 *param_1);
extern int func_00414FF0(void);
extern int func_0041568C(int param_1,int param_2);
extern int func_004197A0(undefined4 *param_1);
extern int func_0041D7F4(int param_1,uint param_2,int param_3);
extern uint DAT_0040c358;
extern uint DAT_0040c35c;
extern uint DAT_0040c360;
extern uint DAT_0040c364;
extern uint DAT_0040c368;

// USA 0040C0CC <- EU 0040C0AC (Ghidra, non-matching)
// GLOBAL DAT_0040c358 uint
// GLOBAL DAT_0040c35c uint
// GLOBAL DAT_0040c360 uint
// GLOBAL DAT_0040c364 uint
// GLOBAL DAT_0040c368 uint

void func_0040C0CC(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    do {
      func_00407AB8(*(int *)(param_1 + 0x1c) + uVar3 * 0x5c,0);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x18));
  }
  piVar1 = (int *)func_00412BB4();
  iVar2 = func_00412C8C(piVar1,1);
  func_00412EF4((int)piVar1,iVar2);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (*(int *)(param_1 + 0x104) != 0) {
    piVar1 = *(int **)(param_1 + 0x20);
    uVar5 = 0;
    uVar3 = (uint)((ulonglong)DAT_0040c358 * (ulonglong)*(uint *)(param_1 + 0x24) +
                   (ulonglong)DAT_0040c358 >> 0x27);
    if (uVar3 != 0) {
      do {
        (**(code **)(*piVar1 + 4))(piVar1);
        uVar5 = uVar5 + 1;
        piVar1 = piVar1 + 0xb6;
      } while (uVar5 < uVar3);
    }
    func_003E69B8((int *)(param_1 + 0x34),*(undefined4 **)(param_1 + 0x38),
                  (undefined4 *)(param_1 + 0x38));
    func_003E69B8((int *)(param_1 + 0x28),*(undefined4 **)(param_1 + 0x2c),
                  (undefined4 *)(param_1 + 0x2c));
    puVar4 = *(undefined4 **)(param_1 + 0x4c);
    uVar5 = 0;
    uVar3 = (uint)((ulonglong)*(uint *)(param_1 + 0x50) * (ulonglong)DAT_0040c35c >> 0x27);
    if (uVar3 != 0) {
      do {
        func_004137D4(puVar4);
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x22;
      } while (uVar5 < uVar3);
    }
    func_003E69B8((int *)(param_1 + 0x54),*(undefined4 **)(param_1 + 0x58),
                  (undefined4 *)(param_1 + 0x58));
    puVar4 = func_00414FF0();
    func_0041568C((int)puVar4,param_1 + 0x40);
    func_0041D7F4(param_1 + 0xf4,*(uint *)(param_1 + 0x104),*(int *)(param_1 + 0x108));
    piVar1 = *(int **)(param_1 + 0x6c);
    uVar5 = 0;
    uVar3 = (uint)((ulonglong)DAT_0040c360 * (ulonglong)*(uint *)(param_1 + 0x70) +
                   (ulonglong)DAT_0040c360 >> 0x28);
    if (uVar3 != 0) {
      do {
        (**(code **)(*piVar1 + 4))(piVar1);
        uVar5 = uVar5 + 1;
        piVar1 = piVar1 + 0x79;
      } while (uVar5 < uVar3);
    }
    func_003E69B8((int *)(param_1 + 0x80),*(undefined4 **)(param_1 + 0x84),
                  (undefined4 *)(param_1 + 0x84));
    func_003E69B8((int *)(param_1 + 0x74),*(undefined4 **)(param_1 + 0x78),
                  (undefined4 *)(param_1 + 0x78));
    puVar4 = *(undefined4 **)(param_1 + 0x98);
    uVar5 = 0;
    uVar3 = (uint)((ulonglong)DAT_0040c364 * (ulonglong)*(uint *)(param_1 + 0x9c) +
                   (ulonglong)DAT_0040c364 >> 0x26);
    if (uVar3 != 0) {
      do {
        func_004137D4(puVar4);
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x13;
      } while (uVar5 < uVar3);
    }
    func_003E69B8((int *)(param_1 + 0xa0),*(undefined4 **)(param_1 + 0xa4),
                  (undefined4 *)(param_1 + 0xa4));
    puVar4 = func_00414FF0();
    func_0041568C((int)puVar4,param_1 + 0x8c);
    func_004197A0((undefined4 *)(param_1 + 0xd8));
    piVar1 = *(int **)(param_1 + 0xb8);
    uVar5 = 0;
    uVar3 = (uint)((ulonglong)*(uint *)(param_1 + 0xbc) * (ulonglong)DAT_0040c368 >> 0x2d);
    if (uVar3 != 0) {
      do {
        (**(code **)(*piVar1 + 4))(piVar1);
        uVar5 = uVar5 + 1;
        piVar1 = piVar1 + 0xb0e;
      } while (uVar5 < uVar3);
    }
    func_003E69B8((int *)(param_1 + 0xcc),*(undefined4 **)(param_1 + 0xd0),
                  (undefined4 *)(param_1 + 0xd0));
    func_003E69B8((int *)(param_1 + 0xc0),*(undefined4 **)(param_1 + 0xc4),
                  (undefined4 *)(param_1 + 0xc4));
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  return;
}


#include "ghidra_types.h"

extern int func_00111EF0(int *param_1,int *param_2);
extern int func_00414BD8(int param_1,int param_2);
extern int func_0041A728(int param_1,char *param_2);
extern int func_0041D830(undefined4 *param_1,undefined4 *param_2);

// USA 0041AE6C <- EU 0041AE4C (Ghidra, non-matching)

void func_0041AE6C(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  
  piVar1 = (int *)(param_1 + -0x44);
  iVar7 = *(int *)(param_1 + 0x1c);
  piVar5 = *(int **)(iVar7 + 0x8c);
  if (*(int **)(iVar7 + 0x8c) != (int *)(iVar7 + 0x8c)) {
    do {
      piVar3 = piVar5 + -0x12;
      piVar6 = (int *)*piVar5;
      if ((char)piVar5[-0xd] != '\x03') break;
      func_00111EF0((int *)(iVar7 + 0x88),piVar5);
      if (piVar3 != (int *)0x0) {
        (**(code **)*piVar3)(piVar3);
        func_0041D830((undefined4 *)(iVar7 + 0x94),piVar3);
      }
      piVar5 = piVar6;
    } while (piVar6 != (int *)(iVar7 + 0x8c));
  }
  if (*(char *)(param_1 + -0x37) != '\0') {
    uVar2 = 0;
    if (*(uint *)(param_1 + 0xb8) != 0) {
      do {
        if (piVar1[uVar2 * 0xd0 + 0x4d] == 0) {
          (**(code **)(*piVar1 + 0x14))(piVar1);
          *(undefined1 *)(param_1 + -0x35) = 1;
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0xb8));
    }
    uVar2 = 0;
    if (*(int *)(param_1 + 0xbc) != 0) {
      do {
        func_0041A728((int)piVar1,(char *)(piVar1 + uVar2 * 9 + 0x6c1));
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0xbc));
    }
  }
  if ((*(char *)(param_1 + 0x10) != '\0') &&
     ((*(char *)(*(int *)(param_1 + 0x1c) + 0x55) != '\0' ||
      (*(int *)(*(int *)(param_1 + 0x1c) + 0x88) == 0)))) {
    *(undefined1 *)(param_1 + 0x10) = 0;
    bVar8 = *(char *)(param_1 + -0x36) != '\0';
    uVar2 = (uint)bVar8;
    if ((int)*(char *)(param_1 + 0xf) != uVar2) {
      uVar4 = 0;
      if (*(int *)(param_1 + 0xb8) != 0) {
        do {
          if (piVar1[uVar4 * 0xd0 + 0x4d] != 0) {
            func_00414BD8(piVar1[uVar4 * 0xd0 + 0x4d],uVar2);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_1 + 0xb8));
      }
      *(bool *)(param_1 + 0xf) = bVar8;
    }
  }
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  return;
}


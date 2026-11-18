#include "ghidra_types.h"

extern int func_00111EF0(int *param_1,int *param_2);
extern int func_00414BD8(int param_1,int param_2);
extern int func_0041A728(int param_1,char *param_2);
extern int func_0041D830(undefined4 *param_1,undefined4 *param_2);

// USA 0041AE74 <- EU 0041AE54 (Ghidra, non-matching)

void func_0041AE74(int *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = param_1[0x18];
  piVar4 = *(int **)(iVar6 + 0x8c);
  if (*(int **)(iVar6 + 0x8c) != (int *)(iVar6 + 0x8c)) {
    do {
      piVar2 = piVar4 + -0x12;
      piVar5 = (int *)*piVar4;
      if ((char)piVar4[-0xd] != '\x03') break;
      func_00111EF0((int *)(iVar6 + 0x88),piVar4);
      if (piVar2 != (int *)0x0) {
        (**(code **)*piVar2)(piVar2);
        func_0041D830((undefined4 *)(iVar6 + 0x94),piVar2);
      }
      piVar4 = piVar5;
    } while (piVar5 != (int *)(iVar6 + 0x8c));
  }
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    uVar1 = 0;
    if (param_1[0x3f] != 0) {
      do {
        if (param_1[uVar1 * 0xd0 + 0x4d] == 0) {
          (**(code **)(*param_1 + 0x14))(param_1);
          *(undefined1 *)((int)param_1 + 0xf) = 1;
          return;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)param_1[0x3f]);
    }
    uVar1 = 0;
    if (param_1[0x40] != 0) {
      do {
        func_0041A728((int)param_1,(char *)(param_1 + uVar1 * 9 + 0x6c1));
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)param_1[0x40]);
    }
  }
  if (((char)param_1[0x15] != '\0') &&
     ((*(char *)(param_1[0x18] + 0x55) != '\0' || (*(int *)(param_1[0x18] + 0x88) == 0)))) {
    *(undefined1 *)(param_1 + 0x15) = 0;
    bVar7 = *(char *)((int)param_1 + 0xe) != '\0';
    uVar1 = (uint)bVar7;
    if ((int)*(char *)((int)param_1 + 0x53) != uVar1) {
      uVar3 = 0;
      if (param_1[0x3f] != 0) {
        do {
          if (param_1[uVar3 * 0xd0 + 0x4d] != 0) {
            func_00414BD8(param_1[uVar3 * 0xd0 + 0x4d],uVar1);
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < (uint)param_1[0x3f]);
      }
      *(bool *)((int)param_1 + 0x53) = bVar7;
    }
  }
  if (*(char *)((int)param_1 + 0x56) != '\0') {
    *(undefined1 *)((int)param_1 + 0x56) = 0;
  }
  return;
}


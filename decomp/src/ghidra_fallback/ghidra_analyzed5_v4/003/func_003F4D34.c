#include "ghidra_types.h"

extern int func_003EA528(int param_1);
extern int func_003EDB8C(int param_1,int *param_2);
extern undefined8 func_003EF244(int param_1);
extern int func_003F0080(int param_1,uint *param_2,int param_3,int param_4);
extern int func_003F06D8(int *param_1);
extern int func_003F167C(int param_1);
extern int DAT_003f4e0c;

// USA 003F4D34 <- EU 003F4D14 (Ghidra, non-matching)
// GLOBAL DAT_003f4e0c int

undefined8 func_003F4D34(int param_1,uint *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  
  piVar3 = *(int **)(param_3 + 0xdc);
  *(undefined4 *)(param_3 + 0x29c) = 0;
  if (piVar3 == (int *)0x0) {
    return CONCAT44(param_2,param_2);
  }
  iVar2 = func_003F0080(param_1 + 4,param_2,param_3,0);
  iVar1 = DAT_003f4e0c;
  if (param_4 == 0) {
    do {
      if (*piVar3 < piVar3[1]) {
        if (iVar2 < 0) {
          func_003EDB8C(param_3,piVar3);
        }
        else {
          func_003F06D8(piVar3);
          (**(code **)(iVar1 + iVar2 * 4))(piVar3);
        }
        *(int *)(param_3 + 0x29c) = *(int *)(param_3 + 0x29c) + 1;
        piVar4 = (int *)piVar3[0x50];
      }
      else {
        piVar4 = (int *)piVar3[0x50];
        func_003EA528((int)piVar3);
      }
      piVar3 = piVar4;
    } while (piVar4 != (int *)0x0);
  }
  else {
    do {
      if (iVar2 < 0) break;
      func_003F167C((int)piVar3);
      (**(code **)(iVar1 + iVar2 * 4))(piVar3);
      *(int *)(param_3 + 0x29c) = *(int *)(param_3 + 0x29c) + 1;
      piVar3 = (int *)piVar3[0x50];
    } while (piVar3 != (int *)0x0);
  }
  uVar5 = func_003EF244(param_1 + 4);
  return uVar5;
}


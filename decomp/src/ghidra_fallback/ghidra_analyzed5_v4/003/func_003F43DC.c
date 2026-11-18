#include "ghidra_types.h"

extern int func_003EA528(int param_1);
extern int func_003ED794(int param_1,uint *param_2);
extern undefined8 func_003EF244(int param_1);
extern int func_003EF924(uint *param_1);
extern int func_003F0080(int param_1,uint *param_2,int param_3,int param_4);
extern int func_003F11EC(int param_1);
extern int func_003F13CC(int param_1);
extern int DAT_003f44c8;

// USA 003F43DC <- EU 003F43BC (Ghidra, non-matching)
// GLOBAL DAT_003f44c8 int

undefined8 func_003F43DC(int param_1,uint *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  uint *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  
  *(undefined4 *)(param_3 + 0x29c) = 0;
  func_003F11EC(param_1 + 4);
  puVar3 = *(uint **)(param_3 + 0xdc);
  if (puVar3 == (uint *)0x0) {
    return CONCAT44(extraout_r1,param_2);
  }
  iVar2 = func_003F0080(param_1 + 4,param_2,param_3,0);
  iVar1 = DAT_003f44c8;
  if (param_4 == 0) {
    do {
      if ((int)*puVar3 < (int)puVar3[1]) {
        if (iVar2 < 0) {
          func_003ED794(param_3,puVar3);
        }
        else {
          func_003EF924(puVar3);
          (**(code **)(iVar1 + iVar2 * 4))(puVar3);
        }
        *(int *)(param_3 + 0x29c) = *(int *)(param_3 + 0x29c) + 1;
        puVar4 = (uint *)puVar3[0x50];
      }
      else {
        puVar4 = (uint *)puVar3[0x50];
        func_003EA528((int)puVar3);
      }
      puVar3 = puVar4;
    } while (puVar4 != (uint *)0x0);
  }
  else {
    do {
      if (iVar2 < 0) break;
      func_003F13CC((int)puVar3);
      (**(code **)(iVar1 + iVar2 * 4))(puVar3);
      *(int *)(param_3 + 0x29c) = *(int *)(param_3 + 0x29c) + 1;
      puVar3 = (uint *)puVar3[0x50];
    } while (puVar3 != (uint *)0x0);
  }
  uVar5 = func_003EF244(param_1 + 4);
  return uVar5;
}


#include "ghidra_types.h"

extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_002FF488(undefined4 *param_1);
extern int func_003FD1EC(int param_1,int param_2);
extern int *DAT_00270d28;

// USA 00270C14 <- EU 00270C3C (Ghidra, non-matching)
// GLOBAL DAT_00270d28 int *

void func_00270C14(int *param_1,int param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  
  param_1[0x13] = param_2;
  piVar1 = DAT_00270d28;
  iVar4 = 0;
  uVar6 = (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0xc4) + 0x30) + 0x40);
  if (uVar6 != 0) {
    do {
      puVar5 = *(uint **)(*(int *)(*(int *)(*(int *)(param_2 + 0xc4) + 0x30) + 0x3c) + iVar4 * 4);
      if ((puVar5[10] & 8) != 0) {
        func_003FD1EC((int)puVar5,*(int *)(*(int *)(*piVar1 + 0xb4) + 0xc4));
        puVar2 = (undefined4 *)func_0010CF28(0x70,param_3,4);
        puVar3 = (uint *)0x0;
        if (puVar2 != (undefined4 *)0x0) {
          puVar3 = func_002FF488(puVar2);
        }
        if (*param_1 < param_1[1]) {
          *(uint **)(param_1[2] + *param_1 * 4) = puVar3;
          *param_1 = *param_1 + 1;
        }
        puVar3[0x1b] = (uint)puVar5;
        func_0010E3C4(puVar3,puVar5,0x6c);
        if ((char)puVar5[10] == '\n' || (char)puVar5[10] == '\v') {
          *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 4;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar6);
  }
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 1;
  return;
}


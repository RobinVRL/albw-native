#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_003DC834(uint *param_1,uint *param_2);
extern int func_003DE328(int param_1);
extern int func_003E1700(uint *param_1,int param_2);
extern int func_003E21EC(uint param_1);

// USA 003DC3A8 <- EU 003DC388 (Ghidra, non-matching)

uint func_003DC3A8(uint *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  
  if (0x7fff < param_2) {
    return 0;
  }
  func_0010C0C0((int *)(param_1 + 4));
  uVar1 = func_003E21EC(*param_1);
  if (uVar1 == 0x18) {
    puVar3 = (uint *)param_1[2];
    if ((puVar3[8] == 0x7fff) || ((int)param_2 < (int)puVar3[8])) {
      func_0010C160((int *)(param_1 + 4));
      return 0;
    }
    pcVar6 = (code *)puVar3[0xb];
    uVar1 = puVar3[0xc];
    func_003DC834(param_1,puVar3);
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(puVar3,uVar1);
    }
  }
  uVar1 = *param_1;
  uVar5 = 0;
  iVar4 = -LZCOUNT(uVar1 + 1 & ~uVar1);
  if ((iVar4 != -0x20) && ((int)(iVar4 + 0x1fU) < 0x18)) {
    *param_1 = uVar1 | 1 << (iVar4 + 0x1fU & 0xff);
    *(short *)(param_1 + 3) = (short)param_1[3] + 1;
    uVar5 = param_1[iVar4 + 0x596];
    func_003DE328(uVar5);
  }
  *(uint *)(uVar5 + 0x20) = param_2;
  uVar1 = param_1[1];
  if (param_1[1] == 0) {
    *(undefined4 *)(uVar5 + 0x24) = 0;
    param_1[1] = uVar5;
    *(undefined4 *)(uVar5 + 0x28) = 0;
  }
  else {
    do {
      uVar2 = uVar1;
      if (*(int *)(uVar2 + 0x20) <= (int)param_2) {
        iVar4 = *(int *)(uVar2 + 0x24);
        *(uint *)(uVar5 + 0x28) = uVar2;
        *(int *)(uVar5 + 0x24) = iVar4;
        if (iVar4 == 0) {
          *(undefined4 *)(uVar5 + 0x24) = 0;
          param_1[1] = uVar5;
        }
        else {
          *(uint *)(iVar4 + 0x28) = uVar5;
        }
        *(uint *)(uVar2 + 0x24) = uVar5;
        goto LAB_003dc4e4;
      }
      uVar1 = *(uint *)(uVar2 + 0x28);
    } while (*(uint *)(uVar2 + 0x28) != 0);
    *(uint *)(uVar2 + 0x28) = uVar5;
    *(uint *)(uVar5 + 0x24) = uVar2;
    *(undefined4 *)(uVar5 + 0x28) = 0;
  }
  param_1[2] = uVar5;
LAB_003dc4e4:
  func_0010C160((int *)(param_1 + 4));
  func_003E1700(*(uint **)(uVar5 + 0x68),2);
  *(short *)(*(int *)(uVar5 + 0x68) + 4) = *(short *)(*(int *)(uVar5 + 0x68) + 4) + 1;
  *(undefined4 *)(uVar5 + 0x2c) = param_3;
  *(undefined4 *)(uVar5 + 0x30) = param_4;
  return uVar5;
}


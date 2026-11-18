#include "ghidra_types.h"

extern int func_00435BE8(int param_1,undefined2 *param_2);
extern int func_004A8BFC(int param_1,int param_2,uint param_3);
extern int func_004A9120(undefined4 param_1,int param_2);
extern int *DAT_0014fd3c;
extern undefined4 DAT_0014fd40;
extern undefined4 DAT_0014fd44;

// USA 0014FC94 <- EU 0014FC94 (Ghidra, non-matching)
// GLOBAL DAT_0014fd3c int *
// GLOBAL DAT_0014fd40 undefined4
// GLOBAL DAT_0014fd44 undefined4

void func_0014FC94(int param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  uint uVar6;
  
  puVar5 = *(undefined2 **)(param_1 + 0x3a0);
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x4c) != 0) {
      bVar1 = *(byte *)(param_2 + 0x20);
      func_00435BE8(param_2 + 0x20,puVar5);
      piVar3 = DAT_0014fd3c;
      uVar2 = puVar5[2];
      uVar6 = uVar2 & 0xff;
      if (bVar1 != uVar6) {
        *(char *)(param_2 + 0x20) = (char)uVar2;
        func_004A9120(*piVar3,param_2);
        func_004A8BFC(*piVar3,param_2,uVar6);
      }
    }
    *(undefined1 *)(param_2 + 0x21) = 0x1f;
    uVar4 = DAT_0014fd40;
    *(undefined1 *)(param_2 + 0x22) = 0xff;
    *(undefined1 *)(param_2 + 0x23) = 0;
    *(undefined4 *)(param_2 + 0x24) = uVar4;
    *(undefined4 *)(param_2 + 0x28) = uVar4;
    *(undefined4 *)(param_2 + 0x2c) = uVar4;
    uVar4 = DAT_0014fd44;
    *(undefined2 *)(param_2 + 0x30) = 0;
    *(undefined4 *)(param_2 + 0x34) = uVar4;
    *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_2 + 0x20);
    *(undefined2 *)(param_2 + 0x32) = *(undefined2 *)(param_2 + 0x32);
  }
  return;
}


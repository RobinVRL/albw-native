#include "ghidra_types.h"

extern int func_004ED00C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0037a904;

// USA 0037A860 <- EU 0037A83C (Ghidra, non-matching)
// GLOBAL DAT_0037a904 undefined4

undefined4 * func_0037A860(undefined4 *param_1,uint *param_2)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  puVar2 = func_004ED00C(param_1,param_2);
  puVar3 = puVar2 + 200;
  *puVar2 = DAT_0037a904;
  puVar2[0xc9] = puVar3;
  puVar2[0xca] = 0;
  puVar2[0xcb] = 0;
  *puVar3 = puVar3;
  puVar2[0xcc] = 0;
  puVar2[0xcd] = 0;
  puVar3 = puVar2 + 0xce;
  if (puVar3 != (undefined4 *)0x0) {
    iVar4 = 0;
    iVar5 = 0x5f;
    puVar2[0xcb] = puVar3;
    do {
      iVar5 = iVar5 + -1;
      puVar3[iVar4] = puVar3 + iVar4 + 3;
      iVar4 = iVar4 + 3;
    } while (iVar5 != 0);
    puVar2[0x1eb] = 0;
    puVar2[0xcc] = puVar3;
    puVar2[0xcd] = 0x60;
  }
  *(short *)(puVar2 + 0x1ee) = (short)param_2[10];
  *(undefined2 *)((int)puVar2 + 0x7ba) = *(undefined2 *)((int)param_2 + 0x2e);
  puVar2[0x1ef] = 0xb4;
  *(undefined1 *)(puVar2 + 0x1f0) = 0;
  sVar1 = *(short *)((int)param_2 + 0x2a);
  *(undefined1 *)((int)puVar2 + 0x7c2) = 0;
  *(bool *)((int)puVar2 + 0x7c1) = sVar1 == 1;
  *(undefined1 *)((int)puVar2 + 0x7c3) = 1;
  return puVar2;
}


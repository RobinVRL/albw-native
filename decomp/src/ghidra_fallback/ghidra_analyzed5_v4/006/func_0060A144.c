#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_004ED00C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060a1d8;
extern int DAT_0060a1dc;

// USA 0060A144 <- EU 0060A11C (Ghidra, non-matching)
// GLOBAL DAT_0060a1d8 undefined4
// GLOBAL DAT_0060a1dc int

undefined4 * func_0060A144(uint *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x940);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = func_004ED00C(puVar1,param_1);
    puVar1 = puVar2 + 200;
    *puVar2 = DAT_0060a1d8;
    puVar2[0xc9] = puVar1;
    puVar2[0xca] = 0;
    puVar3 = puVar2 + 0xce;
    puVar2[0xcb] = 0;
    *puVar1 = puVar1;
    puVar2[0xcc] = 0;
    puVar2[0xcd] = 0;
    if (puVar3 != (undefined4 *)0x0) {
      iVar4 = 0;
      iVar5 = 0x5f;
      puVar2[0xcb] = puVar3;
      do {
        iVar5 = iVar5 + -1;
        puVar3[iVar4] = puVar3 + iVar4 + 4;
        iVar4 = iVar4 + 4;
      } while (iVar5 != 0);
      puVar2[0x24a] = 0;
      puVar2[0xcc] = puVar3;
      puVar2[0xcd] = 0x60;
    }
    *(short *)(DAT_0060a1dc + (int)puVar1) = (short)param_1[10];
    *(undefined1 *)((int)puVar2 + 0x93a) = 0;
    *(undefined1 *)((int)puVar2 + 0x93b) = 0;
    *(undefined1 *)(puVar2 + 0x24f) = 1;
  }
  return puVar2;
}


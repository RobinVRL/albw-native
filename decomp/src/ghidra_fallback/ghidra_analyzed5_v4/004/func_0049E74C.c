#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int *DAT_0049e7cc;
extern undefined4 DAT_0049e7d0;
extern undefined4 DAT_0049e7d4;

// USA 0049E74C <- EU 0049E724 (Ghidra, non-matching)
// GLOBAL DAT_0049e7cc int *
// GLOBAL DAT_0049e7d0 undefined4
// GLOBAL DAT_0049e7d4 undefined4

int func_0049E74C(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  piVar1 = DAT_0049e7cc;
  if (*DAT_0049e7cc == 0) {
    puVar3 = (undefined4 *)func_0010CEE0(0x3c,param_1,4);
    puVar4 = (undefined4 *)0x0;
    if (puVar3 + 1 != (undefined4 *)0x0) {
      puVar4 = func_0010DA7C(puVar3 + 1,param_1,3);
      *puVar4 = DAT_0049e7d0;
    }
    piVar1[1] = (int)puVar4;
    uVar2 = DAT_0049e7d4;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[5] = 0;
      *puVar3 = uVar2;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[0xb] = 0;
      puVar3[10] = puVar3 + 9;
      puVar3[0xd] = 0;
      puVar3[9] = puVar3 + 9;
      *(undefined1 *)(puVar3 + 0xe) = 0;
      *(undefined1 *)((int)puVar3 + 0x39) = 0;
      *(undefined1 *)((int)puVar3 + 0x3a) = 0;
      *(undefined1 *)((int)puVar3 + 0x3b) = 0;
      puVar3[0xc] = 4;
    }
    *piVar1 = (int)puVar3;
  }
  return *piVar1;
}


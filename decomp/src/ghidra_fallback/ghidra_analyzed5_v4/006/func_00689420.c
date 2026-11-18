#include "ghidra_types.h"

extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_0048FB4C(undefined4 *param_1);
extern undefined4 DAT_00689484;
extern undefined4 DAT_00689488;
extern undefined4 DAT_0068948c;
extern undefined4 DAT_00689490;

// USA 00689420 <- EU 006893F8 (Ghidra, non-matching)
// GLOBAL DAT_00689484 undefined4
// GLOBAL DAT_00689488 undefined4
// GLOBAL DAT_0068948c undefined4
// GLOBAL DAT_00689490 undefined4

void func_00689420(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)func_0010CF28(0xc4,param_2,param_3);
  if (puVar2 != (undefined4 *)0x0) {
    func_00110490(puVar2,0xc4);
    puVar2 = func_0048FB4C(puVar2);
    puVar2[10] = puVar2 + 0xc;
    puVar2[0xb] = 0x80;
    *(undefined1 *)(puVar2[10] + 0x7f) = 0;
    uVar1 = DAT_0068948c;
    *(undefined1 *)puVar2[10] = 0;
    puVar2[9] = uVar1;
    *(undefined1 *)(puVar2 + 0x2c) = 7;
    *(undefined1 *)((int)puVar2 + 0xb1) = 0xff;
    *puVar2 = DAT_00689490;
    puVar2[0x2d] = 0;
    puVar2[0x2e] = 0;
    puVar2[0x2f] = 0;
    puVar2[0x30] = 0;
  }
  return;
}


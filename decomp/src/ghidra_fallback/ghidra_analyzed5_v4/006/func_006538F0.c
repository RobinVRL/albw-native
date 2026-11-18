#include "ghidra_types.h"

extern int func_0036D6F4(undefined4 *param_1,int param_2);
extern int func_0062DBE8(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int DAT_00653998;
extern undefined4 DAT_0065399c;
extern undefined4 DAT_006539a0;

// USA 006538F0 <- EU 006538C8 (Ghidra, non-matching)
// GLOBAL DAT_00653998 int
// GLOBAL DAT_0065399c undefined4
// GLOBAL DAT_006539a0 undefined4

undefined4 * func_006538F0(undefined4 *param_1,uint *param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined1 *)(albw_frame + 0x14))
  #define local_1b (*(undefined1 *)(albw_frame + 0x15))
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_1c = 0;
  local_1b = 1;
  piVar3 = (int *)func_0062DBE8(param_1,param_2,5,0xff,&local_28);
  iVar1 = DAT_00653998;
  *piVar3 = DAT_00653998;
  piVar3[200] = iVar1 + 0xbc;
  puVar4 = func_0036D6F4(piVar3 + 0x263,(int)piVar3);
  uVar2 = DAT_006539a0;
  *puVar4 = DAT_0065399c;
  *(undefined2 *)(puVar4 + 10) = 0;
  *(undefined2 *)((int)puVar4 + 0x2a) = 0;
  *(undefined1 *)(puVar4 + 0xb) = 0;
  *(undefined1 *)((int)puVar4 + 0x2d) = 0;
  *(undefined1 *)((int)puVar4 + 0x2e) = 0;
  *(undefined1 *)((int)puVar4 + 0x2f) = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = uVar2;
  puVar4[0xe] = uVar2;
  puVar4[0xf] = uVar2;
  *(undefined2 *)(puVar4 + 0x10) = 0;
  *(undefined2 *)((int)puVar4 + 0x42) = 0;
  *(undefined1 *)(puVar4 + 0x11) = 0xff;
  *(undefined1 *)((int)puVar4 + 0x45) = 0;
  *(undefined1 *)((int)puVar4 + 0x46) = param_3;
  *(undefined1 *)((int)puVar4 + 0x47) = 0;
  *(undefined1 *)(puVar4 + 0x12) = 0;
  puVar4[-0x38] = puVar4[-0x38] | 0x20;
  return puVar4 + -0x263;
}


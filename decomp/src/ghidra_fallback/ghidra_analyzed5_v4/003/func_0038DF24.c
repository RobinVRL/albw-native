#include "ghidra_types.h"

extern int func_002D5C70(undefined4 *param_1,int *param_2);
extern int func_004EDEA0(int param_1,uint *param_2);
extern int func_004EE484(undefined4 *param_1);
extern undefined4 DAT_0038e0ac;
extern undefined4 DAT_0038e0b0;
extern undefined4 DAT_0038e0b4;
extern undefined4 DAT_0038e0b8;
extern undefined4 DAT_0038e0bc;
extern undefined4 *DAT_0038e0c0;
extern undefined4 DAT_0038e0c4;

// USA 0038DF24 <- EU 0038DF00 (Ghidra, non-matching)
// GLOBAL DAT_0038e0ac undefined4
// GLOBAL DAT_0038e0b0 undefined4
// GLOBAL DAT_0038e0b4 undefined4
// GLOBAL DAT_0038e0b8 undefined4
// GLOBAL DAT_0038e0bc undefined4
// GLOBAL DAT_0038e0c0 undefined4 *
// GLOBAL DAT_0038e0c4 undefined4

int func_0038DF24(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(uint *)(albw_frame + 0x8))
  puVar1 = (undefined4 *)func_002D5C70(param_1,param_2);
  uVar4 = DAT_0038e0b0;
  *puVar1 = DAT_0038e0ac;
  puVar1[0x1d] = uVar4;
  puVar1[0x1e] = uVar4;
  puVar1[0x1f] = uVar4;
  puVar1[0x20] = uVar4;
  puVar1[0x21] = uVar4;
  puVar1[0x22] = uVar4;
  puVar1[0x23] = uVar4;
  puVar1[0x24] = uVar4;
  puVar1[0x25] = uVar4;
  uVar5 = DAT_0038e0b4;
  local_18 = 0;
  *(undefined2 *)(puVar1 + 0x26) = 0;
  puVar1[0x27] = 0;
  *(undefined1 *)(puVar1 + 0x28) = 0;
  puVar1[0x29] = uVar5;
  puVar1[0x2a] = uVar5;
  puVar1[0x2b] = uVar5;
  uVar5 = DAT_0038e0b8;
  puVar1[0x2c] = DAT_0038e0b8;
  puVar1[0x2d] = uVar5;
  puVar1[0x2e] = uVar5;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  *(undefined2 *)(puVar1 + 0x31) = 6;
  puVar1[0x1c] = DAT_0038e0bc;
  puVar1[0x32] = uVar4;
  iVar2 = func_004EE484(puVar1 + 0x33);
  puVar1 = DAT_0038e0c0;
  puVar3 = DAT_0038e0c0 + 2;
  *(undefined4 *)(iVar2 + 0x68) = 0;
  uVar4 = puVar1[3];
  *(undefined4 *)(iVar2 + 0x6c) = *puVar3;
  *(undefined4 *)(iVar2 + 0x70) = uVar4;
  *(undefined4 *)(iVar2 + 100) = DAT_0038e0c4;
  *(undefined1 *)(iVar2 + 0x74) = 0;
  *(undefined1 *)(iVar2 + 0x75) = 0;
  *(undefined1 *)(iVar2 + 0x76) = 0;
  *(undefined1 *)(iVar2 + 0x77) = 1;
  *(undefined1 *)(iVar2 + 0x78) = 0;
  *(undefined1 *)(iVar2 + 0x79) = 0;
  *(undefined1 *)(iVar2 + 0x7a) = 0;
  *(undefined1 *)(iVar2 + 0x7b) = 0;
  *(undefined1 *)(iVar2 + 0x7c) = 0;
  *(undefined1 *)(iVar2 + 0x7d) = 0;
  *(undefined4 *)(iVar2 + 0x80) = *(undefined4 *)(*(int *)(iVar2 + -0xa4) + 0x65c);
  *(undefined4 *)(iVar2 + 0x84) = *(undefined4 *)(*(int *)(iVar2 + -0xa4) + 0x660);
  *(undefined4 *)(iVar2 + 0x88) = *(undefined4 *)(*(int *)(iVar2 + -0xa4) + 0x664);
  *(undefined4 *)(iVar2 + 0x8c) = *(undefined4 *)(*(int *)(iVar2 + -0xa4) + 0x670);
  uVar4 = *(undefined4 *)(*(int *)(iVar2 + -0xa4) + 0x674);
  *(undefined4 *)(iVar2 + 0x94) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x90) = uVar4;
  *(undefined4 *)(iVar2 + 0x98) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x9c) = 0;
  *(undefined4 *)(iVar2 + 0xa0) = 0;
  *(undefined4 *)(iVar2 + 0xa4) = 0;
  *(undefined1 *)(iVar2 + 0xa8) = 0;
  *(undefined4 *)(iVar2 + 0xac) = *(undefined4 *)(*(int *)(iVar2 + -0x9c) + 4);
  *(undefined4 *)(iVar2 + 0xb0) = *(undefined4 *)(*(int *)(iVar2 + -0x9c) + 4);
  *(int *)(iVar2 + 0x10) = iVar2 + -0x5c;
  local_18 = *(uint *)(*(int *)(iVar2 + -0xa4) + 0x2cc);
  func_004EDEA0(iVar2,&local_18);
  *(int *)(iVar2 + 0x1c) = iVar2 + 100;
  *(undefined1 *)(iVar2 + 0x21) = 5;
  *(undefined1 *)(iVar2 + 0x22) = 0;
  *(undefined2 *)(iVar2 + 0x30) = 0;
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  *(int *)(iVar2 + 0x68) = iVar2 + -0xcc;
  *(undefined4 *)(iVar2 + 0x6c) = uVar4;
  *(undefined4 *)(iVar2 + 0x70) = uVar5;
  return iVar2 + -0xcc;
}


#include "ghidra_types.h"

extern int func_0014D9B4(undefined4 *param_1,float fparam_0);
extern int func_002D1678(int *param_1,int param_2,int param_3);
extern int func_002D5C70(undefined4 *param_1,int *param_2);
extern undefined4 DAT_00365d00;
extern float DAT_00365d04;

// USA 00365C84 <- EU 00365C60 (Ghidra, non-matching)
// GLOBAL DAT_00365d00 undefined4
// GLOBAL DAT_00365d04 float

int func_00365C84(undefined4 *param_1,int *param_2)

{
  float fparam_0;
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)func_002D5C70(param_1,param_2);
  *puVar1 = DAT_00365d00;
  iVar2 = func_002D1678(puVar1 + 0x1c,puVar1[10],puVar1[0x14]);
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined1 *)(iVar2 + 0x24) = 0;
  *(undefined1 *)(iVar2 + 0x25) = 0;
  *(undefined1 *)(iVar2 + 0x26) = 0;
  *(undefined1 *)(iVar2 + 0x27) = 0;
  *(undefined1 *)(iVar2 + 0x28) = 0;
  *(undefined1 *)(iVar2 + 0x29) = 0;
  *(undefined1 *)(iVar2 + 0x2a) = 0;
  *(undefined1 *)(iVar2 + 0x2b) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined1 *)(iVar2 + 100) = 0;
  *(undefined1 *)(iVar2 + 0x65) = 0;
  fparam_0 = DAT_00365d04;
  *(undefined1 *)(iVar2 + 0x66) = 0;
  *(undefined1 *)(iVar2 + 0x67) = 0;
  *(float *)(iVar2 + 0x68) = fparam_0;
  *(float *)(iVar2 + 0x6c) = fparam_0;
  *(float *)(iVar2 + 0x70) = fparam_0;
  *(undefined4 *)(iVar2 + 0x74) = 0xffffffff;
  uVar3 = *(undefined4 *)(*(int *)(iVar2 + -0x40) + 4);
  *(undefined4 *)(iVar2 + 0x7c) = 0;
  *(undefined4 *)(iVar2 + 0x78) = uVar3;
  *(undefined4 *)(iVar2 + 0x80) = 0;
  *(float *)(iVar2 + 0x84) = fparam_0;
  puVar1 = func_0014D9B4((undefined4 *)(iVar2 + 0x88),fparam_0);
  return (int)(puVar1 + -0x3e);
}


#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_003E183C(float *param_1,float *param_2,float fparam_0);
extern int DAT_005a8494;
extern undefined4 *DAT_005a8498;
extern undefined4 DAT_005a849c;
extern undefined4 DAT_005a84a0;
extern undefined4 *DAT_005a84a4;
extern undefined *DAT_005a84a8;
extern undefined4 *DAT_005a84ac;
extern undefined4 DAT_005a84b0;
extern undefined4 DAT_005a84b4;
extern undefined4 *DAT_005a84b8;
extern undefined4 *DAT_005a84bc;
extern undefined4 DAT_005a84c0;
extern undefined4 DAT_005a84c4;
extern undefined4 DAT_005a84c8;
extern undefined4 DAT_005a84cc;
extern undefined4 DAT_005a84d0;
extern undefined4 DAT_005a84d4;
extern float DAT_005a84d8;
extern float DAT_005a84dc;

// USA 005A82A4 <- EU 005A827C (Ghidra, non-matching)
// GLOBAL DAT_005a8494 int
// GLOBAL DAT_005a8498 undefined4 *
// GLOBAL DAT_005a849c undefined4
// GLOBAL DAT_005a84a0 undefined4
// GLOBAL DAT_005a84a4 undefined4 *
// GLOBAL DAT_005a84a8 undefined *
// GLOBAL DAT_005a84ac undefined4 *
// GLOBAL DAT_005a84b0 undefined4
// GLOBAL DAT_005a84b4 undefined4
// GLOBAL DAT_005a84b8 undefined4 *
// GLOBAL DAT_005a84bc undefined4 *
// GLOBAL DAT_005a84c0 undefined4
// GLOBAL DAT_005a84c4 undefined4
// GLOBAL DAT_005a84c8 undefined4
// GLOBAL DAT_005a84cc undefined4
// GLOBAL DAT_005a84d0 undefined4
// GLOBAL DAT_005a84d4 undefined4
// GLOBAL DAT_005a84d8 float
// GLOBAL DAT_005a84dc float

void func_005A82A4(void)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define afStack_24 ((float *)(albw_frame + 0xc))
  iVar2 = DAT_005a8494;
  *(undefined4 *)(DAT_005a8494 + 0x60) = 0xffffffff;
  *(undefined4 *)(iVar2 + 100) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x68) = 0;
  *(undefined4 *)(iVar2 + 0x6c) = 0;
  puVar3 = DAT_005a8498;
  *(undefined1 *)DAT_005a8498 = 0x87;
  *(undefined1 *)((int)puVar3 + 1) = 8;
  *(undefined1 *)((int)puVar3 + 2) = 10;
  *(undefined1 *)((int)puVar3 + 3) = 2;
  puVar3[1] = 10;
  puVar3[2] = 0xe;
  puVar3[3] = 4;
  *(undefined1 *)(puVar3 + 4) = 4;
  *(undefined1 *)((int)puVar3 + 0x11) = 100;
  *(undefined1 *)((int)puVar3 + 0x12) = 10;
  puVar3[5] = *puVar3;
  puVar3[6] = puVar3[1];
  puVar3[7] = puVar3[2];
  puVar3[8] = puVar3[3];
  puVar3[9] = puVar3[4];
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined1 *)(iVar2 + 0x28) = 1;
  puVar3 = DAT_005a84a4;
  *DAT_005a84a4 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = 0xffffffff;
  puVar3[1] = 0xffffffff;
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar3 + 2);
  } while (!bVar1);
  puVar3[2] = 0xffffffff;
  puVar3[3] = 0xffffffff;
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar3 + 4);
  } while (!bVar1);
  puVar3[4] = 0xffffffff;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined1 *)(puVar3 + 9) = 0;
  *(undefined1 *)((int)puVar3 + 0x25) = 0;
  *(undefined2 *)(puVar3 + 10) = 0;
  *(undefined2 *)((int)puVar3 + 0x2a) = 0;
  *(undefined2 *)(puVar3 + 0xb) = 0;
  *(undefined2 *)((int)puVar3 + 0x2e) = 0;
  func_00100118((int)(puVar3 + 0xc),DAT_005a84a8,0x18,8);
  uVar4 = DAT_005a84b0;
  puVar3 = DAT_005a84ac;
  DAT_005a84ac[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = uVar4;
  puVar3[4] = 0;
  puVar3 = DAT_005a84b8;
  DAT_005a84b8[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = uVar4;
  puVar3[4] = 0;
  puVar3 = DAT_005a84bc;
  *DAT_005a84bc = 0;
  puVar3[1] = 0;
  fparam_0 = DAT_005a84d8;
  *(undefined4 *)(iVar2 + 0x38) = DAT_005a84c4;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(iVar2 + 0x40) = DAT_005a84c8;
  *(undefined4 *)(iVar2 + 0x44) = 0;
  *(undefined4 *)(iVar2 + 0x48) = DAT_005a84cc;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(undefined4 *)(iVar2 + 0x50) = DAT_005a84d0;
  *(undefined4 *)(iVar2 + 0x54) = 0;
  *(undefined4 *)(iVar2 + 0x58) = DAT_005a84d4;
  *(undefined4 *)(iVar2 + 0x5c) = 0;
  func_003E183C(&local_28,afStack_24,fparam_0);
  *(int *)(iVar2 + 0x20) = (int)((local_28 / afStack_24[0]) * DAT_005a84dc);
  return;
}


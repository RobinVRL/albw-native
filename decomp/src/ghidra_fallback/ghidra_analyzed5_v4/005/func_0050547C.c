#include "ghidra_types.h"

extern int func_0010B830(undefined4 *param_1);
extern int func_0010CE7C(undefined4 *param_1);
extern int func_0048B8B8(int param_1,int param_2,int *param_3);
extern int func_0058FAAC(undefined4 param_1,undefined4 param_2);
extern int func_005FF7F0(int param_1);
extern int func_005FF938(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4, undefined4 *param_5);
extern int func_006005B0(int param_1);
extern undefined4 DAT_005055b0;
extern int DAT_005055b4;
extern undefined4 DAT_005055b8;
extern undefined4 DAT_005055bc;
extern undefined4 DAT_005055c0;
extern undefined4 DAT_005055c4;
extern undefined4 DAT_005055c8;
extern undefined DAT_005055cc;
extern int *DAT_005055d0;
extern undefined DAT_005055d4;

// USA 0050547C <- EU 00505454 (Ghidra, non-matching)
// GLOBAL DAT_005055b0 undefined4
// GLOBAL DAT_005055b4 int
// GLOBAL DAT_005055b8 undefined4
// GLOBAL DAT_005055bc undefined4
// GLOBAL DAT_005055c0 undefined4
// GLOBAL DAT_005055c4 undefined4
// GLOBAL DAT_005055c8 undefined4
// GLOBAL DAT_005055cc undefined
// GLOBAL DAT_005055d0 int *
// GLOBAL DAT_005055d4 undefined

undefined4 * func_0050547C(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 **)(param_1 + 0x30) = (undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x34) = 0;
  puVar3 = func_0010CE7C((undefined4 *)(param_1 + 0x18));
  *puVar3 = DAT_005055b0;
  puVar3[10] = 0x20;
  puVar3[9] = puVar3 + 0xb;
  uVar1 = DAT_005055c4;
  *(undefined1 *)((int)puVar3 + 0x4b) = 0;
  uVar5 = DAT_005055c0;
  iVar4 = DAT_005055b4;
  *(undefined1 *)puVar3[9] = 0;
  *puVar3 = uVar1;
  puVar3[8] = uVar5;
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  puVar3[0x19] = puVar3 + 0x13;
  puVar3[0x1a] = 0;
  puVar3 = func_0010CE7C(puVar3 + 0x13);
  puVar3[10] = 0x20;
  puVar3[9] = puVar3 + 0xb;
  uVar1 = DAT_005055c8;
  *(undefined1 *)((int)puVar3 + 0x4b) = 0;
  *(undefined1 *)puVar3[9] = 0;
  puVar3[0x13] = 0;
  puVar3[8] = uVar5;
  *puVar3 = uVar1;
  puVar3[0x14] = 0;
  puVar3 = func_0010B830(puVar3 + 0x26);
  piVar2 = DAT_005055d0;
  local_24 = &DAT_005055cc;
  local_28 = iVar4;
  func_0048B8B8(*DAT_005055d0,(int)(puVar3 + -0x39),&local_28);
  local_24 = &DAT_005055d4;
  local_28 = iVar4;
  func_0048B8B8(*piVar2,(int)(puVar3 + -0x26),&local_28);
  iVar4 = func_006005B0(0x20);
  uVar5 = func_0058FAAC(0x400,0x10);
  puVar6 = (undefined4 *)func_0058FAAC(iVar4,4);
  func_005FF938(puVar3 + -0x11,0x400,uVar5,0x20,puVar6);
  func_005FF7F0((int)(puVar3 + -0x11));
  return puVar3 + -0x3f;
}


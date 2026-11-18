#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0019B04C(uint param_1);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002C2C9C(undefined4 *param_1,undefined4 param_2);
extern int func_002C2D00(int *param_1);
extern int func_002D42E8(int param_1);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int *DAT_0039f370;
extern uint *DAT_0039f374;
extern undefined4 DAT_0039f378;
extern int DAT_0039f384;
extern float DAT_0039f388;
extern char s_Bottle_0039f37c[];

// USA 0039F260 <- EU 0039F23C (Ghidra, non-matching)
// GLOBAL DAT_0039f370 int *
// GLOBAL DAT_0039f374 uint *
// GLOBAL DAT_0039f378 undefined4
// GLOBAL DAT_0039f384 int
// GLOBAL DAT_0039f388 float
// GLOBAL s_Bottle_0039f37c string

undefined4 func_0039F260(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint *puVar6;
  undefined4 uVar7;
  int iVar8;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define aiStack_b0 ((int *)(albw_frame + 0x0))
  #define local_98 (*(uint *)(albw_frame + 0x18))
  #define local_94 (*(undefined1 *)(albw_frame + 0x1c))
  #define aiStack_74 ((int *)(albw_frame + 0x3c))
  #define local_18 (*(int *)(albw_frame + 0x98))
  #define local_14 (*(char * *)(albw_frame + 0x9c))
  iVar8 = *(int *)(*DAT_0039f370 + 0x10);
  iVar2 = func_0019B04C(*DAT_0039f374);
  puVar3 = (undefined4 *)func_0010BAB4(0xa8);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = func_0016A2FC(puVar3,1,DAT_0039f378,1);
  }
  *(undefined4 **)(param_1 + 0x1c) = puVar4;
  local_18 = DAT_0039f384;
  local_14 = s_Bottle_0039f37c;
  func_00169608(*(uint **)(param_1 + 0x1c),0,&local_18,*(int *)(iVar2 + 0x1ec));
  func_0016A02C(*(int *)(param_1 + 0x1c),-1,(int *)0xffffffff,0);
  func_002C2C9C(aiStack_b0,*(undefined4 *)(iVar8 + 0x60));
  local_94 = 1;
  local_98 = local_98 | 1;
  piVar5 = func_002C2D00(aiStack_b0);
  *(int **)(param_1 + 4) = piVar5;
  func_004CEA18((int)piVar5,1,1);
  piVar5 = (int *)0x0;
  puVar6 = (uint *)func_002C11E8(aiStack_74,0,10,0);
  iVar8 = *(int *)(param_1 + 0x1c);
  func_0016898C(iVar8,puVar6);
  fVar1 = DAT_0039f388;
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 0x10) = DAT_0039f388;
  uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc);
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x14);
  if (*(float *)(iVar2 + 8) != fVar1) {
    *(float *)(iVar2 + 8) = fVar1;
    *(undefined1 *)(iVar2 + 0x26) = 1;
  }
  func_00169A80(*(int **)(param_1 + 0x1c),uVar7,iVar8,piVar5);
  return func_002D42E8(param_1);
}


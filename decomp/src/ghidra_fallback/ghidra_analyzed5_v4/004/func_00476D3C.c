#include "ghidra_types.h"

extern int func_002DF0B0(int param_1,int *param_2,int param_3);
extern int func_00352198(int param_1,int *param_2);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004A1CDC(int param_1);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_005880A8(int param_1,int *param_2,undefined4 *param_3,float fparam_0);
extern int func_0058D7B8(int param_1,undefined4 *param_2);
extern int DAT_00476f18;
extern float DAT_00476f1c;
extern float DAT_00476f20;
extern undefined4 DAT_00476f24;
extern undefined4 DAT_00476f28;
extern float DAT_00476f2c;
extern float DAT_00476f30;
extern float DAT_00476f34;
extern int DAT_00476f38;
extern int DAT_00476f3c;
extern int *DAT_00476f58;
extern int *DAT_00476f74;
extern char s_SE_S_ITEM_GET_FX_END_00476f5c[];
extern char s_SE_S_ITEM_GET_FX_START_00476f40[];

// USA 00476D3C <- EU 00476D14 (Ghidra, non-matching)
// GLOBAL DAT_00476f18 int
// GLOBAL DAT_00476f1c float
// GLOBAL DAT_00476f20 float
// GLOBAL DAT_00476f24 undefined4
// GLOBAL DAT_00476f28 undefined4
// GLOBAL DAT_00476f2c float
// GLOBAL DAT_00476f30 float
// GLOBAL DAT_00476f34 float
// GLOBAL DAT_00476f38 int
// GLOBAL DAT_00476f3c int
// GLOBAL DAT_00476f58 int *
// GLOBAL DAT_00476f74 int *
// GLOBAL s_SE_S_ITEM_GET_FX_END_00476f5c string
// GLOBAL s_SE_S_ITEM_GET_FX_START_00476f40 string

void func_00476D3C(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(float *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_10 (*(undefined4 *)(albw_frame + 0x20))
  uVar1 = *(uint *)(*(int *)(param_1 + 0xe8) + *(char *)(param_1 + 0xd0) * 8 + 4);
  pcVar3 = *(code **)(*(int *)(param_1 + 0xe8) + *(char *)(param_1 + 0xd0) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0xe0) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0xe0)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0xcc) + 1;
  *(int *)(param_1 + 0xcc) = iVar2;
  if (*(int *)(param_1 + 0xdc) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0xdc),1,fparam_0);
  }
  uVar1 = (uint)*(char *)(DAT_00476f18 + param_1);
  if (-1 < (int)uVar1) {
    if ((int)uVar1 < 0x14) {
      piVar4 = (int *)(param_1 + 0x118);
      if (uVar1 < 0x14) {
        piVar4 = piVar4 + uVar1;
      }
      iVar2 = *(int *)(**(int **)(*piVar4 + 0x1c) + 0x10);
      local_28 = *(float *)(iVar2 + 0x54);
      local_24 = *(undefined4 *)(iVar2 + 100);
    }
    else if (uVar1 == 0x14) {
      iVar2 = *(int *)(**(int **)(*(int *)(param_1 + 500) + 0x1c) + 0x10);
      local_28 = *(float *)(iVar2 + 0x54) - DAT_00476f1c;
      local_24 = *(undefined4 *)(iVar2 + 100);
    }
    else if (uVar1 == 0x15) {
      iVar2 = *(int *)(**(int **)(*(int *)(param_1 + 0x1f8) + 0x1c) + 0x10);
      local_28 = *(float *)(iVar2 + 0x54) - DAT_00476f1c;
      local_24 = *(undefined4 *)(iVar2 + 100);
    }
    else if (uVar1 == 0x16) {
      func_0058D7B8(*DAT_00476f74,&local_28);
    }
    else {
      local_28 = DAT_00476f20;
      local_24 = DAT_00476f24;
    }
    local_18 = local_28;
    uStack_14 = local_24;
    local_10 = DAT_00476f28;
    iVar2 = func_004D838C((float *)(param_1 + 0x318),&local_18,DAT_00476f34,DAT_00476f30,
                          DAT_00476f2c);
    if (iVar2 != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x314) + 0x20);
      if (iVar2 != 0) {
        func_004A1CDC(iVar2);
      }
      iVar2 = DAT_00476f3c;
      local_1c = *(char **)(DAT_00476f38 + 4);
      local_20 = DAT_00476f3c;
      func_00352198(*(int *)(param_1 + 0x314),&local_20);
      *(undefined1 *)(param_1 + 0x30b) = 0xff;
      piVar4 = DAT_00476f58;
      local_1c = s_SE_S_ITEM_GET_FX_START_00476f40;
      local_20 = iVar2;
      func_002DF0B0(*DAT_00476f58,&local_20,0);
      local_1c = s_SE_S_ITEM_GET_FX_END_00476f5c;
      local_20 = iVar2;
      func_005880A8(*piVar4,&local_20,(undefined4 *)0x0,local_28);
    }
  }
  return;
}


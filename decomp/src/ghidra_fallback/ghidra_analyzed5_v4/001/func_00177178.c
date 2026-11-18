#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00115D88(float *param_1,float *param_2,float fparam_0);
extern int func_00181AD0(int param_1,undefined4 *param_2);
extern float func_0049EF80(float *param_1,float *param_2,float *param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_00177348;
extern uint *DAT_0017734c;
extern undefined4 *DAT_00177350;
extern undefined4 DAT_00177354;
extern float DAT_00177358;
extern float DAT_0017735c;

// USA 00177178 <- EU 00177178 (Ghidra, non-matching)
// GLOBAL DAT_00177348 int *
// GLOBAL DAT_0017734c uint *
// GLOBAL DAT_00177350 undefined4 *
// GLOBAL DAT_00177354 undefined4
// GLOBAL DAT_00177358 float
// GLOBAL DAT_0017735c float

undefined4 func_00177178(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(float *)(albw_frame + 0x0))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_88 (*(undefined4 *)(albw_frame + 0x8))
  #define local_84 (*(float *)(albw_frame + 0xc))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x14))
  #define local_74 (*(float *)(albw_frame + 0x1c))
  #define local_70 (*(float *)(albw_frame + 0x20))
  #define local_6c (*(float *)(albw_frame + 0x24))
  #define local_64 (*(float *)(albw_frame + 0x2c))
  #define local_60 (*(float *)(albw_frame + 0x30))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x38))
  #define local_54 (*(float *)(albw_frame + 0x3c))
  #define fStack_50 (*(float *)(albw_frame + 0x40))
  #define fStack_4c (*(float *)(albw_frame + 0x44))
  #define local_48 (*(float *)(albw_frame + 0x48))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x4c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x50))
  #define local_3c (*(float *)(albw_frame + 0x54))
  #define local_38 (*(float *)(albw_frame + 0x58))
  #define local_34 (*(float *)(albw_frame + 0x5c))
  #define local_30 (*(float *)(albw_frame + 0x60))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x64))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x68))
  #define local_24 (*(float *)(albw_frame + 0x6c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x70))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x74))
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_00177348 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if (puVar1 != (undefined4 *)0x0) {
    if (((*DAT_0017734c & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0017734c), iVar2 != 0)) {
      *DAT_00177350 = DAT_00177354;
    }
    iVar2 = (**(code **)*puVar1)(puVar1,DAT_00177350);
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)0x0;
    }
    if (puVar1 != (undefined4 *)0x0) {
      local_30 = *(float *)(param_1 + 0x4bc);
      uStack_2c = *(undefined4 *)(param_1 + 0x4c0);
      uStack_28 = *(undefined4 *)(param_1 + 0x4c4);
      local_70 = *(float *)(param_1 + 0x4b8);
      local_74 = DAT_00177358;
      local_6c = DAT_00177358;
      fVar3 = DAT_00177358;
      func_00115CE4(&local_74,(float *)(param_1 + 0x4cc),&local_74);
      func_00115C54(&local_74,&local_74,(float *)(param_1 + 0x3d0));
      local_48 = ALBW_AS_F32(puVar1[0xf4]);
      uStack_44 = puVar1[0xf5];
      uStack_40 = puVar1[0xf6];
      local_60 = *(float *)(param_1 + 0x3d0);
      uStack_5c = *(undefined4 *)(param_1 + 0x3d4);
      uStack_58 = *(undefined4 *)(param_1 + 0x3d8);
      local_54 = local_74;
      fStack_50 = local_70;
      fStack_4c = local_6c;
      local_64 = fVar3;
      func_0049EF80(&local_48,&local_60,&local_64);
      local_3c = *(float *)(param_1 + 0x3d0) + (local_74 - *(float *)(param_1 + 0x3d0)) * local_64;
      local_38 = *(float *)(param_1 + 0x3d4) + (local_70 - *(float *)(param_1 + 0x3d4)) * local_64;
      local_34 = *(float *)(param_1 + 0x3d8) + (local_6c - *(float *)(param_1 + 0x3d8)) * local_64;
      func_00115C70(&local_24,&local_3c,&local_48);
      local_84 = local_24;
      uStack_80 = uStack_20;
      uStack_7c = uStack_1c;
      func_00115D88(&local_24,&local_84,DAT_0017735c);
      local_90 = local_24;
      uStack_8c = uStack_20;
      uStack_88 = uStack_1c;
      func_00115C54(&local_30,&local_30,&local_90);
      func_00181AD0((int)puVar1,&local_30);
      return 1;
    }
  }
  return 0;
}


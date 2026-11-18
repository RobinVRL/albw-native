#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00115D88(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern float func_0049EF80(float *param_1,float *param_2,float *param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_0035cc94;
extern int DAT_0035ccb4;
extern int *DAT_0035ccb8;
extern uint *DAT_0035ccbc;
extern undefined4 *DAT_0035ccc0;
extern undefined4 DAT_0035ccc4;
extern float DAT_0035ccc8;
extern char *DAT_0035cccc;
extern float DAT_0035ccd0;
extern float DAT_0035ccd4;
extern char s_SE_OBJ_REFLECT_SWORD_WOOD_0035cc98[];

// USA 0035C9B4 <- EU 0035C990 (Ghidra, non-matching)
// GLOBAL DAT_0035cc94 int *
// GLOBAL DAT_0035ccb4 int
// GLOBAL DAT_0035ccb8 int *
// GLOBAL DAT_0035ccbc uint *
// GLOBAL DAT_0035ccc0 undefined4 *
// GLOBAL DAT_0035ccc4 undefined4
// GLOBAL DAT_0035ccc8 float
// GLOBAL DAT_0035cccc char *
// GLOBAL DAT_0035ccd0 float
// GLOBAL DAT_0035ccd4 float
// GLOBAL s_SE_OBJ_REFLECT_SWORD_WOOD_0035cc98 string

undefined4 func_0035C9B4(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  char *pcVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(int *)(albw_frame + 0x0))
  #define local_8c (*(char * *)(albw_frame + 0x4))
  #define local_88 (*(float *)(albw_frame + 0x8))
  #define local_84 (*(float *)(albw_frame + 0xc))
  #define local_80 (*(char * *)(albw_frame + 0x10))
  #define local_7c (*(char * *)(albw_frame + 0x14))
  #define local_78 (*(float *)(albw_frame + 0x18))
  #define local_74 (*(float *)(albw_frame + 0x1c))
  #define local_70 (*(float *)(albw_frame + 0x20))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x28))
  #define local_60 (*(float *)(albw_frame + 0x30))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x38))
  #define local_54 (*(float *)(albw_frame + 0x3c))
  #define local_50 (*(int *)(albw_frame + 0x40))
  #define local_4c (*(int *)(albw_frame + 0x44))
  #define local_48 (*(char * *)(albw_frame + 0x48))
  #define fStack_44 (*(float *)(albw_frame + 0x4c))
  #define fStack_40 (*(float *)(albw_frame + 0x50))
  #define local_3c (*(char * *)(albw_frame + 0x54))
  #define fStack_38 (*(float *)(albw_frame + 0x58))
  #define fStack_34 (*(float *)(albw_frame + 0x5c))
  #define local_30 (*(float *)(albw_frame + 0x60))
  #define local_2c (*(float *)(albw_frame + 0x64))
  #define local_28 (*(float *)(albw_frame + 0x68))
  #define local_24 (*(float *)(albw_frame + 0x6c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x70))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x74))
  if (*(int *)(param_2 + 0x2c) != 0) {
    bVar3 = (short)param_1[0x147] == 0;
    if ((short)param_1[0x147] < 1) {
      bVar3 = *(char *)(*(int *)(param_2 + 0x2c) + 1) == '\x05';
    }
    if (bVar3) {
      *(undefined2 *)(param_1 + 0x147) = 0x1e;
      local_8c = s_SE_OBJ_REFLECT_SWORD_WOOD_0035cc98;
      local_90 = DAT_0035ccb4;
      func_00150A84(param_1,&local_90,0);
      return 1;
    }
    iVar1 = func_00588BE4((int)param_1);
    if (((iVar1 == *DAT_0035cc94) && (**(char **)(param_2 + 0x2c) == '\x01')) &&
       (puVar2 = (undefined4 *)func_0052FBA0(*DAT_0035ccb8 + 0x3dbbc,*(uint *)(param_2 + 0x28)),
       puVar2 != (undefined4 *)0x0)) {
      if (((*DAT_0035ccbc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0035ccbc), iVar1 != 0)) {
        *DAT_0035ccc0 = DAT_0035ccc4;
      }
      iVar1 = (**(code **)*puVar2)(puVar2,DAT_0035ccc0);
      if (iVar1 == 0) {
        puVar2 = (undefined4 *)0x0;
      }
      if ((puVar2 != (undefined4 *)0x0) && ((char)param_1[0x13f] == '\0')) {
        iVar1 = *(int *)(param_2 + 0x2c);
        local_54 = *(float *)(iVar1 + 4);
        local_50 = *(int *)(iVar1 + 8);
        local_4c = *(int *)(iVar1 + 0xc);
        func_00115DC8(&local_54);
        func_00115D70(&local_54,&local_54,DAT_0035ccc8);
        iVar1 = puVar2[0x10f];
        local_8c = DAT_0035cccc;
        local_88 = ALBW_AS_F32(DAT_0035cccc) + *(float *)(iVar1 + 0x5c) * DAT_0035ccd0;
        local_84 = ALBW_AS_F32(DAT_0035cccc) + *(float *)(iVar1 + 0x60) * DAT_0035ccd0;
        pcVar4 = DAT_0035cccc;
        fVar5 = DAT_0035ccd0;
        func_00115CE4((float *)&local_8c,(float *)(iVar1 + 100),(float *)&local_8c);
        func_00115C54((float *)&local_8c,(float *)&local_8c,(float *)(iVar1 + 4));
        local_78 = ALBW_AS_F32(pcVar4) + *(float *)(iVar1 + 0x5c) * fVar5;
        local_74 = ALBW_AS_F32(pcVar4) - *(float *)(iVar1 + 0x60) * fVar5;
        local_7c = pcVar4;
        func_00115CE4((float *)&local_7c,(float *)(iVar1 + 100),(float *)&local_7c);
        func_00115C54((float *)&local_7c,(float *)&local_7c,(float *)(iVar1 + 4));
        local_48 = local_7c;
        fStack_44 = local_78;
        fStack_40 = local_74;
        local_3c = local_8c;
        fStack_38 = local_88;
        fStack_34 = local_84;
        local_80 = pcVar4;
        func_0049EF80((float *)(param_1 + 0xf4),(float *)&local_48,(float *)&local_80);
        if ((ALBW_AS_F32(pcVar4) <= ALBW_AS_F32(local_80)) && ((int)local_80 < 0x3f800001)) {
          local_30 = ALBW_AS_F32(local_7c) + (ALBW_AS_F32(local_8c) - ALBW_AS_F32(local_7c)) * ALBW_AS_F32(local_80);
          local_2c = local_78 + (local_88 - local_78) * ALBW_AS_F32(local_80);
          local_28 = local_74 + (local_84 - local_74) * ALBW_AS_F32(local_80);
          func_00115C70(&local_24,&local_30,(float *)(param_1 + 0xf4));
          local_70 = local_24;
          uStack_6c = uStack_20;
          uStack_68 = uStack_1c;
          func_00115D88(&local_24,&local_70,DAT_0035ccd4);
          local_60 = local_24;
          uStack_5c = uStack_20;
          uStack_58 = uStack_1c;
          func_00115C54(&local_54,&local_54,&local_60);
        }
        param_1[0x148] = (int)ALBW_AS_U32(local_54);
        param_1[0x149] = local_50;
        param_1[0x14a] = local_4c;
        return 1;
      }
    }
  }
  return 0;
}


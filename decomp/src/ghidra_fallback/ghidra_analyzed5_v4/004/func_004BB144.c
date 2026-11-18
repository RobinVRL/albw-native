#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2E80(int param_1,float *param_2,float fparam_0);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int func_005811E8(int *param_1);
extern undefined DAT_004bb4d8;
extern float DAT_004bb4e0;
extern float DAT_004bb4e4;
extern undefined DAT_004bb4e8;
extern int DAT_004bb4fc;
extern undefined DAT_004bb56c;
extern char s__SE_Raft_MOVE_004bb4eb[];
extern undefined4 _DAT_004bb4e8;

// USA 004BB144 <- EU 004BB11C (Ghidra, non-matching)
// GLOBAL DAT_004bb4d8 undefined
// GLOBAL DAT_004bb4e0 float
// GLOBAL DAT_004bb4e4 float
// GLOBAL DAT_004bb4e8 undefined
// GLOBAL DAT_004bb4fc int
// GLOBAL DAT_004bb56c undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_004BB144(int param_1)

{
  char cVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  bool bVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_c0 (*(float *)(albw_frame + 0x0))
  #define uStack_bc (*(undefined4 *)(albw_frame + 0x4))
  #define local_b8 (*(float *)(albw_frame + 0x8))
  #define uStack_b4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_b0 (*(float *)(albw_frame + 0x10))
  #define local_ac (*(float *)(albw_frame + 0x14))
  #define local_a8 (*(float *)(albw_frame + 0x18))
  #define local_a0 (*(float *)(albw_frame + 0x20))
  #define local_9c (*(float *)(albw_frame + 0x24))
  #define local_98 (*(float *)(albw_frame + 0x28))
  #define local_90 (*(float *)(albw_frame + 0x30))
  #define local_8c (*(float *)(albw_frame + 0x34))
  #define local_88 (*(float *)(albw_frame + 0x38))
  #define local_84 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x40))
  #define local_7c (*(undefined4 *)(albw_frame + 0x44))
  #define local_78 (*(float *)(albw_frame + 0x48))
  #define local_74 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x50))
  #define local_6c (*(undefined4 *)(albw_frame + 0x54))
  #define local_68 (*(float *)(albw_frame + 0x58))
  #define local_64 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_60 (*(float *)(albw_frame + 0x60))
  #define local_5c (*(undefined4 *)(albw_frame + 0x64))
  #define local_58 (*(undefined4 *)(albw_frame + 0x68))
  #define local_54 (*(float *)(albw_frame + 0x6c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x70))
  #define local_4c (*(undefined4 *)(albw_frame + 0x74))
  #define local_48 (*(float *)(albw_frame + 0x78))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x7c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x80))
  #define local_38 (*(int *)(albw_frame + 0x88))
  #define local_34 (*(char * *)(albw_frame + 0x8c))
  pfVar5 = (float *)(param_1 + 0x414);
  pfVar4 = (float *)(param_1 + 0x40c);
  if (*(char *)(param_1 + 0x44c) == '\0') {
    iVar2 = func_005811E8((int *)pfVar5);
    if ((iVar2 != 0) && (*(char *)(param_1 + 0x44e) == '\x01')) {
      fVar3 = *pfVar5;
      if ((fVar3 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar3) + 0x1c) == *(int *)(param_1 + 0x418))) {
        iVar2 = *(int *)((int)ALBW_AS_U32(fVar3) + 0x20);
        if (((iVar2 != 0) && (*(int *)((int)ALBW_AS_U32(fVar3) + 0x24) == *(int *)(iVar2 + 0xc))) &&
           (0 < *(int *)(iVar2 + 4))) {
          *(undefined1 *)(iVar2 + 0x280) = 1;
        }
        *(uint *)((int)ALBW_AS_U32(fVar3) + 0x3c) = *(uint *)((int)ALBW_AS_U32(fVar3) + 0x3c) & 0xfffffffb | 8;
      }
      *(undefined1 *)(param_1 + 0x44e) = 0;
    }
    cVar1 = *(char *)(param_1 + 0x44a);
    bVar6 = cVar1 == '\x01';
    if (bVar6) {
      cVar1 = *(char *)(param_1 + 0x44d);
    }
    if (bVar6 && cVar1 == '\0') {
      iVar2 = func_005811E8((int *)pfVar4);
      if (iVar2 == 0) {
        if (*(int *)(param_1 + 0x344) != 0) {
          fVar3 = *pfVar4;
          if ((fVar3 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar3) + 0x1c) == *(int *)(param_1 + 0x410))) {
            func_00110848((int)ALBW_AS_U32(fVar3));
          }
          func_004A1B9C((int *)&local_b8,*(int *)(param_1 + 0x344),(uint *)&DAT_004bb56c);
          *pfVar4 = local_b8;
          *(undefined4 *)(param_1 + 0x410) = uStack_b4;
          return;
        }
        *pfVar4 = 0.0;
        *(undefined4 *)(param_1 + 0x410) = 0;
      }
    }
    else {
      iVar2 = func_005811E8((int *)pfVar4);
      fVar3 = 0.0;
      if (iVar2 != 0) {
        fVar3 = *pfVar4;
      }
      if ((iVar2 != 0 && fVar3 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar3) + 0x1c) == *(int *)(param_1 + 0x410))
         ) {
        iVar2 = *(int *)((int)ALBW_AS_U32(fVar3) + 0x20);
        if ((iVar2 != 0) &&
           ((*(int *)((int)ALBW_AS_U32(fVar3) + 0x24) == *(int *)(iVar2 + 0xc) && (0 < *(int *)(iVar2 + 4))))) {
          *(undefined1 *)(iVar2 + 0x280) = 1;
        }
        *(uint *)((int)ALBW_AS_U32(fVar3) + 0x3c) = *(uint *)((int)ALBW_AS_U32(fVar3) + 0x3c) & 0xfffffffb | 8;
        return;
      }
    }
  }
  else {
    iVar2 = func_005811E8((int *)pfVar4);
    fVar3 = 0.0;
    if (iVar2 != 0) {
      fVar3 = *pfVar4;
    }
    if ((iVar2 != 0 && fVar3 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar3) + 0x1c) == *(int *)(param_1 + 0x410)))
    {
      iVar2 = *(int *)((int)ALBW_AS_U32(fVar3) + 0x20);
      if ((iVar2 != 0) &&
         ((*(int *)((int)ALBW_AS_U32(fVar3) + 0x24) == *(int *)(iVar2 + 0xc) && (0 < *(int *)(iVar2 + 4))))) {
        *(undefined1 *)(iVar2 + 0x280) = 1;
      }
      *(uint *)((int)ALBW_AS_U32(fVar3) + 0x3c) = *(uint *)((int)ALBW_AS_U32(fVar3) + 0x3c) & 0xfffffffb | 8;
    }
    if (*(char *)(param_1 + 0x44e) == '\0') {
      if (*(int *)(param_1 + 0x344) == 0) {
        *pfVar5 = 0.0;
        *(undefined4 *)(param_1 + 0x418) = 0;
      }
      else {
        fVar3 = *pfVar5;
        if ((fVar3 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar3) + 0x1c) == *(int *)(param_1 + 0x418))) {
          func_00110848((int)ALBW_AS_U32(fVar3));
        }
        func_004A1B9C((int *)&local_c0,*(int *)(param_1 + 0x344),(uint *)&DAT_004bb4d8);
        *pfVar5 = local_c0;
        *(undefined4 *)(param_1 + 0x418) = uStack_bc;
      }
      *(undefined1 *)(param_1 + 0x44e) = 1;
    }
    func_00115C70(&local_c0,(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x368));
    local_a0 = local_c0;
    local_98 = local_b8;
    local_9c = DAT_004bb4e0;
    fVar3 = DAT_004bb4e0;
    func_00115DC8(&local_a0);
    if (local_a0 == fVar3 && local_98 == fVar3) {
      fVar3 = *pfVar5;
      if (fVar3 != 0.0) {
        if (*(int *)((int)ALBW_AS_U32(fVar3) + 0x1c) == *(int *)(param_1 + 0x418)) {
          func_004A2F38((int)ALBW_AS_U32(fVar3),(undefined4 *)(param_1 + 0x3d0));
        }
        return;
      }
    }
    else {
      if ((*pfVar5 != 0.0) && (*(int *)((int)ALBW_AS_U32(*pfVar5) + 0x1c) == *(int *)(param_1 + 0x418))) {
        local_ac = DAT_004bb4e4;
        fVar7 = local_a0 * fVar3 + local_9c * DAT_004bb4e4 + local_98 * fVar3;
        if (fVar7 <= fVar3) {
          fVar7 = -fVar7;
        }
        local_b0 = fVar3;
        if (_DAT_004bb4e8 < (int)ALBW_AS_U32(fVar7)) {
          local_b0 = DAT_004bb4e4;
          local_ac = fVar3;
        }
        fVar7 = DAT_004bb4e4;
        local_a8 = fVar3;
        func_00115E10(&local_48,&local_b0,&local_a0);
        local_60 = local_48;
        local_5c = uStack_44;
        local_58 = uStack_40;
        func_00115DC8(&local_60);
        func_00115E10(&local_48,&local_a0,&local_60);
        local_54 = local_48;
        local_50 = uStack_44;
        local_4c = uStack_40;
        func_00115DC8(&local_54);
        local_90 = local_60;
        local_80 = local_5c;
        local_70 = local_58;
        local_8c = local_54;
        local_7c = local_50;
        local_6c = local_4c;
        local_88 = local_a0;
        local_78 = local_9c;
        local_68 = local_98;
        local_84 = *(undefined4 *)(param_1 + 0x3d0);
        local_74 = *(undefined4 *)(param_1 + 0x3d4);
        local_64 = *(undefined4 *)(param_1 + 0x3d8);
        func_004A2E80((int)ALBW_AS_U32(*pfVar5),&local_90,fVar7);
      }
      local_34 = s__SE_Raft_MOVE_004bb4eb + 1;
      local_38 = DAT_004bb4fc;
      func_001507D8(param_1,&local_38,0);
    }
  }
  return;
}


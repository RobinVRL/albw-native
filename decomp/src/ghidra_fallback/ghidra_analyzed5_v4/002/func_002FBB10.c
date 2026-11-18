#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_003167D4(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,int param_4, undefined4 param_5);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_00520FC0(void);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00588BE4(int param_1);
extern int func_0058A8F0(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern int func_006644B8(undefined4 *param_1,undefined1 param_2);
extern float *DAT_002fbc68;
extern float DAT_002fbc6c;
extern int *DAT_002fbc70;
extern int DAT_002fbc7c;
extern undefined4 DAT_002fbc80;
extern float *DAT_002fbc84;
extern char s_chest_002fbc74[];

// USA 002FBB10 <- EU 002FBAEC (Ghidra, non-matching)
// GLOBAL DAT_002fbc68 float *
// GLOBAL DAT_002fbc6c float
// GLOBAL DAT_002fbc70 int *
// GLOBAL DAT_002fbc7c int
// GLOBAL DAT_002fbc80 undefined4
// GLOBAL DAT_002fbc84 float *
// GLOBAL s_chest_002fbc74 string

void func_002FBB10(int param_1)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_7c (*(float *)(albw_frame + 0x4))
  #define local_78 (*(float *)(albw_frame + 0x8))
  #define local_74 (*(float *)(albw_frame + 0xc))
  #define auStack_70 ((undefined4 *)(albw_frame + 0x10))
  #define local_64 (*(float *)(albw_frame + 0x1c))
  #define local_54 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_44 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_38 (*(int *)(albw_frame + 0x48))
  #define local_34 (*(char * *)(albw_frame + 0x4c))
  #define local_30 (*(float *)(albw_frame + 0x50))
  #define local_2c (*(float *)(albw_frame + 0x54))
  #define fStack_28 (*(float *)(albw_frame + 0x58))
  #define local_24 (*(float *)(albw_frame + 0x5c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x60))
  #define local_1c (*(undefined4 *)(albw_frame + 0x64))
  #define local_18 (*(undefined4 *)(albw_frame + 0x68))
  if (*(char *)(param_1 + 0x90d) == '\0') {
    local_7c = *DAT_002fbc68;
    local_78 = DAT_002fbc68[1];
    local_74 = DAT_002fbc68[2];
    lVar5 = func_0058ACC8(param_1,DAT_002fbc6c);
    if ((int)lVar5 != 0) {
      iVar4 = 2;
      iVar1 = func_00588BE4(param_1);
      if (iVar1 == *DAT_002fbc70) {
        iVar4 = 3;
      }
      pfVar2 = (float *)func_00520FC0();
      func_00115C70(&local_30,pfVar2,(float *)(param_1 + 0x3d0));
      iVar1 = func_004904CC(local_2c,SQRT(local_30 * local_30 + fStack_28 * fStack_28));
      local_34 = s_chest_002fbc74;
      local_38 = DAT_002fbc7c;
      uVar3 = func_00564A78(*(int *)(param_1 + 0x40c),&local_38);
      func_001119F4(auStack_70,
                    (undefined4 *)
                    (*(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) + uVar3 * 0x30));
      local_24 = local_64;
      local_20 = local_54;
      local_1c = local_44;
      local_7c = *DAT_002fbc84;
      local_78 = DAT_002fbc84[1];
      local_74 = DAT_002fbc84[2];
      func_004D7F70(&local_7c,*(uint *)(param_1 + 1000));
      func_00115C54(&local_24,&local_24,&local_7c);
      local_18 = *(undefined4 *)(param_1 + 0x2cc);
      func_003167D4(&local_24,*(undefined4 *)(param_1 + 1000),&local_18,iVar4,-iVar1);
      *(undefined1 *)(param_1 + 0x90d) = 1;
    }
  }
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 != 0) {
    func_006644B8((undefined4 *)(param_1 + 0x8bc),3);
  }
  return;
}


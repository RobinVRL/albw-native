#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115CA8(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0049EE1C(float *param_1,float *param_2,float *param_3);
extern int func_0051E6AC(int param_1);
extern int func_0051E92C(int param_1);
extern int DAT_00504aa8;
extern int *DAT_00504aac;
extern float DAT_00504ab0;
extern float *DAT_00504ab4;
extern undefined4 DAT_00504ab8;
extern undefined4 DAT_00504abc;
extern float *DAT_00504ac0;

// USA 00504804 <- EU 005047DC (Ghidra, non-matching)
// GLOBAL DAT_00504aa8 int
// GLOBAL DAT_00504aac int *
// GLOBAL DAT_00504ab0 float
// GLOBAL DAT_00504ab4 float *
// GLOBAL DAT_00504ab8 undefined4
// GLOBAL DAT_00504abc undefined4
// GLOBAL DAT_00504ac0 float *

void func_00504804(int param_1)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_a0 (*(float *)(albw_frame + 0x0))
  #define fStack_9c (*(float *)(albw_frame + 0x4))
  #define local_98 (*(float *)(albw_frame + 0x8))
  #define local_94 (*(float *)(albw_frame + 0xc))
  #define local_90 (*(float *)(albw_frame + 0x10))
  #define local_8c (*(float *)(albw_frame + 0x14))
  #define local_88 (*(float *)(albw_frame + 0x18))
  #define fStack_84 (*(float *)(albw_frame + 0x1c))
  #define fStack_80 (*(float *)(albw_frame + 0x20))
  #define local_78 (*(float *)(albw_frame + 0x28))
  #define local_74 (*(float *)(albw_frame + 0x2c))
  #define local_70 (*(float *)(albw_frame + 0x30))
  #define local_6c (*(float *)(albw_frame + 0x34))
  #define local_68 (*(float *)(albw_frame + 0x38))
  #define local_64 (*(float *)(albw_frame + 0x3c))
  #define local_60 (*(float *)(albw_frame + 0x40))
  #define local_5c (*(float *)(albw_frame + 0x44))
  #define local_58 (*(float *)(albw_frame + 0x48))
  #define local_54 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_44 (*(float *)(albw_frame + 0x5c))
  #define local_40 (*(float *)(albw_frame + 0x60))
  #define local_3c (*(float *)(albw_frame + 0x64))
  #define local_38 (*(float *)(albw_frame + 0x68))
  #define fStack_34 (*(float *)(albw_frame + 0x6c))
  #define fStack_30 (*(float *)(albw_frame + 0x70))
  piVar1 = DAT_00504aac;
  iVar4 = DAT_00504aa8;
  if (*(float *)(param_1 + 0x10) != *(float *)(DAT_00504aa8 + 8)) {
    pfVar2 = (float *)func_0051E6AC(*DAT_00504aac);
    pfVar3 = (float *)func_0051E92C(*piVar1);
    fVar8 = DAT_00504ab0;
    if (*(float *)(param_1 + 0x14) == *(float *)(iVar4 + 8)) {
      fVar5 = -*DAT_00504ab4;
      fVar7 = -DAT_00504ab4[2];
      fVar6 = -DAT_00504ab4[1];
      local_88 = fVar5;
      fStack_84 = fVar6;
      fStack_80 = fVar7;
      func_00115D70(&local_38,&local_88,*(float *)(param_1 + 8));
      local_a0 = local_38;
      fStack_9c = fStack_34;
      local_98 = fStack_30;
      func_00115CA8(&local_94,pfVar3,&local_a0);
      *(float *)(param_1 + 0x8c) = local_90;
      local_88 = fVar5;
      fStack_84 = fVar6;
      fStack_80 = fVar7;
      func_00115D70(&local_40,&local_88,*(float *)(param_1 + 0xc));
      local_a0 = local_40;
      fStack_9c = local_3c;
      local_98 = local_38;
      func_00115CA8(&local_94,pfVar3,&local_a0);
      *(float *)(param_1 + 0x90) = local_90;
      *(float *)(param_1 + 0x14) = fVar8;
    }
    local_78 = pfVar3[3];
    local_74 = pfVar3[7];
    local_70 = pfVar3[0xb];
    local_94 = pfVar3[2];
    local_90 = pfVar3[6];
    local_6c = -local_94;
    local_8c = pfVar3[10];
    local_68 = -local_90;
    local_64 = -local_8c;
    local_60 = *DAT_00504ac0;
    local_5c = DAT_00504ac0[1];
    local_58 = DAT_00504ac0[2];
    local_54 = *(undefined4 *)(param_1 + 0x8c);
    local_98 = fVar8;
    iVar4 = func_0049EE1C(&local_78,&local_60,&local_98);
    if (iVar4 != 0) {
      func_00115D70(&local_38,&local_6c,local_98);
      local_88 = local_38;
      fStack_84 = fStack_34;
      fStack_80 = fStack_30;
      func_00115C54(&local_38,&local_78,&local_88);
      local_44 = local_38;
      local_40 = fStack_34;
      local_3c = fStack_30;
      func_00115CA8(&local_44,pfVar2,&local_44);
      if (*(float *)(*(int *)(param_1 + 4) + 0x30) != -local_3c) {
        *(float *)(*(int *)(param_1 + 4) + 0x30) = -local_3c;
        *(undefined1 *)(param_1 + 0x8a) = 1;
      }
    }
    local_54 = *(undefined4 *)(param_1 + 0x90);
    local_98 = fVar8;
    iVar4 = func_0049EE1C(&local_78,&local_60,&local_98);
    if (iVar4 != 0) {
      func_00115D70(&local_38,&local_6c,local_98);
      local_88 = local_38;
      fStack_84 = fStack_34;
      fStack_80 = fStack_30;
      func_00115C54(&local_38,&local_78,&local_88);
      local_44 = local_38;
      local_40 = fStack_34;
      local_3c = fStack_30;
      func_00115CA8(&local_44,pfVar2,&local_44);
      if (*(float *)(*(int *)(param_1 + 4) + 0x34) != -local_3c) {
        *(float *)(*(int *)(param_1 + 4) + 0x34) = -local_3c;
        *(undefined1 *)(param_1 + 0x8a) = 1;
      }
    }
  }
  return;
}


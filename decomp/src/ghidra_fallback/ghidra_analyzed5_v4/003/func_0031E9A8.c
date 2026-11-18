// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_004A2D1C(int param_1,float *param_2);
extern int func_00537B48(int param_1);
extern int func_0053ED90();
extern int func_005811E8(int *param_1);
extern float DAT_0031eb74;
extern undefined4 DAT_0031eb78;

// USA 0031E9A8 <- EU 0031E984 (Ghidra, non-matching)
// GLOBAL DAT_0031eb74 float
// GLOBAL DAT_0031eb78 undefined4

void func_0031E9A8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 (*(float *)(albw_frame + 0x8))
  #define local_74 (*(float *)(albw_frame + 0xc))
  #define local_70 (*(float *)(albw_frame + 0x10))
  #define local_6c (*(undefined4 *)(albw_frame + 0x14))
  #define local_68 (*(float *)(albw_frame + 0x18))
  #define local_64 (*(float *)(albw_frame + 0x1c))
  #define local_60 (*(float *)(albw_frame + 0x20))
  #define local_5c (*(undefined4 *)(albw_frame + 0x24))
  #define local_58 (*(float *)(albw_frame + 0x28))
  #define local_54 (*(float *)(albw_frame + 0x2c))
  #define local_50 (*(float *)(albw_frame + 0x30))
  #define local_4c (*(undefined4 *)(albw_frame + 0x34))
  #define local_48 (*(float *)(albw_frame + 0x38))
  #define local_44 (*(float *)(albw_frame + 0x3c))
  #define local_40 (*(float *)(albw_frame + 0x40))
  #define local_3c (*(float *)(albw_frame + 0x44))
  #define local_38 (*(float *)(albw_frame + 0x48))
  #define local_34 (*(float *)(albw_frame + 0x4c))
  #define local_30 (*(float *)(albw_frame + 0x50))
  #define local_2c (*(float *)(albw_frame + 0x54))
  #define local_28 (*(float *)(albw_frame + 0x58))
  #define local_24 (*(float *)(albw_frame + 0x5c))
  #define local_20 (*(float *)(albw_frame + 0x60))
  #define local_1c (*(float *)(albw_frame + 0x64))
  iVar1 = func_005811E8((int *)(param_1 + 0x18c));
  if (iVar1 != 0) {
    func_00115154(&local_48,&local_44,*(uint *)(*(int *)(param_1 + 0x28) + 1000));
    local_64 = ALBW_AS_F32(DAT_0031eb78);
    local_54 = DAT_0031eb74;
    local_58 = -local_48;
    local_68 = DAT_0031eb74;
    local_60 = DAT_0031eb74;
    local_74 = DAT_0031eb74;
    local_78 = local_44;
    local_70 = local_48;
    local_50 = local_44;
    fVar3 = DAT_0031eb74;
    iVar1 = func_0053ED90(*(int *)(param_1 + 0x4c));
    local_6c = *(undefined4 *)(iVar1 + 0xc);
    local_5c = *(undefined4 *)(iVar1 + 0x1c);
    local_4c = *(undefined4 *)(iVar1 + 0x2c);
    iVar1 = *(int *)(param_1 + 0x4c);
    local_74 = *(float *)(iVar1 + 0xbc);
    local_64 = *(float *)(iVar1 + 0xc0);
    local_54 = *(float *)(iVar1 + 0xc4);
    local_3c = local_78;
    local_38 = local_68;
    local_34 = local_58;
    local_30 = local_70;
    local_2c = local_60;
    local_28 = local_50;
    local_48 = local_74;
    local_44 = local_64;
    local_40 = local_54;
    func_00115DC8(&local_48);
    func_00115E10(&local_30,&local_3c,&local_48);
    func_00115DC8(&local_30);
    func_00115E10(&local_3c,&local_48,&local_30);
    local_74 = local_48;
    local_64 = local_44;
    local_54 = local_40;
    local_78 = local_3c;
    local_68 = local_38;
    local_58 = local_34;
    local_70 = local_30;
    local_60 = local_2c;
    local_50 = local_28;
    local_48 = *(float *)(param_1 + 0x170) / *(float *)(param_1 + 0x164);
    local_44 = fVar3;
    local_40 = fVar3;
    local_3c = fVar3;
    local_38 = fVar3;
    local_34 = local_48;
    local_30 = fVar3;
    local_2c = fVar3;
    local_28 = fVar3;
    local_24 = fVar3;
    local_20 = local_48;
    local_1c = fVar3;
    func_001157FC(&local_78,&local_78,&local_48);
    iVar1 = *(int *)(param_1 + 0x18c);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 400))) {
      func_004A2D1C(iVar1,&local_78);
    }
    iVar1 = *(int *)(param_1 + 0x28);
    uVar2 = func_00537B48(iVar1 + 0x40c);
    func_003521F0(iVar1 + 0x324,uVar2);
  }
  return;
}


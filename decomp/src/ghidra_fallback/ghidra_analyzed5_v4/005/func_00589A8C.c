#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0042AFC4(int param_1,int param_2,int param_3);
extern int func_0049EE84(float *param_1,float *param_2,float *param_3,float *param_4);
extern int func_0068B200(float *param_1,float *param_2);
extern float DAT_00589d84;
extern float DAT_00589d88;
extern undefined4 DAT_00589d8c;
extern undefined4 DAT_00589d90;
extern undefined4 DAT_00589d94;
extern float DAT_00589d98;
extern float DAT_00589d9c;

// USA 00589A8C <- EU 00589A64 (Ghidra, non-matching)
// GLOBAL DAT_00589d84 float
// GLOBAL DAT_00589d88 float
// GLOBAL DAT_00589d8c undefined4
// GLOBAL DAT_00589d90 undefined4
// GLOBAL DAT_00589d94 undefined4
// GLOBAL DAT_00589d98 float
// GLOBAL DAT_00589d9c float

uint func_00589A8C(int param_1,float *param_2,int param_3)

{
  int *piVar1;
  float *pfVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  float *unaff_r8;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 (*(float *)(albw_frame + 0x8))
  #define local_94 (*(float *)(albw_frame + 0xc))
  #define local_90 (*(float *)(albw_frame + 0x10))
  #define local_8c (*(float *)(albw_frame + 0x14))
  #define local_88 (*(float *)(albw_frame + 0x18))
  #define local_84 (*(float *)(albw_frame + 0x1c))
  #define local_7c (*(float *)(albw_frame + 0x24))
  #define local_78 (*(undefined2 *)(albw_frame + 0x28))
  #define local_74 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x30))
  #define local_68 (*(uint *)(albw_frame + 0x38))
  #define local_64 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_60 (*(undefined1 *)(albw_frame + 0x40))
  #define local_50 (*(undefined4 *)(albw_frame + 0x50))
  #define local_4c (*(undefined4 *)(albw_frame + 0x54))
  #define local_48 (*(undefined4 *)(albw_frame + 0x58))
  #define local_44 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x60))
  #define local_3c (*(undefined4 *)(albw_frame + 0x64))
  #define local_38 (*(undefined4 *)(albw_frame + 0x68))
  #define local_34 (*(float *)(albw_frame + 0x6c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x70))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x74))
  #define local_28 (*(float *)(albw_frame + 0x78))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x7c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x80))
  pfVar8 = &local_98;
  uVar9 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    local_98 = DAT_00589d84;
    local_94 = DAT_00589d84;
    local_90 = DAT_00589d84;
    local_8c = DAT_00589d88;
    local_88 = DAT_00589d88;
    local_84 = DAT_00589d88;
    func_0068B200(&local_98,*(float **)(param_3 + 0x20));
    func_0068B200(&local_98,*(float **)(param_3 + 0x1c));
    if ((*(char *)(param_3 + 0x28) == '\0') || (*(short *)(*(int *)(param_1 + 0x10) + 0x88) != 0)) {
      piVar1 = *(int **)(param_1 + 0x10);
      if ((ALBW_AS_F32(piVar1[0xd]) <= local_8c) &&
         ((((local_98 <= ALBW_AS_F32(piVar1[0x10]) && (ALBW_AS_F32(piVar1[0xe]) <= local_88)) &&
           (local_94 <= ALBW_AS_F32(piVar1[0x11]))) &&
          ((ALBW_AS_F32(piVar1[0xf]) <= local_84 && (local_90 <= ALBW_AS_F32(piVar1[0x12]))))))) {
        uVar9 = (**(code **)(*piVar1 + 0x18))(piVar1,param_2,param_3);
      }
    }
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if ((iVar5 != 0) && ((*(uint *)(param_3 + 0x14) & 1 << (*(ushort *)(iVar5 + 0x28) & 0x1f)) != 0))
  {
    pfVar2 = *(float **)(param_3 + 0x20);
    pfVar7 = *(float **)(param_3 + 0x1c);
    if ((*(float *)(iVar5 + 0x34) <= *(float *)(iVar5 + 0x40)) &&
       ((*(float *)(iVar5 + 0x38) <= *(float *)(iVar5 + 0x44) &&
        (*(float *)(iVar5 + 0x3c) <= *(float *)(iVar5 + 0x48))))) {
      local_98 = *pfVar2;
      local_94 = pfVar2[1];
      unaff_r8 = &local_8c;
      local_90 = pfVar2[2];
      local_8c = *pfVar7;
      local_88 = pfVar7[1];
      local_84 = pfVar7[2];
      iVar5 = func_0049EE84(&local_98,(float *)(iVar5 + 0x34),(float *)0x0,(float *)0x0);
      if (iVar5 == 0) goto LAB_00589da0;
    }
    local_50 = DAT_00589d94;
    puVar3 = *(undefined4 **)(param_3 + 0x20);
    puVar6 = *(undefined4 **)(param_3 + 0x1c);
    local_4c = *puVar3;
    local_48 = puVar3[1];
    local_44 = puVar3[2];
    local_40 = *puVar6;
    local_3c = puVar6[1];
    local_38 = puVar6[2];
    local_98 = DAT_00589d9c;
    local_7c = DAT_00589d98;
    local_34 = 4.34403e-44;
    iVar5 = 0x1f;
    local_74 = 0;
    local_70 = 0;
    local_78 = 0x1f;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    if (param_2 == (float *)0x0) {
      iVar5 = *(int *)(param_3 + 4);
    }
    if (param_2 == (float *)0x0 && iVar5 == 0) {
      pfVar8 = (float *)0x0;
    }
    uVar4 = func_0042AFC4((int)&local_50,*(int *)(param_1 + 0x18),(int)pfVar8);
    if (uVar4 != 0) {
      local_70 = *(undefined4 *)(param_1 + 0x20);
      if (param_2 != (float *)0x0) {
        unaff_r8 = (float *)0x1;
      }
      if (param_2 == (float *)0x0) {
        unaff_r8 = (float *)0x0;
      }
      uVar9 = 1;
      local_78 = *(undefined2 *)(*(int *)(param_1 + 0x18) + 0x28);
      local_74 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x2c);
      local_68 = (uint)*(ushort *)(param_1 + 0x24);
      puVar3 = *(undefined4 **)(param_3 + 4);
      if (puVar3 != (undefined4 *)0x0) {
        iVar5 = (**(code **)*puVar3)(puVar3,&local_98);
        uVar9 = (uint)(iVar5 != 0);
        if (iVar5 == 0) {
          return 0;
        }
      }
      if (unaff_r8 != (float *)0x0) {
        func_00115D70(&local_28,&local_94,local_7c);
        local_34 = local_28;
        uStack_30 = uStack_24;
        uStack_2c = uStack_20;
        func_0068B200(param_2,&local_34);
      }
      goto LAB_00589da8;
    }
  }
LAB_00589da0:
  if (uVar9 == 0) {
    return 0;
  }
LAB_00589da8:
  puVar3 = *(undefined4 **)(param_1 + 0x28);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(puVar3,param_3 + 0xc,0);
  }
  return uVar9;
}


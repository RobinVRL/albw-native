#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_001E8268(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_00246844(int param_1,undefined4 *param_2);
extern int func_002468E8(int param_1,undefined4 *param_2);
extern int func_00246A34(int param_1);
extern int func_004DE3E0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float fparam_0);
extern float func_004DFA60(undefined4 param_1,undefined4 param_2,float fparam_0,float fparam_1, float fparam_2);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_004df514;
extern int *DAT_004df518;
extern undefined4 *DAT_004df51c;
extern uint *DAT_004df520;
extern float DAT_004df524;
extern float DAT_004df528;
extern undefined4 DAT_004df52c;
extern int *DAT_004df530;
extern undefined4 *DAT_004df534;
extern undefined4 *DAT_004df538;
extern float *DAT_004df53c;
extern float DAT_004df540;
extern int DAT_004df544;

// USA 004DF164 <- EU 004DF13C (Ghidra, non-matching)
// GLOBAL DAT_004df514 int *
// GLOBAL DAT_004df518 int *
// GLOBAL DAT_004df51c undefined4 *
// GLOBAL DAT_004df520 uint *
// GLOBAL DAT_004df524 float
// GLOBAL DAT_004df528 float
// GLOBAL DAT_004df52c undefined4
// GLOBAL DAT_004df530 int *
// GLOBAL DAT_004df534 undefined4 *
// GLOBAL DAT_004df538 undefined4 *
// GLOBAL DAT_004df53c float *
// GLOBAL DAT_004df540 float
// GLOBAL DAT_004df544 int

undefined4 func_004DF164(int param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint in_fpscr;
  float fVar12;
  float fparam_2;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_bc (*(float *)(albw_frame + 0x4))
  #define local_b8 (*(float * *)(albw_frame + 0x8))
  #define uStack_b4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_b0 (*(float *)(albw_frame + 0x10))
  #define local_ac (*(undefined4 *)(albw_frame + 0x14))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_a4 (*(float *)(albw_frame + 0x1c))
  #define uStack_a0 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_9c (*(undefined4 *)(albw_frame + 0x24))
  #define local_98 (*(float *)(albw_frame + 0x28))
  #define uStack_94 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_90 (*(undefined4 *)(albw_frame + 0x30))
  #define local_8c (*(float *)(albw_frame + 0x34))
  #define uStack_88 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_80 (*(float *)(albw_frame + 0x40))
  #define local_7c (*(float *)(albw_frame + 0x44))
  #define local_78 (*(float *)(albw_frame + 0x48))
  #define local_74 (*(float *)(albw_frame + 0x4c))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x50))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x54))
  #define local_58 (*(float *)(albw_frame + 0x68))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x6c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x70))
  #define fStack_4c (*(float *)(albw_frame + 0x74))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x78))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x7c))
  #define fStack_40 (*(float *)(albw_frame + 0x80))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x84))
  #define local_38 (*(undefined4 *)(albw_frame + 0x88))
  #define fStack_34 (*(float *)(albw_frame + 0x8c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x90))
  uVar3 = DAT_004df52c;
  puVar2 = DAT_004df520;
  puVar8 = DAT_004df51c;
  piVar1 = DAT_004df518;
  piVar5 = DAT_004df514;
  piVar10 = (int *)(param_1 + 0x990);
  iVar4 = *DAT_004df514;
  switch(*(undefined4 *)(param_1 + 0x990)) {
  case 0:
    iVar11 = *(int *)(*DAT_004df530 + 0x18);
    if (iVar11 == 0) {
      return 1;
    }
    local_b0 = *(float *)(param_1 + 0x3d0);
    local_ac = *(undefined4 *)(param_1 + 0x3d4);
    local_a8 = *(undefined4 *)(param_1 + 0x3d8);
    iVar9 = *(int *)(param_1 + 0x994);
    if (iVar9 < 0) {
      iVar9 = 0;
    }
    fVar12 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
    fVar12 = (fVar12 - DAT_004df524) / DAT_004df528;
    piVar5 = (int *)func_005841A8(iVar4,*DAT_004df534,*(int **)(iVar4 + 0x3dbc0));
    iVar4 = *piVar5;
    if (iVar4 != 0) {
      local_b0 = *(float *)(iVar4 + 8);
      local_ac = *(undefined4 *)(iVar4 + 0xc);
      local_a8 = *(undefined4 *)(iVar4 + 0x10);
    }
    func_00115C70(&local_58,*(float **)(*piVar1 + 0x1c),&local_b0);
    local_bc = local_58;
    local_b8 = (float *)uStack_54;
    uStack_b4 = uStack_50;
    func_00115D70(&local_58,&local_bc,fVar12);
    local_a4 = local_58;
    uStack_a0 = uStack_54;
    uStack_9c = uStack_50;
    func_00115C54(&local_b0,&local_b0,&local_a4);
    func_004DE3E0(&local_58,param_1,8,fVar12);
    local_98 = local_58;
    uStack_94 = uStack_54;
    uStack_90 = uStack_50;
    local_8c = fStack_4c;
    uStack_88 = uStack_48;
    uStack_84 = uStack_44;
    local_80 = fStack_40;
    local_7c = ALBW_AS_F32(uStack_3c);
    local_78 = ALBW_AS_F32(local_38);
    local_74 = fStack_34;
    uStack_70 = uStack_30;
    func_001E8268(iVar11,(int *)(param_1 + 0x9d4),&local_b0,&local_98);
    uVar7 = *(uint *)(param_1 + 0x994);
    if (0xb3 < uVar7) {
      *piVar10 = *(int *)(param_1 + 0x990) + 1;
    }
    break;
  case 1:
    puVar8 = (undefined4 *)func_005841A8(iVar4,*DAT_004df51c,*(int **)(iVar4 + 0x3dbc0));
    puVar8 = (undefined4 *)*puVar8;
    if (((*puVar2 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_004df520), iVar4 != 0)) {
      *DAT_004df538 = uVar3;
    }
    if ((puVar8 == (undefined4 *)0x0) ||
       (iVar4 = (**(code **)*puVar8)(puVar8,DAT_004df538), iVar4 == 0)) {
      puVar8 = (undefined4 *)0x0;
    }
    if (puVar8 != (undefined4 *)0x0) {
      func_00115C54(&local_b0,*(float **)(*piVar1 + 0x1c),DAT_004df53c);
      local_bc = local_b0;
      local_b8 = (float *)local_ac;
      uStack_b4 = local_a8;
      func_002468E8((int)puVar8,&local_bc);
    }
    *piVar10 = *(int *)(param_1 + 0x990) + 1;
    return 0;
  case 2:
    uVar7 = *(uint *)(param_1 + 0x994);
    if (0x3b < uVar7) {
      iVar4 = 3;
LAB_004df3a4:
      *piVar10 = iVar4;
    }
    break;
  case 3:
    iVar4 = *(int *)(param_1 + 0x994);
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    fVar12 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    pfVar6 = *(float **)(*DAT_004df518 + 0x1c);
    local_80 = *pfVar6;
    local_7c = pfVar6[1];
    local_78 = pfVar6[2];
    fparam_2 = (fVar12 - DAT_004df524) / DAT_004df528;
    local_b8 = DAT_004df53c;
    fVar12 = DAT_004df524;
    func_00115C70(&local_74,DAT_004df53c + 3,DAT_004df53c);
    pfVar6 = &local_a4;
    local_a4 = local_74;
    uStack_a0 = uStack_70;
    uStack_9c = uStack_6c;
    fVar12 = func_004DFA60(param_1,8,fVar12,DAT_004df540,fparam_2);
    func_00115D70(&local_74,pfVar6,fVar12);
    local_8c = local_74;
    uStack_88 = uStack_70;
    uStack_84 = uStack_6c;
    func_00115C54(&local_74,local_b8,&local_8c);
    local_98 = local_74;
    uStack_94 = uStack_70;
    uStack_90 = uStack_6c;
    func_00115C54(&local_80,&local_80,&local_98);
    puVar8 = (undefined4 *)func_005841A8(*piVar5,*puVar8,*(int **)(DAT_004df544 + *piVar5));
    puVar8 = (undefined4 *)*puVar8;
    if (((*puVar2 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_004df520), iVar4 != 0)) {
      *DAT_004df538 = uVar3;
    }
    if ((puVar8 == (undefined4 *)0x0) || (iVar4 = (**(code **)*puVar8)(puVar8), iVar4 == 0)) {
      puVar8 = (undefined4 *)0x0;
    }
    if (puVar8 != (undefined4 *)0x0) {
      func_00246844((int)puVar8,&local_80);
    }
    uVar7 = *(uint *)(param_1 + 0x994);
    if (0xb3 < uVar7) {
      iVar4 = *(int *)(param_1 + 0x990) + 1;
      goto LAB_004df3a4;
    }
    break;
  case 4:
    *piVar10 = 5;
    *(int *)(param_1 + 0x994) = *(int *)(param_1 + 0x994) + 1;
    return 0;
  case 5:
    puVar8 = (undefined4 *)func_005841A8(iVar4,*DAT_004df51c,*(int **)(iVar4 + 0x3dbc0));
    puVar8 = (undefined4 *)*puVar8;
    if (((*puVar2 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_004df520), iVar4 != 0)) {
      *DAT_004df538 = uVar3;
    }
    if ((puVar8 == (undefined4 *)0x0) ||
       (iVar4 = (**(code **)*puVar8)(puVar8,DAT_004df538), iVar4 == 0)) {
      puVar8 = (undefined4 *)0x0;
    }
    if (puVar8 != (undefined4 *)0x0) {
      func_00246A34((int)puVar8);
    }
    return 1;
  default:
    goto switchD_004df188_default;
  }
  *(int *)(param_1 + 0x994) = uVar7 + 1;
switchD_004df188_default:
  return 0;
}


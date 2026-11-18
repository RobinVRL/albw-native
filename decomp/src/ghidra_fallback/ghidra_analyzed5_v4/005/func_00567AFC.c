#include "ghidra_types.h"

extern int func_00115074(float *param_1,float *param_2,float *param_3);
extern int func_003CBDDC(float fparam_0);
extern int func_003CC140(float fparam_0);

// USA 00567AFC <- EU 00567AD4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// PARAM param_6 Stack[0x4]:4 float *

void func_00567AFC(int param_1,int *param_2,uint param_3,int param_4,float *param_5,float *param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fparam_0;
  float fparam_0_00;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 (*(float *)(albw_frame + 0x0))
  #define local_7c (*(float *)(albw_frame + 0x4))
  #define local_78 (*(float *)(albw_frame + 0x8))
  #define local_74 (*(float *)(albw_frame + 0xc))
  #define uStack_70 (*(undefined8 *)(albw_frame + 0x10))
  piVar6 = (int *)param_2[0x19];
  iVar8 = *param_2 + (param_3 & 0xffff) * 0x278 + 4;
  iVar1 = *piVar6 + (param_3 & 0xffff) * 0x100 + param_4 * 0x20;
  if (*(char *)(param_1 + 0x29) == '\0') {
    *(undefined1 *)(iVar1 + 0x1c) = 0;
  }
  else {
    *(undefined1 *)(iVar1 + 0x1c) = 1;
    iVar1 = ((param_3 << 0x10) >> 8) + param_4 * 0x20;
    if (*(char *)(param_1 + 0x28) == '\v') {
      *(undefined1 *)(*piVar6 + (param_3 & 0xffff) * 0x100 + param_4 * 0x20 + 0x1d) = 1;
      fVar11 = *(float *)(param_1 + 0x40);
      fVar10 = *(float *)(param_1 + 0x44);
      fVar14 = *(float *)(param_1 + 0x44);
      fVar9 = *(float *)(param_1 + 0x48);
      fVar15 = *param_5 * fVar11 + param_5[1] * fVar10 + param_5[2] * fVar9;
      fVar12 = param_5[4] * fVar11 + param_5[5] * fVar10 + param_5[6] * fVar9;
      fVar10 = param_5[8] * fVar11 + param_5[9] * fVar10 + param_5[10] * fVar9;
      iVar7 = iVar1 + *piVar6;
      fVar16 = *param_6 * fVar11 + param_6[1] * fVar14 + param_6[2] * fVar9;
      fVar13 = param_6[4] * fVar11 + param_6[5] * fVar14 + param_6[6] * fVar9;
      fVar9 = param_6[8] * fVar11 + param_6[9] * fVar14 + param_6[10] * fVar9;
      uVar2 = func_003CC140(-fVar15);
      iVar4 = func_003CC140(-fVar12);
      *(uint *)(iVar7 + 0xc) = uVar2 | iVar4 << 0x10;
      uVar2 = func_003CC140(-fVar16);
      iVar4 = func_003CC140(-fVar13);
      *(uint *)(iVar7 + 0x10) = uVar2 | iVar4 << 0x10;
      uVar3 = func_003CC140(-fVar10);
      *(undefined4 *)(iVar7 + 0x14) = uVar3;
      uVar3 = func_003CC140(-fVar9);
      *(undefined4 *)(iVar7 + 0x18) = uVar3;
      iVar4 = iVar8 + param_4 * 0x2c;
      uVar2 = func_003CC140(-fVar15);
      iVar7 = func_003CC140(-fVar12);
      *(uint *)(iVar4 + 0x28) = uVar2 | iVar7 << 0x10;
      uVar3 = func_003CC140(-fVar10);
      *(undefined4 *)(iVar4 + 0x2c) = uVar3;
    }
    else {
      *(undefined1 *)(*piVar6 + (param_3 & 0xffff) * 0x100 + param_4 * 0x20 + 0x1d) = 0;
    }
    if (*(char *)(param_1 + 0x28) == '\t') {
      fVar12 = *(float *)(param_1 + 0x40);
      fVar10 = *(float *)(param_1 + 0x44);
      fVar9 = *(float *)(param_1 + 0x48);
      fVar11 = *(float *)(param_1 + 0x40);
      fVar15 = param_5[8] * fVar12 + param_5[9] * fVar10 + param_5[10] * fVar9;
      fVar14 = param_5[4] * fVar12 + param_5[5] * fVar10 + param_5[6] * fVar9;
      fVar13 = *(float *)(param_1 + 0x44);
      fVar10 = *param_5 * fVar12 + param_5[1] * fVar10 + param_5[2] * fVar9;
      fparam_0_00 = -fVar15;
      fVar12 = -fVar14;
      puVar5 = (uint *)(iVar1 + *piVar6);
      fVar16 = -(param_6[4] * fVar11 + param_6[5] * fVar13 + param_6[6] * fVar9);
      fparam_0 = -(*param_6 * fVar11 + param_6[1] * fVar13 + param_6[2] * fVar9);
      fVar9 = -(param_6[8] * fVar11 + param_6[9] * fVar13 + param_6[10] * fVar9);
      uVar2 = func_003CBDDC(-fVar10);
      iVar1 = func_003CBDDC(fVar12);
      *puVar5 = uVar2 | iVar1 << 0x10;
      uVar2 = func_003CBDDC(fparam_0);
      iVar1 = func_003CBDDC(fVar16);
      puVar5[1] = uVar2 | iVar1 << 0x10;
      uVar3 = func_003CBDDC(fparam_0_00);
      *(short *)(puVar5 + 2) = (short)uVar3;
      uVar3 = func_003CBDDC(fVar9);
      fVar14 = -fVar14;
      fVar15 = -fVar15;
      *(short *)((int)puVar5 + 10) = (short)uVar3;
      iVar8 = iVar8 + param_4 * 0x2c;
      uVar2 = func_003CBDDC(-fVar10);
      iVar1 = func_003CBDDC(fVar14);
      *(uint *)(iVar8 + 0x14) = uVar2 | iVar1 << 0x10;
      uVar3 = func_003CBDDC(fVar15);
      *(undefined4 *)(iVar8 + 0x18) = uVar3;
      *(undefined1 *)(iVar8 + 0x1c) = 1;
      return;
    }
    func_00115074(&local_80,param_5,(float *)(param_1 + 0x1c));
    func_00115074(&local_74,param_6,(float *)(param_1 + 0x1c));
    puVar5 = (uint *)(iVar1 + *piVar6);
    fVar9 = local_7c;
    fVar10 = local_74;
    fVar11 = local_78;
    uVar2 = func_003CBDDC(local_80);
    iVar1 = func_003CBDDC(fVar9);
    *puVar5 = uVar2 | iVar1 << 0x10;
    uVar2 = func_003CBDDC(fVar10);
    iVar1 = func_003CBDDC(ALBW_AS_F32(uStack_70));
    fVar9 = ALBW_AS_F32(((ulonglong)uStack_70 >> 0x20));
    puVar5[1] = uVar2 | iVar1 << 0x10;
    uVar3 = func_003CBDDC(fVar11);
    *(short *)(puVar5 + 2) = (short)uVar3;
    uVar3 = func_003CBDDC(fVar9);
    *(short *)((int)puVar5 + 10) = (short)uVar3;
    iVar8 = iVar8 + param_4 * 0x2c;
    uVar2 = func_003CBDDC(local_80);
    iVar1 = func_003CBDDC(local_7c);
    *(uint *)(iVar8 + 0x14) = uVar2 | iVar1 << 0x10;
    uVar3 = func_003CBDDC(local_78);
    *(undefined4 *)(iVar8 + 0x18) = uVar3;
    *(undefined1 *)(iVar8 + 0x1c) = 0;
  }
  return;
}


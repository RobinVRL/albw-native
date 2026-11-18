#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00120FBC(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined4 param_5, int param_6,float *param_7);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_00122150;
extern undefined4 *DAT_00122154;
extern int *DAT_00122158;
extern int DAT_0012215c;
extern undefined4 DAT_00122160;
extern uint *DAT_00122164;
extern undefined4 *DAT_00122168;
extern float DAT_0012216c;
extern undefined4 DAT_00122170;
extern int DAT_00122174;
extern float DAT_00122178;

// USA 00121E7C <- EU 00121E7C (Ghidra, non-matching)
// GLOBAL DAT_00122150 int *
// GLOBAL DAT_00122154 undefined4 *
// GLOBAL DAT_00122158 int *
// GLOBAL DAT_0012215c int
// GLOBAL DAT_00122160 undefined4
// GLOBAL DAT_00122164 uint *
// GLOBAL DAT_00122168 undefined4 *
// GLOBAL DAT_0012216c float
// GLOBAL DAT_00122170 undefined4
// GLOBAL DAT_00122174 int
// GLOBAL DAT_00122178 float

undefined2 func_00121E7C(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  short sVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 in_d9;
  undefined8 uVar15;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_b4 ((float *)(albw_frame + 0xc))
  #define local_ac (*(float *)(albw_frame + 0x14))
  #define local_a8 (*(float *)(albw_frame + 0x18))
  #define local_a4 (*(float *)(albw_frame + 0x1c))
  #define local_a0 (*(float *)(albw_frame + 0x20))
  #define local_9c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_98 (*(undefined4 *)(albw_frame + 0x28))
  #define local_94 (*(int *)(albw_frame + 0x2c))
  #define uStack_90 (*(undefined4 *)(albw_frame + 0x30))
  #define local_8c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_88 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_80 (*(float *)(albw_frame + 0x40))
  #define local_7c (*(undefined4 *)(albw_frame + 0x44))
  #define uStack_78 (*(undefined4 *)(albw_frame + 0x48))
  #define local_74 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x60))
  #define local_54 (*(float *)(albw_frame + 0x6c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x70))
  #define local_4c (*(float *)(albw_frame + 0x74))
  #define local_34 (*(int *)(albw_frame + 0x8c))
  #define puStack_30 (*(undefined4 * *)(albw_frame + 0x90))
  #define iStack_2c (*(int *)(albw_frame + 0x94))
  #define iStack_28 (*(int *)(albw_frame + 0x98))
  puVar4 = DAT_00122154;
  piVar1 = DAT_00122150;
  puVar9 = (undefined4 *)0x0;
  uVar15 = CONCAT44((int)((ulonglong)in_d9 >> 0x20),**(undefined4 **)(*DAT_00122158 + 0x1c));
  uVar14 = *(undefined8 *)(*(undefined4 **)(*DAT_00122158 + 0x1c) + 1);
  local_34 = param_1;
  puStack_30 = param_2;
  iStack_2c = param_3;
  iStack_28 = param_4;
  puVar2 = (undefined4 *)
           func_005841A8(*DAT_00122150,*DAT_00122154,*(int **)(DAT_0012215c + *DAT_00122150));
  puVar8 = *(undefined4 **)(*piVar1 + 0x3dbc8);
  if (puVar2 != puVar8) {
    local_60 = DAT_00122160;
    do {
      puVar7 = (undefined4 *)*puVar2;
      if (((*DAT_00122164 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_00122164), iVar3 != 0)) {
        *DAT_00122168 = local_60;
      }
      if ((puVar7 == (undefined4 *)0x0) ||
         (iVar3 = (**(code **)*puVar7)(puVar7,DAT_00122168), iVar3 == 0)) {
        puVar7 = (undefined4 *)0x0;
      }
      if (puVar7 != (undefined4 *)0x0) {
        if (param_4 == 0) {
          if (param_3 != 0) goto LAB_00121f74;
LAB_00121f7c:
          sVar5 = 3;
        }
        else {
          if (param_3 != 0) goto LAB_00121f7c;
LAB_00121f74:
          sVar5 = 2;
        }
        if (*(short *)((int)puVar7 + 0x2e) == sVar5) {
          fVar12 = ALBW_AS_F32(uVar15) - ALBW_AS_F32(puVar7[0xf4]);
          fVar11 = ALBW_AS_F32(uVar14) - ALBW_AS_F32(puVar7[0xf5]);
          fVar10 = ALBW_AS_F32(((ulonglong)uVar14 >> 0x20)) - ALBW_AS_F32(puVar7[0xf6]);
          fVar10 = fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10;
          if ((puVar9 == (undefined4 *)0x0) || (fVar10 < ALBW_AS_F32(((ulonglong)uVar15 >> 0x20)))) {
            uVar15 = CONCAT44(fVar10,ALBW_AS_F32(uVar15));
            puVar9 = puVar7;
          }
        }
      }
      puVar2 = (undefined4 *)func_005841A8(*piVar1,*puVar4,puVar2 + 1);
    } while (puVar2 != puVar8);
  }
  iVar3 = *(int *)(puVar9[0x103] + 0x18);
  uVar13 = (undefined4)uVar14;
  fVar10 = (*(float *)(iVar3 + 0x34) + *(float *)(iVar3 + 0x40)) * DAT_0012216c;
  local_a4 = (*(float *)(iVar3 + 0x38) + *(float *)(iVar3 + 0x44)) * DAT_0012216c;
  local_a0 = (*(float *)(iVar3 + 0x3c) + *(float *)(iVar3 + 0x48)) * DAT_0012216c;
  fVar11 = *(float *)(iVar3 + 0x48) - local_a0;
  uVar6 = puVar9[0xfa] + 0x80000000;
  local_a8 = fVar10;
  func_00115154(&local_ac,local_b4,uVar6);
  local_54 = local_ac * fVar11;
  local_4c = local_b4[0] * fVar11;
  local_50 = DAT_00122170;
  func_00115C54(&local_a8,&local_a8,&local_54);
  if (param_3 == 0) {
    iVar3 = 0x24;
  }
  else {
    iVar3 = 0x23;
  }
  puVar4 = (undefined4 *)(DAT_00122174 + iVar3 * 0x2c);
  local_9c = *puVar4;
  uStack_98 = puVar4[1];
  uStack_90 = puVar4[3];
  local_8c = puVar4[4];
  uStack_88 = puVar4[5];
  uStack_84 = puVar4[6];
  local_80 = ALBW_AS_F32(puVar4[7]);
  local_74 = puVar4[10];
  local_7c = puVar4[8];
  uStack_78 = puVar4[9];
  if (uVar6 == 0) {
    local_80 = local_80 + (*(float *)(local_34 + 0x1bc) - fVar10);
  }
  local_94 = puVar4[2] + uVar6;
  local_54 = DAT_00122178;
  local_4c = DAT_00122178;
  if (param_4 == 0) {
    uVar6 = local_74 & 0xffff;
  }
  else {
    uVar6 = 0;
  }
  local_a4 = ALBW_AS_F32(uVar13);
  func_00120FBC(local_34,puStack_30,&local_a8,&local_9c,uVar6,0,&local_54);
  return (*(undefined2 *)((char *)&local_74 + 2));
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_0068C690(float *param_1);
extern float DAT_002b6d9c;
extern float DAT_002b6da0;
extern int *DAT_002b6da4;
extern int DAT_002b6da8;
extern float DAT_002b6dac;
extern uint *DAT_002b6db0;
extern undefined4 DAT_002b6db4;
extern undefined4 DAT_002b6db8;
extern undefined4 *DAT_002b6dbc;
extern uint *DAT_002b6dc0;
extern undefined4 *DAT_002b6dc4;

// USA 002B6B0C <- EU 002B6AE8 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int *
// GLOBAL DAT_002b6d9c float
// GLOBAL DAT_002b6da0 float
// GLOBAL DAT_002b6da4 int *
// GLOBAL DAT_002b6da8 int
// GLOBAL DAT_002b6dac float
// GLOBAL DAT_002b6db0 uint *
// GLOBAL DAT_002b6db4 undefined4
// GLOBAL DAT_002b6db8 undefined4
// GLOBAL DAT_002b6dbc undefined4 *
// GLOBAL DAT_002b6dc0 uint *
// GLOBAL DAT_002b6dc4 undefined4 *

undefined4
func_002B6B0C(int param_1,undefined4 param_2,uint *param_3,float *param_4,int *param_5,
             float fparam_0)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  float fVar8;
  undefined4 in_s1;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_9c (*(float *)(albw_frame + 0x4))
  #define local_98 (*(float *)(albw_frame + 0x8))
  #define local_94 (*(float *)(albw_frame + 0xc))
  #define local_8c (*(float *)(albw_frame + 0x14))
  #define local_88 (*(float *)(albw_frame + 0x18))
  #define local_84 (*(float *)(albw_frame + 0x1c))
  #define local_80 (*(int *)(albw_frame + 0x20))
  #define local_78 (*(undefined4 *)(albw_frame + 0x28))
  #define fStack_70 (*(float *)(albw_frame + 0x30))
  #define local_6c (*(float *)(albw_frame + 0x34))
  #define local_60 (*(float *)(albw_frame + 0x40))
  #define local_5c (*(float *)(albw_frame + 0x44))
  #define local_58 (*(float *)(albw_frame + 0x48))
  #define uStack_3c (*(undefined8 *)(albw_frame + 0x64))
  #define iStack_34 (*(int *)(albw_frame + 0x6c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x70))
  #define puStack_2c (*(uint * *)(albw_frame + 0x74))
  #define pfStack_28 (*(float * *)(albw_frame + 0x78))
  uStack_3c = CONCAT44(in_s1,fparam_0);
  uVar11 = (ulonglong)(uint)ALBW_AS_U32(fparam_0);
  local_60 = DAT_002b6d9c;
  local_5c = DAT_002b6d9c;
  local_58 = DAT_002b6d9c;
  local_8c = *(float *)(param_1 + 0x964);
  local_88 = *(float *)(param_1 + 0x968);
  local_84 = *(float *)(param_1 + 0x96c);
  fVar13 = DAT_002b6d9c;
  iStack_34 = param_1;
  local_30 = param_2;
  puStack_2c = param_3;
  pfStack_28 = param_4;
  func_004D80A4(&local_8c,*param_3,DAT_002b6da0);
  piVar1 = DAT_002b6da4;
  local_80 = 0;
  local_88 = fVar13;
  puVar3 = (undefined4 *)
           func_005841A8(*DAT_002b6da4,local_30,*(int **)(DAT_002b6da8 + *DAT_002b6da4));
  uVar6 = DAT_002b6db4;
  puVar2 = DAT_002b6db0;
  if (*(undefined4 **)(*piVar1 + 0x3dbc8) != puVar3) {
    local_78 = DAT_002b6db8;
    fVar12 = DAT_002b6dac;
    do {
      puVar7 = (undefined4 *)*puVar3;
      if (((*puVar2 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_002b6db0), iVar4 != 0)) {
        *DAT_002b6dbc = uVar6;
      }
      if ((puVar7 == (undefined4 *)0x0) ||
         (iVar4 = (**(code **)*puVar7)(puVar7,DAT_002b6dbc), iVar4 == 0)) {
        puVar7 = (undefined4 *)0x0;
      }
      if (puVar7 != (undefined4 *)0x0) {
        fVar9 = *(float *)(param_1 + 0x3d0) - ALBW_AS_F32(puVar7[0xf4]);
        fVar8 = *(float *)(param_1 + 0x3d8) - ALBW_AS_F32(puVar7[0xf6]);
        fVar10 = ALBW_AS_F32(uVar11);
        fVar8 = SQRT(fVar9 * fVar9 + fVar8 * fVar8);
        uVar11 = CONCAT44(fVar8,fVar10);
        if (param_4 != (float *)0x0) {
          *param_4 = fVar8;
        }
        if ((fVar8 <= fVar10) &&
           (func_00115C70(&local_9c,(float *)(puVar7 + 0xf4),(float *)(param_1 + 0x3d0)),
           fVar13 <= local_8c * local_9c + local_88 * local_98 + local_84 * local_94)) {
          if (((*DAT_002b6dc0 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_002b6dc0), iVar4 != 0)
             ) {
            *DAT_002b6dc4 = local_78;
          }
          iVar4 = (**(code **)*puVar7)(puVar7,DAT_002b6dc4);
          if (iVar4 == 0) {
            puVar7 = (undefined4 *)0x0;
          }
          if (((puVar7 == (undefined4 *)0x0) ||
              (((uint)(puVar7[0x1a7] - puVar7[0x1a6]) < 0x3c &&
               (*(char *)((int)puVar7 + 0x4f1) == '\0')))) &&
             (fVar8 = ALBW_AS_F32((uVar11 >> 0x20)), fVar8 < fVar12)) {
            fVar12 = fVar8;
            func_00115C54(&local_60,&local_60,&local_9c);
            local_80 = 1;
          }
        }
      }
      puVar3 = (undefined4 *)func_005841A8(*piVar1,local_30,puVar3 + 1);
    } while (*(undefined4 **)(*piVar1 + 0x3dbc8) != puVar3);
  }
  uVar6 = 0;
  if (local_80 != 0) {
    func_00115E10(&fStack_70,&local_8c,&local_60);
    iVar4 = func_0068C690(&local_60);
    if (param_5 != (int *)0x0) {
      *param_5 = iVar4;
    }
    if (fVar13 <= local_6c) {
      uVar5 = iVar4 + 0xc0000000;
    }
    else {
      uVar5 = iVar4 + 0x40000000;
    }
    *param_3 = uVar5;
    uVar6 = 1;
  }
  return uVar6;
}


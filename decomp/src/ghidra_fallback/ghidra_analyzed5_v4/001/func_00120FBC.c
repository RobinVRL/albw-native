#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_001E804C(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4, undefined4 *param_5,undefined4 *param_6,float *param_7,int param_8,float fparam_0, float fparam_1);
extern int func_004D8240(float *param_1,uint param_2,uint param_3,float fparam_0);
extern void func_0053084C(int param_1);
extern int func_00581DF8(int param_1,undefined4 param_2,undefined4 param_3);
extern undefined4 DAT_001212d0;
extern int *DAT_001212d4;
extern int *DAT_001212d8;
extern uint *DAT_001212dc;
extern undefined4 *DAT_001212e0;
extern undefined4 DAT_001212e4;
extern int *DAT_001212e8;

// USA 00120FBC <- EU 00120FBC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 int
// PARAM param_7 Stack[0x8]:4 float *
// GLOBAL DAT_001212d0 undefined4
// GLOBAL DAT_001212d4 int *
// GLOBAL DAT_001212d8 int *
// GLOBAL DAT_001212dc uint *
// GLOBAL DAT_001212e0 undefined4 *
// GLOBAL DAT_001212e4 undefined4
// GLOBAL DAT_001212e8 int *

undefined4
func_00120FBC(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined4 param_5,
             int param_6,float *param_7)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  float fVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(float *)(albw_frame + 0x0))
  #define local_6c (*(undefined4 *)(albw_frame + 0x4))
  #define local_68 (*(float *)(albw_frame + 0x8))
  #define local_64 (*(float *)(albw_frame + 0xc))
  #define local_60 (*(undefined4 *)(albw_frame + 0x10))
  #define local_5c (*(float *)(albw_frame + 0x14))
  #define local_58 (*(float *)(albw_frame + 0x18))
  #define fStack_54 (*(float *)(albw_frame + 0x1c))
  #define local_50 (*(float *)(albw_frame + 0x20))
  #define local_4c ((float *)(albw_frame + 0x24))
  #define iStack_34 (*(int *)(albw_frame + 0x3c))
  #define local_30 (*(undefined4 * *)(albw_frame + 0x40))
  #define pfStack_2c (*(float * *)(albw_frame + 0x44))
  #define puStack_28 (*(undefined4 * *)(albw_frame + 0x48))
  piVar3 = DAT_001212d4;
  iVar7 = 0;
  piVar8 = *(int **)(*DAT_001212d8 + 0x44);
  uVar13 = CONCAT44(param_5,DAT_001212d0);
  uVar11 = DAT_001212d0;
  iStack_34 = param_1;
  local_30 = param_2;
  pfStack_2c = param_3;
  puStack_28 = param_4;
  if (piVar8 != (int *)0x0) {
    if (((*DAT_001212dc & 1) == 0) && (iVar5 = func_00100174((int *)DAT_001212dc), iVar5 != 0)) {
      *DAT_001212e0 = DAT_001212e4;
    }
    iVar5 = (**(code **)(*piVar8 + 8))(piVar8,DAT_001212e0);
    if (iVar5 == 0) {
      piVar8 = (int *)0x0;
    }
    if ((piVar8 != (int *)0x0) && ((char)piVar8[0x1f] == '\x01')) {
      iVar5 = *piVar3;
      iVar7 = *(int *)(iVar5 + 0x8c);
      uVar11 = *(undefined4 *)(iVar5 + 0x80);
    }
  }
  uVar12 = CONCAT44(*(undefined4 *)(param_1 + 0xe4),uVar11);
  if ((*(char *)(*piVar3 + 0xe1) == '\0') &&
     (fVar10 = (func_0053084C(*(int *)(param_1 + 0x1c8)), 0.0f), ALBW_AS_F32(uVar13) <= fVar10)) {
    uVar12 = CONCAT44(fVar10,(int)uVar12);
  }
  bVar1 = false;
  bVar2 = false;
  fVar10 = ALBW_AS_F32(uVar13);
  bVar9 = NAN(*param_7) || NAN(fVar10);
  bVar4 = false;
  if (*param_7 < fVar10) {
    bVar4 = param_7[2] < fVar10;
    bVar9 = NAN(param_7[2]) || NAN(fVar10);
  }
  if (bVar4 == bVar9) {
    func_004D8240(&local_70,param_4[1],param_4[2],ALBW_AS_F32(param_4[3]));
    func_00115C54(&local_70,&local_70,param_3);
    local_64 = local_70;
    local_60 = local_6c;
    local_5c = local_68;
    bVar4 = func_00581DF8(*DAT_001212e8,&local_64,&local_70);
    if (bVar4) {
      fVar10 = local_64 - local_70;
      if (fVar10 <= ALBW_AS_F32(uVar13)) {
        fVar10 = -fVar10;
      }
      bVar1 = *param_7 < fVar10;
      fVar10 = local_5c - local_68;
      if (fVar10 <= ALBW_AS_F32(uVar13)) {
        fVar10 = -fVar10;
      }
      if (param_7[2] < fVar10) {
        bVar2 = true;
      }
    }
  }
  uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
  local_4c[0] = *(float *)(param_1 + 0x198);
  fVar10 = ALBW_AS_F32(((ulonglong)uVar12 >> 0x20));
  if (bVar1 || bVar2) {
    local_58 = *param_3;
    fStack_54 = param_3[1];
    local_50 = param_3[2];
    if (bVar1) {
      local_58 = (local_64 - local_70) + local_58;
    }
    if (bVar2) {
      local_50 = (local_5c - local_68) + local_50;
    }
    iVar7 = func_001E804C(*(int *)(param_1 + 0x1c8),local_30,(undefined4 *)(param_1 + 200),&local_58
                          ,param_4,(undefined4 *)(param_1 + 0x1cc),local_4c,iVar7,fVar10,
                          ALBW_AS_F32(uVar12));
  }
  else {
    iVar7 = func_001E804C(*(int *)(param_1 + 0x1c8),local_30,(undefined4 *)(param_1 + 200),param_3,
                          param_4,(undefined4 *)(param_1 + 0x1cc),local_4c,iVar7,fVar10,
                          ALBW_AS_F32(uVar12));
  }
  uVar6 = 0;
  if (iVar7 != 0) {
    *(undefined4 *)(param_1 + 0x10c) = uVar11;
    *(undefined4 *)(param_1 + 0x110) = uVar11;
    *(int *)(param_1 + 0x108) = param_6;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x1cc);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x1d0);
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x1d4);
    uVar11 = param_4[5];
    iVar7 = param_4[6];
    *(undefined4 *)(param_1 + 0x1cc) = param_4[4];
    *(undefined4 *)(param_1 + 0x1d0) = uVar11;
    *(int *)(param_1 + 0x1d4) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(param_1 + 0x1d4) = 0;
      *(float *)(param_1 + 0x1cc) = local_4c[0];
    }
    if (param_6 == 1) {
      *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0x1bc);
      *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0x1c0);
      *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x1c4);
      *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0x1b0);
      *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0x1b4);
      *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x1b8);
      *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0xe8);
    }
    uVar6 = 1;
  }
  return uVar6;
}


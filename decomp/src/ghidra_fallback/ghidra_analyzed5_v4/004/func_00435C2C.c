#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_0011529C(float *param_1,float *param_2);
extern int func_001153A0(float *param_1,float *param_2);
extern int func_0011549C(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern float DAT_00435e9c;
extern undefined4 DAT_00435ea0;
extern undefined *DAT_00435ea4;
extern float DAT_00435ea8;
extern float DAT_00435eac;

// USA 00435C2C <- EU 00435C0C (Ghidra, non-matching)
// GLOBAL DAT_00435e9c float
// GLOBAL DAT_00435ea0 undefined4
// GLOBAL DAT_00435ea4 undefined *
// GLOBAL DAT_00435ea8 float
// GLOBAL DAT_00435eac float

void func_00435C2C(int param_1,float *param_2)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 ((float *)(albw_frame + 0x0))
  #define fStack_70 (*(float *)(albw_frame + 0x10))
  #define fStack_6c (*(float *)(albw_frame + 0x14))
  #define local_68 (*(float *)(albw_frame + 0x18))
  #define fStack_64 (*(float *)(albw_frame + 0x1c))
  #define fStack_60 (*(float *)(albw_frame + 0x20))
  #define local_5c (*(float *)(albw_frame + 0x24))
  #define fStack_58 (*(float *)(albw_frame + 0x28))
  #define fStack_54 (*(float *)(albw_frame + 0x2c))
  #define local_50 (*(float *)(albw_frame + 0x30))
  #define fStack_4c (*(float *)(albw_frame + 0x34))
  #define fStack_48 (*(float *)(albw_frame + 0x38))
  #define local_44 (*(float *)(albw_frame + 0x3c))
  #define fStack_40 (*(float *)(albw_frame + 0x40))
  #define local_3c (*(float *)(albw_frame + 0x44))
  #define local_38 (*(float *)(albw_frame + 0x48))
  #define fStack_34 (*(float *)(albw_frame + 0x4c))
  #define fStack_30 (*(float *)(albw_frame + 0x50))
  #define local_2c (*(float *)(albw_frame + 0x54))
  #define local_28 (*(float *)(albw_frame + 0x58))
  #define local_24 (*(float *)(albw_frame + 0x5c))
  #define local_20 (*(float *)(albw_frame + 0x60))
  #define local_1c (*(float *)(albw_frame + 0x64))
  #define local_18 (*(float *)(albw_frame + 0x68))
  fVar3 = DAT_00435e9c;
  if ((*(byte *)(param_1 + 0xa8) & 8) != 0) {
    if ((*(byte *)(param_1 + 0xa8) & 2) == 0) {
      *(float *)(param_1 + 0x14) = DAT_00435e9c;
      *(float *)(param_1 + 0x10) = fVar3;
      func_001151CC((undefined4 *)(param_1 + 0x3c),(undefined4 *)(param_1 + 0x18));
    }
    else {
      fVar4 = *(float *)(param_1 + 8);
      fVar5 = *(float *)(param_1 + 0xc);
      if (*(float *)(param_1 + 4) < fVar4) {
        fVar4 = *(float *)(param_1 + 4);
      }
      if (fVar5 <= fVar4) {
        fVar4 = fVar5;
      }
      *(float *)(param_1 + 0x14) = fVar4;
      uVar1 = DAT_00435ea0;
      *(float *)(param_1 + 0x10) = fVar3 / fVar4;
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(param_1 + 0x40) = uVar1;
      *(undefined4 *)(param_1 + 0x44) = uVar1;
      *(undefined4 *)(param_1 + 0x48) = uVar1;
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x50) = uVar1;
      *(undefined4 *)(param_1 + 0x54) = uVar1;
      *(undefined4 *)(param_1 + 0x58) = uVar1;
      *(float *)(param_1 + 0x5c) = fVar5;
      if ((*(byte *)(param_1 + 0xa8) & 4) != 0) {
        func_0011549C((float *)(param_1 + 0x3c),(float *)(param_1 + 0x18),(float *)(param_1 + 0x3c))
        ;
      }
    }
    if ((*(byte *)(param_1 + 0xa8) & 6) != 0) {
      func_0011529C((float *)(param_1 + 0x60),(float *)(param_1 + 0x3c));
      func_001153A0((float *)(param_1 + 0x84),(float *)(param_1 + 0x3c));
    }
    *(byte *)(param_1 + 0xa8) = *(byte *)(param_1 + 0xa8) & 0xf7;
  }
  if ((*(byte *)(param_1 + 0xa8) & 6) != 0) {
    func_00100118((int)local_80,DAT_00435ea4,0xc,8);
    fVar3 = DAT_00435ea8;
    local_80[0] = *param_2;
    local_80[1] = param_2[1];
    local_80[2] = param_2[2];
    local_80[3] = param_2[3];
    fStack_70 = param_2[1];
    fStack_6c = param_2[2];
    local_68 = param_2[3];
    fStack_64 = param_2[1];
    fStack_60 = param_2[5];
    local_5c = *param_2;
    fStack_58 = param_2[1];
    fStack_54 = param_2[5];
    local_50 = *param_2;
    fStack_4c = param_2[4];
    fStack_48 = param_2[2];
    local_44 = param_2[3];
    fStack_40 = param_2[4];
    local_3c = param_2[2];
    local_38 = param_2[3];
    fStack_34 = param_2[4];
    fStack_30 = param_2[5];
    iVar2 = 0;
    local_28 = param_2[4];
    local_2c = *param_2;
    local_24 = param_2[5];
    *param_2 = DAT_00435ea8;
    param_2[1] = fVar3;
    param_2[2] = fVar3;
    fVar3 = DAT_00435eac;
    param_2[3] = DAT_00435eac;
    param_2[4] = fVar3;
    param_2[5] = fVar3;
    do {
      func_00115CE4(&local_20,(float *)(param_1 + 0x3c),local_80 + iVar2 * 3);
      iVar2 = iVar2 + 1;
      fVar3 = *param_2;
      if (local_20 < *param_2) {
        fVar3 = local_20;
      }
      *param_2 = fVar3;
      fVar3 = local_1c;
      if (param_2[1] <= local_1c) {
        fVar3 = param_2[1];
      }
      param_2[1] = fVar3;
      fVar3 = param_2[2];
      if (local_18 < param_2[2]) {
        fVar3 = local_18;
      }
      param_2[2] = fVar3;
      fVar3 = local_20;
      if (local_20 < param_2[3]) {
        fVar3 = param_2[3];
      }
      param_2[3] = fVar3;
      fVar3 = local_1c;
      if (local_1c < param_2[4]) {
        fVar3 = param_2[4];
      }
      param_2[4] = fVar3;
      fVar3 = param_2[5];
      if (param_2[5] <= local_18) {
        fVar3 = local_18;
      }
      param_2[5] = fVar3;
    } while (iVar2 < 8);
  }
  return;
}


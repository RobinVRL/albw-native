#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0014EEC8(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_0034CA24(undefined4 *param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int func_00516F44(int param_1);
extern int func_00517484(int param_1);
extern float DAT_00517b88;
extern float DAT_00517b8c;
extern float DAT_00517b90;
extern undefined4 *DAT_00517b94;
extern uint DAT_00517b98;
extern uint DAT_00517b9c;
extern float DAT_00517ba0;
extern undefined4 DAT_00517ba4;
extern float DAT_00517bb0;
extern float DAT_00517bb4;
extern char s_ObjFire_00517ba8[];

// USA 00517894 <- EU 0051786C (Ghidra, non-matching)
// GLOBAL DAT_00517b88 float
// GLOBAL DAT_00517b8c float
// GLOBAL DAT_00517b90 float
// GLOBAL DAT_00517b94 undefined4 *
// GLOBAL DAT_00517b98 uint
// GLOBAL DAT_00517b9c uint
// GLOBAL DAT_00517ba0 float
// GLOBAL DAT_00517ba4 undefined4
// GLOBAL DAT_00517bb0 float
// GLOBAL DAT_00517bb4 float
// GLOBAL s_ObjFire_00517ba8 string

/* WARNING: Variable defined which should be unmapped: objStack_38 */

undefined4 func_00517894(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  uint *puVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define objStack_38 ((uint *)(albw_frame + 0x8))
  #define local_2c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  uVar2 = *(int *)(param_1 + 0xc80) + 1;
  *(uint *)(param_1 + 0xc80) = uVar2;
  if (0x95 < uVar2) {
    *(undefined4 *)(param_1 + 0xc80) = 0;
  }
  uVar2 = *(uint *)(*(int *)(param_1 + 0xcd4) + *(char *)(param_1 + 0xcbc) * 8 + 4);
  pcVar4 = *(code **)(*(int *)(param_1 + 0xcd4) + *(char *)(param_1 + 0xcbc) * 8);
  if ((uVar2 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(int *)(*(int *)(param_1 + 0xccc) + ((int)uVar2 >> 1)));
  }
  (*pcVar4)((int)(*(int *)(param_1 + 0xccc)) + ((int)uVar2 >> 1));
  iVar3 = *(int *)(param_1 + 0xcb8) + 1;
  *(int *)(param_1 + 0xcb8) = iVar3;
  if (*(int *)(param_1 + 0xcc8) != 0) {
    fVar6 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0xcc8),1,fVar6);
  }
  if (*(char *)(param_1 + 0xcbc) != '\x01') {
    fVar6 = DAT_00517b88;
    if (*(char *)(param_1 + 0xcb4) == '\x01') {
      fVar6 = DAT_00517b8c;
    }
    func_0014FAFC(param_1,*(uint *)(param_1 + 1000),fVar6);
    func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  }
  local_2c = *DAT_00517b94;
  uStack_28 = DAT_00517b94[1];
  uStack_24 = DAT_00517b94[2];
  fVar6 = DAT_00517b90;
  if (*(char *)(param_1 + 0xcbc) != '\x01') {
    objStack_38[0] = DAT_00517b98;
    objStack_38[1] = DAT_00517b9c;
    objStack_38[2] = DAT_00517b98;
    iVar3 = func_0014EEC8(param_1,(uint)&local_2c,objStack_38,0x78,DAT_00517ba0);
    if ((iVar3 == 0) && (*(char *)(param_1 + 0xcf4) != '\0')) {
      *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x368);
      *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x36c);
      *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x370);
      uVar1 = DAT_00517ba4;
      if (*(int *)(param_1 + 0xce8) == 0) {
        *(undefined4 *)(param_1 + 0xcec) = 10;
        *(undefined4 *)(param_1 + 0xcf0) = uVar1;
        if (*(char *)(param_1 + 0xcb5) == '\0') {
          iVar3 = *(int *)(param_1 + 1000) + 0x40000000;
        }
        else {
          iVar3 = *(int *)(param_1 + 1000) + -0x40000000;
        }
        *(int *)(param_1 + 1000) = iVar3;
        *(byte *)(param_1 + 0xce2) = *(char *)(param_1 + 0xce2) + 1U & 3;
      }
      if (*(uint *)(param_1 + 0xce8) < *(uint *)(param_1 + 0xcec)) {
        *(uint *)(param_1 + 0xce8) = *(uint *)(param_1 + 0xce8) + 1;
      }
      else {
        *(undefined4 *)(param_1 + 0xce8) = 0;
      }
    }
  }
  puVar5 = (uint *)(param_1 + 0xc84);
  if (*(char *)(param_1 + 0xcf6) == '\0') {
    if (*(int *)(param_1 + 0x344) == 0) {
      *puVar5 = 0;
      *(undefined4 *)(param_1 + 0xc88) = 0;
    }
    else {
      uVar2 = *puVar5;
      if ((uVar2 != 0) && (*(int *)(uVar2 + 0x1c) == *(int *)(param_1 + 0xc88))) {
        func_00110848(uVar2);
      }
      func_004A1B9C((int *)objStack_38,*(int *)(param_1 + 0x344),(uint *)s_ObjFire_00517ba8);
      *puVar5 = objStack_38[0];
      *(uint *)(param_1 + 0xc88) = objStack_38[1];
    }
  }
  if (*(char *)(param_1 + 0xcbc) != '\x01') {
    func_0034CA24(*(undefined4 **)(param_1 + 0xc7c));
    objStack_38[0] = 0;
    objStack_38[1] = 0;
    func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0xcac),param_1 + 0xc9c,0x1000,0,0);
    fVar8 = DAT_00517bb4;
    if (**(int **)(param_1 + 0xc7c) == 0) {
      fVar7 = *(float *)(param_1 + 0xcdc) + DAT_00517bb0;
      *(float *)(param_1 + 0xcdc) = fVar7;
      if ((fVar8 <= fVar7) && (fVar8 = fVar7, fVar6 < fVar7)) {
        fVar8 = fVar6;
      }
      *(float *)(param_1 + 0xcdc) = fVar8;
      uVar2 = *puVar5;
      if ((uVar2 != 0) && (*(int *)(uVar2 + 0x1c) == *(int *)(param_1 + 0xc88))) {
        *(float *)(uVar2 + 0x34) = fVar8;
        *(uint *)(uVar2 + 0x3c) = *(uint *)(uVar2 + 0x3c) | 0x20;
      }
    }
  }
  func_00517484(param_1);
  func_00516F44(param_1);
  uVar2 = *puVar5;
  if ((uVar2 != 0) && (*(int *)(uVar2 + 0x1c) == *(int *)(param_1 + 0xc88))) {
    return func_004A2F38(uVar2,(undefined4 *)(param_1 + 0x3d0));
  }
  return 0;
}


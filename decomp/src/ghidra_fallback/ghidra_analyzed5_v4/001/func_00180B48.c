// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_0014F84C(int param_1,undefined4 *param_2,undefined4 param_3,float fparam_0);
extern int func_0014FEBC(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5, undefined4 param_6,int param_7);
extern int func_00392E48(undefined4 *param_1,int param_2,undefined4 *param_3,undefined1 param_4);
extern int func_00520FF8(int param_1);
extern int func_0052107C(int param_1);
extern int func_005211D8(int param_1);
extern int func_00556DC0(int param_1);
extern int func_00556EAC(int param_1,int param_2);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_00659400(undefined4 *param_1,undefined1 param_2);
extern int func_0068A3EC(float *param_1,float fparam_0);
extern float DAT_00180eb0;
extern float DAT_00180eb4;
extern float DAT_00180eb8;
extern int DAT_00180ebc;
extern float DAT_00180ec0;
extern undefined4 DAT_00180ec4;
extern float DAT_00180ec8;
extern int *DAT_00180ecc;
extern undefined4 DAT_00180ed0;
extern float DAT_00180ed4;
extern float DAT_00180ed8;
extern undefined4 DAT_00180edc;
extern float DAT_00180ee0;

// USA 00180B48 <- EU 00180B48 (Ghidra, non-matching)
// GLOBAL DAT_00180eb0 float
// GLOBAL DAT_00180eb4 float
// GLOBAL DAT_00180eb8 float
// GLOBAL DAT_00180ebc int
// GLOBAL DAT_00180ec0 float
// GLOBAL DAT_00180ec4 undefined4
// GLOBAL DAT_00180ec8 float
// GLOBAL DAT_00180ecc int *
// GLOBAL DAT_00180ed0 undefined4
// GLOBAL DAT_00180ed4 float
// GLOBAL DAT_00180ed8 float
// GLOBAL DAT_00180edc undefined4
// GLOBAL DAT_00180ee0 float

/* WARNING: Variable defined which should be unmapped: objStack_40 */

void func_00180B48(int param_1)

{
  short sVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  bool bVar8;
  uint in_fpscr;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define objStack_40 ((uint *)(albw_frame + 0x0))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  fVar11 = DAT_00180eb8;
  fVar12 = DAT_00180eb4;
  fVar10 = DAT_00180eb0;
  bVar3 = false;
  if (*(char *)(param_1 + 0x964) == '\x06' || *(char *)(param_1 + 0x964) == '\a') goto LAB_00180cec;
  local_34 = DAT_00180eb8;
  local_30 = DAT_00180eb8;
  local_2c = DAT_00180eb8;
  uVar4 = *(uint *)(param_1 + 0xa04);
  bVar8 = uVar4 < *(uint *)(param_1 + 0xa08);
  if (bVar8) {
    *(uint *)(param_1 + 0xa04) = uVar4 + 1;
  }
  bVar8 = !bVar8;
  *(bool *)(param_1 + 0xb95) = bVar8;
  if (bVar8) {
    objStack_40[1] = 0;
    objStack_40[0] = 0x120;
    objStack_40[2] = 0;
    iVar5 = func_0014FEBC(param_1,(int)&local_34,*(undefined4 *)(param_1 + 0xb44),0,0x120,0,0);
    if (iVar5 == 0) goto LAB_00180ca4;
    func_00115DAC((float *)(param_1 + 0xab0),&local_34,(float *)(param_1 + 0xab0),fVar10);
    *(float *)(param_1 + 0xab4) = fVar11;
    if (DAT_00180ebc <
        (int)ALBW_AS_U32((*(float *)(param_1 + 0xab0) * *(float *)(param_1 + 0xab0) + fVar11 * fVar11 +
             *(float *)(param_1 + 0xab8) * *(float *)(param_1 + 0xab8)))) {
      func_0068A3EC((float *)(param_1 + 0xab0),DAT_00180ec0);
    }
    uVar9 = DAT_00180ec4;
    bVar3 = true;
    if (*(uint *)(param_1 + 0x9fc) <= *(uint *)(param_1 + 0x9f8)) {
      puVar6 = (undefined4 *)(param_1 + 0xa04);
      *(undefined4 *)(param_1 + 0xa08) = 10;
      goto LAB_00180c6c;
    }
    *(uint *)(param_1 + 0x9f8) = *(uint *)(param_1 + 0x9f8) + 1;
  }
  else {
LAB_00180ca4:
    uVar9 = DAT_00180ed0;
    puVar6 = (undefined4 *)(param_1 + 0x9f8);
    *(undefined4 *)(param_1 + 0x9fc) = 0x96;
LAB_00180c6c:
    puVar6[2] = uVar9;
    *puVar6 = 0;
  }
  func_00115D70((float *)(param_1 + 0xab0),(float *)(param_1 + 0xab0),DAT_00180ec8);
  iVar5 = *DAT_00180ecc;
  cVar2 = func_00556DC0(iVar5);
  if ((cVar2 != '\0') || (bVar8 = func_00556EAC(iVar5,0x3d), bVar8)) {
    func_00115DAC((float *)(param_1 + 0x3d0),(float *)(param_1 + 0xab0),(float *)(param_1 + 0x3d0),
                  DAT_00180ed4);
  }
LAB_00180cec:
  uVar9 = DAT_00180edc;
  local_2c = DAT_00180ed8;
  if (*(uint *)(param_1 + 0x9e0) < *(uint *)(param_1 + 0x9e4)) {
    *(uint *)(param_1 + 0x9e0) = *(uint *)(param_1 + 0x9e0) + 1;
  }
  *(float *)(param_1 + 0xa28) = fVar11;
  *(float *)(param_1 + 0xa2c) = fVar11;
  *(float *)(param_1 + 0xa30) = fVar11;
  *(float *)(param_1 + 0xa34) = fVar11;
  *(float *)(param_1 + 0xa38) = fVar11;
  *(float *)(param_1 + 0xa3c) = fVar11;
  *(undefined1 *)(param_1 + 0xbef) = 1;
  local_34 = fVar11;
  local_30 = fVar10;
  iVar5 = func_0014F84C(param_1,&local_34,uVar9,fVar10);
  if (iVar5 == 0) {
    cVar2 = *(char *)(param_1 + 0x964);
    if (((cVar2 != '\t') && ((cVar2 != '\f' && cVar2 != '\b') && cVar2 != '\x06')) &&
       (*(char *)(param_1 + 0xbf5) == '\0')) {
      objStack_40[0] = *(uint *)(param_1 + 0x3d0);
      objStack_40[1] = *(uint *)(param_1 + 0x3d4);
      objStack_40[2] = (uint)ALBW_AS_U32((*(float *)(param_1 + 0x3d8) + local_2c));
      uVar4 = func_00392E48(objStack_40,1,(undefined4 *)0x0,0);
      if (uVar4 < 2) {
        func_00659400((undefined4 *)(param_1 + 0x960),9);
      }
    }
  }
  else {
    iVar5 = func_00520FF8(param_1);
    if ((iVar5 == 0) && (bVar8 = func_0052107C(param_1), bVar8)) {
      if (*(char *)(param_1 + 0x964) == '\0' || *(char *)(param_1 + 0x964) == '\v') {
        *(float *)(param_1 + 0x3dc) = fVar11;
        *(float *)(param_1 + 0x3e4) = fVar11;
      }
      else {
        objStack_40[0] = *(uint *)(param_1 + 0xa28);
        objStack_40[1] = *(uint *)(param_1 + 0xa2c);
        objStack_40[2] = *(uint *)(param_1 + 0xa30);
        func_00115DC8((float *)objStack_40);
        func_00115DAC((float *)(param_1 + 0x3dc),(float *)objStack_40,(float *)(param_1 + 0x3dc),
                      (*(float *)(param_1 + 0x3dc) * ALBW_AS_F32(objStack_40[0]) +
                       *(float *)(param_1 + 0x3e0) * ALBW_AS_F32(objStack_40[1]) +
                      *(float *)(param_1 + 0x3e4) * ALBW_AS_F32(objStack_40[2])) * DAT_00180ee0);
      }
      if (((*(char *)(param_1 + 0xbf1) == '\0') && (*(char *)(param_1 + 0xbef) != '\0')) &&
         ((!bVar3 && (*(uint *)(param_1 + 0x9e4) <= *(uint *)(param_1 + 0x9e0))))) {
        objStack_40[0] = *(uint *)(param_1 + 0x3d0);
        objStack_40[1] = *(uint *)(param_1 + 0x3d4);
        iVar7 = 8;
        objStack_40[2] = (uint)ALBW_AS_U32((*(float *)(param_1 + 0x3d8) + local_2c));
        iVar5 = func_00392E48(objStack_40,1,(undefined4 *)0x0,0);
        if ((iVar5 != 0) && (iVar5 != 1)) {
          iVar7 = 0xc;
          *(undefined4 *)(param_1 + 0xa70) = *(undefined4 *)(param_1 + 0x3d0);
          *(undefined4 *)(param_1 + 0xa74) = *(undefined4 *)(param_1 + 0x3d4);
          *(undefined4 *)(param_1 + 0xa78) = *(undefined4 *)(param_1 + 0x3d8);
        }
        *(int *)(param_1 + 0x9e4) = iVar7;
        if (iVar7 == 0) {
          *(float *)(param_1 + 0x9e8) = fVar11;
        }
        else {
          fVar10 = (float)VectorUnsignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
          *(float *)(param_1 + 0x9e8) = fVar12 / fVar10;
        }
        *(undefined4 *)(param_1 + 0x9e0) = 0;
      }
    }
  }
  bVar3 = func_005211D8(param_1);
  sVar1 = 0;
  if (bVar3) {
    sVar1 = *(short *)(param_1 + 0x38);
  }
  if (bVar3 && sVar1 != 0) {
    func_00588C14(param_1,1,0);
    *(undefined1 *)(param_1 + 0xbed) = 1;
    func_00659400((undefined4 *)(param_1 + 0x960),0);
  }
  return;
}


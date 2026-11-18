#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_001512B4(int param_1,float *param_2);
extern int func_002B64F0(int param_1,uint param_2,float fparam_0,float fparam_1);
extern int func_002B7634(int param_1);
extern int func_002B8738(int param_1);
extern int func_002B9760(int param_1);
extern int func_003840C4(int param_1);
extern int func_003841F4(int param_1);
extern int func_003A2BC8(int param_1);
extern int func_003A343C(int param_1);
extern int func_003A34E4(int param_1);
extern int func_003ABA74(int param_1);
extern int func_003ABB24(int *param_1,uint param_2,int param_3);
extern int func_003AC308(int param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004C6B40(int param_1,int param_2);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_004EB770(undefined4 param_1,short param_2,undefined4 param_3,int *param_4);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004FB3A0(int param_1);
extern int func_004FC78C(int param_1,undefined2 param_2);
extern int func_00520FC0(void);
extern int func_00521380(int param_1);
extern int DAT_002ba2a4;
extern int *DAT_002ba2a8;
extern float DAT_002ba2ac;
extern int DAT_002ba2b0;
extern int *DAT_002ba2b4;
extern float DAT_002ba2b8;
extern float DAT_002ba2bc;
extern float DAT_002ba2c0;
extern float DAT_002ba2c4;
extern uint DAT_002ba2c8;
extern int DAT_002ba2cc;
extern float DAT_002ba5e8;
extern float DAT_002ba5ec;
extern float DAT_002ba5f0;
extern float DAT_002ba5f4;
extern float DAT_002ba5f8;
extern float DAT_002ba5fc;
extern float DAT_002ba600;
extern float DAT_002ba604;
extern undefined4 *DAT_002ba608;
extern undefined DAT_002ba60c;
extern int *DAT_002ba614;

// USA 002B9EE4 <- EU 002B9EC0 (Ghidra, non-matching)
// GLOBAL DAT_002ba2a4 int
// GLOBAL DAT_002ba2a8 int *
// GLOBAL DAT_002ba2ac float
// GLOBAL DAT_002ba2b0 int
// GLOBAL DAT_002ba2b4 int *
// GLOBAL DAT_002ba2b8 float
// GLOBAL DAT_002ba2bc float
// GLOBAL DAT_002ba2c0 float
// GLOBAL DAT_002ba2c4 float
// GLOBAL DAT_002ba2c8 uint
// GLOBAL DAT_002ba2cc int
// GLOBAL DAT_002ba5e8 float
// GLOBAL DAT_002ba5ec float
// GLOBAL DAT_002ba5f0 float
// GLOBAL DAT_002ba5f4 float
// GLOBAL DAT_002ba5f8 float
// GLOBAL DAT_002ba5fc float
// GLOBAL DAT_002ba600 float
// GLOBAL DAT_002ba604 float
// GLOBAL DAT_002ba608 undefined4 *
// GLOBAL DAT_002ba60c undefined
// GLOBAL DAT_002ba614 int *

void func_002B9EE4(int *param_1,undefined4 param_2,undefined4 param_3,float *param_4)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int extraout_r1;
  int extraout_r1_00;
  float fVar7;
  uint uVar8;
  bool bVar9;
  float fVar10;
  float fparam_0;
  float fVar11;
  int iVar12;
  float fVar13;
  float fparam_2;
  float fparam_1;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(float *)(albw_frame + 0x0))
  #define local_5c (*(float *)(albw_frame + 0x4))
  #define local_58 (*(undefined4 *)(albw_frame + 0x8))
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define local_4c (*(float *)(albw_frame + 0x14))
  #define local_48 (*(float *)(albw_frame + 0x18))
  #define fStack_44 (*(float *)(albw_frame + 0x1c))
  #define fStack_40 (*(float *)(albw_frame + 0x20))
  iVar5 = param_1[0x142];
  uVar8 = (uint)(short)iVar5;
  if ((char)param_1[0x2d1] != '\0') {
    *(undefined1 *)(param_1 + 0x2d1) = 1;
    (**(code **)(**(int **)(param_1[0x24f] + 4) + 0x120))(*(int **)(param_1[0x24f] + 4));
  }
  piVar6 = param_1 + 0x2f2;
  iVar12 = DAT_002ba2a4;
  if (((*(int *)(*DAT_002ba2a8 + 0x44) == 0) ||
      (piVar3 = *(int **)(param_1[0x24f] + 4), piVar3 != (int *)(param_1[0x24f] + 8))) ||
     (iVar4 = (**(code **)(*piVar3 + 0x104))(piVar3,0), iVar4 == 0)) {
    func_002B9760((int)param_1);
    iVar4 = (**(code **)(**(int **)(param_1[0x24f] + 4) + 0x104))(*(int **)(param_1[0x24f] + 4),3);
    if (((iVar4 == 0) && ((short)param_1[0x142] < 1)) &&
       (iVar4 = (**(code **)(**(int **)(param_1[0x24f] + 4) + 0x104))
                          (*(int **)(param_1[0x24f] + 4),4), iVar4 == 0)) {
      if (((char)param_1[0x522] != '\x12') && (*(char *)((int)param_1 + 0x1489) != '\x12')) {
        param_4 = *(float **)(**(int **)(param_1[0x24f] + 4) + 0x138);
        (*(code *)param_4)(*(int **)(param_1[0x24f] + 4),4,1);
        goto LAB_002ba0c0;
      }
      func_003A34E4((int)piVar6);
      func_004FB3A0((int)param_1);
      iVar4 = param_1[0x144];
      *(int *)(iVar4 + 0x48) = iVar12;
      *(int *)(iVar4 + 0x4c) = iVar12;
      *(int *)(iVar4 + 0x50) = iVar12;
      param_1[0x139] = iVar12;
      param_1[0x13a] = iVar12;
      param_1[0x13b] = iVar12;
      piVar3 = (int *)param_1[0x24f];
      iVar4 = func_003ABB24(piVar3,1,1);
      if (iVar4 == 0) {
        param_4 = *(float **)(**(int **)(param_1[0x24f] + 4) + 0x138);
        (*(code *)param_4)(*(int **)(param_1[0x24f] + 4),2,1);
      }
      else {
        piVar3 = (int *)piVar3[1];
        param_4 = *(float **)(*piVar3 + 0x138);
        (*(code *)param_4)(piVar3,2,1);
      }
      *(undefined1 *)((int)param_1 + 0x935) = 3;
      func_002B7634((int)param_1);
    }
    func_003A343C((int)piVar6);
    iVar4 = func_004F70A8(param_1);
    if (iVar4 != 0) {
      func_002B8738((int)param_1);
      func_003AC308(param_1[0x24f]);
    }
  }
LAB_002ba0c0:
  iVar4 = (**(code **)(**(int **)(param_1[0x24f] + 4) + 0x104))(*(int **)(param_1[0x24f] + 4),4);
  if (((iVar4 == 0) &&
      (iVar4 = (**(code **)(**(int **)(param_1[0x24f] + 4) + 0x104))
                         (*(int **)(param_1[0x24f] + 4),3), iVar4 == 0)) &&
     (*(char *)((int)param_1 + 0xb43) != '\0')) {
    fVar10 = ALBW_AS_F32(param_1[0xf8]) - DAT_002ba2ac;
    param_1[0xf8] = (int)ALBW_AS_U32(fVar10);
    if (0xbf000000 < (uint)ALBW_AS_U32(fVar10)) {
      param_1[0xf8] = DAT_002ba2b0;
    }
  }
  param_1[0xf4] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf4]) + ALBW_AS_F32(param_1[0x25c])));
  param_1[0xf6] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf6]) + ALBW_AS_F32(param_1[0x25e])));
  func_004F48F0((int)param_1);
  fVar10 = DAT_002ba2b8;
  *(undefined1 *)((int)param_1 + 0xb36) = *(undefined1 *)((int)param_1 + 0xb35);
  *(undefined1 *)((int)param_1 + 0xb35) = 0;
  *(undefined1 *)((int)param_1 + 0xb37) = 0;
  *(undefined1 *)(param_1 + 0x2cd) = 0;
  piVar3 = DAT_002ba2b4;
  *(undefined1 *)(param_1 + 0x2ce) = 0;
  *(undefined1 *)((int)param_1 + 0xb39) = 0;
  *(undefined1 *)(param_1 + 0x2cf) = 0;
  *(undefined1 *)((int)param_1 + 0xb3b) = 0;
  iVar4 = *(int *)(*piVar3 + 0x1c);
  cVar2 = *(char *)(*piVar3 + 0x18);
  if (cVar2 == '\a' && iVar4 == 3) {
    func_002B64F0((int)param_1,param_1[0x288],DAT_002ba2c0,DAT_002ba2bc);
  }
  else if (cVar2 == '\a' && iVar4 == 2) {
    uVar1 = param_1[0xfa] + 0x20000000U & 0xc0000000;
    fVar7 = DAT_002ba2c4;
    func_002B64F0((int)param_1,uVar1,fVar10,DAT_002ba2c4);
    func_002B64F0((int)param_1,uVar1 + 0x80000000,fVar10,fVar7);
  }
  if ((short)param_1[0x2c1] == 0) {
    *(undefined1 *)((int)param_1 + 0xb3a) = 0;
  }
  func_004F5588((int)param_1);
  func_003ABA74(param_1[0x24f]);
  if ((*(char *)(*DAT_002ba2b4 + 0x18) == '\a' && *(int *)(*DAT_002ba2b4 + 0x1c) == 1) &&
     (DAT_002ba2c8 < (uint)param_1[0xf6])) {
    param_1[0xf6] = DAT_002ba2cc;
  }
  func_003840C4((int)(param_1 + 0x230));
  fVar7 = 0.0;
  func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,param_4);
  func_003A2BC8((int)piVar6);
  func_003841F4((int)(param_1 + 0x230));
  iVar4 = *(int *)(*(int *)(param_1[0x235] + 0x24) + 0x14) + param_1[0x23c] * 0x30;
  local_60 = *(float *)(iVar4 + 0xc);
  local_5c = *(float *)(iVar4 + 0x1c);
  local_58 = *(undefined4 *)(iVar4 + 0x2c);
  iVar4 = func_00521380(param_1[0x525]);
  if (iVar4 != 0) {
    func_00115C54(&local_48,&local_60,(float *)(param_1 + 0xf4));
    param_4 = &local_54;
    local_54 = local_48;
    local_50 = fStack_44;
    local_4c = fStack_40;
    func_00115D70(&local_54,&local_54,fVar10);
    func_001512B4(param_1[0x525],&local_54);
    fVar7 = fStack_40;
  }
  fVar11 = DAT_002ba5f4;
  fparam_1 = DAT_002ba5f0;
  fparam_2 = DAT_002ba5ec;
  fVar13 = DAT_002ba5e8;
  if (((char)param_1[0x2cd] != '\0') && ((short)param_1[700] == 0)) {
    if (*(char *)((int)param_1 + 0x392) == '\t') {
      bVar9 = false;
      if (ALBW_AS_F32(param_1[0x262]) == DAT_002ba5f4) {
        bVar9 = ALBW_AS_F32(param_1[0x263]) == DAT_002ba5f4;
      }
      fVar11 = DAT_002ba5e8;
      if ((bVar9) && (ALBW_AS_F32(param_1[0x264]) == DAT_002ba5f4)) {
        fVar11 = DAT_002ba5fc;
      }
      local_54 = DAT_002ba5f4;
      local_50 = DAT_002ba5f4;
      local_4c = DAT_002ba5f4;
      func_004D838C((float *)(param_1 + 0xf7),&local_54,ALBW_AS_F32(param_1[0x298]) * fVar11,DAT_002ba5f0,
                    DAT_002ba5ec);
    }
    else {
      fparam_0 = ALBW_AS_F32(param_1[0x297]) * fVar10;
      param_1[0x296] = (int)ALBW_AS_U32(fparam_0);
      if (ALBW_AS_F32(param_1[0x262]) == fVar11) {
        bVar9 = false;
        if (ALBW_AS_F32(param_1[0x263]) == fVar11) {
          bVar9 = ALBW_AS_F32(param_1[0x264]) == fVar11;
        }
        if ((bVar9) &&
           (SQRT((ALBW_AS_F32(param_1[0xf7]) - ALBW_AS_F32(param_1[0x25c])) *
                 (ALBW_AS_F32(param_1[0xf7]) - ALBW_AS_F32(param_1[0x25c])) +
                 (ALBW_AS_F32(param_1[0xf9]) - ALBW_AS_F32(param_1[0x25e])) *
                 (ALBW_AS_F32(param_1[0xf9]) - ALBW_AS_F32(param_1[0x25e]))) < fparam_0 * DAT_002ba5f8)) {
          param_1[0xf7] = (int)ALBW_AS_U32(fVar11);
          param_1[0xf8] = (int)ALBW_AS_U32(fVar11);
          param_1[0xf9] = (int)ALBW_AS_U32(fVar11);
          goto LAB_002ba488;
        }
      }
      func_004D838C((float *)(param_1 + 0xf7),(float *)(param_1 + 0x25c),fparam_0,fparam_1,fparam_2)
      ;
    }
  }
LAB_002ba488:
  func_004D838C((float *)(param_1 + 0xf7),(float *)(param_1 + 0x25c),DAT_002ba600,fparam_1,fparam_2)
  ;
  iVar4 = (int)(short)param_1[0x142];
  if (0 < iVar4) {
    if (*(int *)(*DAT_002ba2a8 + 0x44) != 0) {
      func_004FC78C((int)param_1,(short)iVar5);
      goto LAB_002ba4cc;
    }
    if ((int)uVar8 < 0) goto LAB_002ba4cc;
  }
  if (-1 < iVar4 && iVar4 <= (int)uVar8) {
    uVar8 = uVar8 - iVar4;
  }
  if ((int)uVar8 < 0) {
    uVar8 = 0;
  }
  func_004C6B40(*DAT_002ba614,uVar8 & 0xffff);
LAB_002ba4cc:
  if (param_1[0x10c] != 0) {
    local_5c = ALBW_AS_F32(param_1[0xf5]) + fVar10;
    iVar5 = func_00520FC0();
    if (*(float *)(iVar5 + 4) + DAT_002ba604 <= local_5c) {
      local_5c = ALBW_AS_F32(param_1[0xf5]);
    }
    iVar5 = param_1[0x10c];
    *(float *)(iVar5 + 4) = local_60;
    *(float *)(iVar5 + 8) = local_5c;
    *(undefined4 *)(iVar5 + 0xc) = local_58;
  }
  func_004EB770(*DAT_002ba608,(ushort)*(byte *)((int)param_1 + 0x392),ALBW_AS_U32(fVar7),(int *)param_4);
  *(undefined1 *)((int)param_1 + 0xb3f) = 0;
  param_1[0x298] = iVar12;
  iVar5 = extraout_r1;
  if (((char)param_1[0x2cd] != '\0') && (ALBW_AS_F32(param_1[0xf5]) + fVar13 < ALBW_AS_F32(param_1[0xdb]))) {
    iVar5 = 0;
    if (param_1[0xd1] != 0) {
      func_004A1B9C((int *)&local_50,param_1[0xd1],(uint *)&DAT_002ba60c);
      iVar5 = extraout_r1_00;
    }
  }
  piVar6 = (int *)param_1[0x10f];
  if (piVar6 != (int *)0x0) {
    iVar5 = *piVar6;
  }
  if ((piVar6 != (int *)0x0 && iVar5 != 0) && (*(char *)((int)piVar6 + 0x21) == '\x10')) {
    param_1[0x24e] = param_1[0x24e] | 0x10000;
  }
  return;
}


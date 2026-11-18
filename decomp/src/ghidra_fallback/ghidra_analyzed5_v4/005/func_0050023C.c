#include "ghidra_types.h"

extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_00521078(int param_1);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern int func_0066B070(undefined4 *param_1,undefined1 param_2);
extern int iRam005004b4;
extern float DAT_00500484;
extern float DAT_00500488;
extern float DAT_0050048c;
extern float DAT_00500490;
extern float DAT_00500494;
extern float DAT_00500498;
extern undefined DAT_0050049c;
extern float DAT_005004b8;
extern undefined4 DAT_005004bc;
extern undefined4 *DAT_005004c0;
extern undefined4 DAT_005004c4;
extern char s_SE_Ropa_LAND_005004a4[];

// USA 0050023C <- EU 00500214 (Ghidra, non-matching)
// GLOBAL DAT_00500484 float
// GLOBAL DAT_00500488 float
// GLOBAL DAT_0050048c float
// GLOBAL DAT_00500490 float
// GLOBAL DAT_00500494 float
// GLOBAL DAT_00500498 float
// GLOBAL DAT_0050049c undefined
// GLOBAL DAT_005004b8 float
// GLOBAL DAT_005004bc undefined4
// GLOBAL DAT_005004c0 undefined4 *
// GLOBAL DAT_005004c4 undefined4
// GLOBAL UNK_005004b4 int
// GLOBAL s_SE_Ropa_LAND_005004a4 string

void func_0050023C(int param_1)

{
  bool bVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  longlong lVar10;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_20 (*(int *)(albw_frame + 0x0))
  #define pcStack_1c (*(char * *)(albw_frame + 0x4))
  #define aiStack_18 ((int *)(albw_frame + 0x8))
  bVar1 = false;
  uVar9 = func_0058AB74(param_1);
  fVar2 = DAT_00500498;
  fVar8 = DAT_0050048c;
  iVar4 = (int)uVar9;
  if (iVar4 == 1) {
    iVar4 = func_0058A8F0(param_1);
    if (iVar4 != 0) {
      func_004FABDC(param_1,2,0,0);
    }
  }
  else if (iVar4 == 2) {
    fVar7 = (float)VectorUnsignedToFloat
                             (*(undefined4 *)(param_1 + 0x924),(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (fVar7 / DAT_00500484) * DAT_00500490 - DAT_00500488;
    *(float *)(param_1 + 0x574) = (DAT_00500488 - fVar7 * fVar7) * DAT_00500494;
    fVar7 = *(float *)(param_1 + 0x8e0);
    fVar7 = fVar7 + (fVar2 - fVar7) * fVar8;
    *(float *)(param_1 + 0x8e0) = fVar7;
    func_0014FAFC(param_1,*(uint *)(param_1 + 0x8ec),fVar7);
    if (*(uint *)(param_1 + 0x924) < *(uint *)(param_1 + 0x928)) {
      *(uint *)(param_1 + 0x924) = *(uint *)(param_1 + 0x924) + 1;
    }
    else {
      bVar3 = func_00521078(param_1);
      if (bVar3) {
        if (*(int *)(param_1 + 0x344) != 0) {
          func_004A1B9C(aiStack_18,*(int *)(param_1 + 0x344),(uint *)&DAT_0050049c);
        }
        func_004FABDC(param_1,3,2,0);
        pcStack_1c = s_SE_Ropa_LAND_005004a4;
        iStack_20 = iRam005004b4;
        func_00150A84((int *)param_1,&iStack_20,0);
      }
    }
  }
  else if (iVar4 == 3) {
    bVar1 = true;
    fVar8 = *(float *)(param_1 + 0x8e0);
    fVar8 = fVar8 + -fVar8 * DAT_0050048c;
    *(float *)(param_1 + 0x8e0) = fVar8;
    func_0014FAFC(param_1,*(uint *)(param_1 + 0x8ec),fVar8);
    lVar10 = func_0058ACC8(param_1,DAT_005004b8);
    if (((int)lVar10 != 0) || (iVar4 = func_0058A8F0(param_1), iVar4 != 0)) {
      func_0066B070((undefined4 *)(param_1 + 0x8bc),1);
    }
  }
  if (*(int *)(param_1 + 0x920) == 0) {
    if (*(uint *)(param_1 + 0x908) < *(uint *)(param_1 + 0x90c)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x900) = *(undefined4 *)(param_1 + 0x8fc);
    uVar5 = DAT_005004c4;
    uVar6 = *DAT_005004c0;
    *(undefined4 *)(param_1 + 0x90c) = 0x23;
    *(undefined4 *)(param_1 + 0x904) = uVar6;
    *(undefined4 *)(param_1 + 0x910) = uVar5;
    *(undefined4 *)(param_1 + 0x908) = 0;
    uVar5 = 1;
    *(undefined4 *)(param_1 + 0x918) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x920) != 1) {
      return;
    }
    if (*(uint *)(param_1 + 0x908) < *(uint *)(param_1 + 0x90c)) {
      return;
    }
    if (!bVar1) {
      return;
    }
    *(undefined4 *)(param_1 + 0x904) = 0;
    *(undefined4 *)(param_1 + 0x90c) = 0x14;
    uVar5 = DAT_005004bc;
    *(undefined4 *)(param_1 + 0x900) = *(undefined4 *)(param_1 + 0x8fc);
    *(undefined4 *)(param_1 + 0x910) = uVar5;
    *(undefined4 *)(param_1 + 0x908) = 0;
    uVar5 = 2;
    *(undefined4 *)(param_1 + 0x918) = 1;
  }
  *(undefined4 *)(param_1 + 0x920) = uVar5;
  return;
}


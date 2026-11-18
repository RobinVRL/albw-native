#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_0058A7D4(void);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern int func_0068C690(float *param_1);
extern int DAT_00212ef4;
extern undefined4 DAT_00212ef8;
extern float DAT_00212efc;
extern uint DAT_00212f00;
extern float DAT_00212f04;
extern int *DAT_00212f08;
extern float DAT_00212f0c;
extern float DAT_00212f10;
extern float DAT_00212f14;

// USA 00212C80 <- EU 00212C80 (Ghidra, non-matching)
// GLOBAL DAT_00212ef4 int
// GLOBAL DAT_00212ef8 undefined4
// GLOBAL DAT_00212efc float
// GLOBAL DAT_00212f00 uint
// GLOBAL DAT_00212f04 float
// GLOBAL DAT_00212f08 int *
// GLOBAL DAT_00212f0c float
// GLOBAL DAT_00212f10 float
// GLOBAL DAT_00212f14 float

undefined4 func_00212C80(int param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 ((float *)(albw_frame + 0xc))
  uVar8 = DAT_00212ef8;
  fVar6 = *(float *)(param_1 + 0x988) - *(float *)(param_1 + 0x3d0);
  fVar7 = *(float *)(param_1 + 0x990) - *(float *)(param_1 + 0x3d8);
  if (DAT_00212ef4 < (int)ALBW_AS_U32((fVar6 * fVar6 + fVar7 * fVar7))) {
    *(float *)(param_1 + 0x988) = *(float *)(param_1 + 0x3d0);
    *(undefined4 *)(param_1 + 0x98c) = *(undefined4 *)(param_1 + 0x3d4);
    *(undefined4 *)(param_1 + 0x990) = *(undefined4 *)(param_1 + 0x3d8);
    *(undefined4 *)(param_1 + 0x960) = 0x3c;
  }
  else {
    if (*(uint *)(param_1 + 0x95c) < *(uint *)(param_1 + 0x960)) {
      *(uint *)(param_1 + 0x95c) = *(uint *)(param_1 + 0x95c) + 1;
      goto LAB_00212cf8;
    }
    puVar2 = (uint *)func_0058A7D4();
    uVar1 = DAT_00212f00;
    uVar3 = func_00111A64(puVar2);
    iVar4 = (int)((ulonglong)uVar1 * (ulonglong)uVar3 >> 0x20) + uVar1 + 0x40000001 +
            *(int *)(param_1 + 1000);
    *(int *)(param_1 + 1000) = iVar4;
    *(int *)(param_1 + 0x978) = iVar4;
    *(undefined4 *)(param_1 + 0x960) = 0x3c;
  }
  *(undefined4 *)(param_1 + 0x964) = uVar8;
  *(undefined4 *)(param_1 + 0x95c) = 0;
LAB_00212cf8:
  uVar9 = func_0058AB74(param_1);
  iVar4 = (int)uVar9;
  if (iVar4 == 4) {
    pfVar5 = (float *)func_00520FC0();
    func_00115C70(&local_28,pfVar5,(float *)(param_1 + 0x3d0));
    local_24[0] = DAT_00212f04;
    func_00115DC8(&local_28);
    iVar4 = func_0068C690(&local_28);
    func_0051D2F4((int *)(param_1 + 1000),iVar4 + -0x80000000,0,*DAT_00212f08,DAT_00212f0c);
    *(undefined4 *)(param_1 + 0x978) = *(undefined4 *)(param_1 + 1000);
    iVar4 = func_0058A8F0(param_1);
    if (iVar4 != 0) {
      func_004FC07C(param_1,5,0xffffffff,0);
    }
  }
  else {
    pfVar5 = (float *)(param_1 + 0x974);
    if (iVar4 == 5) {
      *pfVar5 = *pfVar5 + (DAT_00212f10 - *pfVar5) * DAT_00212efc;
      func_00115154(&local_28,local_24,*(uint *)(param_1 + 0x978));
      *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x974) * local_28;
      *(float *)(param_1 + 0x3e4) = *(float *)(param_1 + 0x974) * local_24[0];
    }
    else if (iVar4 == 6) {
      fVar6 = DAT_00212efc;
      iVar4 = func_0058A8F0(param_1);
      if (iVar4 != 0) {
        func_004FC07C(param_1,5,0xffffffff,0);
      }
      *pfVar5 = *pfVar5 + (DAT_00212f14 - *pfVar5) * fVar6;
      func_00115154(&local_28,local_24,*(uint *)(param_1 + 0x978));
      *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x974) * local_28;
      *(float *)(param_1 + 0x3e4) = *(float *)(param_1 + 0x974) * local_24[0];
    }
  }
  fVar6 = func_004F898C();
  return func_004F8964((float *)(param_1 + 0x3e0),1,fVar6);
}


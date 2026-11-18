// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_004C90E8(int param_1);
extern int func_004C9AFC(int param_1,float *param_2);
extern int func_004CA984(int param_1);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern float func_00521298(int param_1);
extern int func_00556A5C();
extern undefined8 func_0058A474(undefined4 param_1,uint param_2);
extern int func_0058A7D4(void);
extern int func_0066A284(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern int *DAT_004c961c;
extern float DAT_004c9620;
extern float DAT_004c9624;
extern float DAT_004c9628;
extern float DAT_004c962c;
extern float DAT_004c9630;
extern int DAT_004c9634;
extern int DAT_004c9638;
extern float DAT_004c963c;
extern int *DAT_004c9640;
extern int *DAT_004c9644;
extern int DAT_004c9648;
extern float DAT_004c964c;
extern int DAT_004c9650;
extern float DAT_004c9654;
extern int DAT_004c9658;

// USA 004C92F0 <- EU 004C92C8 (Ghidra, non-matching)
// GLOBAL DAT_004c961c int *
// GLOBAL DAT_004c9620 float
// GLOBAL DAT_004c9624 float
// GLOBAL DAT_004c9628 float
// GLOBAL DAT_004c962c float
// GLOBAL DAT_004c9630 float
// GLOBAL DAT_004c9634 int
// GLOBAL DAT_004c9638 int
// GLOBAL DAT_004c963c float
// GLOBAL DAT_004c9640 int *
// GLOBAL DAT_004c9644 int *
// GLOBAL DAT_004c9648 int
// GLOBAL DAT_004c964c float
// GLOBAL DAT_004c9650 int
// GLOBAL DAT_004c9654 float
// GLOBAL DAT_004c9658 int

undefined4 func_004C92F0(int param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  float *pfVar7;
  undefined4 *puVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define afStack_2c ((float *)(albw_frame + 0x14))
  func_004C90E8(param_1);
  bVar1 = func_00556A5C(*DAT_004c961c);
  puVar8 = (undefined4 *)(param_1 + 0x8bc);
  if (bVar1) {
    return func_0066A284(puVar8,5);
  }
  iVar2 = func_004CA984(param_1);
  iVar5 = DAT_004c9658;
  fVar9 = DAT_004c9624;
  fVar10 = DAT_004c9620;
  if (iVar2 != 0) {
    return func_0066A284(puVar8,9);
  }
  iVar2 = *(int *)(param_1 + 0x954);
  if (iVar2 == 0) {
    fVar10 = DAT_004c9624;
    fVar9 = DAT_004c9620;
    pfVar7 = (float *)func_00520FC0();
    local_38 = *pfVar7;
    local_30 = pfVar7[2];
    local_34 = pfVar7[1] + DAT_004c9628;
    func_004D838C((float *)(param_1 + 0x3d0),&local_38,fVar9,DAT_004c9630,DAT_004c962c);
    fVar9 = func_00521298(param_1);
    if ((int)ALBW_AS_U32(fVar9) < DAT_004c9634) {
      *(undefined4 *)(param_1 + 0x954) = 1;
      *(float *)(param_1 + 0x964) = fVar10;
      *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(param_1 + 1000);
      pfVar7 = (float *)func_00520FC0();
      func_00115C70(afStack_2c,pfVar7,(float *)(param_1 + 0x3d0));
      iVar2 = func_0068C690(afStack_2c);
      uVar12 = func_0058A474(param_1,0x32);
      iVar5 = *(int *)(DAT_004c9638 + 0x10);
      if ((int)uVar12 == 0) {
        iVar5 = -iVar5;
      }
      *(int *)(param_1 + 0x968) = iVar5 + iVar2;
      pfVar7 = (float *)func_00520FC0();
      fVar9 = DAT_004c963c;
      *(float *)(param_1 + 0x96c) = *pfVar7;
      *(float *)(param_1 + 0x970) = pfVar7[1];
      *(float *)(param_1 + 0x974) = pfVar7[2];
      *(float *)(param_1 + 0x970) = *(float *)(param_1 + 0x970) + fVar9;
      *(float *)(param_1 + 0x3e0) = fVar10;
      puVar3 = (uint *)func_0058A7D4();
      uVar4 = func_00111A64(puVar3);
      iVar5 = (int)((ulonglong)uVar4 * 0x3c >> 0x20) + 0x82;
      *(int *)(param_1 + 0x95c) = iVar5;
      if (iVar5 == 0) {
        *(float *)(param_1 + 0x960) = fVar10;
      }
      else {
        fVar10 = (float)VectorUnsignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_1 + 0x960) = fVar9 / fVar10;
      }
      *(undefined4 *)(param_1 + 0x958) = 0;
    }
    goto LAB_004c95fc;
  }
  if (iVar2 == 1) {
    if (*(uint *)(param_1 + 0x95c) <= *(uint *)(param_1 + 0x958)) {
      func_0066A284(puVar8,6);
      goto LAB_004c95fc;
    }
    *(uint *)(param_1 + 0x958) = *(uint *)(param_1 + 0x958) + 1;
    uVar6 = *(undefined4 *)(param_1 + 0x3e0);
    fVar9 = *(float *)(param_1 + 0x964);
    *(float *)(param_1 + 0x964) = fVar9 + (fVar10 - fVar9) * fVar10;
    func_00115C70(&local_38,(float *)(param_1 + 0x96c),(float *)(param_1 + 0x3d0));
    iVar5 = func_0068C690(&local_38);
    func_0051D2F4((int *)(param_1 + 0x968),iVar5,DAT_004c9640[-1],*DAT_004c9640,fVar10);
    func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x968),DAT_004c9648,*DAT_004c9644,
                  DAT_004c964c);
    func_0014FAFC(param_1,*(uint *)(param_1 + 0x968),*(float *)(param_1 + 0x964));
    *(undefined4 *)(param_1 + 0x3e0) = uVar6;
    fVar10 = func_00521298(param_1);
    if ((int)ALBW_AS_U32(fVar10) <= DAT_004c9650) goto LAB_004c95fc;
    uVar6 = 2;
  }
  else {
    if (iVar2 != 2) goto LAB_004c95fc;
    fVar11 = *(float *)(param_1 + 0x3dc) * DAT_004c9654;
    fVar10 = *(float *)(param_1 + 0x3e4) * DAT_004c9654;
    *(float *)(param_1 + 0x3dc) = fVar11;
    *(float *)(param_1 + 0x3e4) = fVar10;
    if (fVar11 <= fVar9) {
      fVar11 = -fVar11;
    }
    if (iVar5 < (int)ALBW_AS_U32(fVar11)) goto LAB_004c95fc;
    if (fVar10 <= fVar9) {
      fVar10 = -fVar10;
    }
    if (iVar5 < (int)ALBW_AS_U32(fVar10)) goto LAB_004c95fc;
    *(float *)(param_1 + 0x3dc) = fVar9;
    *(float *)(param_1 + 0x3e0) = fVar9;
    *(float *)(param_1 + 0x3e4) = fVar9;
    uVar6 = 0;
  }
  *(undefined4 *)(param_1 + 0x954) = uVar6;
LAB_004c95fc:
  pfVar7 = (float *)func_00520FC0();
  return func_004C9AFC(param_1,pfVar7);
}


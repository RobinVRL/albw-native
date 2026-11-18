#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00164B08(int param_1,int param_2);
extern int func_00164FFC(int param_1,float fparam_0);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_00521018(int param_1);
extern int func_00521078(int param_1);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern float func_0058AC38(int param_1);
extern int func_00658748(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float *DAT_00164fb8;
extern float DAT_00164fbc;
extern float DAT_00164fc0;
extern int DAT_00164fdc;
extern int DAT_00164fe0;
extern float DAT_00164fe4;
extern float DAT_00164fe8;
extern float DAT_00164fec;
extern float DAT_00164ff0;
extern float DAT_00164ff4;
extern float DAT_00164ff8;
extern float DAT_00164ffc;
extern char s_SE_Tendol_FLY_ATTACK_00164fc4[];

// USA 00164CF4 <- EU 00164CF8 (Ghidra, non-matching)
// GLOBAL DAT_00164fb8 float *
// GLOBAL DAT_00164fbc float
// GLOBAL DAT_00164fc0 float
// GLOBAL DAT_00164fdc int
// GLOBAL DAT_00164fe0 int
// GLOBAL DAT_00164fe4 float
// GLOBAL DAT_00164fe8 float
// GLOBAL DAT_00164fec float
// GLOBAL DAT_00164ff0 float
// GLOBAL DAT_00164ff4 float
// GLOBAL DAT_00164ff8 float
// GLOBAL DAT_00164ffc float
// GLOBAL s_SE_Tendol_FLY_ATTACK_00164fc4 string

undefined4 func_00164CF4(int param_1)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define fStack_2c (*(float *)(albw_frame + 0x4))
  #define fStack_28 (*(float *)(albw_frame + 0x8))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  local_30 = *DAT_00164fb8;
  fStack_2c = DAT_00164fb8[1];
  fStack_28 = DAT_00164fb8[2];
  pfVar2 = (float *)func_00520FC0();
  func_00115C70(&local_30,pfVar2,(float *)(param_1 + 0x3d0));
  uVar10 = func_0058AB74(param_1);
  if ((int)uVar10 == 7) {
    fVar8 = DAT_00164fc0;
    fVar7 = DAT_00164fbc;
    iVar3 = func_0068C690(&local_30);
    func_0051D2F4((int *)(param_1 + 1000),iVar3,DAT_00164fe0,0x7fffffff,fVar7);
    fVar7 = *(float *)(param_1 + 0x900);
    *(float *)(param_1 + 0x900) = fVar7 + -fVar7 * DAT_00164fe4;
    func_00164B08(param_1,1);
    iVar3 = func_00520FC0();
    fVar7 = DAT_00164fec + *(float *)(iVar3 + 4) * DAT_00164fe8;
    if (DAT_00164ff0 < fVar7) {
      fVar7 = DAT_00164ff0;
    }
    *(float *)(param_1 + 0x8e4) = fVar7;
    func_00164FFC(param_1,*(float *)(param_1 + 0x900));
    if (*(uint *)(param_1 + 0x904) < *(uint *)(param_1 + 0x908)) {
      *(uint *)(param_1 + 0x904) = *(uint *)(param_1 + 0x904) + 1;
      return 0;
    }
    *(float *)(param_1 + 0x3dc) = fVar8;
    *(float *)(param_1 + 0x3e0) = fVar8;
    *(float *)(param_1 + 0x3e4) = fVar8;
    iVar3 = func_0058A8F0(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    puVar4 = (undefined4 *)func_00520FC0();
    uVar5 = *puVar4;
    uVar6 = puVar4[1];
    *(undefined4 *)(param_1 + 0x8e8) = puVar4[2];
    *(undefined4 *)(param_1 + 0x8e0) = uVar5;
    *(undefined4 *)(param_1 + 0x8e4) = uVar6;
    func_004FC07C(param_1,8,0xffffffff,0);
  }
  else {
    fVar7 = DAT_00164fc0;
    fVar8 = DAT_00164fbc;
    uVar10 = func_0058AB74(param_1);
    if ((int)uVar10 == 8) {
      fVar9 = *(float *)(param_1 + 0x3e0) - DAT_00164ff4;
      if (fVar9 < DAT_00164ff8) {
        fVar9 = DAT_00164ff8;
      }
      *(float *)(param_1 + 0x3e0) = fVar9;
      *(float *)(param_1 + 0x3d0) =
           *(float *)(param_1 + 0x3d0) +
           (*(float *)(param_1 + 0x8e0) - *(float *)(param_1 + 0x3d0)) * fVar8;
      *(float *)(param_1 + 0x3d8) =
           *(float *)(param_1 + 0x3d8) +
           (*(float *)(param_1 + 0x8e8) - *(float *)(param_1 + 0x3d8)) * fVar8;
      bVar1 = func_00521018(param_1);
      if (((bVar1) || (bVar1 = func_00521078(param_1), bVar1)) ||
         (iVar3 = func_00520FC0(),
         *(float *)(param_1 + 0x3d4) < *(float *)(iVar3 + 4) + DAT_00164ffc)) {
        fVar8 = *(float *)(param_1 + 0x3e0);
        if (fVar8 <= fVar7) {
          fVar8 = -fVar8;
        }
        *(float *)(param_1 + 0x8fc) = fVar8;
        func_004FC07C(param_1,9,0xffffffff,0);
        fVar8 = func_0058AC38(param_1);
        fVar8 = *(float *)(param_1 + 0x8fc) / fVar8 + *(float *)(param_1 + 0x3e0);
        if (fVar7 < fVar8) {
          fVar8 = fVar7;
        }
        *(float *)(param_1 + 0x3e0) = fVar8;
      }
    }
    else {
      iVar3 = func_0058A8F0(param_1);
      if (iVar3 == 0) {
        fVar8 = func_0058AC38(param_1);
        fVar8 = *(float *)(param_1 + 0x8fc) / fVar8 + *(float *)(param_1 + 0x3e0);
        if (fVar7 < fVar8) {
          fVar8 = fVar7;
        }
        *(float *)(param_1 + 0x3e0) = fVar8;
      }
      else {
        func_00658748((undefined4 *)(param_1 + 0x8bc),4);
      }
    }
  }
  local_1c = s_SE_Tendol_FLY_ATTACK_00164fc4;
  local_20 = DAT_00164fdc;
  return func_001507D8(param_1,&local_20,0);
}


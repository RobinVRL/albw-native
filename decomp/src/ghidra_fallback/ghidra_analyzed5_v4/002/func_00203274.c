#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001880A4(undefined4 *param_1,undefined4 param_2,uint param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FC570();
extern int func_004FD038(int param_1,undefined1 param_2);
extern int func_00520FC0(void);
extern int func_0065D264(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_0020357c;
extern float DAT_00203580;
extern int *DAT_00203584;
extern float DAT_00203588;
extern int DAT_0020358c;
extern float DAT_00203590;
extern float DAT_00203594;
extern float DAT_00203598;
extern float DAT_0020359c;
extern undefined DAT_002035a0;
extern float DAT_002035c0;
extern int DAT_002035c4;
extern char s_SE_BombZako_SMOKE_002035ac[];
extern char s__Appear_002035a3[];
extern char s_cf_002035a3[];
extern undefined4 _DAT_002035a0;

// USA 00203274 <- EU 00203274 (Ghidra, non-matching)
// GLOBAL DAT_0020357c float
// GLOBAL DAT_00203580 float
// GLOBAL DAT_00203584 int *
// GLOBAL DAT_00203588 float
// GLOBAL DAT_0020358c int
// GLOBAL DAT_00203590 float
// GLOBAL DAT_00203594 float
// GLOBAL DAT_00203598 float
// GLOBAL DAT_0020359c float
// GLOBAL DAT_002035a0 undefined
// GLOBAL DAT_002035c0 float
// GLOBAL DAT_002035c4 int
// GLOBAL s_cf_002035a3 string
// GLOBAL s_SE_BombZako_SMOKE_002035ac string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00203274(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  #define aiStack_38 ((int *)(albw_frame + 0x8))
  iVar4 = DAT_0020358c;
  fVar6 = DAT_00203588;
  fVar8 = DAT_00203580;
  fVar7 = DAT_0020357c;
  if (*(char *)((int)param_1 + 0x925) == '\0') {
    if (DAT_0020357c < ALBW_AS_F32(param_1[0x23d])) {
      fVar6 = ALBW_AS_F32(param_1[0x23e]) - DAT_00203598;
      if (ALBW_AS_F32(param_1[0x23e]) - DAT_00203598 < DAT_0020359c) {
        fVar6 = DAT_0020359c;
      }
      param_1[0x23e] = (int)ALBW_AS_U32(fVar6);
      param_1[0x23d] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x23d]) + fVar6));
    }
    if (_DAT_002035a0 < param_1[0x23d]) {
      return 0;
    }
    param_1[0x23d] = (int)ALBW_AS_U32(fVar7);
  }
  else {
    uVar1 = *DAT_00203584 + param_1[0x241];
    param_1[0x241] = uVar1;
    pfVar2 = (float *)(iVar4 + (uVar1 >> 0x18) * 0x10);
    fVar5 = (float)VectorUnsignedToFloat(uVar1 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    param_1[0x23d] = (int)ALBW_AS_U32((fVar8 + (*pfVar2 + pfVar2[1] * fVar5 * fVar6) * DAT_00203590));
  }
  fVar6 = DAT_00203594;
  uVar9 = CONCAT44(DAT_00203594,fVar8);
  pfVar2 = (float *)(param_1 + 0x139);
  if (param_1[0x243] == 1) {
    param_1[0x167] = param_1[0x167] & 0xfffffffc;
    *pfVar2 = fVar6;
    param_1[0x13a] = (int)ALBW_AS_U32(fVar6);
    param_1[0x13b] = (int)ALBW_AS_U32(fVar6);
    param_1[0x167] = param_1[0x167] & 0xffffffcb;
    func_004FD038((int)(param_1 + 0x16a),0);
    param_1[0xda] = param_1[2];
    param_1[0xdb] = param_1[3];
    param_1[0xdc] = param_1[4];
    param_1[0xf4] = param_1[2];
    param_1[0xf5] = param_1[3];
    param_1[0xf6] = param_1[4];
  }
  if (param_1[0x243] == 0) {
    pfVar3 = (float *)func_00520FC0();
    func_00115C70(&local_40,pfVar3,(float *)(param_1 + 0xf4));
    iVar4 = func_0068C690(&local_40);
    func_001880A4(param_1 + 0xf4,iVar4,param_1[0xb3]);
    param_1[0xf8] = (int)ALBW_AS_U32(fVar7);
  }
  iVar4 = DAT_002035c4;
  if ((uint)param_1[0x243] < (uint)param_1[0x244]) {
    param_1[0x243] = param_1[0x243] + 1;
  }
  else {
    if ((short)param_1[0x23f] == 0) {
      param_1[0x167] = param_1[0x167] | 0x1000;
      return 0;
    }
    if ((uint)param_1[0x246] < (uint)param_1[0x247]) {
      iVar4 = param_1[0x246] + 1;
      param_1[0x246] = iVar4;
      if (iVar4 == 0xd2) {
        if (param_1[0xd1] != 0) {
          func_004A1B9C(aiStack_38,param_1[0xd1],(uint *)(s__Appear_002035a3 + 1));
        }
        local_3c = s_SE_BombZako_SMOKE_002035ac;
        local_40 = DAT_002035c0;
        func_00150A84(param_1,(int *)&local_40,0);
      }
    }
    else {
      param_1[0x167] = param_1[0x167] | 3;
      fVar8 = ALBW_AS_F32(uVar9);
      fVar7 = ALBW_AS_F32(param_1[0x139]) +
              (fVar8 - ALBW_AS_F32(param_1[0x139])) * ALBW_AS_F32(((ulonglong)uVar9 >> 0x20));
      *pfVar2 = fVar7;
      param_1[0x13a] = (int)ALBW_AS_U32(fVar7);
      param_1[0x13b] = (int)ALBW_AS_U32(fVar7);
      if (iVar4 < param_1[0x139]) {
        if (*(char *)((int)param_1 + 0x925) == '\0') {
          *pfVar2 = fVar8;
          param_1[0x13a] = (int)ALBW_AS_U32(fVar8);
          param_1[0x13b] = (int)ALBW_AS_U32(fVar8);
          func_004FABDC((int)param_1,0,0xffffffff,0);
          *(undefined1 *)((int)param_1 + 0x925) = 1;
        }
        param_1[0x167] = param_1[0x167] | 0x34;
        func_004FD038((int)(param_1 + 0x16a),1);
        func_004FC570(param_1);
        param_1[0x167] = param_1[0x167] | 0x80;
        func_004FABDC((int)param_1,0,0xffffffff,0);
        return func_0065D264(param_1 + 0x22f,0);
      }
    }
  }
  return 0;
}


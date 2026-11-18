#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FA44(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5, undefined4 param_6,int param_7);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_0037CDA8(int *param_1);
extern int func_004E6E60(int param_1);
extern float DAT_004e77ac;
extern float *DAT_004e77b0;

// USA 004E763C <- EU 004E7614 (Ghidra, non-matching)
// GLOBAL DAT_004e77ac float
// GLOBAL DAT_004e77b0 float *

undefined4 func_004E763C(int *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar5;
  float *pfVar6;
  int *piVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define fStack_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define fStack_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define iStack_1c (*(int *)(albw_frame + 0x14))
  #define iStack_18 (*(int *)(albw_frame + 0x18))
  piVar7 = (int *)((char)param_1[0x13a] * 8 + 4);
  uVar2 = *(uint *)(param_1[0x140] + (int)piVar7);
  pcVar4 = *(code **)(param_1[0x140] + (char)param_1[0x13a] * 8);
  if ((uVar2 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(int *)(param_1[0x13e] + ((int)uVar2 >> 1)));
  }
  (*pcVar4)((int)(param_1[0x13e]) + ((int)uVar2 >> 1));
  iVar3 = param_1[0x139] + 1;
  param_1[0x139] = iVar3;
  if (param_1[0x13d] != 0) {
    fVar9 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x13d],1,fVar9);
  }
  pfVar6 = (float *)(param_1 + 0xf7);
  func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),pfVar6);
  uVar5 = extraout_r1;
  if (*(short *)((int)param_1 + 0x2e) == 3) goto LAB_004e7780;
  fVar9 = DAT_004e77ac;
  if ((char)param_1[0x13a] != '\x01') {
    fStack_2c = *DAT_004e77b0;
    local_28 = DAT_004e77b0[1];
    fStack_24 = DAT_004e77b0[2];
    piVar7 = (int *)0x0;
    iVar3 = func_0014FA44((int)param_1,(int)&fStack_2c,param_1[0x137],0,0x36,0,0);
    if (iVar3 != 0) {
      local_28 = fVar9;
      func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),&fStack_2c);
    }
  }
  local_20 = ALBW_AS_F32(param_1[0xf4]);
  iStack_1c = param_1[0xf5];
  iStack_18 = param_1[0xf6];
  *(char *)((int)param_1 + 0x55d) = (char)param_1[0x157];
  func_0037CDA8(param_1);
  pfVar6 = &local_20;
  func_00115C70((float *)(param_1 + 0x14d),(float *)(param_1 + 0xf4),pfVar6);
  if ((char)param_1[0x10a] == '\0') {
LAB_004e7778:
    uVar1 = 0;
  }
  else {
    bVar8 = false;
    if (ALBW_AS_F32(param_1[0x14d]) == fVar9) {
      bVar8 = ALBW_AS_F32(param_1[0x14f]) == fVar9;
    }
    if (bVar8) goto LAB_004e7778;
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x157) = uVar1;
  uVar5 = extraout_r1_00;
LAB_004e7780:
  func_00169A80((int *)param_1[0x136],uVar5,pfVar6,piVar7);
  func_00168E9C((int *)param_1[0x136],param_1[0x135],(int *)0x0);
  return func_004E6E60((int)param_1);
}


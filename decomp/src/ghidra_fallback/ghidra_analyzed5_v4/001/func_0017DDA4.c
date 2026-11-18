#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001DD484(int param_1,int param_2,undefined4 param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_00520FC0(void);
extern float DAT_0017e11c;
extern float DAT_0017e120;
extern int *DAT_0017e140;
extern int *DAT_0017e144;
extern int *DAT_0017e160;
extern undefined DAT_0017e164;
extern float DAT_0017e180;
extern char s_ASE_FairyBig_DISAPPEAR_0017e166[];
extern char s_Remedy_0017e124[];
extern char s_SE_FairyBig_CURE_0017e12c[];
extern char s_SE_PL_RECOVER_FAIRY_BIG_0017e148[];
extern undefined4 _DAT_0017e164;

// USA 0017DDA4 <- EU 0017DDA4 (Ghidra, non-matching)
// GLOBAL DAT_0017e11c float
// GLOBAL DAT_0017e120 float
// GLOBAL DAT_0017e140 int *
// GLOBAL DAT_0017e144 int *
// GLOBAL DAT_0017e160 int *
// GLOBAL DAT_0017e164 undefined
// GLOBAL DAT_0017e180 float
// GLOBAL s_ASE_FairyBig_DISAPPEAR_0017e166 string
// GLOBAL s_Remedy_0017e124 string
// GLOBAL s_SE_FairyBig_CURE_0017e12c string
// GLOBAL s_SE_PL_RECOVER_FAIRY_BIG_0017e148 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0017DDA4(int *param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  uint in_fpscr;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(float *)(albw_frame + 0x0))
  #define local_5c (*(char * *)(albw_frame + 0x4))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x8))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define local_4c (*(char * *)(albw_frame + 0x14))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x18))
  #define local_44 (*(float *)(albw_frame + 0x1c))
  #define fStack_40 (*(float *)(albw_frame + 0x20))
  #define local_3c (*(float *)(albw_frame + 0x24))
  #define local_38 (*(float *)(albw_frame + 0x28))
  #define local_34 (*(float *)(albw_frame + 0x2c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x34))
  fVar11 = DAT_0017e120;
  fVar7 = DAT_0017e11c;
  if (param_2 == 0) {
    sVar1 = *(short *)((int)param_1 + 0x9ae) + 1;
    *(short *)((int)param_1 + 0x9ae) = sVar1;
    if (sVar1 == 1) {
      pfVar3 = (float *)(param_1 + 0x264);
      if (param_1[0xd1] == 0) {
        *pfVar3 = 0.0;
        param_1[0x265] = 0;
      }
      else {
        fVar9 = *pfVar3;
        if ((fVar9 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar9) + 0x1c) == param_1[0x265])) {
          func_00110848((int)ALBW_AS_U32(fVar9));
        }
        func_004A1B9C((int *)&local_60,param_1[0xd1],(uint *)s_Remedy_0017e124);
        *pfVar3 = local_60;
        param_1[0x265] = (int)local_5c;
      }
      (**(code **)(*param_1 + 0xac))(param_1,3,0xffffffff);
      local_4c = s_SE_FairyBig_CURE_0017e12c;
      local_50 = fVar11;
      func_00150A84(param_1,(int *)&local_50,0);
      *(ushort *)(*DAT_0017e140 + 0x33e) = *(ushort *)(*DAT_0017e140 + 0x33e) & 0xfefc;
    }
    if ((*(short *)((int)param_1 + 0x9ae) == 0x3c) && (*DAT_0017e144 != 0)) {
      func_001DD484(*DAT_0017e144,0x50,1);
      local_5c = s_SE_PL_RECOVER_FAIRY_BIG_0017e148;
      local_60 = fVar11;
      func_004EA104(*DAT_0017e160,(int *)&local_60,0);
    }
    if (param_1[0x264] != 0) {
      pfVar6 = (float *)(param_1 + 0x266);
      pfVar3 = (float *)func_00520FC0();
      iVar4 = 0x3c - (uint)*(ushort *)((int)param_1 + 0x9ae);
      if (iVar4 < 2) {
        iVar4 = 1;
      }
      local_44 = *pfVar3;
      fStack_40 = pfVar3[1];
      local_3c = pfVar3[2];
      fVar11 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
      fVar7 = fVar7 / fVar11;
      func_00115C70(&local_34,&local_44,pfVar6);
      local_60 = local_34;
      local_5c = (char *)uStack_30;
      uStack_58 = uStack_2c;
      func_00115D70(&local_38,&local_60,fVar7);
      local_50 = local_38;
      local_4c = (char *)ALBW_PTR_BITS(local_34);
      uStack_48 = uStack_30;
      func_00115C54(pfVar6,pfVar6,&local_50);
      iVar4 = param_1[0x264];
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x1c) == param_1[0x265])) {
        func_004A2F38(iVar4,pfVar6);
      }
    }
    iVar4 = param_1[0x264];
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x1c) == param_1[0x265])) {
      if ((*(uint *)(iVar4 + 0x3c) & 4) != 0 || (*(uint *)(iVar4 + 0x3c) & 0x40) != 0) {
        return 0;
      }
      iVar5 = *(int *)(iVar4 + 0x20);
      if (((iVar5 != 0) && (*(int *)(iVar4 + 0x24) == *(int *)(iVar5 + 0xc))) &&
         (0 < *(int *)(iVar5 + 4))) {
        return 0;
      }
    }
    if (*(ushort *)((int)param_1 + 0x9ae) < 0x3c) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x26c) = 0;
  }
  else if (param_2 == 1) {
    if ((char)param_1[0x26c] == '\0') {
      *(undefined1 *)(param_1 + 0x26c) = 1;
      (**(code **)(*param_1 + 0xac))(param_1,4,0xffffffff);
      fVar9 = ALBW_AS_F32(_DAT_0017e164);
      *(float *)(*(int *)(param_1[0x1ed] + 0x14) + 0x10) = fVar7;
      *(undefined2 *)((int)param_1 + 0x9ae) = 0;
      *(undefined2 *)(param_1 + 0x26b) = 0;
      uVar8 = VectorFloatToUnsigned(*(float *)(*(int *)(param_1[0x1eb] + 0x14) + 0x14) - fVar9,3);
      *(short *)(param_1 + 0x26a) = (short)uVar8;
      *(short *)((int)param_1 + 0x9aa) = (short)uVar8 + 0x50;
      local_5c = s_ASE_FairyBig_DISAPPEAR_0017e166 + 2;
      local_60 = fVar11;
      func_00150A84(param_1,(int *)&local_60,0);
    }
    uVar2 = *(short *)((int)param_1 + 0x9ae) + 1;
    *(ushort *)((int)param_1 + 0x9ae) = uVar2;
    fVar11 = DAT_0017e180;
    if (9 < uVar2) {
      uVar2 = (short)param_1[0x26b] + 1;
      iVar4 = (uint)*(ushort *)(param_1 + 0x26a) - (uint)uVar2;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      if (iVar4 < 2) {
        iVar4 = 1;
      }
      *(ushort *)(param_1 + 0x26b) = uVar2;
      fVar9 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = ALBW_AS_F32(param_1[0x269]);
      fVar10 = fVar10 + (fVar11 - fVar10) * (fVar7 / fVar9);
      param_1[0x269] = (int)ALBW_AS_U32(fVar10);
      *(float *)(param_1[0x1e8] + 0x158) = fVar10;
      if (*(ushort *)((int)param_1 + 0x9aa) <= *(ushort *)(param_1 + 0x26b)) {
        return 1;
      }
    }
    return 0;
  }
  return 1;
}


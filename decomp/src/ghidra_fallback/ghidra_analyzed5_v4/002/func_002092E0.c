#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_0036BE78();
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_004ED46C(int param_1,int param_2);
extern int func_004F86FC(int param_1,undefined1 param_2,float fparam_0);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_0058A8F0(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float fRam00209614;
extern int iRam00209610;
extern float DAT_002095e4;
extern int DAT_002095e8;
extern float DAT_002095ec;
extern undefined4 DAT_002095f0;
extern undefined4 DAT_002095f4;
extern float DAT_002095f8;
extern float DAT_002095fc;
extern float DAT_00209600;
extern undefined4 DAT_00209604;
extern float DAT_00209608;
extern undefined4 DAT_0020960c;
extern float DAT_00209890;
extern int *DAT_00209894;
extern undefined4 DAT_00209898;
extern float *DAT_0020989c;
extern float DAT_002098a0;
extern float DAT_002098a4;
extern float DAT_002098a8;
extern float DAT_002098ac;
extern float *DAT_002098b0;
extern float DAT_002098b4;
extern float DAT_002098b8;
extern float DAT_002098bc;
extern int DAT_002098c0;
extern int DAT_002098c4;
extern undefined4 DAT_002098c8;
extern float DAT_002098cc;

// USA 002092E0 <- EU 002092E0 (Ghidra, non-matching)
// GLOBAL DAT_002095e4 float
// GLOBAL DAT_002095e8 int
// GLOBAL DAT_002095ec float
// GLOBAL DAT_002095f0 undefined4
// GLOBAL DAT_002095f4 undefined4
// GLOBAL DAT_002095f8 float
// GLOBAL DAT_002095fc float
// GLOBAL DAT_00209600 float
// GLOBAL DAT_00209604 undefined4
// GLOBAL DAT_00209608 float
// GLOBAL DAT_0020960c undefined4
// GLOBAL DAT_00209890 float
// GLOBAL DAT_00209894 int *
// GLOBAL DAT_00209898 undefined4
// GLOBAL DAT_0020989c float *
// GLOBAL DAT_002098a0 float
// GLOBAL DAT_002098a4 float
// GLOBAL DAT_002098a8 float
// GLOBAL DAT_002098ac float
// GLOBAL DAT_002098b0 float *
// GLOBAL DAT_002098b4 float
// GLOBAL DAT_002098b8 float
// GLOBAL DAT_002098bc float
// GLOBAL DAT_002098c0 int
// GLOBAL DAT_002098c4 int
// GLOBAL DAT_002098c8 undefined4
// GLOBAL DAT_002098cc float
// GLOBAL UNK_00209610 int
// GLOBAL UNK_00209614 float

undefined4 func_002092E0(int param_1)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  longlong lVar14;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(float *)(albw_frame + 0x0))
  #define local_5c (*(float *)(albw_frame + 0x4))
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define local_4c (*(float *)(albw_frame + 0x14))
  #define local_48 (*(float *)(albw_frame + 0x18))
  #define local_44 (*(float *)(albw_frame + 0x1c))
  #define fStack_40 (*(float *)(albw_frame + 0x20))
  #define fStack_3c (*(float *)(albw_frame + 0x24))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x28))
  func_004F86FC(param_1,2,DAT_002095e4);
  fVar12 = DAT_002095fc;
  fVar9 = DAT_002095f8;
  iVar4 = DAT_002095e8;
  pfVar6 = (float *)(param_1 + 0xcac);
  switch(*(undefined1 *)(param_1 + 0xa6c)) {
  case 0:
    *(undefined1 *)(param_1 + 0xa6c) = 1;
    *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0x3d4) + DAT_00209600;
    uVar11 = DAT_00209604;
    *(undefined4 *)(param_1 + 0xc64) = 0x28;
    *(undefined4 *)(param_1 + 0xc68) = uVar11;
    *(undefined4 *)(param_1 + 0xc60) = 0;
    func_004FABDC(param_1,8,0,0);
    break;
  case 1:
    pfVar3 = (float *)func_00520FC0();
    func_00115C70(&local_4c,pfVar3,(float *)(param_1 + 0x3d0));
    local_60 = local_4c;
    local_5c = local_48;
    local_58 = local_44;
    iVar2 = func_0068C690(&local_60);
    func_0051D2CC((int *)(param_1 + 1000),iVar2,fVar9);
    if (*(uint *)(param_1 + 0xc60) < *(uint *)(param_1 + 0xc64)) {
      *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0x3d4) + DAT_00209608;
      *(uint *)(param_1 + 0xc60) = *(uint *)(param_1 + 0xc60) + 1;
    }
    else {
      *(float *)(param_1 + 0x3e0) = DAT_00209608;
      *(undefined1 *)(param_1 + 0xa6c) = 2;
    }
    goto LAB_00209414;
  case 2:
    fVar8 = func_004F898C();
    func_004F8964((float *)(param_1 + 0x3e0),0,fVar8);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar12 <= *(float *)(param_1 + 0x3e0)) << 0x1d;
    if (!SUB41(in_fpscr >> 0x1d,0)) {
      *(float *)(param_1 + 0x3e0) = fVar12;
      uVar11 = DAT_0020960c;
      *(undefined4 *)(param_1 + 0xcb0) = 0x8c;
      *(undefined4 *)(param_1 + 0xcb4) = uVar11;
      *pfVar6 = 0.0;
      *(undefined1 *)(param_1 + 0xa6c) = 3;
    }
    goto LAB_00209414;
  case 3:
    uVar11 = DAT_002095f0;
    uVar13 = DAT_002095f4;
    func_0051D2CC((int *)(param_1 + 1000),0,DAT_002095f8);
    func_00588C14(param_1,0,1);
    if (*(uint *)(param_1 + 0xcb0) <= *(uint *)(param_1 + 0xcac)) {
      *(undefined1 *)(param_1 + 0xa6c) = 4;
      *(undefined4 *)(param_1 + 0x4e4) = uVar11;
      *(undefined4 *)(param_1 + 0x4e8) = uVar11;
      *(undefined4 *)(param_1 + 0x4ec) = uVar11;
      func_004FABDC(param_1,9,0,0);
      *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_1 + 0x3d0);
      *(undefined4 *)(param_1 + 0x36c) = uVar13;
      *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_1 + 0x3d8);
      *(undefined4 *)(param_1 + 0x3d4) = uVar13;
      *(undefined4 *)(param_1 + 1000) = 0;
      *(float *)(param_1 + 0x574) = fVar12;
      pfVar3 = (float *)func_00520FC0();
      fVar8 = *pfVar3 - *(float *)(param_1 + 8);
      fVar10 = pfVar3[2] - *(float *)(param_1 + 0x10);
      if ((int)ALBW_AS_U32(SQRT(fVar8 * fVar8 + fVar10 * fVar10)) < iRam00209610) {
        pfVar6 = (float *)func_00520FC0();
        func_00115C70(&fStack_40,(float *)(param_1 + 8),pfVar6);
        local_4c = fStack_40;
        local_44 = ALBW_AS_F32(uStack_38);
        local_48 = fVar12;
        func_00115DC8(&local_4c);
        pfVar6 = (float *)(param_1 + 8);
        func_00115D70(&fStack_40,&local_4c,fRam00209614);
        local_60 = fStack_40;
        local_5c = fStack_3c;
        local_58 = ALBW_AS_F32(uStack_38);
        func_00115C54(&fStack_40,pfVar6,&local_60);
        *(float *)(param_1 + 0x368) = fStack_40;
        *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(param_1 + 0x3d4);
        *(undefined4 *)(param_1 + 0x370) = uStack_38;
        *(float *)(param_1 + 0x3d0) = fStack_40;
        *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x3d4);
        *(undefined4 *)(param_1 + 0x3d8) = uStack_38;
      }
    }
    if (*(uint *)(param_1 + 0xcac) < *(uint *)(param_1 + 0xcb0)) {
      *(uint *)(param_1 + 0xcac) = *(uint *)(param_1 + 0xcac) + 1;
    }
LAB_00209414:
    func_0051D2CC((int *)(param_1 + 0xd70),iVar4,fVar9);
    break;
  case 4:
    uVar11 = DAT_002095f4;
    fVar8 = DAT_002095ec;
    func_0051D2CC((int *)(param_1 + 0xd70),0,DAT_00209890);
    lVar14 = func_0058ACC8(param_1,fVar8);
    piVar1 = DAT_00209894;
    if ((int)lVar14 != 0) {
      func_004ED46C(*DAT_00209894,2);
    }
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x10;
    iVar4 = func_0058A8F0(param_1);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_1 + 0x3d0);
      *(undefined4 *)(param_1 + 0x36c) = uVar11;
      *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_1 + 0x3d8);
      *(undefined4 *)(param_1 + 0x3d4) = uVar11;
      *(undefined1 *)(param_1 + 0xba5) = 1;
      func_004F87F8(param_1,1);
      func_004FC07C(param_1,10,6,0);
      func_004ED46C(*piVar1,2);
      uVar11 = DAT_00209898;
      *(undefined4 *)(param_1 + 0xd98) = 100;
      *(undefined4 *)(param_1 + 0xd9c) = uVar11;
      *(undefined4 *)(param_1 + 0xd94) = 0;
      *(undefined1 *)(param_1 + 0xa6c) = 5;
    }
    break;
  case 5:
    if (*(uint *)(param_1 + 0xd98) <= *(uint *)(param_1 + 0xd94)) {
      func_0065D630((undefined4 *)(param_1 + 0x8bc),0xf);
    }
    if (*(uint *)(param_1 + 0xd94) < *(uint *)(param_1 + 0xd98)) {
      *(uint *)(param_1 + 0xd94) = *(uint *)(param_1 + 0xd94) + 1;
    }
  }
  bVar7 = 3 < *(byte *)(param_1 + 0xa6c);
  if (bVar7) {
    pfVar6 = (float *)0x1;
  }
  local_60 = *DAT_0020989c;
  local_5c = DAT_0020989c[1];
  local_58 = DAT_0020989c[2];
  if (!bVar7) {
    pfVar6 = (float *)0x0;
  }
  if (pfVar6 == (float *)0x0) {
    local_60 = *DAT_002098b0;
    local_5c = DAT_002098b0[1];
    local_58 = DAT_002098b0[2];
  }
  else {
    func_004D80A4(&local_60,*(uint *)(param_1 + 1000),DAT_002098a0);
    local_5c = DAT_002098a4;
  }
  local_48 = *(float *)(param_1 + 0x3d0) + local_60;
  fStack_40 = *(float *)(param_1 + 0x3d8) + local_58;
  local_44 = *(float *)(param_1 + 0xd34) + local_5c;
  if (pfVar6 == (float *)0x0) {
    func_004D838C((float *)(param_1 + 0xb84),&local_48,DAT_002098b8,fVar9,DAT_002098b4);
  }
  else {
    func_004D838C((float *)(param_1 + 0xb84),&local_48,DAT_002098ac,fVar9,DAT_002098a8);
  }
  uVar5 = *(uint *)(param_1 + 0xd1c);
  pfVar6 = (float *)(DAT_002098c0 + (uVar5 >> 0x18) * 0x10);
  fVar9 = (float)VectorUnsignedToFloat(uVar5 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0xd24) =
       *(float *)(param_1 + 0xb84) +
       (*pfVar6 + pfVar6[1] * fVar9 * DAT_002098bc) * *(float *)(param_1 + 0xd20);
  *(undefined4 *)(param_1 + 0xd28) = *(undefined4 *)(param_1 + 0xb88);
  *(undefined4 *)(param_1 + 0xd2c) = *(undefined4 *)(param_1 + 0xb8c);
  *(uint *)(param_1 + 0xd1c) = uVar5 + DAT_002098c4;
  if (*(byte *)(param_1 + 0xa6c) < 3) {
    *(undefined4 *)(param_1 + 0xd20) = DAT_002098c8;
  }
  else {
    fVar9 = *(float *)(param_1 + 0xd20) - DAT_002098cc;
    if (fVar9 < fVar12) {
      fVar9 = fVar12;
    }
    *(float *)(param_1 + 0xd20) = fVar9;
  }
  return func_0036BE78(param_1 + 0xa7c);
}


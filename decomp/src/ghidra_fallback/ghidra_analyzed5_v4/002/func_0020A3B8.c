#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0020E30C(int *param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_00520FC0(void);
extern int func_00520FD4(void);
extern int func_00530D08(int param_1,float *param_2);
extern int func_00530E38(int param_1);
extern undefined8 func_0058A474(undefined4 param_1,uint param_2);
extern int func_0058E2B8(int *param_1);
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern int DAT_0020a704;
extern float DAT_0020a708;
extern int DAT_0020a70c;
extern float DAT_0020a710;
extern int DAT_0020a714;
extern undefined4 *DAT_0020a718;
extern uint DAT_0020a71c;
extern undefined4 DAT_0020a720;
extern uint DAT_0020a9d0;
extern int DAT_0020a9d4;
extern float DAT_0020a9d8;
extern undefined4 DAT_0020a9dc;
extern uint DAT_0020a9e0;
extern float DAT_0020a9e4;
extern float DAT_0020a9e8;
extern float DAT_0020a9ec;
extern float DAT_0020a9f0;
extern int DAT_0020a9f4;
extern int DAT_0020a9f8;
extern int DAT_0020a9fc;
extern uint DAT_0020aa00;
extern uint DAT_0020aa04;
extern int DAT_0020aa08;

// USA 0020A3B8 <- EU 0020A3B8 (Ghidra, non-matching)
// GLOBAL DAT_0020a704 int
// GLOBAL DAT_0020a708 float
// GLOBAL DAT_0020a70c int
// GLOBAL DAT_0020a710 float
// GLOBAL DAT_0020a714 int
// GLOBAL DAT_0020a718 undefined4 *
// GLOBAL DAT_0020a71c uint
// GLOBAL DAT_0020a720 undefined4
// GLOBAL DAT_0020a9d0 uint
// GLOBAL DAT_0020a9d4 int
// GLOBAL DAT_0020a9d8 float
// GLOBAL DAT_0020a9dc undefined4
// GLOBAL DAT_0020a9e0 uint
// GLOBAL DAT_0020a9e4 float
// GLOBAL DAT_0020a9e8 float
// GLOBAL DAT_0020a9ec float
// GLOBAL DAT_0020a9f0 float
// GLOBAL DAT_0020a9f4 int
// GLOBAL DAT_0020a9f8 int
// GLOBAL DAT_0020a9fc int
// GLOBAL DAT_0020aa00 uint
// GLOBAL DAT_0020aa04 uint
// GLOBAL DAT_0020aa08 int

undefined4 func_0020A3B8(int *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  ushort uVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  uint uVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 (*(float *)(albw_frame + 0x8))
  #define local_84 (*(undefined4 *)(albw_frame + 0xc))
  #define local_80 (*(float *)(albw_frame + 0x10))
  #define local_7c (*(undefined4 *)(albw_frame + 0x14))
  #define local_78 (*(float *)(albw_frame + 0x18))
  #define local_74 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_70 (*(float *)(albw_frame + 0x20))
  #define local_6c (*(int * *)(albw_frame + 0x24))
  #define local_68 (*(float *)(albw_frame + 0x28))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x2c))
  #define fStack_60 (*(float *)(albw_frame + 0x30))
  #define local_5c (*(float *)(albw_frame + 0x34))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x38))
  #define fStack_54 (*(float *)(albw_frame + 0x3c))
  #define local_50 (*(int *)(albw_frame + 0x40))
  #define local_48 ((int *)(albw_frame + 0x48))
  pfVar4 = (float *)func_00520FC0();
  iVar8 = DAT_0020a704;
  if ((uint)param_1[0x301] < (uint)param_1[0x302]) {
    param_1[0x301] = param_1[0x301] + 1;
  }
  param_1[0x326] = iVar8;
  func_00115C70(&local_78,pfVar4,(float *)(param_1 + 0xf4));
  local_5c = local_78;
  uStack_58 = local_74;
  fStack_54 = local_70;
  local_50 = func_0068C690(&local_5c);
  pfVar9 = (float *)(param_1 + 0x26d);
  func_00115C70(&local_78,pfVar4,pfVar9);
  local_68 = local_78;
  uStack_64 = local_74;
  fStack_60 = local_70;
  local_48[0] = func_0068C690(&local_68);
  local_48[0] = param_1[0xfa] - local_48[0];
  uVar5 = func_0058E2B8(local_48);
  if ((uint)param_1[0x302] <= (uint)param_1[0x301]) {
LAB_0020a914:
    return func_0020E30C(param_1);
  }
  iVar6 = func_00530E38((int)param_1);
  fVar12 = DAT_0020a710;
  local_6c = param_1 + 0x22f;
  if (iVar6 != 0) {
    fVar12 = SQRT((ALBW_AS_F32(param_1[0x240]) - ALBW_AS_F32(param_1[0x243])) *
                  (ALBW_AS_F32(param_1[0x240]) - ALBW_AS_F32(param_1[0x243])) +
                  (ALBW_AS_F32(param_1[0x242]) - ALBW_AS_F32(param_1[0x245])) *
                  (ALBW_AS_F32(param_1[0x242]) - ALBW_AS_F32(param_1[0x245]))) * DAT_0020a708;
    func_00520FC0();
    pfVar4 = (float *)func_00520FC0();
    if (SQRT((ALBW_AS_F32(param_1[0xf4]) - *pfVar4) * (ALBW_AS_F32(param_1[0xf4]) - *pfVar4) +
             (ALBW_AS_F32(param_1[0xf6]) - pfVar4[2]) * (ALBW_AS_F32(param_1[0xf6]) - pfVar4[2])) < fVar12) {
      *(undefined1 *)((int)param_1 + 0xd1a) = 0;
      return func_0065D630(local_6c,0x1b);
    }
    func_004FC07C((int)param_1,10,6,0);
    param_1[0xf9] = iVar8;
    param_1[0xf7] = iVar8;
    return 0;
  }
  fVar13 = SQRT((*pfVar9 - *pfVar4) * (*pfVar9 - *pfVar4) +
                (ALBW_AS_F32(param_1[0x26f]) - pfVar4[2]) * (ALBW_AS_F32(param_1[0x26f]) - pfVar4[2]));
  uVar15 = CONCAT44(iVar8,fVar13);
  if (DAT_0020a70c < (int)ALBW_AS_U32(fVar13)) {
LAB_0020a6cc:
    func_0065D630(local_6c,0x15);
    local_7c = DAT_0020a720;
    param_1[0x2f2] = 0;
    local_80 = fVar12;
    return func_00150A84(param_1,(int *)&local_80,0);
  }
  if ((*(char *)((int)param_1 + 0xd19) != '\0') ||
     ((pfVar7 = (float *)func_00520FC0(),
      (int)ALBW_AS_U32(SQRT((*pfVar9 - *pfVar7) * (*pfVar9 - *pfVar7) +
                (ALBW_AS_F32(param_1[0x26f]) - pfVar7[2]) * (ALBW_AS_F32(param_1[0x26f]) - pfVar7[2]))) <
      DAT_0020a714 &&
      (uVar3 = (short)param_1[0x306] + 1, *(ushort *)(param_1 + 0x306) = uVar3, 0x31 < uVar3)))) {
    return func_0065D630(local_6c,0x24);
  }
  puVar1 = DAT_0020a718;
  if (((DAT_0020a718[-9] & 1) == 0) && (iVar8 = func_00100174(DAT_0020a718 + -9), iVar8 != 0)) {
    *puVar1 = 0x40000000;
    puVar1[1] = 0xc0000000;
  }
  uVar14 = (ulonglong)DAT_0020a71c;
  uVar10 = 0;
  do {
    func_004D80A4(&local_78,puVar1[uVar10] + param_1[0xfa],ALBW_AS_F32(uVar14));
    local_74 = (undefined4)((ulonglong)uVar15 >> 0x20);
    func_00115C54(&local_78,&local_78,(float *)(param_1 + 0xf4));
    if ((int)ALBW_AS_U32(SQRT((local_78 - *pfVar4) * (local_78 - *pfVar4) +
                  (local_70 - pfVar4[2]) * (local_70 - pfVar4[2]))) < 0x40000000) {
      uVar3 = *(short *)((int)param_1 + 0xc1a) + 1;
      *(ushort *)((int)param_1 + 0xc1a) = uVar3;
      if (0x40 < uVar3) goto LAB_0020a6cc;
      break;
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < 2);
  iVar8 = func_00530D08((int)param_1,pfVar4);
  if ((iVar8 != 0) &&
     (uVar3 = (short)param_1[0x307] + 1, *(ushort *)(param_1 + 0x307) = uVar3, 0x18 < uVar3)) {
    return func_0065D630(local_6c,0x12);
  }
  iVar8 = DAT_0020a9d4;
  if (DAT_0020a9d0 < uVar5) {
    uVar3 = *(short *)((int)param_1 + 0xc16) + 1;
    *(ushort *)((int)param_1 + 0xc16) = uVar3;
    if (0x95 < uVar3) {
      func_0065D630(local_6c,0x15);
      local_84 = DAT_0020a720;
      param_1[0x2f2] = 0;
      local_88 = fVar12;
      return func_00150A84(param_1,(int *)&local_88,0);
    }
    func_004D80A4(&local_80,param_1[0xfa],DAT_0020a9d8);
    local_7c = (undefined4)((ulonglong)uVar15 >> 0x20);
    func_00115C54(&local_80,&local_80,(float *)(param_1 + 0xf4));
  }
  else if ((int)uVar15 <= DAT_0020a9fc) {
    bVar2 = func_00520FD4();
    if (bVar2) {
      *(undefined2 *)(param_1 + 0x305) = 0x34;
    }
    if (4 < *(byte *)(param_1 + 0x30e)) goto LAB_0020a914;
    if ((uVar5 < DAT_0020aa00) &&
       (uVar3 = (short)param_1[0x305] + 1, *(ushort *)(param_1 + 0x305) = uVar3, 0x33 < uVar3)) {
      if (uVar5 < DAT_0020aa04) {
        if ((*(short *)(DAT_0020aa08 + (int)param_1) < 0x51) &&
           (uVar15 = func_0058A474(param_1,100), (int)uVar15 != 0)) {
          iVar8 = 2;
        }
        else {
          iVar8 = 1;
        }
        param_1[0x311] = iVar8;
      }
      else {
        param_1[0x311] = 1;
      }
      return func_0065D630(local_6c,0x18);
    }
  }
  func_0051D27C(param_1 + 0xfa,local_50,iVar8);
  iVar8 = DAT_0020a9f4;
  fVar12 = DAT_0020a9f0;
  fVar13 = DAT_0020a9e4;
  if (DAT_0020a9e0 <= uVar5) {
    fVar13 = DAT_0020a9e8;
  }
  fVar11 = ALBW_AS_F32(param_1[0x304]);
  fVar11 = fVar11 + (fVar13 - fVar11) * DAT_0020a9ec;
  param_1[0x304] = (int)ALBW_AS_U32(fVar11);
  uVar5 = param_1[0xfa];
  pfVar4 = (float *)(iVar8 + (uVar5 >> 0x18) * 0x10);
  fVar13 = (float)VectorUnsignedToFloat(uVar5 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  param_1[0xf7] = (int)ALBW_AS_U32(((*pfVar4 + pfVar4[1] * fVar13 * fVar12) * fVar11));
  iVar8 = DAT_0020a9f8;
  fVar13 = (float)VectorUnsignedToFloat(uVar5 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  param_1[0xf9] = (int)ALBW_AS_U32(((pfVar4[2] + pfVar4[3] * fVar13 * fVar12) * fVar11));
  if ((int)ALBW_AS_U32(fVar11) < iVar8) {
    return func_0065D630(local_6c,0x21);
  }
  func_004FC07C((int)param_1,0xb,10,0);
  *(undefined1 *)(param_1 + 0x276) = 1;
  return 0;
}


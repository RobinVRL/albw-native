#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_002A363C(int param_1,uint param_2);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_004FC78C(int param_1,undefined2 param_2);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern undefined8 func_0058AB74(int param_1);
extern int func_00662128(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_002a74ec;
extern float DAT_002a74f0;
extern float DAT_002a74f4;
extern int *DAT_002a74f8;
extern float DAT_002a74fc;
extern float DAT_002a7500;
extern float DAT_002a7504;

// USA 002A725C <- EU 002A7238 (Ghidra, non-matching)
// GLOBAL DAT_002a74ec float
// GLOBAL DAT_002a74f0 float
// GLOBAL DAT_002a74f4 float
// GLOBAL DAT_002a74f8 int *
// GLOBAL DAT_002a74fc float
// GLOBAL DAT_002a7500 float
// GLOBAL DAT_002a7504 float

undefined4 func_002A725C(int param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define afStack_38 ((float *)(albw_frame + 0x8))
  fVar11 = DAT_002a74f4;
  fVar12 = DAT_002a74f0;
  fVar8 = DAT_002a74ec;
  pfVar6 = (float *)(param_1 + 0xb24);
  if (*(char *)(param_1 + 0xb91) == '\0') {
    fVar9 = *(float *)(param_1 + 0xb28);
    fVar9 = fVar9 + (*(float *)(param_1 + 0xb2c) - fVar9) * DAT_002a74ec;
    *(float *)(param_1 + 0xb28) = fVar9;
    fVar10 = *(float *)(param_1 + 0xb2c) + fVar8;
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar9 < fVar10) << 0x1f | (uint)(fVar9 == fVar10) << 0x1e;
    in_fpscr = uVar1 | (uint)(NAN(fVar9) || NAN(fVar10)) << 0x1c;
    bVar3 = (byte)(uVar1 >> 0x18);
    if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
      return 0;
    }
    *(float *)(param_1 + 0xb28) = *(float *)(param_1 + 0xb2c);
    cVar2 = *(char *)(param_1 + 0xb92);
    if (cVar2 == '\x04') {
      if (*(char *)(param_1 + 0xb97) == '\0') goto LAB_002a72e4;
    }
    else {
      bVar7 = cVar2 == '\x03';
      if (bVar7) {
        cVar2 = *(char *)(param_1 + 0xb96);
      }
      if (bVar7 && cVar2 == '\0') {
LAB_002a72e4:
        *(float *)(param_1 + 0xb2c) = fVar12;
      }
    }
    *(char *)(param_1 + 0xb91) = '\x01';
  }
  else if (*(char *)(param_1 + 0xb91) != '\x01') goto LAB_002a7404;
  pfVar4 = (float *)func_00520FC0();
  func_00115C70(afStack_38,pfVar4,(float *)(param_1 + 0x3d0));
  iVar5 = func_0068C690(afStack_38);
  func_0051D2F4((int *)(param_1 + 1000),iVar5,DAT_002a74f8[-1],*DAT_002a74f8,fVar8);
  *pfVar6 = *pfVar6 + (DAT_002a74fc - *pfVar6) * fVar11;
  func_002A363C(param_1,*(uint *)(param_1 + 0xb7c));
  fVar8 = *(float *)(param_1 + 0xa90) - *(float *)(param_1 + 0x3d0);
  fVar9 = *(float *)(param_1 + 0xa98) - *(float *)(param_1 + 0x3d8);
  if ((0x3f800000 < (int)ALBW_AS_U32((fVar8 * fVar8 + fVar9 * fVar9))) &&
     (*(uint *)(param_1 + 0xb60) < *(uint *)(param_1 + 0xb64))) {
    *(uint *)(param_1 + 0xb60) = *(uint *)(param_1 + 0xb60) + 1;
    return 0;
  }
  if ((*(byte *)(param_1 + 0xb92) < 3) && (*(char *)(param_1 + 0xb94) != '\0')) {
    return func_00662128((undefined4 *)(param_1 + 0x9e0),0xd);
  }
  uVar13 = func_0058AB74(param_1);
  if ((int)uVar13 != 0x14) {
    func_004FC07C(param_1,0x14,0xffffffff,0);
  }
  *(char *)(param_1 + 0xb91) = *(char *)(param_1 + 0xb91) + '\x01';
LAB_002a7404:
  if (*(char *)(param_1 + 0xb91) == '\x02') {
    *pfVar6 = *pfVar6 + -*pfVar6 * fVar11;
    func_002A363C(param_1,*(uint *)(param_1 + 0xb7c));
    if (*(char *)(param_1 + 0xb92) != '\x04') {
      if ((*(char *)(param_1 + 0xb92) == '\x03') && (*(char *)(param_1 + 0xb96) == '\0')) {
        fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0xb48),
                                           (byte)(in_fpscr >> 0x15) & 3);
        func_004FC78C(param_1,(short)(int)(fVar8 * DAT_002a7504 - fVar12));
        return func_00662128((undefined4 *)(param_1 + 0x9e0),0xe);
      }
      return func_00662128((undefined4 *)(param_1 + 0x9e0),1);
    }
    if (*(char *)(param_1 + 0xb97) == '\0') {
      fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0xb48),
                                         (byte)(in_fpscr >> 0x15) & 3);
      func_004FC78C(param_1,(short)(int)(fVar8 * DAT_002a7500 - fVar12));
      return func_00662128((undefined4 *)(param_1 + 0x9e0),0xf);
    }
  }
  return 0;
}


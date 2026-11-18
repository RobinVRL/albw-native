#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_001B09B4(int param_1);
extern int func_0026171C(int param_1,float *param_2,uint *param_3,float *param_4);
extern int func_0034CA24(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_004A8F40(int param_1,int *param_2,uint param_3);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_004F8DF4(int *param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_006747C0(int *param_1);
extern float DAT_001b11d0;
extern float DAT_001b11d4;
extern float DAT_001b11d8;
extern float DAT_001b11dc;
extern int DAT_001b11e0;
extern float DAT_001b11e4;
extern uint DAT_001b11e8;
extern int *DAT_001b11ec;
extern int *DAT_001b11f0;
extern int DAT_001b11f4;

// USA 001B0EEC <- EU 001B0EEC [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_001b11d0 float
// GLOBAL DAT_001b11d4 float
// GLOBAL DAT_001b11d8 float
// GLOBAL DAT_001b11dc float
// GLOBAL DAT_001b11e0 int
// GLOBAL DAT_001b11e4 float
// GLOBAL DAT_001b11e8 uint
// GLOBAL DAT_001b11ec int *
// GLOBAL DAT_001b11f0 int *
// GLOBAL DAT_001b11f4 int

uint func_001B0EEC(int *param_1)

{
  byte bVar1;
  bool bVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_r7;
  uint in_fpscr;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(float *)(albw_frame + 0x0))
  #define local_5c (*(int *)(albw_frame + 0x4))
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define local_54 (*(int *)(albw_frame + 0xc))
  #define local_50 (*(int * *)(albw_frame + 0x10))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(int *)(albw_frame + 0x18))
  #define local_44 (*(uint *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x24))
  #define local_38 (*(int *)(albw_frame + 0x28))
  #define local_34 (*(undefined1 *)(albw_frame + 0x2c))
  *(undefined1 *)((int)param_1 + 0xa31) = 0;
  if ((char)param_1[0x263] != '\0') {
    fVar7 = (float)VectorSignedToFloat(param_1[0xfa],(byte)(in_fpscr >> 0x15) & 3);
    uVar5 = in_fpscr & 0xfffffff | (uint)(fVar7 < DAT_001b11d0) << 0x1f |
            (uint)(fVar7 == DAT_001b11d0) << 0x1e;
    in_fpscr = uVar5 | (uint)(NAN(fVar7) || NAN(DAT_001b11d0)) << 0x1c;
    bVar1 = (byte)(uVar5 >> 0x18);
    if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
      fVar7 = -fVar7;
    }
    fVar7 = ((DAT_001b11d0 - *(float *)(param_1[0x103] + 0x134)) * (fVar7 - DAT_001b11d0)) /
            DAT_001b11d4 + *(float *)(param_1[0x103] + 0x134);
    if ((uint)param_1[0xfa] < 0x80000000) {
      param_1[0x28a] = (int)(fVar7 * DAT_001b11d8 * *(float *)(param_1[0x103] + 0x138));
    }
    else {
      param_1[0x28a] =
           (int)(fVar7 * DAT_001b11d8 * fVar7 * fVar7 * *(float *)(param_1[0x103] + 0x138));
    }
  }
  func_006747C0(param_1);
  func_0034CA24((undefined4 *)param_1[0x285]);
  uVar6 = 0;
  uVar5 = 0;
  if ((char)param_1[0x263] != '\0') {
    if ((param_1[0x265] != 0) &&
       (func_0026171C(param_1[0x265],(float *)0x0,(uint *)0x0,(float *)0x0),
       (char)param_1[0x244] == '\t' || (char)param_1[0x244] == '\n')) {
      local_60 = ALBW_AS_F32(param_1[0x26b]);
      local_5c = param_1[0x26c];
      local_58 = ALBW_AS_F32(param_1[0x26d]);
      func_004D7F70(&local_60,param_1[0xfa]);
      pfVar3 = (float *)(DAT_001b11e0 + ((uint)param_1[0x28a] >> 0x18) * 0x10);
      fVar7 = (float)VectorUnsignedToFloat(param_1[0x28a] & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      local_58 = local_58 - (*pfVar3 + pfVar3[1] * fVar7 * DAT_001b11dc) * DAT_001b11e4;
      func_00115C54(&local_60,&local_60,(float *)(param_1 + 0xf4));
      iVar4 = param_1[0x269];
      *(float *)(iVar4 + 4) = local_60;
      *(int *)(iVar4 + 8) = local_5c;
      *(float *)(iVar4 + 0xc) = local_58;
      func_004356B4((int *)param_1[0x269]);
      local_44 = unaff_r7 & 0xffff0000 | DAT_001b11e8;
      local_54 = 0;
      local_4c = 0;
      uStack_3c = 0;
      local_50 = param_1 + 0x279;
      local_34 = 0;
      local_38 = param_1[0x269];
      local_48 = param_1[0xb3];
      local_40 = 1;
      param_1[0x289] = 0x1f;
      iVar4 = func_00588BE4((int)param_1);
      if ((iVar4 != *DAT_001b11ec) &&
         (uVar5 = func_004A8F40(*DAT_001b11f0,&local_54,0x200), uVar5 != 0)) {
        uVar6 = 1;
        *(undefined1 *)((int)param_1 + 0xa32) = 1;
        if (param_1[0x270] == 0) {
          func_004F8DF4(param_1,3);
        }
        else {
          func_004F8DF4(param_1,0xf);
        }
      }
    }
    if (param_1[0x266] != 0) {
      func_0026171C(param_1[0x266],(float *)0x0,(uint *)0x0,(float *)0x0);
    }
    uVar5 = (int)*(char *)(DAT_001b11f4 + (int)param_1) | uVar6;
    if (uVar5 == 0) {
      bVar2 = func_001B09B4((int)param_1);
      uVar5 = 0;
      if (bVar2) {
        *(undefined1 *)((int)param_1 + 0xa32) = 1;
        bVar2 = func_004F8DF4(param_1,0xf);
        return (uint)bVar2;
      }
    }
  }
  return uVar5;
}


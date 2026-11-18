#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_002AB248(undefined4 *param_1,float *param_2,undefined1 param_3);
extern int func_002ACD14(undefined4 *param_1,int param_2,int param_3);
extern int func_004F5494(undefined4 *param_1);
extern int func_004FB19C(int *param_1);
extern void func_0051D0B0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float fparam_0);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_00521078(int param_1);
extern int func_006624F4(undefined4 *param_1,undefined1 param_2);
extern float DAT_002b239c;
extern float DAT_002b23a0;
extern float DAT_002b23a4;
extern undefined4 DAT_002b23a8;
extern float DAT_002b23ac;
extern int DAT_002b23b0;
extern undefined4 DAT_002b23b4;
extern undefined4 DAT_002b23b8;
extern undefined4 DAT_002b23bc;
extern float DAT_002b23c0;
extern float DAT_002b23c4;
extern float DAT_002b23c8;
extern float DAT_002b23cc;
extern int DAT_002b23d0;
extern undefined4 DAT_002b23d4;
extern undefined4 DAT_002b23d8;
extern float DAT_002b23dc;
extern float DAT_002b23e0;
extern float DAT_002b23e4;
extern int DAT_002b23e8;
extern int DAT_002b2568;

// USA 002B20B0 <- EU 002B208C (Ghidra, non-matching)
// GLOBAL DAT_002b239c float
// GLOBAL DAT_002b23a0 float
// GLOBAL DAT_002b23a4 float
// GLOBAL DAT_002b23a8 undefined4
// GLOBAL DAT_002b23ac float
// GLOBAL DAT_002b23b0 int
// GLOBAL DAT_002b23b4 undefined4
// GLOBAL DAT_002b23b8 undefined4
// GLOBAL DAT_002b23bc undefined4
// GLOBAL DAT_002b23c0 float
// GLOBAL DAT_002b23c4 float
// GLOBAL DAT_002b23c8 float
// GLOBAL DAT_002b23cc float
// GLOBAL DAT_002b23d0 int
// GLOBAL DAT_002b23d4 undefined4
// GLOBAL DAT_002b23d8 undefined4
// GLOBAL DAT_002b23dc float
// GLOBAL DAT_002b23e0 float
// GLOBAL DAT_002b23e4 float
// GLOBAL DAT_002b23e8 int
// GLOBAL DAT_002b2568 int

undefined4 func_002B20B0(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  fVar12 = DAT_002b23a0;
  fVar7 = DAT_002b239c;
  *(short *)(param_1 + 0xb0) = *(short *)(param_1 + 0xb0) + 1;
  uVar3 = param_1[0xb];
  if ((uint)param_1[10] < uVar3) {
    param_1[10] = param_1[10] + 1;
  }
  if ((uint)param_1[0x72] < (uint)param_1[0x73]) {
    param_1[0x72] = param_1[0x72] + 1;
  }
  else {
    param_1[0x11] = ALBW_AS_U32(fVar7);
    param_1[0xf] = ALBW_AS_U32(fVar7);
  }
  fVar6 = DAT_002b23c0;
  uVar13 = DAT_002b23bc;
  uVar11 = DAT_002b23b8;
  fVar10 = DAT_002b23a4;
  cVar1 = *(char *)(param_1 + 9);
  if (cVar1 == '\0') {
    if ((uint)param_1[10] < uVar3) goto LAB_002b254c;
    *(undefined1 *)(param_1 + 9) = 1;
    uVar11 = DAT_002b23a8;
    param_1[0xb] = 0x2d;
    param_1[0xc] = uVar11;
    param_1[10] = 0;
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 == '\x01') {
LAB_002b2154:
      fVar12 = ALBW_AS_F32(param_1[0x70]);
      if (fVar12 <= fVar7) {
        fVar12 = -fVar12;
      }
      if ((int)ALBW_AS_U32(fVar12) <= DAT_002b23b0) goto LAB_002b254c;
    }
    else {
      if (cVar1 == '\x02') goto LAB_002b254c;
      if (cVar1 == '\x03') goto LAB_002b2154;
    }
    local_28 = DAT_002b23ac;
    uStack_24 = DAT_002b23b4;
    func_00150A84((int *)param_1[0xd],(int *)&local_28,0);
    goto LAB_002b254c;
  }
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      uVar3 = param_1[0x75];
      if (uVar3 < (uint)param_1[0x76]) {
        uVar3 = uVar3 + 1;
        param_1[0x75] = uVar3;
      }
      iVar5 = param_1[0x76] - uVar3;
      if (iVar5 < 2) {
        iVar5 = 1;
      }
      fVar7 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
      fVar7 = ALBW_AS_F32(param_1[0x12]) + (fVar10 - ALBW_AS_F32(param_1[0x12])) * (fVar12 / fVar7);
      param_1[0x12] = ALBW_AS_U32(fVar7);
      param_1[0x14] = ALBW_AS_U32(fVar7);
      param_1[0x13] = ALBW_AS_U32(fVar7);
    }
    goto LAB_002b254c;
  }
  *(short *)(param_1 + 0x78) = *(short *)(param_1 + 0x78) + 1;
  fVar8 = DAT_002b23dc;
  cVar1 = *(char *)(param_1 + 0x71);
  if (cVar1 == '\x01') {
    iVar5 = uVar3 - param_1[10];
    if (iVar5 < 2) {
      iVar5 = 1;
    }
    fVar10 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
    fVar10 = ALBW_AS_F32(param_1[0x12]) + (DAT_002b23dc - ALBW_AS_F32(param_1[0x12])) * (fVar12 / fVar10);
    param_1[0x12] = ALBW_AS_U32(fVar10);
    if (uVar3 <= (uint)param_1[10]) {
      param_1[0xb] = uVar11;
      param_1[0xc] = uVar13;
      param_1[10] = 0;
    }
    param_1[0x14] = ALBW_AS_U32(fVar10);
    param_1[0x13] = ALBW_AS_U32(fVar10);
    fVar10 = ALBW_AS_F32(param_1[0x10]) - DAT_002b23e0;
    fVar6 = fVar8;
    fVar9 = DAT_002b23e4;
    if (DAT_002b23e4 <= fVar10) goto LAB_002b2338;
LAB_002b2330:
    param_1[0x10] = ALBW_AS_U32(fVar9);
LAB_002b2340:
    fVar12 = (fVar12 - ALBW_AS_F32(param_1[0x13])) / (fVar12 - fVar8);
    if ((*(uint *)(param_1[0xd] + 0x59c) & 0x10000) != 0) {
      func_0051D0B0((undefined4 *)(param_1[0xd] + 0x500),param_1[0x6b],DAT_002b23e8 + param_1[0x6b],
                    fVar12);
    }
    func_0051D0B0((undefined4 *)(param_1[0xd] + 1000),param_1[0x24],0,fVar12);
  }
  else {
    if (cVar1 != '\x02' && cVar1 != '\x03') {
      iVar5 = uVar3 - param_1[10];
      if (iVar5 < 2) {
        iVar5 = 1;
      }
      fVar8 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
      fVar8 = ALBW_AS_F32(param_1[0x12]) + (fVar6 - ALBW_AS_F32(param_1[0x12])) * (fVar12 / fVar8);
      param_1[0x12] = ALBW_AS_U32(fVar8);
      param_1[0x14] = ALBW_AS_U32(fVar8);
      param_1[0x13] = ALBW_AS_U32(fVar8);
      fVar10 = ALBW_AS_F32(param_1[0x10]) - fVar10;
      fVar8 = fVar6;
      fVar9 = DAT_002b23c4;
      if (fVar10 < DAT_002b23c4) goto LAB_002b2330;
LAB_002b2338:
      param_1[0x10] = ALBW_AS_U32(fVar10);
      fVar8 = fVar6;
      goto LAB_002b2340;
    }
    fVar12 = ALBW_AS_F32(param_1[0x10]) - DAT_002b23c8;
    if (ALBW_AS_F32(param_1[0x10]) - DAT_002b23c8 < DAT_002b23cc) {
      fVar12 = DAT_002b23cc;
    }
    param_1[0x10] = ALBW_AS_U32(fVar12);
    if (uVar3 <= (uint)param_1[10]) {
      param_1[0xb] = uVar11;
      param_1[0xc] = uVar13;
      param_1[10] = 0;
    }
    func_0051D27C((int *)(param_1[0xd] + 1000),0,DAT_002b23d0);
  }
  piVar4 = (int *)param_1[0xd];
  uVar3 = piVar4[0x168];
  if ((uVar3 & 0x4000) == 0) {
    if ((uVar3 & 0x20) != 0) {
LAB_002b24f0:
      return func_006624F4(param_1,0xc);
    }
    if ((*(char *)(param_1 + 0x71) == '\x03') && ((uVar3 & 4) != 0)) {
      func_006624F4(param_1,0xd);
    }
    else {
      uVar11 = DAT_002b23d4;
      uVar13 = DAT_002b23d8;
      bVar2 = func_00521078((int)piVar4);
      if ((!bVar2) || (*(ushort *)(param_1 + 0x78) < 0x1f)) goto LAB_002b254c;
      local_28 = fVar7;
      uVar3 = func_002AB248((undefined4 *)(param_1[0xd] + 0x3d0),&local_28,0);
      fVar12 = local_28;
      if (local_28 <= fVar7) {
        fVar12 = -local_28;
      }
      if ((int)ALBW_AS_U32(fVar12) < DAT_002b2568) {
        if (uVar3 == 1) {
          func_004FB19C((int *)param_1[0xd]);
          param_1[0x76] = 0xc;
          param_1[0x77] = uVar11;
          param_1[0xb] = 0x1e;
          param_1[0x75] = 0;
          param_1[0xc] = uVar13;
          param_1[10] = 0;
          *(undefined1 *)(param_1 + 9) = 2;
          return 0;
        }
        if (uVar3 == 2) goto LAB_002b24f0;
      }
      if (*(char *)(param_1 + 9) != '\x02') {
        func_004F5494(param_1 + 0x3b);
        return func_006624F4(param_1,0);
      }
    }
    return 0;
  }
  uVar11 = DAT_002b23d4;
  uVar13 = DAT_002b23d8;
  func_004FB19C(piVar4);
  param_1[0x76] = 0xc;
  param_1[0x77] = uVar11;
  param_1[0x75] = 0;
  param_1[0xb] = 0x1e;
  param_1[0xc] = uVar13;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 9) = 2;
LAB_002b254c:
  return func_002ACD14(param_1,0,0);
}


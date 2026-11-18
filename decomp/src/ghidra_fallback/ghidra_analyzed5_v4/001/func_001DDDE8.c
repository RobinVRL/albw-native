#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int DAT_001de08c;
extern float DAT_001de090;
extern float DAT_001de094;
extern float DAT_001de098;

// USA 001DDDE8 <- EU 001DDDE8 (Ghidra, non-matching)
// GLOBAL DAT_001de08c int
// GLOBAL DAT_001de090 float
// GLOBAL DAT_001de094 float
// GLOBAL DAT_001de098 float

undefined4 func_001DDDE8(int param_1,float *param_2,int param_3,float fparam_0)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  byte bVar4;
  int iVar5;
  float *pfVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define fStack_48 (*(float *)(albw_frame + 0x8))
  #define fStack_44 (*(float *)(albw_frame + 0xc))
  #define fStack_40 (*(float *)(albw_frame + 0x10))
  #define fStack_34 (*(float *)(albw_frame + 0x1c))
  #define fStack_30 (*(float *)(albw_frame + 0x20))
  #define fStack_2c (*(float *)(albw_frame + 0x24))
  #define fStack_28 (*(float *)(albw_frame + 0x28))
  #define fStack_24 (*(float *)(albw_frame + 0x2c))
  #define fStack_20 (*(float *)(albw_frame + 0x30))
  iVar5 = *(int *)(param_1 + 0x10);
  sVar3 = *(short *)(*(int *)(iVar5 + 0x614) + 0x42);
  if (sVar3 == 2 || sVar3 == 7) {
    return 0;
  }
  if ((sVar3 == 0 || sVar3 == 0x31) || (sVar3 == 0x32)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 != 1) {
    if (param_3 != 2) goto LAB_001ddf60;
    if ((!bVar7) && (sVar3 != 1)) {
      return 0;
    }
    bVar1 = *(byte *)(iVar5 + 0x599);
    bVar4 = 0xc;
    if (bVar1 == 0x18) {
LAB_001ddf50:
      bVar4 = 8;
    }
    else if (bVar1 < 0x19) {
      if (bVar1 == 0xc) {
        bVar4 = 4;
      }
      else if (bVar1 == 0x10 || bVar1 == 0x14) {
        bVar4 = 6;
      }
    }
    else {
      if (bVar1 == 0x1c) goto LAB_001ddf50;
      if (bVar1 == 0x20 || bVar1 == 0x24) {
        bVar4 = 10;
      }
    }
    bVar7 = *(byte *)(iVar5 + 0x598) == bVar4;
    if (*(byte *)(iVar5 + 0x598) <= bVar4) {
      bVar7 = sVar3 == 0;
    }
    if (bVar7) {
      return 0;
    }
    goto LAB_001ddf60;
  }
  if (!bVar7) {
    return 0;
  }
  if (*(uint *)(*(int *)(iVar5 + 0x614) + 0x44) < 0x10) {
    return 0;
  }
  bVar1 = *(byte *)(iVar5 + 0x599);
  bVar4 = 0xc;
  if (bVar1 == 0x18) {
LAB_001ddee0:
    bVar4 = 8;
  }
  else if (bVar1 < 0x19) {
    if (bVar1 == 0xc) {
      bVar4 = 4;
    }
    else if (bVar1 == 0x10 || bVar1 == 0x14) {
      bVar4 = 6;
    }
  }
  else {
    if (bVar1 == 0x1c) goto LAB_001ddee0;
    if (bVar1 == 0x20 || bVar1 == 0x24) {
      bVar4 = 10;
    }
  }
  bVar7 = *(byte *)(iVar5 + 0x598) == bVar4;
  if (*(byte *)(iVar5 + 0x598) <= bVar4) {
    bVar7 = sVar3 == 0;
  }
  if (bVar7) {
    return 0;
  }
LAB_001ddf60:
  cVar2 = *(char *)(DAT_001de08c + iVar5);
  func_004D80A4(&fStack_48,*(uint *)(iVar5 + 1000),DAT_001de090);
  fStack_44 = DAT_001de094;
  func_00115C70(&fStack_28,param_2,(float *)(iVar5 + 0x3d0));
  fStack_34 = fStack_28;
  fStack_30 = fStack_24;
  fStack_2c = fStack_20;
  func_00115DC8(&fStack_34);
  if ((uint)ALBW_AS_U32((fStack_48 * fStack_34 + fStack_44 * fStack_30 + fStack_40 * fStack_2c)) <
      (uint)ALBW_AS_U32(DAT_001de098)) {
    *(undefined1 *)(iVar5 + 0x6bf) = 1;
    pfVar6 = (float *)(iVar5 + 0x70c);
    if (cVar2 == '\0') {
      *pfVar6 = *param_2;
      *(float *)(iVar5 + 0x710) = param_2[1];
      *(float *)(iVar5 + 0x714) = param_2[2];
      *(float *)(iVar5 + 0x718) = fparam_0;
    }
    else {
      fVar8 = *pfVar6 - *(float *)(iVar5 + 0x3d0);
      fVar10 = *(float *)(iVar5 + 0x714) - *(float *)(iVar5 + 0x3d8);
      fVar11 = param_2[2] - *(float *)(iVar5 + 0x3d8);
      fVar9 = *param_2 - *(float *)(iVar5 + 0x3d0);
      if (SQRT(fVar9 * fVar9 + fVar11 * fVar11) < SQRT(fVar8 * fVar8 + fVar10 * fVar10)) {
        *pfVar6 = *param_2;
        *(float *)(iVar5 + 0x710) = param_2[1];
        *(float *)(iVar5 + 0x714) = param_2[2];
        *(float *)(iVar5 + 0x718) = fparam_0;
      }
    }
  }
  return 0;
}


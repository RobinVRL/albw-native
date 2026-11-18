#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int DAT_001de08c;
extern float DAT_001de090;
extern float DAT_001de094;
extern float DAT_001de098;

// USA 001DDDF0 <- EU 001DDDF0 (Ghidra, non-matching)
// GLOBAL DAT_001de08c int
// GLOBAL DAT_001de090 float
// GLOBAL DAT_001de094 float
// GLOBAL DAT_001de098 float

undefined4 func_001DDDF0(int param_1,float *param_2,int param_3,float fparam_0)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  byte bVar4;
  float *pfVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define local_28 (*(float *)(albw_frame + 0x28))
  #define fStack_24 (*(float *)(albw_frame + 0x2c))
  #define fStack_20 (*(float *)(albw_frame + 0x30))
  sVar3 = *(short *)(*(int *)(param_1 + 0x614) + 0x42);
  if (sVar3 == 2 || sVar3 == 7) {
    return 0;
  }
  if ((sVar3 == 0 || sVar3 == 0x31) || (sVar3 == 0x32)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 != 1) {
    if (param_3 != 2) goto LAB_001ddf60;
    if ((!bVar6) && (sVar3 != 1)) {
      return 0;
    }
    bVar1 = *(byte *)(param_1 + 0x599);
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
    bVar6 = *(byte *)(param_1 + 0x598) == bVar4;
    if (*(byte *)(param_1 + 0x598) <= bVar4) {
      bVar6 = sVar3 == 0;
    }
    if (bVar6) {
      return 0;
    }
    goto LAB_001ddf60;
  }
  if (!bVar6) {
    return 0;
  }
  if (*(uint *)(*(int *)(param_1 + 0x614) + 0x44) < 0x10) {
    return 0;
  }
  bVar1 = *(byte *)(param_1 + 0x599);
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
  bVar6 = *(byte *)(param_1 + 0x598) == bVar4;
  if (*(byte *)(param_1 + 0x598) <= bVar4) {
    bVar6 = sVar3 == 0;
  }
  if (bVar6) {
    return 0;
  }
LAB_001ddf60:
  cVar2 = *(char *)(DAT_001de08c + param_1);
  func_004D80A4(&local_48,*(uint *)(param_1 + 1000),DAT_001de090);
  local_44 = DAT_001de094;
  func_00115C70(&local_28,param_2,(float *)(param_1 + 0x3d0));
  local_34 = local_28;
  local_30 = fStack_24;
  local_2c = fStack_20;
  func_00115DC8(&local_34);
  if ((uint)ALBW_AS_U32((local_48 * local_34 + local_44 * local_30 + local_40 * local_2c)) < (uint)ALBW_AS_U32(DAT_001de098))
  {
    *(undefined1 *)(param_1 + 0x6bf) = 1;
    pfVar5 = (float *)(param_1 + 0x70c);
    if (cVar2 == '\0') {
      *pfVar5 = *param_2;
      *(float *)(param_1 + 0x710) = param_2[1];
      *(float *)(param_1 + 0x714) = param_2[2];
      *(float *)(param_1 + 0x718) = fparam_0;
    }
    else {
      fVar7 = *pfVar5 - *(float *)(param_1 + 0x3d0);
      fVar9 = *(float *)(param_1 + 0x714) - *(float *)(param_1 + 0x3d8);
      fVar10 = param_2[2] - *(float *)(param_1 + 0x3d8);
      fVar8 = *param_2 - *(float *)(param_1 + 0x3d0);
      if (SQRT(fVar8 * fVar8 + fVar10 * fVar10) < SQRT(fVar7 * fVar7 + fVar9 * fVar9)) {
        *pfVar5 = *param_2;
        *(float *)(param_1 + 0x710) = param_2[1];
        *(float *)(param_1 + 0x714) = param_2[2];
        *(float *)(param_1 + 0x718) = fparam_0;
      }
    }
  }
  return 0;
}


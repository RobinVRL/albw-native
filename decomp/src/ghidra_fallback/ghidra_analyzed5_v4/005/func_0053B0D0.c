#include "ghidra_types.h"

extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_00518490(float *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern float DAT_0053b318;
extern float *DAT_0053b31c;

// USA 0053B0D0 <- EU 0053B0A8 (Ghidra, non-matching)
// GLOBAL DAT_0053b318 float
// GLOBAL DAT_0053b31c float *

undefined4 func_0053B0D0(int *param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pfVar1 = DAT_0053b31c;
  if ((char)param_1[7] == '\x14') {
    if (param_2 != (float *)0x0) {
      *param_2 = *DAT_0053b31c;
      param_2[1] = pfVar1[1];
      param_2[2] = pfVar1[2];
    }
    if (param_3 != (float *)0x0) {
      func_00115DAC(param_3,(float *)(param_1 + 0x12),(float *)(param_1 + 0xf),ALBW_AS_F32(param_1[0xb]));
    }
    if (param_4 != (float *)0x0) {
      iVar2 = *param_1;
      *param_4 = *(float *)(iVar2 + 0x18);
      param_4[1] = *(float *)(iVar2 + 0x1c);
      param_4[2] = *(float *)(iVar2 + 0x20);
    }
  }
  else {
    pfVar1 = (float *)param_1[10];
    if (pfVar1 == (float *)0x0) {
      pfVar1 = (float *)param_1[9];
      if (pfVar1 != (float *)0x0) {
        if (param_2 != (float *)0x0) {
          *param_2 = *pfVar1;
          param_2[1] = pfVar1[1];
          param_2[2] = pfVar1[2];
        }
        if (param_3 != (float *)0x0) {
          iVar2 = param_1[9];
          *param_3 = *(float *)(iVar2 + 0xc);
          param_3[1] = *(float *)(iVar2 + 0x10);
          param_3[2] = *(float *)(iVar2 + 0x14);
        }
        if (param_4 != (float *)0x0) {
          iVar2 = param_1[9];
          *param_4 = *(float *)(iVar2 + 0x18);
          param_4[1] = *(float *)(iVar2 + 0x1c);
          param_4[2] = *(float *)(iVar2 + 0x20);
          return 0;
        }
      }
    }
    else {
      if (param_2 != (float *)0x0) {
        pfVar4 = (float *)param_1[9];
        fVar5 = ALBW_AS_F32(param_1[0xb]);
        *param_2 = *pfVar4 + (*pfVar1 - *pfVar4) * fVar5;
        param_2[1] = pfVar4[1] + (pfVar1[1] - pfVar4[1]) * fVar5;
        param_2[2] = pfVar4[2] + (pfVar1[2] - pfVar4[2]) * fVar5;
      }
      if (param_3 != (float *)0x0) {
        iVar2 = param_1[9];
        iVar3 = param_1[10];
        fVar11 = *(float *)(iVar3 + 0xc);
        fVar5 = *(float *)(iVar2 + 0xc);
        fVar6 = *(float *)(iVar2 + 0x10);
        fVar7 = *(float *)(iVar2 + 0x14);
        fVar9 = *(float *)(iVar3 + 0x10);
        fVar10 = *(float *)(iVar3 + 0x14);
        if ((char)param_1[0xc] == '\0') {
          if (fVar11 < fVar5) {
            fVar11 = fVar11 + DAT_0053b318;
          }
          if (fVar9 < fVar6) {
            fVar9 = fVar9 + DAT_0053b318;
          }
          if (fVar10 < fVar7) {
            fVar10 = fVar10 + DAT_0053b318;
          }
        }
        else {
          if (fVar5 < fVar11) {
            fVar5 = fVar5 + DAT_0053b318;
          }
          if (fVar6 < fVar9) {
            fVar6 = fVar6 + DAT_0053b318;
          }
          if (fVar7 < fVar10) {
            fVar7 = fVar7 + DAT_0053b318;
          }
        }
        fVar8 = ALBW_AS_F32(param_1[0xb]);
        *param_3 = fVar5 + (fVar11 - fVar5) * fVar8;
        param_3[1] = fVar6 + (fVar9 - fVar6) * fVar8;
        param_3[2] = fVar7 + (fVar10 - fVar7) * fVar8;
      }
      if (*(byte *)(param_1 + 7) < 6) {
        if (param_4 != (float *)0x0) {
          iVar2 = param_1[9];
          iVar3 = param_1[10];
          fVar5 = ALBW_AS_F32(param_1[0xb]);
          *param_4 = *(float *)(iVar2 + 0x18) +
                     (*(float *)(iVar3 + 0x18) - *(float *)(iVar2 + 0x18)) * fVar5;
          param_4[1] = *(float *)(iVar2 + 0x1c) +
                       (*(float *)(iVar3 + 0x1c) - *(float *)(iVar2 + 0x1c)) * fVar5;
          param_4[2] = *(float *)(iVar2 + 0x20) +
                       (*(float *)(iVar3 + 0x20) - *(float *)(iVar2 + 0x20)) * fVar5;
          return 0;
        }
      }
      else if (param_4 != (float *)0x0) {
        return func_00518490(param_4,param_1[9],param_1[10],(int)(char)param_1[0xc],ALBW_AS_F32(param_1[0xb]));
      }
    }
  }
  return 0;
}


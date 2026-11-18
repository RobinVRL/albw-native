#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_002FF73C(int param_1);
extern int func_002FF74C(int param_1,int param_2,int param_3);
extern int func_00324610(int *param_1,int *param_2,float fparam_0,float fparam_1);
extern int func_004905E0(float fparam_0);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_0052E8B4(int param_1);
extern float DAT_002d300c;
extern float DAT_002d3010;
extern float DAT_002d3014;
extern float DAT_002d3018;

// USA 002D2C80 <- EU 002D2C5C (Ghidra, non-matching)
// GLOBAL DAT_002d300c float
// GLOBAL DAT_002d3010 float
// GLOBAL DAT_002d3014 float
// GLOBAL DAT_002d3018 float

undefined4 func_002D2C80(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  undefined4 extraout_r1;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(int *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  #define local_20 (*(float *)(albw_frame + 0x20))
  iVar1 = 0;
  do {
    if (param_1[iVar1 * 10 + 10] != 0) {
      puVar2 = (uint *)(*(int *)(*(int *)(param_1[iVar1 * 10 + 10] + 0x24) + 0xc) +
                       param_1[iVar1 * 10 + 0x12] * 0x40);
      *puVar2 = *puVar2 & 0xffffffef;
      *(undefined4 *)(*param_2 + 0x16c) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  if (param_2 != (int *)0x0) {
    func_002FF73C(param_1[8]);
    func_002FF74C(param_1[8],*param_2,1);
    func_004CEA18(*param_2,(int)*(char *)(*(int *)(*param_1 + 0x614) + 0xc0),param_2[4]);
    if (param_3 == 0) {
      func_004CEA18(*param_2,1,param_2[6]);
      iVar1 = *param_2;
      uVar3 = param_2[5];
    }
    else {
      func_004CEA18(*param_2,0,param_2[6]);
      iVar1 = *param_2;
      uVar3 = param_2[5];
    }
    func_004CEA18(iVar1,(uint)(param_3 != 0),uVar3);
    iVar1 = func_0052E8B4(*(int *)(*param_1 + 0x614));
    piVar5 = (int *)*param_2;
    func_004CEA18((int)piVar5,iVar1,param_2[7]);
    iVar1 = func_0052E8B4(*(int *)(*param_1 + 0x614));
    fVar6 = DAT_002d300c;
    if (iVar1 == 0) {
      param_1[0x36] = 0;
      param_1[0x37] = 0;
      param_1[0x38] = (int)ALBW_AS_U32(fVar6);
      param_1[0x39] = (int)ALBW_AS_U32(fVar6);
      param_1[0x3a] = (int)ALBW_AS_U32(fVar6);
      param_1[0x3b] = (int)ALBW_AS_U32(fVar6);
      param_1[0x3c] = (int)ALBW_AS_U32(fVar6);
      param_1[0x3d] = (int)ALBW_AS_U32(fVar6);
    }
    else {
      puVar2 = (uint *)(*(int *)(*(int *)(*param_2 + 0x24) + 0xc) + param_2[8] * 0x40);
      *puVar2 = *puVar2 | 0x10;
      *(int **)(*param_2 + 0x16c) = param_1 + 0x33;
      param_1[0x35] = param_2[8];
      func_00115C70(&local_28,(float *)(param_1 + 0x38),(float *)(param_1 + 0x3b));
      local_38 = local_28;
      local_34 = local_24;
      local_30 = local_20;
      local_2c = 0;
      if ((local_28 != fVar6 || local_24 != fVar6) || local_20 != fVar6) {
        func_004D7F70(&local_38,-*(int *)(*param_1 + 1000));
        fVar7 = local_34 + DAT_002d3010;
        if (fVar7 == fVar6 && local_30 == fVar6) {
          local_2c = 0;
        }
        else if (fVar7 < fVar6) {
          if (local_30 < fVar6) {
            if (local_30 < fVar7) {
              local_2c = func_004905E0(fVar7 / local_30);
              local_2c = -0x40000000 - local_2c;
            }
            else {
              local_2c = func_004905E0(local_30 / fVar7);
              local_2c = local_2c + -0x80000000;
            }
          }
          else {
            fVar7 = -fVar7;
            if (fVar7 < local_30) {
              local_2c = func_004905E0(fVar7 / local_30);
              local_2c = local_2c + 0x40000000;
            }
            else {
              local_2c = func_004905E0(local_30 / fVar7);
              local_2c = -0x80000000 - local_2c;
            }
          }
        }
        else if (local_30 < fVar6) {
          fVar6 = -local_30;
          if (fVar7 < fVar6) {
            local_2c = func_004905E0(fVar7 / fVar6);
            local_2c = local_2c + -0x40000000;
          }
          else {
            local_2c = func_004905E0(fVar6 / fVar7);
            local_2c = -local_2c;
          }
        }
        else if (fVar7 < local_30) {
          local_2c = func_004905E0(fVar7 / local_30);
          local_2c = 0x40000000 - local_2c;
        }
        else {
          local_2c = func_004905E0(local_30 / fVar7);
        }
      }
      func_00324610(param_1 + 0x36,&local_2c,DAT_002d3018,DAT_002d3014);
    }
    if (param_1[4] != 0) {
      if ((short)param_1[1] == 0xab || (short)param_1[1] == 0xac) {
        func_002FF74C(param_1[8],param_1[4],0);
      }
      iVar1 = param_1[4];
      puVar4 = (undefined4 *)(iVar1 + 0x80);
      *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
      func_001151EC(puVar4,(undefined4 *)
                           (*(int *)(*(int *)(param_1[(uint)*(byte *)(param_1 + 9) * 10 + 10] + 0x24
                                             ) + 0x14) +
                           param_1[(uint)*(byte *)(param_1 + 9) * 10 + 0x13] * 0x30));
      func_004CEAF0(param_1[4]);
      func_00169A80((int *)param_1[6],extraout_r1,puVar4,piVar5);
      return func_00168E9C((int *)param_1[6],param_1[4],(int *)0x0);
    }
  }
  return 0;
}


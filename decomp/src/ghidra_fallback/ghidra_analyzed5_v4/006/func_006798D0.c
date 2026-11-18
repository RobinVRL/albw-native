#include "ghidra_types.h"

extern int func_00678A34(undefined4 *param_1,float *param_2,byte *param_3,float fparam_0,float fparam_1);
extern int func_0067BB60(undefined4 *param_1,float *param_2,byte *param_3,float fparam_0,float fparam_1);
extern float DAT_00679abc;
extern undefined4 DAT_00679ac0;

// USA 006798D0 <- EU 006798A8 (Ghidra, non-matching)
// GLOBAL DAT_00679abc float
// GLOBAL DAT_00679ac0 undefined4

undefined4 func_006798D0(float *param_1,undefined4 *param_2,float fparam_0)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar7 = DAT_00679abc;
  pbVar4 = (byte *)ALBW_PTR_BITS(param_1[8]);
  pbVar5 = (byte *)*param_2;
  uVar2 = param_2[1];
  if (pbVar5 != pbVar4 + (uint)*(ushort *)((int)param_1 + 0xe) * 4 + -4 && pbVar5 != pbVar4) {
    if (0 < (int)uVar2) {
      pbVar4 = (byte *)(uint)*(byte *)((int)param_1 + 9);
    }
    if ((int)uVar2 < 0) {
      pbVar4 = (byte *)(uint)*(byte *)(param_1 + 2);
    }
    if (uVar2 != 0) {
      if ((pbVar4 == (byte *)0x2) && ((uVar2 & 1) != 0)) {
        fVar7 = (float)VectorSignedToFloat(uVar2 + 1,(byte)(in_fpscr >> 0x15) & 3);
        uVar1 = func_00678A34(param_2,param_1,pbVar5,(param_1[1] - *param_1) * fVar7,fparam_0);
        return uVar1;
      }
      fVar7 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
      uVar1 = func_0067BB60(param_2,param_1,pbVar5,(param_1[1] - *param_1) * fVar7,fparam_0);
      return uVar1;
    }
    uVar1 = func_0067BB60(param_2,param_1,pbVar5,DAT_00679abc,fparam_0);
    return uVar1;
  }
  uVar3 = uVar2 + 1;
  param_2[1] = uVar3;
  if (0 < (int)uVar3) {
    pbVar4 = (byte *)(uint)*(byte *)((int)param_1 + 9);
  }
  if ((int)uVar3 < 0) {
    pbVar4 = (byte *)(uint)*(byte *)(param_1 + 2);
  }
  if (uVar3 == 0) {
    uVar1 = func_0067BB60(param_2,param_1,pbVar4,fVar7,fparam_0);
    return uVar1;
  }
  if (pbVar4 == (byte *)0x0) {
    fVar9 = param_1[4];
    pbVar4 = (byte *)((uint)*(ushort *)((int)param_1 + 0xe) * 4 + -4 + (int)ALBW_AS_U32(param_1[8]));
    fVar8 = (float)VectorUnsignedToFloat((uint)*pbVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar10 = (float)VectorUnsignedToFloat
                              ((uint)pbVar4[1] + (pbVar4[2] & 0xf) * 0x100,
                               (byte)(in_fpscr >> 0x15) & 3);
    fVar8 = fVar8 * param_1[6] + *param_1;
    fVar6 = param_1[5];
    *param_2 = 0;
    param_2[1] = 1;
    uVar1 = DAT_00679ac0;
    if (param_1[1] < fVar8) {
      fVar8 = param_1[1];
    }
    param_2[2] = ALBW_AS_U32(fVar8);
    param_2[4] = ALBW_AS_U32(fVar6 + fVar10 * fVar9);
    param_2[3] = uVar1;
    param_2[5] = ALBW_AS_U32(fVar7);
    param_2[6] = ALBW_AS_U32(fVar7);
    param_2[7] = ALBW_AS_U32(fVar7);
    return 1;
  }
  if ((pbVar4 == (byte *)0x2) && ((uVar3 & 1) != 0)) {
    fVar7 = (float)VectorSignedToFloat(uVar2 + 2,(byte)(in_fpscr >> 0x15) & 3);
    uVar1 = func_00678A34(param_2,param_1,
                          (byte *)((uint)*(ushort *)((int)param_1 + 0xe) * 4 + -4 + (int)ALBW_AS_U32(param_1[8]))
                          ,(param_1[1] - *param_1) * fVar7,fparam_0);
    return uVar1;
  }
  fVar7 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  uVar1 = func_0067BB60(param_2,param_1,(byte *)ALBW_PTR_BITS(param_1[8]),(param_1[1] - *param_1) * fVar7,fparam_0)
  ;
  return uVar1;
}


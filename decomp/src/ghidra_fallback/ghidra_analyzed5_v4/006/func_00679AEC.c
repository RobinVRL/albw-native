#include "ghidra_types.h"

extern int func_00678C5C(undefined4 *param_1,float *param_2,ushort *param_3,float fparam_0,float fparam_1);
extern int func_0067BD88(undefined4 *param_1,float *param_2,ushort *param_3,float fparam_0,float fparam_1);
extern float DAT_00679cdc;
extern float DAT_00679ce0;
extern undefined4 DAT_00679ce4;

// USA 00679AEC <- EU 00679AC4 (Ghidra, non-matching)
// GLOBAL DAT_00679cdc float
// GLOBAL DAT_00679ce0 float
// GLOBAL DAT_00679ce4 undefined4

undefined4 func_00679AEC(float *param_1,undefined4 *param_2,float fparam_0)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar7 = DAT_00679cdc;
  puVar4 = (ushort *)ALBW_PTR_BITS(param_1[8]);
  puVar5 = (ushort *)*param_2;
  uVar2 = param_2[1];
  if (puVar5 != puVar4 + (uint)*(ushort *)((int)param_1 + 0xe) * 3 + -3 && puVar5 != puVar4) {
    if (0 < (int)uVar2) {
      puVar4 = (ushort *)(uint)*(byte *)((int)param_1 + 9);
    }
    if ((int)uVar2 < 0) {
      puVar4 = (ushort *)(uint)*(byte *)(param_1 + 2);
    }
    if (uVar2 != 0) {
      if ((puVar4 == (ushort *)0x2) && ((uVar2 & 1) != 0)) {
        fVar7 = (float)VectorSignedToFloat(uVar2 + 1,(byte)(in_fpscr >> 0x15) & 3);
        uVar1 = func_00678C5C(param_2,param_1,puVar5,(param_1[1] - *param_1) * fVar7,fparam_0);
        return uVar1;
      }
      fVar7 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
      uVar1 = func_0067BD88(param_2,param_1,puVar5,(param_1[1] - *param_1) * fVar7,fparam_0);
      return uVar1;
    }
    uVar1 = func_0067BD88(param_2,param_1,puVar5,DAT_00679cdc,fparam_0);
    return uVar1;
  }
  uVar3 = uVar2 + 1;
  param_2[1] = uVar3;
  if (0 < (int)uVar3) {
    puVar4 = (ushort *)(uint)*(byte *)((int)param_1 + 9);
  }
  if ((int)uVar3 < 0) {
    puVar4 = (ushort *)(uint)*(byte *)(param_1 + 2);
  }
  if (uVar3 == 0) {
    uVar1 = func_0067BD88(param_2,param_1,puVar4,fVar7,fparam_0);
    return uVar1;
  }
  if (puVar4 == (ushort *)0x0) {
    puVar4 = (ushort *)((int)ALBW_AS_U32(param_1[8]) + (uint)*(ushort *)((int)param_1 + 0xe) * 6 + -6);
    fVar8 = (float)VectorUnsignedToFloat((uint)*puVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar10 = (float)VectorUnsignedToFloat((uint)puVar4[1],(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = param_1[4];
    fVar8 = fVar8 * DAT_00679ce0 * param_1[6] + *param_1;
    fVar6 = param_1[5];
    *param_2 = 0;
    param_2[1] = 1;
    uVar1 = DAT_00679ce4;
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
  if ((puVar4 == (ushort *)0x2) && ((uVar3 & 1) != 0)) {
    fVar7 = (float)VectorSignedToFloat(uVar2 + 2,(byte)(in_fpscr >> 0x15) & 3);
    uVar1 = func_00678C5C(param_2,param_1,
                          (ushort *)
                          ((uint)*(ushort *)((int)param_1 + 0xe) * 6 + -6 + (int)ALBW_AS_U32(param_1[8])),
                          (param_1[1] - *param_1) * fVar7,fparam_0);
    return uVar1;
  }
  fVar7 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  uVar1 = func_0067BD88(param_2,param_1,(ushort *)ALBW_PTR_BITS(param_1[8]),(param_1[1] - *param_1) * fVar7,
                        fparam_0);
  return uVar1;
}


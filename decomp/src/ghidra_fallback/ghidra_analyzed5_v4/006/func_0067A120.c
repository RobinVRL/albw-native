#include "ghidra_types.h"

extern int func_006791A4(undefined4 *param_1,float *param_2,uint *param_3,float fparam_0,float fparam_1);
extern int func_0067C2C8(undefined4 *param_1,float *param_2,uint *param_3,float fparam_0,float fparam_1);
extern float DAT_0067a304;
extern undefined4 DAT_0067a308;

// USA 0067A120 <- EU 0067A0F8 (Ghidra, non-matching)
// GLOBAL DAT_0067a304 float
// GLOBAL DAT_0067a308 undefined4

undefined4 func_0067A120(float *param_1,undefined4 *param_2,float fparam_0)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar7 = DAT_0067a304;
  puVar4 = (uint *)ALBW_PTR_BITS(param_1[8]);
  puVar5 = (uint *)*param_2;
  uVar2 = param_2[1];
  if (puVar5 != puVar4 + (uint)*(ushort *)((int)param_1 + 0xe) * 2 + -2 && puVar5 != puVar4) {
    if (0 < (int)uVar2) {
      puVar4 = (uint *)(uint)*(byte *)((int)param_1 + 9);
    }
    if ((int)uVar2 < 0) {
      puVar4 = (uint *)(uint)*(byte *)(param_1 + 2);
    }
    if (uVar2 != 0) {
      if ((puVar4 == (uint *)0x2) && ((uVar2 & 1) != 0)) {
        fVar7 = (float)VectorSignedToFloat(uVar2 + 1,(byte)(in_fpscr >> 0x15) & 3);
        uVar1 = func_006791A4(param_2,param_1,puVar5,(param_1[1] - *param_1) * fVar7,fparam_0);
        return uVar1;
      }
      fVar7 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
      uVar1 = func_0067C2C8(param_2,param_1,puVar5,(param_1[1] - *param_1) * fVar7,fparam_0);
      return uVar1;
    }
    uVar1 = func_0067C2C8(param_2,param_1,puVar5,DAT_0067a304,fparam_0);
    return uVar1;
  }
  uVar3 = uVar2 + 1;
  param_2[1] = uVar3;
  if (0 < (int)uVar3) {
    puVar4 = (uint *)(uint)*(byte *)((int)param_1 + 9);
  }
  if ((int)uVar3 < 0) {
    puVar4 = (uint *)(uint)*(byte *)(param_1 + 2);
  }
  if (uVar3 == 0) {
    uVar1 = func_0067C2C8(param_2,param_1,puVar4,fVar7,fparam_0);
    return uVar1;
  }
  if (puVar4 == (uint *)0x0) {
    fVar9 = param_1[4];
    uVar2 = *(uint *)((int)ALBW_AS_U32(param_1[8]) + (uint)*(ushort *)((int)param_1 + 0xe) * 8 + -8);
    fVar8 = (float)VectorUnsignedToFloat(uVar2 & 0xfff,(byte)(in_fpscr >> 0x15) & 3);
    fVar10 = (float)VectorUnsignedToFloat(uVar2 >> 0xc,(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = fVar8 * param_1[6] + *param_1;
    fVar6 = param_1[5];
    *param_2 = 0;
    param_2[1] = 1;
    uVar1 = DAT_0067a308;
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
  if ((puVar4 == (uint *)0x2) && ((uVar3 & 1) != 0)) {
    fVar7 = (float)VectorSignedToFloat(uVar2 + 2,(byte)(in_fpscr >> 0x15) & 3);
    uVar1 = func_006791A4(param_2,param_1,
                          (uint *)((uint)*(ushort *)((int)param_1 + 0xe) * 8 + -8 + (int)ALBW_AS_U32(param_1[8]))
                          ,(param_1[1] - *param_1) * fVar7,fparam_0);
    return uVar1;
  }
  fVar7 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  uVar1 = func_0067C2C8(param_2,param_1,(uint *)ALBW_PTR_BITS(param_1[8]),(param_1[1] - *param_1) * fVar7,fparam_0)
  ;
  return uVar1;
}


#include "ghidra_types.h"

extern int func_0036E490(byte *param_1,uint param_2,undefined4 param_3);
extern float func_0036EAF8(undefined4 param_1,int param_2);
extern int func_0068C794(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int func_00691F30(uint param_1,uint param_2);
extern float DAT_0036e0b4;
extern float DAT_0036e0b8;
extern float DAT_0036e0bc;
extern uint DAT_0036e0c0;
extern float DAT_0036e0c4;

// USA 0036DF60 <- EU 0036DF3C (Ghidra, non-matching)
// GLOBAL DAT_0036e0b4 float
// GLOBAL DAT_0036e0b8 float
// GLOBAL DAT_0036e0bc float
// GLOBAL DAT_0036e0c0 uint
// GLOBAL DAT_0036e0c4 float

undefined4 func_0036DF60(byte *param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  uint uVar8;
  
  fVar7 = func_0036EAF8(param_1,param_2);
  func_0068C794((float *)(param_1 + 0x5c),fVar7,DAT_0036e0bc,DAT_0036e0b8,DAT_0036e0b4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x3d0);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x3d8);
  uVar3 = DAT_0036e0c0;
  if (param_1[0x68] == 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x44);
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 0x44);
  uVar4 = *(uint *)(param_1 + 0x4c);
  uVar5 = *(uint *)(param_1 + 0x54);
  if (uVar4 < uVar2) {
    fVar7 = DAT_0036e0c4;
    fVar1 = ALBW_AS_F32(func_00691F30(uVar4 - uVar2,(uint)(uVar2 <= uVar4)));
    uVar8 = VectorFloatToUnsigned(fVar1 * fVar7,3);
    if ((uVar8 < uVar5) && (uVar5 = uVar8, uVar8 <= uVar3)) {
      uVar5 = uVar3;
    }
    uVar5 = uVar2 + uVar5;
    bVar6 = uVar5 == uVar4;
  }
  else {
    fVar7 = (float)VectorUnsignedToFloat(uVar4 - uVar2,(byte)(in_fpscr >> 0x15) & 3);
    uVar8 = VectorFloatToUnsigned(fVar7 * DAT_0036e0c4,3);
    if ((DAT_0036e0c0 <= uVar8) && (uVar3 = uVar8, uVar5 < uVar8)) {
      uVar3 = uVar5;
    }
    bVar6 = true;
    uVar5 = uVar4;
    if (uVar2 < uVar4) {
      uVar3 = uVar2 + uVar3;
      if ((uVar4 <= uVar3) || (uVar3 < uVar2)) goto LAB_0036e074;
    }
    else {
      uVar5 = uVar2;
      if (((uVar2 == uVar4) || (uVar3 = uVar2 - uVar3, uVar5 = uVar4, uVar3 <= uVar4)) ||
         (uVar2 < uVar3)) goto LAB_0036e074;
    }
    bVar6 = false;
    uVar5 = uVar3;
  }
LAB_0036e074:
  param_1[0x6c] = bVar6;
  *(uint *)(param_1 + 0x44) = uVar5;
  if (!bVar6) {
    return 0;
  }
  return func_0036E490(param_1,1,param_2);
}


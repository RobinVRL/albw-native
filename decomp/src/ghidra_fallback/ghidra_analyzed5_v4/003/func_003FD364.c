#include "ghidra_types.h"

extern float DAT_003fd66c;
extern float DAT_003fd670;
extern float DAT_003fd674;
extern float DAT_003fd678;

// USA 003FD364 <- EU 003FD344 (Ghidra, non-matching)
// GLOBAL DAT_003fd66c float
// GLOBAL DAT_003fd670 float
// GLOBAL DAT_003fd674 float
// GLOBAL DAT_003fd678 float

float func_003FD364(int param_1,float *param_2,uint param_3,undefined2 param_4,float fparam_0)

{
  uint *puVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  switch(param_4) {
  default:
    puVar1 = (uint *)0x0;
    break;
  case 1:
    puVar1 = (uint *)(param_1 + 0x24);
    break;
  case 2:
    puVar1 = (uint *)(param_1 + 0x28);
    break;
  case 3:
    puVar1 = (uint *)(param_1 + 0x2c);
    break;
  case 4:
    puVar1 = (uint *)(param_1 + 0x30);
    break;
  case 5:
    puVar1 = (uint *)(param_1 + 0x34);
    break;
  case 6:
    puVar1 = (uint *)(param_1 + 0x38);
    break;
  case 7:
    puVar1 = (uint *)(param_1 + 0x3c);
    break;
  case 8:
    puVar1 = (uint *)(param_1 + 0x40);
    break;
  case 9:
    puVar1 = (uint *)(param_1 + 0x44);
    break;
  case 10:
    puVar1 = (uint *)(param_1 + 0x48);
    break;
  case 0xb:
    puVar1 = (uint *)(param_1 + 0x4c);
    break;
  case 0xc:
    puVar1 = (uint *)(param_1 + 0x130);
    break;
  case 0xe:
    puVar1 = (uint *)(param_1 + 0x134);
    break;
  case 0x10:
    puVar1 = (uint *)(param_1 + 0x138);
    break;
  case 0x12:
    puVar1 = (uint *)(param_1 + 0x50);
  }
  uVar2 = *puVar1;
  if ((param_3 & 0x10000) != 0) {
    fVar3 = *param_2;
    fVar4 = DAT_003fd66c;
    if ((fVar3 <= DAT_003fd66c) && (fVar4 = fVar3, fVar3 < DAT_003fd670)) {
      fVar4 = DAT_003fd670;
    }
    fparam_0 = (float)VectorFloatToUnsigned(DAT_003fd678 + fVar4 * DAT_003fd674,3);
    uVar2 = uVar2 & 0xffffff00 | (uint)ALBW_AS_U32(fparam_0) & 0xff;
  }
  if ((param_3 & 0x20000) != 0) {
    fVar3 = param_2[1];
    fVar4 = DAT_003fd66c;
    if ((fVar3 <= DAT_003fd66c) && (fVar4 = fVar3, fVar3 < DAT_003fd670)) {
      fVar4 = DAT_003fd670;
    }
    fparam_0 = (float)VectorFloatToUnsigned(DAT_003fd678 + fVar4 * DAT_003fd674,3);
    uVar2 = uVar2 & 0xffff00ff | ((uint)ALBW_AS_U32(fparam_0) & 0xff) << 8;
  }
  if ((param_3 & 0x40000) != 0) {
    fVar3 = param_2[2];
    fVar4 = DAT_003fd66c;
    if ((fVar3 <= DAT_003fd66c) && (fVar4 = fVar3, fVar3 < DAT_003fd670)) {
      fVar4 = DAT_003fd670;
    }
    fparam_0 = (float)VectorFloatToUnsigned(DAT_003fd678 + fVar4 * DAT_003fd674,3);
    uVar2 = uVar2 & 0xff00ffff | ((uint)ALBW_AS_U32(fparam_0) & 0xff) << 0x10;
  }
  if ((param_3 & 0x80000) != 0) {
    fVar3 = param_2[3];
    fVar4 = DAT_003fd66c;
    if ((fVar3 <= DAT_003fd66c) && (fVar4 = fVar3, fVar3 < DAT_003fd670)) {
      fVar4 = DAT_003fd670;
    }
    fparam_0 = (float)VectorFloatToUnsigned(DAT_003fd678 + fVar4 * DAT_003fd674,3);
    uVar2 = uVar2 & 0xffffff | (int)ALBW_AS_U32(fparam_0) << 0x18;
  }
  switch(param_4) {
  default:
    return fparam_0;
  case 1:
    *(uint *)(param_1 + 0x24) = uVar2;
    return fparam_0;
  case 2:
    *(uint *)(param_1 + 0x28) = uVar2;
    return fparam_0;
  case 3:
    *(uint *)(param_1 + 0x2c) = uVar2;
    return fparam_0;
  case 4:
    *(uint *)(param_1 + 0x30) = uVar2;
    return fparam_0;
  case 5:
    *(uint *)(param_1 + 0x34) = uVar2;
    return fparam_0;
  case 6:
    *(uint *)(param_1 + 0x38) = uVar2;
    return fparam_0;
  case 7:
    *(uint *)(param_1 + 0x3c) = uVar2;
    return fparam_0;
  case 8:
    *(uint *)(param_1 + 0x40) = uVar2;
    return fparam_0;
  case 9:
    *(uint *)(param_1 + 0x44) = uVar2;
    return fparam_0;
  case 10:
    *(uint *)(param_1 + 0x48) = uVar2;
    return fparam_0;
  case 0xb:
    *(uint *)(param_1 + 0x4c) = uVar2;
    return fparam_0;
  case 0xc:
    break;
  case 0xe:
    param_1 = param_1 + 4;
    break;
  case 0x10:
    param_1 = param_1 + 8;
    break;
  case 0x12:
    *(uint *)(param_1 + 0x50) = uVar2;
    return fparam_0;
  }
  *(uint *)(param_1 + 0x130) = uVar2;
  return fparam_0;
}


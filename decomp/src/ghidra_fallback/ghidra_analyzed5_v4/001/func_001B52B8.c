#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern undefined4 DAT_001b5358;
extern undefined4 DAT_001b535c;
extern undefined4 DAT_001b5360;
extern float DAT_001b5364;
extern float DAT_001b5368;
extern int *DAT_001b536c;
extern float DAT_001b5370;
extern undefined4 DAT_001b5374;

// USA 001B52B8 <- EU 001B52B8 (Ghidra, non-matching)
// GLOBAL DAT_001b5358 undefined4
// GLOBAL DAT_001b535c undefined4
// GLOBAL DAT_001b5360 undefined4
// GLOBAL DAT_001b5364 float
// GLOBAL DAT_001b5368 float
// GLOBAL DAT_001b536c int *
// GLOBAL DAT_001b5370 float
// GLOBAL DAT_001b5374 undefined4

void func_001B52B8(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = DAT_001b5358;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_001b5358;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined4 *)(param_1 + 0x950) = DAT_001b535c;
  func_004FC07C(param_1,3,0xffffffff,0);
  uVar1 = DAT_001b5360;
  *(undefined4 *)(param_1 + 0x934) = 0xb4;
  *(undefined4 *)(param_1 + 0x938) = uVar1;
  piVar2 = DAT_001b536c;
  *(undefined4 *)(param_1 + 0x930) = 0;
  fVar5 = DAT_001b5364;
  fVar6 = DAT_001b5368;
  uVar3 = func_00111A64((uint *)(*piVar2 + 0x660));
  uVar1 = DAT_001b5374;
  fVar4 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x94c) = fVar4 * DAT_001b5370 * fVar5 + fVar6;
  *(undefined4 *)(param_1 + 0x944) = 0;
  *(undefined4 *)(param_1 + 0x948) = uVar1;
  return;
}


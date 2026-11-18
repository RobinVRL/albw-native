#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float func_0051CD84(uint *param_1,float fparam_0);
extern int func_0058A7D4(void);
extern float DAT_0021da4c;
extern undefined4 DAT_0021da50;
extern float DAT_0021da54;

// USA 0021D9C8 <- EU 0021D9C8 (Ghidra, non-matching)
// GLOBAL DAT_0021da4c float
// GLOBAL DAT_0021da50 undefined4
// GLOBAL DAT_0021da54 float

undefined4 func_0021D9C8(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x80;
  puVar2 = (uint *)func_0058A7D4();
  fVar4 = func_0051CD84(puVar2,DAT_0021da4c);
  uVar1 = DAT_0021da50;
  iVar3 = (int)fVar4 + 0x1e;
  *(int *)(param_1 + 0x8e8) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x8ec) = uVar1;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x8ec) = DAT_0021da54 / fVar4;
  }
  *(undefined4 *)(param_1 + 0x8e4) = 0;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  return func_004FABDC(param_1,0,0xffffffff,0);
}


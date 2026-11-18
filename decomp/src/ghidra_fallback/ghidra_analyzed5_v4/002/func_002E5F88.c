#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float func_0051CD84(uint *param_1,float fparam_0);
extern int func_0058A7D4(void);
extern float DAT_002e5ff4;
extern undefined4 DAT_002e5ff8;
extern float DAT_002e5ffc;

// USA 002E5F88 <- EU 002E5F64 (Ghidra, non-matching)
// GLOBAL DAT_002e5ff4 float
// GLOBAL DAT_002e5ff8 undefined4
// GLOBAL DAT_002e5ffc float

undefined4 func_002E5F88(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  
  *(undefined1 *)(*(int *)(param_1 + 0x420) + 0x22) = 0;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x80;
  puVar2 = (uint *)func_0058A7D4();
  fVar4 = func_0051CD84(puVar2,DAT_002e5ff4);
  uVar1 = DAT_002e5ff8;
  iVar3 = (int)fVar4 + 10;
  *(int *)(param_1 + 0x8e8) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x8ec) = uVar1;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x8ec) = DAT_002e5ffc / fVar4;
  }
  *(undefined4 *)(param_1 + 0x8e4) = 0;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  return func_004FABDC(param_1,0,0xffffffff,0);
}


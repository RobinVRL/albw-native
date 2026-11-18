#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float func_0051CD84(uint *param_1,float fparam_0);
extern int func_0058A7D4(void);
extern float DAT_002fa0bc;
extern undefined4 DAT_002fa0c0;
extern float DAT_002fa0c4;

// USA 002FA060 <- EU 002FA03C (Ghidra, non-matching)
// GLOBAL DAT_002fa0bc float
// GLOBAL DAT_002fa0c0 undefined4
// GLOBAL DAT_002fa0c4 float

undefined4 func_002FA060(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x80;
  puVar2 = (uint *)func_0058A7D4();
  fVar4 = func_0051CD84(puVar2,DAT_002fa0bc);
  uVar1 = DAT_002fa0c0;
  iVar3 = (int)fVar4 + 0x1e;
  *(int *)(param_1 + 0x8e4) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x8e8) = uVar1;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x8e8) = DAT_002fa0c4 / fVar4;
  }
  *(undefined4 *)(param_1 + 0x8e0) = 0;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  return func_004FABDC(param_1,3,0xffffffff,0);
}


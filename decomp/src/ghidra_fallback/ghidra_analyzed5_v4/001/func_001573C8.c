#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float func_0051CD84(uint *param_1,float fparam_0);
extern int func_0058A7D4(void);
extern float DAT_00157490;
extern undefined4 DAT_00157494;
extern float DAT_00157498;
extern undefined4 DAT_0015749c;

// USA 001573C8 <- EU 001573CC (Ghidra, non-matching)
// GLOBAL DAT_00157490 float
// GLOBAL DAT_00157494 undefined4
// GLOBAL DAT_00157498 float
// GLOBAL DAT_0015749c undefined4

undefined4 func_001573C8(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  uVar5 = DAT_00157494;
  fVar6 = DAT_00157490;
  *(undefined1 *)(*(int *)(param_1 + 0x420) + 0x22) = 0;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x80;
  uVar1 = DAT_0015749c;
  if (*(char *)(param_1 + 0xa30) == '\0') {
    *(undefined4 *)(param_1 + 0x8e8) = 100;
    *(undefined4 *)(param_1 + 0x8ec) = uVar1;
    *(undefined4 *)(param_1 + 0x8e4) = 0;
  }
  else {
    puVar2 = (uint *)func_0058A7D4();
    fVar4 = func_0051CD84(puVar2,DAT_00157498);
    iVar3 = (int)fVar4 + 100;
    *(int *)(param_1 + 0x8e8) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x8ec) = uVar5;
    }
    else {
      fVar4 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x8ec) = fVar6 / fVar4;
    }
    *(undefined4 *)(param_1 + 0x8e4) = 0;
    *(undefined1 *)(param_1 + 0xa30) = 0;
  }
  *(undefined4 *)(param_1 + 0x3dc) = uVar5;
  *(undefined4 *)(param_1 + 0x3e4) = uVar5;
  return func_004FABDC(param_1,0,0xffffffff,0);
}


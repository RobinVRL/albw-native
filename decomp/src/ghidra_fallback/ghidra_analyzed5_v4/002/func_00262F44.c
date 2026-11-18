#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float func_0051CD84(uint *param_1,float fparam_0);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_0058A7D4(void);
extern float DAT_00263014;
extern undefined4 DAT_00263018;
extern float DAT_0026301c;

// USA 00262F44 <- EU 00262F6C (Ghidra, non-matching)
// GLOBAL DAT_00263014 float
// GLOBAL DAT_00263018 undefined4
// GLOBAL DAT_0026301c float

undefined4 func_00262F44(int param_1)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  uint *puVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  
  *(undefined1 *)(*(int *)(param_1 + 0x420) + 0x22) = 0;
  puVar2 = (undefined2 *)func_0054DDF4(param_1,0);
  *(undefined2 *)(*(int *)(param_1 + 0x420) + 0x30) = *puVar2;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x80;
  puVar3 = (uint *)func_0058A7D4();
  fVar5 = func_0051CD84(puVar3,DAT_00263014);
  uVar1 = DAT_00263018;
  iVar4 = (int)fVar5 + 0x3c;
  *(int *)(param_1 + 0x8e8) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x8ec) = uVar1;
  }
  else {
    fVar5 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x8ec) = DAT_0026301c / fVar5;
  }
  *(undefined4 *)(param_1 + 0x8e4) = 0;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  return func_004FABDC(param_1,0,0xffffffff,0);
}


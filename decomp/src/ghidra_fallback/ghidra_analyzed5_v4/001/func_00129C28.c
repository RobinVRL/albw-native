#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern undefined8 func_0058A474(undefined4 param_1,uint param_2);
extern int func_0058A7D4(void);
extern float DAT_00129ce4;
extern float DAT_00129ce8;
extern float DAT_00129cec;
extern undefined4 DAT_00129cf0;

// USA 00129C28 <- EU 00129C28 (Ghidra, non-matching)
// GLOBAL DAT_00129ce4 float
// GLOBAL DAT_00129ce8 float
// GLOBAL DAT_00129cec float
// GLOBAL DAT_00129cf0 undefined4

undefined4 func_00129C28(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  int iVar5;
  float fVar6;
  undefined8 uVar7;
  
  uVar7 = func_0058A474(param_1,0x32);
  if ((int)uVar7 == 0) {
    *(undefined1 *)(param_1 + 0x974) = 2;
  }
  else {
    *(undefined1 *)(param_1 + 0x974) = 0;
  }
  *(undefined1 *)(param_1 + 0x977) = 0;
  puVar2 = (uint *)func_0058A7D4();
  fVar6 = DAT_00129ce4;
  uVar3 = func_00111A64(puVar2);
  uVar1 = DAT_00129cf0;
  fVar4 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  iVar5 = VectorFloatToUnsigned(DAT_00129cec + fVar4 * DAT_00129ce8 * fVar6 * DAT_00129cec,3);
  *(int *)(param_1 + 0x96c) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x970) = uVar1;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x970) = fVar6 / fVar4;
  }
  *(undefined4 *)(param_1 + 0x968) = 0;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  return func_004FC07C(param_1,0,0xffffffff,0);
}


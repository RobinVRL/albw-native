#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern undefined4 DAT_0038145c;
extern undefined4 *DAT_00381460;
extern float DAT_00381464;

// USA 003813E8 <- EU 003813C4 (Ghidra, non-matching)
// GLOBAL DAT_0038145c undefined4
// GLOBAL DAT_00381460 undefined4 *
// GLOBAL DAT_00381464 float

undefined4 func_003813E8(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  undefined4 uVar5;
  
  *(undefined1 *)(param_1 + 0xb2c) = 0;
  uVar5 = DAT_0038145c;
  *(undefined1 *)(param_1 + 0xb2d) = 0;
  *(undefined1 *)(param_1 + 0xb2e) = 0;
  *(undefined4 *)(param_1 + 0xb0c) = uVar5;
  *(undefined1 *)(param_1 + 0xb2f) = 0;
  puVar1 = DAT_00381460;
  *(undefined4 *)(param_1 + 0x3dc) = uVar5;
  *(undefined4 *)(param_1 + 0x3e4) = uVar5;
  uVar2 = func_00111A64((uint *)*puVar1);
  iVar3 = (int)((ulonglong)uVar2 * 0x46 >> 0x20) + 0x46;
  *(int *)(param_1 + 0xaec) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0xaf0) = uVar5;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0xaf0) = DAT_00381464 / fVar4;
  }
  *(undefined4 *)(param_1 + 0xae8) = 0;
  return func_004FC07C(param_1,2,0xffffffff,0);
}


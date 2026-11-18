#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern undefined4 DAT_002a9d08;
extern int *DAT_002a9d0c;
extern float DAT_002a9d10;

// USA 002A9CAC <- EU 002A9C88 (Ghidra, non-matching)
// GLOBAL DAT_002a9d08 undefined4
// GLOBAL DAT_002a9d0c int *
// GLOBAL DAT_002a9d10 float

void func_002A9CAC(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  undefined4 uVar5;
  
  func_004FC07C(param_1,0,0xffffffff,0);
  piVar1 = DAT_002a9d0c;
  uVar5 = DAT_002a9d08;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_002a9d08;
  *(undefined4 *)(param_1 + 0x3e0) = uVar5;
  *(undefined4 *)(param_1 + 0x3e4) = uVar5;
  uVar2 = func_00111A64((uint *)(*piVar1 + 0x660));
  iVar3 = (int)((ulonglong)uVar2 * 0x1e >> 0x20) + 0x5a;
  *(int *)(param_1 + 0x8e8) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x8ec) = uVar5;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x8ec) = DAT_002a9d10 / fVar4;
  }
  *(undefined4 *)(param_1 + 0x8e4) = 0;
  return;
}


#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0058A7D4(void);
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0020b8c0;
extern float DAT_0020b8c4;

// USA 0020B820 <- EU 0020B820 (Ghidra, non-matching)
// GLOBAL DAT_0020b8c0 undefined4
// GLOBAL DAT_0020b8c4 float

undefined4 func_0020B820(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  fVar6 = DAT_0020b8c4;
  uVar5 = DAT_0020b8c0;
  iVar1 = param_1;
  if (-1 < param_2) {
    *(int *)(param_1 + 0x998) = param_2;
    iVar1 = 0;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x99c) = uVar5;
  }
  if (-1 < param_2) {
    if (param_2 != 0) {
      fVar4 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x99c) = fVar6 / fVar4;
    }
    *(int *)(param_1 + 0x994) = iVar1;
  }
  else {
    puVar2 = (uint *)func_0058A7D4();
    uVar3 = func_00111A64(puVar2);
    iVar1 = (int)((ulonglong)uVar3 * 10 >> 0x20) + 10;
    *(int *)(param_1 + 0x998) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x99c) = uVar5;
    }
    else {
      fVar4 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x99c) = fVar6 / fVar4;
    }
    *(int *)(param_1 + 0x994) = 0;
  }
  return func_0065D630((undefined4 *)(param_1 + 0x8bc),8);
}


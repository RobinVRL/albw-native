#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0058A7D4(void);
extern float DAT_0037f950;
extern float DAT_0037f954;
extern float DAT_0037f958;
extern undefined4 DAT_0037f95c;
extern undefined4 DAT_0037f960;

// USA 0037F880 <- EU 0037F85C (Ghidra, non-matching)
// GLOBAL DAT_0037f950 float
// GLOBAL DAT_0037f954 float
// GLOBAL DAT_0037f958 float
// GLOBAL DAT_0037f95c undefined4
// GLOBAL DAT_0037f960 undefined4

undefined4 func_0037F880(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  int iVar5;
  float fVar6;
  
  puVar2 = (uint *)func_0058A7D4();
  uVar3 = func_00111A64(puVar2);
  *(int *)(param_1 + 0xad8) = (int)((ulonglong)uVar3 * 4 >> 0x20) * 0x40000000;
  puVar2 = (uint *)func_0058A7D4();
  fVar6 = DAT_0037f950;
  uVar3 = func_00111A64(puVar2);
  uVar1 = DAT_0037f95c;
  fVar4 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  iVar5 = VectorFloatToUnsigned(DAT_0037f958 + fVar4 * DAT_0037f954 * fVar6 * DAT_0037f958,3);
  *(int *)(param_1 + 0xaec) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0xaf0) = uVar1;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0xaf0) = fVar6 / fVar4;
  }
  *(undefined4 *)(param_1 + 0xae8) = 0;
  *(undefined1 *)(param_1 + 0xb2c) = 0;
  *(undefined1 *)(param_1 + 0xb2d) = 0;
  *(undefined1 *)(param_1 + 0xb2e) = 0;
  *(undefined4 *)(param_1 + 0xb0c) = uVar1;
  *(undefined1 *)(param_1 + 0xb2f) = 0;
  uVar1 = DAT_0037f960;
  *(undefined4 *)(param_1 + 0xaf8) = 4;
  *(undefined4 *)(param_1 + 0xafc) = uVar1;
  *(undefined4 *)(param_1 + 0xaf4) = 0;
  return func_004FC07C(param_1,3,0xffffffff,0);
}


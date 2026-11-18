#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0021B518(int *param_1);
extern undefined4 *DAT_0021bf6c;
extern float DAT_0021bf70;
extern float DAT_0021bf74;
extern float DAT_0021bf78;
extern float DAT_0021bf7c;
extern int DAT_0021bf80;

// USA 0021BEF8 <- EU 0021BEF8 (Ghidra, non-matching)
// GLOBAL DAT_0021bf6c undefined4 *
// GLOBAL DAT_0021bf70 float
// GLOBAL DAT_0021bf74 float
// GLOBAL DAT_0021bf78 float
// GLOBAL DAT_0021bf7c float
// GLOBAL DAT_0021bf80 int

void func_0021BEF8(int *param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  func_0021B518(param_1);
  puVar1 = DAT_0021bf6c;
  fVar5 = DAT_0021bf70;
  uVar3 = func_00111A64((uint *)*DAT_0021bf6c);
  fVar4 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  param_1[0xfa] = (int)((fVar4 * DAT_0021bf74 * fVar5 + DAT_0021bf78) * DAT_0021bf7c);
  uVar3 = func_00111A64((uint *)*puVar1);
  uVar2 = (undefined1)((ulonglong)uVar3 * 2 >> 0x20);
  if ((int)((ulonglong)uVar3 * 2 >> 0x20) != 0) {
    uVar2 = 1;
  }
  *(undefined1 *)(DAT_0021bf80 + (int)param_1) = uVar2;
  return;
}


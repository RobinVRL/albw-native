#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int *DAT_0033dc10;
extern float DAT_0033dc14;
extern float DAT_0033dc18;
extern float DAT_0033dc1c;
extern float DAT_0033dc20;

// USA 0033DB6C <- EU 0033DB48 (Ghidra, non-matching)
// GLOBAL DAT_0033dc10 int *
// GLOBAL DAT_0033dc14 float
// GLOBAL DAT_0033dc18 float
// GLOBAL DAT_0033dc1c float
// GLOBAL DAT_0033dc20 float

void func_0033DB6C(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  piVar1 = DAT_0033dc10;
  fVar4 = DAT_0033dc14;
  uVar2 = func_00111A64((uint *)(*DAT_0033dc10 + 0x660));
  fVar7 = DAT_0033dc20;
  fVar6 = DAT_0033dc1c;
  fVar5 = DAT_0033dc18;
  fVar3 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  *(int *)(param_1 + 0x470) = (int)((fVar3 * DAT_0033dc18 * fVar4 - DAT_0033dc1c) * DAT_0033dc20);
  uVar2 = func_00111A64((uint *)(*piVar1 + 0x660));
  fVar3 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  *(int *)(param_1 + 0x474) = (int)((fVar3 * fVar5 * fVar4 - fVar6) * fVar7);
  uVar2 = func_00111A64((uint *)(*piVar1 + 0x660));
  fVar3 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  *(int *)(param_1 + 0x478) = (int)((fVar3 * fVar5 * fVar4 - fVar6) * fVar7);
  *(undefined4 *)(param_1 + 0x46c) = 0;
  *(undefined4 *)(param_1 + 1000) = 0;
  *(undefined4 *)(param_1 + 0x468) = 0;
  return;
}


#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_001546BC(int param_1,int param_2);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0058A7D4(void);
extern float DAT_00154d18;
extern float DAT_00154d1c;
extern float DAT_00154d20;
extern float DAT_00154d24;
extern float DAT_00154d28;

// USA 00154C60 <- EU 00154C64 (Ghidra, non-matching)
// GLOBAL DAT_00154d18 float
// GLOBAL DAT_00154d1c float
// GLOBAL DAT_00154d20 float
// GLOBAL DAT_00154d24 float
// GLOBAL DAT_00154d28 float

void func_00154C60(int param_1)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  func_004FC07C(param_1,1,0xffffffff,0);
  func_001546BC(param_1,1);
  puVar2 = (uint *)func_0058A7D4();
  fVar8 = DAT_00154d18;
  uVar3 = func_00111A64(puVar2);
  fVar6 = DAT_00154d20;
  fVar4 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = fVar4 * DAT_00154d1c * fVar8;
  uVar3 = in_fpscr & 0xfffffff | (uint)(fVar7 == DAT_00154d20) << 0x1e |
          (uint)(DAT_00154d20 <= fVar7) << 0x1d;
  bVar1 = (byte)(uVar3 >> 0x18);
  fVar4 = DAT_00154d24;
  if (((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) &&
     (fVar4 = DAT_00154d28, (int)ALBW_AS_U32(fVar7) < 0x3f800000)) {
    fVar4 = DAT_00154d24 + DAT_00154d24 * fVar7;
  }
  iVar5 = VectorFloatToUnsigned(fVar4,3);
  *(int *)(param_1 + 0x914) = iVar5;
  if (iVar5 == 0) {
    *(float *)(param_1 + 0x918) = fVar6;
  }
  else {
    fVar6 = (float)VectorUnsignedToFloat(iVar5,(byte)(uVar3 >> 0x15) & 3);
    *(float *)(param_1 + 0x918) = fVar8 / fVar6;
  }
  *(undefined4 *)(param_1 + 0x910) = 0;
  return;
}


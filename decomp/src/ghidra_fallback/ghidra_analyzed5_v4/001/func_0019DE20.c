#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0019D5C4(int param_1,float *param_2,int param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0058A7D4(void);
extern float DAT_0019dee4;
extern float DAT_0019dee8;
extern float DAT_0019deec;
extern float DAT_0019def0;
extern float DAT_0019def4;

// USA 0019DE20 <- EU 0019DE20 (Ghidra, non-matching)
// GLOBAL DAT_0019dee4 float
// GLOBAL DAT_0019dee8 float
// GLOBAL DAT_0019deec float
// GLOBAL DAT_0019def0 float
// GLOBAL DAT_0019def4 float

void func_0019DE20(int param_1)

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
  _Alignas(8) unsigned char albw_frame[0x20];
  #define afStack_18 ((float *)(albw_frame + 0x8))
  func_004FC07C(param_1,0,0xffffffff,0);
  func_0019D5C4(param_1,afStack_18,1);
  puVar2 = (uint *)func_0058A7D4();
  fVar8 = DAT_0019dee4;
  uVar3 = func_00111A64(puVar2);
  fVar6 = DAT_0019deec;
  fVar4 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = fVar4 * DAT_0019dee8 * fVar8;
  uVar3 = in_fpscr & 0xfffffff | (uint)(fVar7 == DAT_0019deec) << 0x1e |
          (uint)(DAT_0019deec <= fVar7) << 0x1d;
  bVar1 = (byte)(uVar3 >> 0x18);
  fVar4 = DAT_0019def0;
  if (((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) &&
     (fVar4 = DAT_0019def4, (int)ALBW_AS_U32(fVar7) < 0x3f800000)) {
    fVar4 = DAT_0019def0 + DAT_0019def0 * fVar7;
  }
  iVar5 = VectorFloatToUnsigned(fVar4,3);
  *(int *)(param_1 + 0x8f8) = iVar5;
  if (iVar5 == 0) {
    *(float *)(param_1 + 0x8fc) = fVar6;
  }
  else {
    fVar6 = (float)VectorUnsignedToFloat(iVar5,(byte)(uVar3 >> 0x15) & 3);
    *(float *)(param_1 + 0x8fc) = fVar8 / fVar6;
  }
  *(undefined4 *)(param_1 + 0x8f4) = 0;
  return;
}


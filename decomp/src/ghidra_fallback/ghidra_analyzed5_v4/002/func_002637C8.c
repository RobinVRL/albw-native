#include "ghidra_types.h"

extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float DAT_00263928;
extern float DAT_0026392c;
extern float DAT_00263930;
extern float DAT_00263934;
extern float DAT_00263938;
extern float DAT_0026393c;
extern float DAT_00263940;
extern float DAT_00263944;

// USA 002637C8 <- EU 002637F0 (Ghidra, non-matching)
// GLOBAL DAT_00263928 float
// GLOBAL DAT_0026392c float
// GLOBAL DAT_00263930 float
// GLOBAL DAT_00263934 float
// GLOBAL DAT_00263938 float
// GLOBAL DAT_0026393c float
// GLOBAL DAT_00263940 float
// GLOBAL DAT_00263944 float

undefined4 func_002637C8(int param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  
  if (*(char *)(param_1 + 0x8c1) == '\x02') {
    *(undefined1 *)(param_1 + 0xa48) = 0;
    *(undefined4 *)(param_1 + 0xa24) = 1;
  }
  fVar7 = DAT_00263928;
  pfVar1 = *(float **)(param_1 + 0xa14);
  fVar5 = *(float *)(param_1 + 0xa10);
  pfVar1[5] = *(float *)(param_1 + 1000);
  pfVar1[6] = fVar5;
  *pfVar1 = fVar7;
  pfVar1[4] = fVar7;
  pfVar1[3] = fVar7;
  fVar5 = DAT_00263930;
  pfVar1[1] = DAT_0026392c;
  pfVar1[2] = fVar5;
  fVar5 = DAT_00263934;
  puVar2 = *(undefined4 **)(param_1 + 0xa14);
  puVar2[4] = *puVar2;
  puVar2[3] = ALBW_AS_U32(fVar7);
  uVar4 = *(uint *)(param_1 + 0xa10);
  func_004D80A4((float *)(param_1 + 0xa4c),uVar4,fVar5);
  func_004D80A4((float *)(param_1 + 0x3dc),uVar4,DAT_00263938);
  *(undefined4 *)(param_1 + 0xa18) = *(undefined4 *)(param_1 + 0x3dc);
  *(undefined4 *)(param_1 + 0xa1c) = *(undefined4 *)(param_1 + 0x3e0);
  *(undefined4 *)(param_1 + 0xa20) = *(undefined4 *)(param_1 + 0x3e4);
  fVar5 = DAT_00263940;
  *(float *)(param_1 + 0xa28) =
       SQRT(*(float *)(param_1 + 0x3dc) * *(float *)(param_1 + 0x3dc) +
            *(float *)(param_1 + 0x3e4) * *(float *)(param_1 + 0x3e4)) * DAT_0026393c;
  iVar3 = *(int *)(param_1 + 0xa10) - *(int *)(param_1 + 0xa0c);
  fVar6 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = fVar6 * fVar5;
  if (iVar3 < 0) {
    fVar6 = fVar6 - DAT_00263944;
  }
  if (fVar6 <= fVar7) {
    return func_004FABDC(param_1,6,0x18,0);
  }
  return func_004FABDC(param_1,5,0x18,0);
}


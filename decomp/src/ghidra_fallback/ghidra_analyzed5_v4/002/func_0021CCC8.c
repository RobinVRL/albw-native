#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0058A7D4(void);
extern float fRam0021cd80;
extern undefined4 uRam0021cd7c;
extern float DAT_00115e08;
extern float DAT_00115e0c;

// USA 0021CCC8 <- EU 0021CCC8 (Ghidra, non-matching)
// GLOBAL DAT_00115e08 float
// GLOBAL DAT_00115e0c float
// GLOBAL UNK_0021cd7c undefined4
// GLOBAL UNK_0021cd80 float

void func_0021CCC8(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  
  func_004FABDC(param_1,1,0xffffffff,0);
  puVar1 = (uint *)func_0058A7D4();
  uVar2 = func_00111A64(puVar1);
  fVar5 = fRam0021cd80;
  uVar9 = uRam0021cd7c;
  iVar3 = (int)((ulonglong)uVar2 * 0x3c >> 0x20) + 0x78;
  *(int *)(param_1 + 0x900) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x904) = uVar9;
  }
  else {
    fVar6 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x904) = fVar5 / fVar6;
  }
  *(undefined4 *)(param_1 + 0x8fc) = 0;
  puVar1 = (uint *)func_0058A7D4();
  uVar2 = func_00111A64(puVar1);
  *(char *)(param_1 + 0x8e0) = (char)((ulonglong)uVar2 * 4 >> 0x20);
  pfVar4 = (float *)(param_1 + 0x8e4);
  func_004D80A4(pfVar4,(int)((ulonglong)uVar2 * 4 >> 0x20) << 0x1e,fVar5);
  *(undefined4 *)(param_1 + 0x8e8) = uVar9;
  fVar6 = *pfVar4;
  fVar7 = *(float *)(param_1 + 0x8e8);
  fVar8 = *(float *)(param_1 + 0x8ec);
  fVar5 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8);
  if (DAT_00115e0c < fVar5) {
    fVar5 = DAT_00115e08 / fVar5;
    *pfVar4 = fVar6 * fVar5;
    *(float *)(param_1 + 0x8e8) = fVar7 * fVar5;
    *(float *)(param_1 + 0x8ec) = fVar8 * fVar5;
    return;
  }
  return;
}


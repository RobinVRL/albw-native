#include "ghidra_types.h"

extern int func_00448138(undefined4 param_1,int param_2,float fparam_0);
extern int func_0058E048(int param_1);
extern int *DAT_00449bf8;
extern int *DAT_00449bfc;
extern float DAT_00449c00;
extern float DAT_00449c04;
extern float DAT_00449c08;
extern float DAT_00449c0c;
extern float DAT_00449c10;
extern float DAT_00449c14;

// USA 00449B1C <- EU 00449AF4 (Ghidra, non-matching)
// GLOBAL DAT_00449bf8 int *
// GLOBAL DAT_00449bfc int *
// GLOBAL DAT_00449c00 float
// GLOBAL DAT_00449c04 float
// GLOBAL DAT_00449c08 float
// GLOBAL DAT_00449c0c float
// GLOBAL DAT_00449c10 float
// GLOBAL DAT_00449c14 float

void func_00449B1C(int param_1)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar3 = func_0058E048(*DAT_00449bf8);
  fVar2 = DAT_00449c14;
  fVar5 = DAT_00449c10;
  if (iVar3 != 0) {
    fVar4 = *(float *)(*DAT_00449bfc + 0x10) - DAT_00449c00;
    fVar6 = *(float *)(*DAT_00449bfc + 0x14) - DAT_00449c04;
    fVar7 = SQRT(fVar4 * fVar4 + fVar6 * fVar6);
    if (DAT_00449c0c < fVar7) {
      fVar7 = DAT_00449c08 / fVar7;
      fVar4 = fVar4 * fVar7;
      fVar6 = fVar6 * fVar7;
    }
    fVar4 = *(float *)(param_1 + 0x250) - fVar4;
    fVar6 = *(float *)(param_1 + 0x254) - fVar6;
    bVar1 = DAT_00449c10 <= fVar4;
    *(float *)(param_1 + 0x250) = fVar4;
    *(float *)(param_1 + 0x254) = fVar6;
    fVar7 = fVar5;
    if ((bVar1) && (fVar7 = fVar4, fVar2 < fVar4)) {
      fVar7 = fVar2;
    }
    *(float *)(param_1 + 0x250) = fVar7;
    if ((fVar5 <= fVar6) && (fVar5 = fVar6, fVar2 < fVar6)) {
      fVar5 = fVar2;
    }
    *(float *)(param_1 + 0x254) = fVar5;
    fVar7 = fVar7 - *(float *)(param_1 + 0x248);
    fVar5 = fVar5 - *(float *)(param_1 + 0x24c);
    func_00448138(param_1,1,SQRT(fVar7 * fVar7 + fVar5 * fVar5));
    *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_1 + 0x250);
    *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)(param_1 + 0x254);
  }
  return;
}


#include "ghidra_types.h"

extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004FB4E0(int param_1,float fparam_0);
extern undefined4 DAT_0021dccc;
extern undefined4 DAT_0021dcd0;
extern undefined4 DAT_0021dcd4;
extern float DAT_0021dcd8;
extern float DAT_0021dcdc;
extern float DAT_0021dce0;

// USA 0021DC08 <- EU 0021DC08 (Ghidra, non-matching)
// GLOBAL DAT_0021dccc undefined4
// GLOBAL DAT_0021dcd0 undefined4
// GLOBAL DAT_0021dcd4 undefined4
// GLOBAL DAT_0021dcd8 float
// GLOBAL DAT_0021dcdc float
// GLOBAL DAT_0021dce0 float

undefined4 func_0021DC08(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fparam_0;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  uVar1 = DAT_0021dccc;
  puVar3 = *(undefined4 **)(param_1 + 0xa14);
  uVar4 = *(undefined4 *)(param_1 + 0xa10);
  puVar3[5] = *(undefined4 *)(param_1 + 1000);
  puVar3[6] = uVar4;
  uVar2 = DAT_0021dcd4;
  uVar4 = DAT_0021dcd0;
  *puVar3 = uVar1;
  puVar3[1] = uVar4;
  puVar3[2] = uVar2;
  puVar3[4] = uVar1;
  puVar3[3] = uVar1;
  puVar3 = *(undefined4 **)(param_1 + 0xa14);
  puVar3[4] = *puVar3;
  puVar3[3] = uVar1;
  if (*(char *)(param_1 + 0xa2c) == '\0') {
    func_004D80A4((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 0xa10),DAT_0021dcdc);
  }
  else {
    func_004D80A4((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 0xa10),DAT_0021dcd8);
  }
  *(undefined4 *)(param_1 + 0xa18) = *(undefined4 *)(param_1 + 0x3dc);
  *(undefined4 *)(param_1 + 0xa1c) = *(undefined4 *)(param_1 + 0x3e0);
  *(undefined4 *)(param_1 + 0xa20) = *(undefined4 *)(param_1 + 0x3e4);
  fparam_0 = DAT_0021dce0;
  *(float *)(param_1 + 0xa28) =
       SQRT(*(float *)(param_1 + 0x3dc) * *(float *)(param_1 + 0x3dc) +
            *(float *)(param_1 + 0x3e4) * *(float *)(param_1 + 0x3e4)) * DAT_0021dce0;
  return func_004FB4E0(param_1,fparam_0);
}


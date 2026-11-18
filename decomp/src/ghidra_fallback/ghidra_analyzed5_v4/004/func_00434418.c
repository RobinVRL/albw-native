#include "ghidra_types.h"

extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_0011529C(float *param_1,float *param_2);
extern int func_001153A0(float *param_1,float *param_2);
extern int func_0011549C(float *param_1,float *param_2,float *param_3);
extern float DAT_00434530;
extern undefined4 DAT_00434534;

// USA 00434418 <- EU 004343F8 (Ghidra, non-matching)
// GLOBAL DAT_00434530 float
// GLOBAL DAT_00434534 undefined4

void func_00434418(int param_1,float *param_2,float fparam_0)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = DAT_00434530;
  if ((*(byte *)(param_1 + 0x54c) & 8) != 0) {
    if ((*(byte *)(param_1 + 0x54c) & 2) == 0) {
      *(float *)(param_1 + 0x4b8) = DAT_00434530;
      *(float *)(param_1 + 0x4b4) = fVar1;
      func_001151CC((undefined4 *)(param_1 + 0x4e0),(undefined4 *)(param_1 + 0x4bc));
    }
    else {
      fVar3 = *(float *)(param_1 + 0x4b0);
      fVar4 = *(float *)(param_1 + 0x4a8);
      fVar5 = *(float *)(param_1 + 0x4ac);
      if (fVar5 <= fVar4) {
        if (fVar5 < fVar3) {
          fVar3 = fVar5;
        }
      }
      else if (fVar4 < fVar3) {
        fVar3 = fVar4;
      }
      *(float *)(param_1 + 0x4b8) = fVar3;
      uVar2 = DAT_00434534;
      *(float *)(param_1 + 0x4b4) = fVar1 / fVar3;
      *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_1 + 0x4a8);
      *(undefined4 *)(param_1 + 0x4e4) = uVar2;
      *(undefined4 *)(param_1 + 0x4e8) = uVar2;
      *(undefined4 *)(param_1 + 0x4ec) = uVar2;
      *(float *)(param_1 + 0x4f0) = fVar5;
      *(undefined4 *)(param_1 + 0x4f4) = uVar2;
      *(undefined4 *)(param_1 + 0x4f8) = uVar2;
      *(undefined4 *)(param_1 + 0x4fc) = uVar2;
      *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_1 + 0x4b0);
      if ((*(byte *)(param_1 + 0x54c) & 4) != 0) {
        func_0011549C((float *)(param_1 + 0x4e0),(float *)(param_1 + 0x4bc),
                      (float *)(param_1 + 0x4e0));
      }
    }
    if ((*(byte *)(param_1 + 0x54c) & 6) != 0) {
      func_0011529C((float *)(param_1 + 0x504),(float *)(param_1 + 0x4e0));
      func_001153A0((float *)(param_1 + 0x528),(float *)(param_1 + 0x4e0));
    }
    *(byte *)(param_1 + 0x54c) = *(byte *)(param_1 + 0x54c) & 0xf7;
  }
  if ((*(byte *)(param_1 + 0x54c) & 6) == 0) {
    *param_2 = fparam_0;
  }
  else {
    *param_2 = *(float *)(param_1 + 0x4b4) * fparam_0;
  }
  return;
}


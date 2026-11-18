#include "ghidra_types.h"

extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_0011529C(float *param_1,float *param_2);
extern int func_001153A0(float *param_1,float *param_2);
extern int func_0011549C(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern float DAT_004343f0;
extern undefined4 DAT_004343f4;

// USA 004342CC <- EU 004342AC (Ghidra, non-matching)
// GLOBAL DAT_004343f0 float
// GLOBAL DAT_004343f4 undefined4

undefined4 func_004342CC(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = DAT_004343f0;
  if ((*(byte *)(param_1 + 0x54c) & 8) != 0) {
    if ((*(byte *)(param_1 + 0x54c) & 2) == 0) {
      *(float *)(param_1 + 0x4b8) = DAT_004343f0;
      *(float *)(param_1 + 0x4b4) = fVar1;
      func_001151CC((undefined4 *)(param_1 + 0x4e0),(undefined4 *)(param_1 + 0x4bc));
    }
    else {
      fVar4 = *(float *)(param_1 + 0x4a8);
      fVar5 = *(float *)(param_1 + 0x4ac);
      fVar3 = *(float *)(param_1 + 0x4b0);
      if (fVar5 <= fVar4) {
        if (fVar5 < fVar3) {
          fVar3 = fVar5;
        }
      }
      else if (fVar4 < fVar3) {
        fVar3 = fVar4;
      }
      *(float *)(param_1 + 0x4b8) = fVar3;
      uVar2 = DAT_004343f4;
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
  func_00115C70(param_2,param_3,(float *)(param_1 + 4));
  if ((*(byte *)(param_1 + 0x54c) & 6) == 0) {
    return 0;
  }
  return func_00115CE4(param_2,(float *)(param_1 + 0x504),param_2);
}


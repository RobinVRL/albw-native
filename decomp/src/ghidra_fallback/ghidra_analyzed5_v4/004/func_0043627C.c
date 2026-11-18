#include "ghidra_types.h"

extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_0011529C(float *param_1,float *param_2);
extern int func_001153A0(float *param_1,float *param_2);
extern int func_0011549C(float *param_1,float *param_2,float *param_3);
extern float DAT_0043635c;
extern undefined4 DAT_00436360;

// USA 0043627C <- EU 0043625C (Ghidra, non-matching)
// GLOBAL DAT_0043635c float
// GLOBAL DAT_00436360 undefined4

void func_0043627C(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = DAT_0043635c;
  if ((*(byte *)(param_1 + 0xa8) & 8) != 0) {
    if ((*(byte *)(param_1 + 0xa8) & 2) == 0) {
      *(float *)(param_1 + 0x14) = DAT_0043635c;
      *(float *)(param_1 + 0x10) = fVar1;
      func_001151CC((undefined4 *)(param_1 + 0x3c),(undefined4 *)(param_1 + 0x18));
    }
    else {
      fVar3 = *(float *)(param_1 + 0xc);
      fVar4 = *(float *)(param_1 + 4);
      fVar5 = *(float *)(param_1 + 8);
      if (fVar5 <= fVar4) {
        if (fVar5 < fVar3) {
          fVar3 = fVar5;
        }
      }
      else if (fVar4 < fVar3) {
        fVar3 = fVar4;
      }
      *(float *)(param_1 + 0x14) = fVar3;
      uVar2 = DAT_00436360;
      *(float *)(param_1 + 0x10) = fVar1 / fVar3;
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(param_1 + 0x40) = uVar2;
      *(undefined4 *)(param_1 + 0x44) = uVar2;
      *(undefined4 *)(param_1 + 0x48) = uVar2;
      *(float *)(param_1 + 0x4c) = fVar5;
      *(undefined4 *)(param_1 + 0x50) = uVar2;
      *(undefined4 *)(param_1 + 0x54) = uVar2;
      *(undefined4 *)(param_1 + 0x58) = uVar2;
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0xc);
      if ((*(byte *)(param_1 + 0xa8) & 4) != 0) {
        func_0011549C((float *)(param_1 + 0x3c),(float *)(param_1 + 0x18),(float *)(param_1 + 0x3c))
        ;
      }
    }
    if ((*(byte *)(param_1 + 0xa8) & 6) != 0) {
      func_0011529C((float *)(param_1 + 0x60),(float *)(param_1 + 0x3c));
      func_001153A0((float *)(param_1 + 0x84),(float *)(param_1 + 0x3c));
    }
    *(byte *)(param_1 + 0xa8) = *(byte *)(param_1 + 0xa8) & 0xf7;
  }
  return;
}


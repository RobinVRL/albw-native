#include "ghidra_types.h"

extern int func_0032A2C0(int param_1,int param_2,undefined1 param_3);
extern int func_0036E490(byte *param_1,uint param_2,undefined4 param_3);
extern int func_0051D39C(int *param_1,int param_2,int param_3);
extern float DAT_0036e8f4;

// USA 0036E824 <- EU 0036E800 (Ghidra, non-matching)
// GLOBAL DAT_0036e8f4 float

undefined4 func_0036E824(byte *param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  
  uVar4 = *(int *)(param_1 + 100) - 8;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
  fVar1 = DAT_0036e8f4;
  if (uVar4 < 0x10) {
    uVar3 = uVar4;
    if ((int)uVar4 < 2) {
      uVar3 = 1;
    }
    uVar2 = uVar4;
    if ((int)uVar4 < 2) {
      uVar2 = 1;
    }
    fVar5 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x5c) =
         *(float *)(param_1 + 0x5c) +
         (*(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x5c)) * (DAT_0036e8f4 / fVar5);
    uVar3 = uVar4;
    if ((int)uVar4 < 2) {
      uVar3 = 1;
    }
    fVar5 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 4) =
         *(float *)(param_1 + 4) +
         (*(float *)(param_1 + 0x10) - *(float *)(param_1 + 4)) * (fVar1 / fVar5);
    fVar5 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0xc) =
         *(float *)(param_1 + 0xc) +
         (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0xc)) * (fVar1 / fVar5);
    func_0051D39C((int *)(param_1 + 0x44),*(int *)(param_1 + 0x4c),uVar4);
    if (*(int *)(param_1 + 100) == 7) {
      func_0032A2C0(param_2,(int)(char)param_1[0x6a],0);
    }
  }
  if (*(int *)(param_1 + 100) == 0) {
    return func_0036E490(param_1,6,param_2);
  }
  return 0;
}


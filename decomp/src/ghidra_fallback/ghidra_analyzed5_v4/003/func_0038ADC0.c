#include "ghidra_types.h"

extern float DAT_0038aee4;
extern float DAT_0038aee8;
extern float DAT_0038aeec;

// USA 0038ADC0 <- EU 0038AD9C (Ghidra, non-matching)
// GLOBAL DAT_0038aee4 float
// GLOBAL DAT_0038aee8 float
// GLOBAL DAT_0038aeec float

byte * func_0038ADC0(byte *param_1,int param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_3 == 0) {
    if (*(float *)(param_1 + 0x1c) <= *(float *)(param_2 + 0x1c)) {
      *(float *)(param_1 + 0x1c) = *(float *)(param_2 + 0x1c);
      fVar3 = *(float *)(param_2 + 4);
      if ((((fVar3 < DAT_0038aeec) || (DAT_0038aee8 < fVar3)) ||
          (*(float *)(param_2 + 0xc) < DAT_0038aeec)) || (DAT_0038aee8 < *(float *)(param_2 + 0xc)))
      {
        *param_1 = *param_1 | 1;
        if ((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0x78U) == 0) {
          bVar2 = *param_1 | 4;
        }
        else {
          bVar2 = *param_1 | 2;
        }
        *param_1 = bVar2;
        uVar4 = *(undefined4 *)(param_2 + 8);
        uVar5 = *(undefined4 *)(param_2 + 0xc);
        *(float *)(param_1 + 8) = *(float *)(param_2 + 4);
        *(undefined4 *)(param_1 + 0xc) = uVar4;
        *(undefined4 *)(param_1 + 0x10) = uVar5;
      }
      else {
        *param_1 = *param_1 | 0xc;
      }
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x28);
      *(uint *)(param_1 + 4) = 1 << (*(ushort *)(param_2 + 0x20) & 0x1f) | *(uint *)(param_1 + 4);
      param_1[0x18] = (byte)((*(ushort *)(param_2 + 0x20) & 0x7e0) >> 5);
      uVar1 = (*(ushort *)(param_2 + 0x20) & 0xb000) >> 0xc;
      bVar2 = (byte)uVar1;
      if (3 < uVar1) {
        bVar2 = 0;
      }
      param_1[1] = bVar2;
      return param_1;
    }
  }
  else if (*(float *)(param_2 + 8) <= DAT_0038aee4) {
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x28);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1 << (*(ushort *)(param_2 + 0x20) & 0x1f);
    param_1[0x18] = (byte)((*(ushort *)(param_2 + 0x20) & 0x7e0) >> 5);
    param_1[0x20] = 1;
  }
  return param_1;
}


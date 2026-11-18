#include "ghidra_types.h"

extern undefined4 DAT_0040e494;
extern int DAT_0040e498;

// USA 0040E3AC <- EU 0040E38C (Ghidra, non-matching)
// GLOBAL DAT_0040e494 undefined4
// GLOBAL DAT_0040e498 int

undefined1 * func_0040E3AC(undefined1 *param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float in_s1;
  float fVar6;
  
  switch(*param_1) {
  case 0:
    iVar4 = param_2 + 1;
    if (1 < iVar4) {
      in_s1 = *(float *)(param_1 + 0x10);
    }
    iVar3 = 1;
    if (1 < iVar4) {
      while (fVar5 = *(float *)(param_1 + 4), *(float *)(param_1 + 4) = fVar5 * in_s1,
            0xbcffffff < (uint)ALBW_AS_U32((fVar5 * in_s1))) {
        iVar3 = iVar3 + 1;
        if (iVar4 <= iVar3) {
          return param_1;
        }
      }
      sVar2 = *(short *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 4) = DAT_0040e494;
      *param_1 = 1;
LAB_0040e3f0:
      *(short *)(param_1 + 0x16) = sVar2;
      return param_1;
    }
    break;
  case 1:
    uVar1 = *(ushort *)(param_1 + 0x16);
    if (param_2 < (int)(uint)uVar1) {
      sVar2 = uVar1 - (short)param_2;
      goto LAB_0040e3f0;
    }
    *(undefined2 *)(param_1 + 0x16) = 0;
    param_2 = param_2 - (uint)uVar1;
    *param_1 = 2;
  case 2:
    fVar5 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = *(float *)(param_1 + 4) - *(float *)(param_1 + 8) * fVar5;
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(DAT_0040e498 + (uint)(byte)param_1[0x18] * 2)
                                       ,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 4) = fVar5;
    if (fVar5 < fVar6) {
      *(float *)(param_1 + 4) = fVar6;
      *param_1 = 3;
      return param_1;
    }
    break;
  case 4:
    fVar5 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 4) = *(float *)(param_1 + 4) - *(float *)(param_1 + 0xc) * fVar5;
    return param_1;
  }
  return param_1;
}


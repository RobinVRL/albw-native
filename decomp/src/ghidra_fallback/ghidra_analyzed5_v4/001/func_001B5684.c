#include "ghidra_types.h"

extern int func_004F4A68();
extern int DAT_001b5780;
extern int DAT_001b5784;
extern float DAT_001b5788;
extern int DAT_001b578c;
extern float DAT_001b5790;

// USA 001B5684 <- EU 001B5684 (Ghidra, non-matching)
// GLOBAL DAT_001b5780 int
// GLOBAL DAT_001b5784 int
// GLOBAL DAT_001b5788 float
// GLOBAL DAT_001b578c int
// GLOBAL DAT_001b5790 float

int func_001B5684(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  iVar1 = func_004F4A68(param_1,param_2);
  if ((iVar1 != 0) &&
     ((((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0x78U) != 0 &&
       (*(int *)(param_2 + 8) < DAT_001b5780)) || (*(int *)(param_2 + 8) < DAT_001b5784)))) {
    *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x970) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x974) = *(undefined4 *)(param_2 + 0xc);
    *(undefined1 *)(param_1 + 0x987) = 1;
    if ((*(char *)(param_1 + 0x984) == '\0') && (*(char *)(param_1 + 0x8c0) == '\x01')) {
      uVar2 = *(uint *)(param_1 + 1000);
      fVar4 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      pfVar3 = (float *)(DAT_001b578c + (uVar2 >> 0x18) * 0x10);
      fVar5 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      if (*(float *)(param_2 + 4) * (*pfVar3 + pfVar3[1] * fVar4 * DAT_001b5788) +
          *(float *)(param_2 + 8) * DAT_001b5790 +
          *(float *)(param_2 + 0xc) * (pfVar3[2] + pfVar3[3] * fVar5 * DAT_001b5788) < DAT_001b5790)
      {
        *(undefined1 *)(param_1 + 0x984) = 1;
      }
    }
  }
  return iVar1;
}


#include "ghidra_types.h"

extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern float DAT_00427acc;

// USA 00427A84 <- EU 00427A64 (Ghidra, non-matching)
// GLOBAL DAT_00427acc float

void func_00427A84(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  
  iVar2 = *(int *)(param_1 + 0x60);
  iVar1 = *(int *)(iVar2 + 0x14);
  fVar3 = DAT_00427acc;
  if (param_2 < 4) {
    fVar3 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  }
  if (*(float *)(iVar1 + 8) != fVar3) {
    *(float *)(iVar1 + 8) = fVar3;
    *(undefined1 *)(iVar1 + 0x26) = 1;
  }
  func_00169A80(*(int **)(param_1 + 0x60),param_2,iVar2,(int *)0x1);
  *(byte *)(param_1 + 0x81) = *(byte *)(param_1 + 0x81) & 0xfd;
  return;
}


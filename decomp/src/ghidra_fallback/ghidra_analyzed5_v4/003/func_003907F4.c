#include "ghidra_types.h"

extern int func_001E8268(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
extern int DAT_00390858;
extern float DAT_0039085c;
extern int *DAT_00390860;

// USA 003907F4 <- EU 003907D0 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_00390858 int
// GLOBAL DAT_0039085c float
// GLOBAL DAT_00390860 int *

undefined4 func_003907F4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  iVar1 = DAT_00390858;
  iVar2 = *(int *)(param_1 + 0x4b4);
  iVar3 = iVar2 + 1;
  *(int *)(param_1 + 0x4b4) = iVar3;
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 < 0xb4) {
    fVar5 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = (float)VectorSignedToFloat((iVar3 * (iVar2 + 2)) / 2,(byte)(in_fpscr >> 0x15) & 3);
    iVar1 = (int)(fVar5 * fVar4 * DAT_0039085c);
  }
  *(int *)(param_1 + 0x464) = iVar1 + *(int *)(param_1 + 0x464);
  return func_001E8268(*(int *)(*DAT_00390860 + 0x18),(int *)(param_1 + 0x414),
                (undefined4 *)(param_1 + 0x444),(undefined4 *)(param_1 + 0x45c));
}


#include "ghidra_types.h"

extern float DAT_00547dd8;

// USA 00547D48 <- EU 00547D20 (Ghidra, non-matching)
// GLOBAL DAT_00547dd8 float

undefined4 func_00547D48(int param_1,undefined4 *param_2,float *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x410);
  if ((((*(float *)(iVar2 + 0x34) <= *param_3) &&
       (*(float *)(iVar2 + 0x3c) <= param_3[2] + DAT_00547dd8)) &&
      (*param_3 - DAT_00547dd8 <= *(float *)(iVar2 + 0x40))) &&
     (((param_3[2] - DAT_00547dd8 <= *(float *)(iVar2 + 0x48) &&
       (*(float *)(iVar2 + 0x38) <= param_3[1] + DAT_00547dd8)) &&
      (param_3[1] - DAT_00547dd8 <= *(float *)(iVar2 + 0x44))))) {
    uVar1 = *(undefined4 *)(param_1 + 0x414);
    uVar3 = *(undefined4 *)(param_1 + 0x418);
    param_2[2] = *(undefined4 *)(param_1 + 0x41c);
    *param_2 = uVar1;
    param_2[1] = uVar3;
    return 1;
  }
  return 0;
}


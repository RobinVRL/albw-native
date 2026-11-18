#include "ghidra_types.h"


// USA 00546730 <- EU 00546708 (Ghidra, non-matching)

undefined4 func_00546730(int param_1,undefined4 *param_2)

{
  short sVar1;
  undefined4 *puVar2;
  
  sVar1 = *(short *)(*(int *)(param_1 + 0x2c) + 0x42);
  if (sVar1 != 0x45) {
    if (sVar1 == 0x46) {
      puVar2 = *(undefined4 **)(param_1 + 0x30);
      if (*(float *)(param_1 + 0x78) < ALBW_AS_F32(puVar2[1])) {
        *param_2 = *puVar2;
        param_2[1] = puVar2[1];
        param_2[2] = puVar2[2];
        param_2[1] = *(undefined4 *)(param_1 + 0x78);
        return 0;
      }
    }
    else if (sVar1 == 0x49) goto LAB_0054676c;
    puVar2 = *(undefined4 **)(param_1 + 0x30);
    *param_2 = *puVar2;
    param_2[1] = puVar2[1];
    param_2[2] = puVar2[2];
    return 0;
  }
LAB_0054676c:
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  *param_2 = *puVar2;
  param_2[1] = puVar2[1];
  param_2[2] = puVar2[2];
  return 4;
}


#include "ghidra_types.h"

extern float DAT_00537438;

// USA 005373A0 <- EU 00537378 (Ghidra, non-matching)
// GLOBAL DAT_00537438 float

undefined4 func_005373A0(int param_1,float *param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x48e) != '\0') {
    if (*(char *)(param_1 + 0x492) == '\0') {
      iVar1 = *(int *)(param_1 + 0x460);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x464);
    }
    if (iVar1 == 0) {
      return 0;
    }
    if ((((*(float *)(iVar1 + 0x34) <= *param_2) &&
         (*(float *)(iVar1 + 0x3c) <= param_2[2] + DAT_00537438)) &&
        (*param_2 - DAT_00537438 <= *(float *)(iVar1 + 0x40))) &&
       (((param_2[2] - DAT_00537438 <= *(float *)(iVar1 + 0x48) &&
         (*(float *)(iVar1 + 0x38) <= param_2[1] + DAT_00537438)) &&
        (param_2[1] - DAT_00537438 <= *(float *)(iVar1 + 0x44))))) {
      return 1;
    }
  }
  return 0;
}


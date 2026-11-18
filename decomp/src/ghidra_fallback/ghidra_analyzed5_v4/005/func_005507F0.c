#include "ghidra_types.h"

extern int func_005234B8(int param_1,uint param_2);
extern float DAT_00550824;

// USA 005507F0 <- EU 005507C8 (Ghidra, non-matching)
// GLOBAL DAT_00550824 float

undefined4 func_005507F0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = func_005234B8(param_1,param_2);
  if (((iVar1 != 0) && (DAT_00550824 < *(float *)(*(int *)(param_1 + 0x8c) + 0x154))) &&
     ((*(char *)(param_1 + 0xb0) != '\0' ||
      (*(int *)(*(int *)(param_1 + 0x8c) + 0x154) < 0x3f800000)))) {
    return 1;
  }
  return 0;
}


#include "ghidra_types.h"

extern int func_005234B8(int param_1,uint param_2);
extern float DAT_00550970;

// USA 00550954 <- EU 0055092C (Ghidra, non-matching)
// GLOBAL DAT_00550970 float

undefined4 func_00550954(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_005234B8(param_1,param_2);
  if (((iVar1 == 0) || (*(char *)(param_1 + 0xb0) != '\0')) ||
     (*(float *)(*(int *)(param_1 + 0x8c) + 0x154) <= DAT_00550970)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


#include "ghidra_types.h"

extern int func_001B8048(int param_1,int param_2,uint param_3);
extern int DAT_002330f0;
extern int DAT_002330f4;

// USA 002330A4 <- EU 002330A4 (Ghidra, non-matching)
// GLOBAL DAT_002330f0 int
// GLOBAL DAT_002330f4 int

undefined4 func_002330A4(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(DAT_002330f0 + -0xbc + param_1);
  if (*(char *)(DAT_002330f0 + param_1) != '\0') {
    uVar2 = 1 - uVar2;
  }
  iVar1 = param_1 + 0x10 + uVar2 * DAT_002330f4 * 4;
  if ((*(char *)(iVar1 + 0x7c) != '\0') && (*(char *)(DAT_002330f4 + -0xff + iVar1) != '\0')) {
    return func_001B8048(iVar1,param_2,param_3);
  }
  return 0;
}


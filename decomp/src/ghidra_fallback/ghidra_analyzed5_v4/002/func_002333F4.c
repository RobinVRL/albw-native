#include "ghidra_types.h"

extern int func_003A4060(int param_1,int param_2,uint param_3);
extern int DAT_00233448;
extern int DAT_0023344c;

// USA 002333F4 <- EU 002333F4 (Ghidra, non-matching)
// GLOBAL DAT_00233448 int
// GLOBAL DAT_0023344c int

undefined4 func_002333F4(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(DAT_00233448 + -0xbc + param_1);
  if (*(char *)(DAT_00233448 + param_1) != '\0') {
    uVar2 = 1 - uVar2;
  }
  iVar1 = param_1 + 0x10 + uVar2 * DAT_0023344c * 4;
  if ((*(char *)(iVar1 + 0x7c) != '\0') && (*(char *)(DAT_0023344c + -0xff + iVar1) != '\0')) {
    return func_003A4060(iVar1 + 0x158c,param_2,param_3);
  }
  return 0;
}


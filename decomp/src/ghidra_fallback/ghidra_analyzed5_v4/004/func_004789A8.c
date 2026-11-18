#include "ghidra_types.h"

extern int func_004CDF40(int param_1,int param_2,int param_3);
extern int func_0066C0CC(undefined4 *param_1,char param_2);
extern int *DAT_004789cc;

// USA 004789A8 <- EU 00478980 (Ghidra, non-matching)
// GLOBAL DAT_004789cc int *

void func_004789A8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x158);
  func_004CDF40(*DAT_004789cc,900,1);
  iVar1 = *(int *)(iVar1 + 0x208);
  *(undefined1 *)(iVar1 + 0x79) = 1;
  if (*(char *)(iVar1 + 0x24) == '\0') {
    func_0066C0CC((undefined4 *)(iVar1 + 0x20),'\x01');
  }
  return;
}


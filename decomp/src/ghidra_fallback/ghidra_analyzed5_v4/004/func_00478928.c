#include "ghidra_types.h"

extern int func_004CDF40(int param_1,int param_2,int param_3);
extern int func_0066BFFC(undefined4 *param_1,char param_2);
extern int DAT_00478978;
extern int *DAT_0047897c;

// USA 00478928 <- EU 00478900 (Ghidra, non-matching)
// GLOBAL DAT_00478978 int
// GLOBAL DAT_0047897c int *

void func_00478928(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x158);
  func_004CDF40(*DAT_0047897c,DAT_00478978,1);
  iVar2 = *(int *)(iVar1 + 500);
  if ((*(char *)(iVar2 + 0xf7) != '\0') && (*(char *)(iVar2 + 0x3c) == '\0')) {
    func_0066BFFC((undefined4 *)(iVar2 + 0x38),'\x0e');
  }
  iVar1 = *(int *)(iVar1 + 0x1f8);
  if ((*(char *)(iVar1 + 0xf7) != '\0') && (*(char *)(iVar1 + 0x3c) == '\0')) {
    func_0066BFFC((undefined4 *)(iVar1 + 0x38),'\x0e');
  }
  return;
}


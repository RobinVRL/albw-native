#include "ghidra_types.h"

extern int func_001AB87C(int param_1);
extern int func_004F8638(int *param_1,undefined1 param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_001abbb8;
extern int DAT_001abbbc;

// USA 001ABB68 <- EU 001ABB68 (Ghidra, non-matching)
// GLOBAL DAT_001abbb8 int *
// GLOBAL DAT_001abbbc int

undefined4 func_001ABB68(int *param_1)

{
  int iVar1;
  
  iVar1 = func_00588BE4((int)param_1);
  if (iVar1 == *DAT_001abbb8) {
    func_001AB87C((int)param_1);
    iVar1 = DAT_001abbbc;
    param_1[0x26e] = DAT_001abbbc;
    if (param_1[0x103] != 0) {
      *(int *)(param_1[0x103] + 0x158) = iVar1;
    }
  }
  return func_004F8638(param_1,0xff);
}


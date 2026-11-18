#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00212ac0;

// USA 00212AAC <- EU 00212AAC (Ghidra, non-matching)
// GLOBAL DAT_00212ac0 int

undefined4 func_00212AAC(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00212ac0 + 0x84;
  *param_1 = DAT_00212ac0;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}


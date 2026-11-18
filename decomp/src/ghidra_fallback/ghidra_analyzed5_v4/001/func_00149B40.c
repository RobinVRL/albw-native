#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int DAT_00149b64;

// USA 00149B40 <- EU 00149B40 (Ghidra, non-matching)
// GLOBAL DAT_00149b64 int

undefined4 func_00149B40(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_00149b64;
  *param_1 = DAT_00149b64;
  param_1[200] = iVar1 + 0x58;
  puVar2 = func_004EE540(param_1 + 0x118);
  return func_001510A4(puVar2 + -0x118);
}


#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int DAT_0013c5ac;
extern int DAT_0013c5b0;

// USA 0013C568 <- EU 0013C568 (Ghidra, non-matching)
// GLOBAL DAT_0013c5ac int
// GLOBAL DAT_0013c5b0 int

undefined4 func_0013C568(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0013c5ac;
  *param_1 = DAT_0013c5ac;
  param_1[200] = iVar1 + 0x78;
  puVar2 = func_004EE540(param_1 + 0x176);
  puVar2 = func_004EE540(puVar2 + -0x19);
  iVar1 = DAT_0013c5b0;
  puVar2[-0x95] = DAT_0013c5b0 + 0x5c;
  puVar2[-0x15d] = iVar1;
  puVar2 = func_004EE540(puVar2 + -0x59);
  return func_001510A4(puVar2 + -0x104);
}


#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int iRam004c36ac;
extern int DAT_004c36b0;

// GLOBAL DAT_004c36b0 int
// GLOBAL UNK_004c36ac int
// USA 004C3694 <- EU 004C3670 (Ghidra, function missing from the decomp table)

/* WARNING: Unknown calling convention */

undefined4 func_004C3694(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = iRam004c36ac;
  *param_1 = iRam004c36ac;
  param_1[200] = iVar1 + 0x78;
  puVar2 = func_004EE540(param_1 + 0x140);
  iVar1 = DAT_004c36b0;
  puVar2[-0x78] = DAT_004c36b0 + 0x5c;
  puVar2[-0x140] = iVar1;
  puVar2 = func_004EE540(puVar2 + -0x3c);
  return func_001510A4(puVar2 + -0x104);
}


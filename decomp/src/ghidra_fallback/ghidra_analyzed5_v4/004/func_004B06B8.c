#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int DAT_004b06cc;
extern int DAT_004b06d0;

// USA 004B06B8 <- EU 004B0690 (Ghidra, non-matching)
// GLOBAL DAT_004b06cc int
// GLOBAL DAT_004b06d0 int

undefined4 func_004B06B8(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_004b06cc;
  *param_1 = DAT_004b06cc;
  param_1[200] = iVar1 + 0x78;
  puVar2 = func_004EE540(param_1 + 0x141);
  iVar1 = DAT_004b06d0;
  puVar2[-0x79] = DAT_004b06d0 + 0x5c;
  puVar2[-0x141] = iVar1;
  puVar2 = func_004EE540(puVar2 + -0x3d);
  return func_001510A4(puVar2 + -0x104);
}


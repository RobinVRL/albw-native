#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int DAT_0028baf0;
extern int DAT_0028baf4;

// USA 0028BA8C <- EU 0028BAB4 (Ghidra, non-matching)
// GLOBAL DAT_0028baf0 int
// GLOBAL DAT_0028baf4 int

undefined4 func_0028BA8C(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0028baf0;
  *param_1 = DAT_0028baf0;
  param_1[200] = iVar1 + 0x78;
  puVar2 = func_004EE540(param_1 + 0x146);
  iVar1 = DAT_0028baf4;
  puVar2[-0x7e] = DAT_0028baf4 + 0x5c;
  puVar2[-0x146] = iVar1;
  puVar2 = func_004EE540(puVar2 + -0x42);
  return func_001510A4(puVar2 + -0x104);
}


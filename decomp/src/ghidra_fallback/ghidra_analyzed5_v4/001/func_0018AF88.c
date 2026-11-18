#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int DAT_0018afcc;
extern int DAT_0018afd0;

// USA 0018AF88 <- EU 0018AF88 (Ghidra, non-matching)
// GLOBAL DAT_0018afcc int
// GLOBAL DAT_0018afd0 int

undefined4 func_0018AF88(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0018afcc;
  *param_1 = DAT_0018afcc;
  param_1[200] = iVar1 + 0x78;
  puVar2 = func_004EE540(param_1 + 0x176);
  puVar2 = func_004EE540(puVar2 + -0x19);
  iVar1 = DAT_0018afd0;
  puVar2[-0x95] = DAT_0018afd0 + 0x5c;
  puVar2[-0x15d] = iVar1;
  puVar2 = func_004EE540(puVar2 + -0x59);
  return func_001510A4(puVar2 + -0x104);
}


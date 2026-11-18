#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036CB64(undefined4 *param_1);
extern int func_0036D0E0(int *param_1);
extern int DAT_002226d0;
extern int DAT_002226d4;

// USA 0022268C <- EU 0022268C (Ghidra, non-matching)
// GLOBAL DAT_002226d0 int
// GLOBAL DAT_002226d4 int

undefined4 func_0022268C(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_002226d0;
  *param_1 = DAT_002226d0;
  param_1[200] = iVar1 + 0x84;
  puVar2 = func_0036CB64(param_1 + 0x23a);
  func_0036D0E0(puVar2 + -0xb);
  iVar1 = DAT_002226d4;
  puVar2[-0x172] = DAT_002226d4 + 0x84;
  puVar2[-0x23a] = iVar1;
  return func_001510A4(puVar2 + -0x23a);
}


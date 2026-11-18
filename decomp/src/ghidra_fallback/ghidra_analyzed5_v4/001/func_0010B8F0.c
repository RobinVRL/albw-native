#include "ghidra_types.h"

extern int func_0010C8F8(undefined4 *param_1);
extern undefined4 DAT_0010b924;
extern undefined4 DAT_0010b928;
extern undefined4 DAT_0010b92c;

// USA 0010B8F0 <- EU 0010B8F0 (Ghidra, non-matching)
// GLOBAL DAT_0010b924 undefined4
// GLOBAL DAT_0010b928 undefined4
// GLOBAL DAT_0010b92c undefined4

undefined4 func_0010B8F0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  param_1[1] = 0xfa;
  uVar1 = DAT_0010b928;
  param_1[2] = DAT_0010b924;
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 4) = 0;
  puVar2 = func_0010C8F8(param_1);
  *puVar2 = DAT_0010b92c;
  return (undefined4)param_1;
}


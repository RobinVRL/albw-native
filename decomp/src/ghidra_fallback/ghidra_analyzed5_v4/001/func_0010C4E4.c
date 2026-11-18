#include "ghidra_types.h"

extern undefined4 DAT_0010c508;
extern undefined4 DAT_0010c50c;
extern undefined4 DAT_0010c510;
extern undefined4 DAT_0010c514;
extern undefined4 DAT_0010c518;

// USA 0010C4E4 <- EU 0010C4E4 (Ghidra, non-matching)
// GLOBAL DAT_0010c508 undefined4
// GLOBAL DAT_0010c50c undefined4
// GLOBAL DAT_0010c510 undefined4
// GLOBAL DAT_0010c514 undefined4
// GLOBAL DAT_0010c518 undefined4

undefined4 func_0010C4E4(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = DAT_0010c510;
  uVar1 = DAT_0010c50c;
  *param_1 = DAT_0010c508;
  uVar4 = DAT_0010c518;
  uVar3 = DAT_0010c514;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  return (undefined4)param_1;
}


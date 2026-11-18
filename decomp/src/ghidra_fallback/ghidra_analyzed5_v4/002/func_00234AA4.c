#include "ghidra_types.h"

extern undefined4 *DAT_00234b1c;
extern undefined4 *DAT_00234b20;
extern undefined4 DAT_00234b24;

// USA 00234AA4 <- EU 00234AA4 (Ghidra, non-matching)
// GLOBAL DAT_00234b1c undefined4 *
// GLOBAL DAT_00234b20 undefined4 *
// GLOBAL DAT_00234b24 undefined4

undefined4 func_00234AA4(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = DAT_00234b24;
  puVar2 = DAT_00234b20;
  puVar1 = DAT_00234b1c;
  param_1[6] = *DAT_00234b1c;
  param_1[7] = *puVar1;
  param_1[8] = *puVar1;
  param_1[9] = *puVar2;
  param_1[10] = *puVar1;
  param_1[0xb] = *puVar1;
  param_1[0xc] = *puVar1;
  param_1[0xd] = *puVar2;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 1;
  *(undefined1 *)((int)param_1 + 0x16) = 1;
  *(undefined1 *)((int)param_1 + 0x17) = 1;
  param_1[2] = uVar3;
  param_1[3] = uVar3;
  param_1[4] = uVar3;
  return (undefined4)param_1;
}


#include "ghidra_types.h"

extern undefined4 *DAT_0048f470;
extern undefined4 *DAT_0048f474;
extern undefined4 DAT_0048f478;

// USA 0048F3E0 <- EU 0048F3B8 (Ghidra, non-matching)
// GLOBAL DAT_0048f470 undefined4 *
// GLOBAL DAT_0048f474 undefined4 *
// GLOBAL DAT_0048f478 undefined4

undefined4 * func_0048F3E0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  param_1[0x43] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar5 = param_1[0x3e];
  if (0 < (int)uVar5) {
    uVar3 = uVar5 & 1;
    uVar4 = (uint)(uVar3 == 1);
    if (uVar3 == 1) {
      param_1[10] = 0;
    }
    if ((int)uVar3 < (int)uVar5) {
      do {
        param_1[uVar4 + 10] = 0;
        uVar3 = uVar3 + 2;
        param_1[uVar4 + 0xb] = 0;
        uVar4 = uVar4 + 2;
      } while ((int)uVar3 < (int)param_1[0x3e]);
    }
  }
  uVar2 = DAT_0048f478;
  puVar1 = DAT_0048f470;
  param_1[0x44] = *DAT_0048f470;
  param_1[0x45] = puVar1[1];
  puVar1 = DAT_0048f474;
  param_1[4] = *DAT_0048f474;
  param_1[5] = puVar1[1];
  param_1[0x46] = uVar2;
  param_1[0x47] = uVar2;
  param_1[0x48] = uVar2;
  param_1[0x49] = uVar2;
  param_1[0x4a] = uVar2;
  param_1[0x4b] = uVar2;
  return param_1;
}


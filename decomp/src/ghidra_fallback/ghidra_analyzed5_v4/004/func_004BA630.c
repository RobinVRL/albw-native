#include "ghidra_types.h"

extern int func_004EDC9C(undefined4 *param_1);
extern int func_004EE484(undefined4 *param_1);
extern undefined4 *DAT_004ba684;
extern undefined4 DAT_004ba688;
extern undefined4 DAT_004ba68c;
extern undefined4 DAT_004ba690;

// USA 004BA630 <- EU 004BA608 (Ghidra, non-matching)
// GLOBAL DAT_004ba684 undefined4 *
// GLOBAL DAT_004ba688 undefined4
// GLOBAL DAT_004ba68c undefined4
// GLOBAL DAT_004ba690 undefined4

undefined4 func_004BA630(undefined1 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  iVar3 = func_004EE484((undefined4 *)(param_1 + 0x14));
  puVar4 = func_004EDC9C((undefined4 *)(iVar3 + 100));
  puVar1 = DAT_004ba684;
  puVar4[0x12] = 0;
  uVar2 = DAT_004ba690;
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  puVar4[0x14] = puVar4 + -0x1e;
  puVar4[0x15] = uVar5;
  puVar4[0x16] = uVar6;
  puVar4[0x13] = DAT_004ba688;
  puVar4[0x18] = 0;
  uVar5 = puVar1[7];
  puVar4[0x19] = puVar1[6];
  puVar4[0x1a] = uVar5;
  puVar4[0x17] = DAT_004ba68c;
  puVar4[0x1f] = uVar2;
  puVar4[0x20] = 0;
  puVar4[0x21] = 0;
  *(undefined1 *)((int)puVar4 + 0x8a) = 0;
  *(undefined1 *)((int)puVar4 + 0x8b) = 0;
  return (undefined4)param_1;
}


#include "ghidra_types.h"

extern int func_0010CE7C(undefined4 *param_1);
extern int func_003FE044(undefined4 *param_1);
extern int func_003FE194(undefined4 *param_1);
extern undefined4 DAT_00503f0c;
extern undefined4 DAT_00503f10;
extern undefined4 DAT_00503f14;
extern undefined4 DAT_00503f18;
extern undefined4 DAT_00503f1c;
extern undefined4 DAT_00503f20;
extern undefined4 DAT_00503f24;

// USA 00503E54 <- EU 00503E2C (Ghidra, non-matching)
// GLOBAL DAT_00503f0c undefined4
// GLOBAL DAT_00503f10 undefined4
// GLOBAL DAT_00503f14 undefined4
// GLOBAL DAT_00503f18 undefined4
// GLOBAL DAT_00503f1c undefined4
// GLOBAL DAT_00503f20 undefined4
// GLOBAL DAT_00503f24 undefined4

undefined4 * func_00503E54(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar3 = func_003FE194((undefined4 *)(param_1 + 0x54));
  *puVar3 = DAT_00503f0c;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  if (puVar3 + 5 != (undefined4 *)0x0) {
    puVar3[1] = puVar3 + 5;
    puVar3[2] = 0x11;
  }
  puVar6 = puVar3 + 0x16;
  puVar3[4] = 0;
  puVar3[3] = 0;
  iVar5 = 1;
  iVar4 = 1;
  *puVar6 = 0;
  do {
    puVar6[iVar5] = 0;
    iVar4 = iVar4 + 2;
    puVar6[iVar5 + 1] = 0;
    iVar5 = iVar5 + 2;
  } while (iVar4 < 0x11);
  puVar3 = func_003FE044(puVar3 + 0x27);
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = puVar3 + 0xc;
  puVar3[0x13] = 0;
  puVar3 = func_0010CE7C(puVar3 + 0xc);
  *puVar3 = DAT_00503f10;
  puVar3[9] = puVar3 + 0xb;
  puVar3[10] = 0x20;
  uVar1 = DAT_00503f20;
  *(undefined1 *)(puVar3[9] + 0x1f) = 0;
  *(undefined1 *)puVar3[9] = 0;
  puVar3[8] = DAT_00503f1c;
  uVar2 = DAT_00503f24;
  *puVar3 = uVar1;
  puVar3[0x13] = uVar2;
  return puVar3 + -0x48;
}


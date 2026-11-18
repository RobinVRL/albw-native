#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00152B6C(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
extern int func_0019CE50(undefined4 *param_1);
extern int func_0019CEF0(undefined4 *param_1);
extern undefined4 DAT_004c7a14;
extern undefined4 DAT_004c7a18;
extern undefined4 DAT_004c7a1c;
extern undefined4 DAT_004c7a20;
extern int DAT_004c7a24;

// USA 004C78E4 <- EU 004C78BC (Ghidra, non-matching)
// GLOBAL DAT_004c7a14 undefined4
// GLOBAL DAT_004c7a18 undefined4
// GLOBAL DAT_004c7a1c undefined4
// GLOBAL DAT_004c7a20 undefined4
// GLOBAL DAT_004c7a24 int

undefined4 * func_004C78E4(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)func_0019CE50(param_1);
  *puVar1 = DAT_004c7a1c;
  puVar2 = (undefined4 *)func_0010BAB4(0x18);
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = func_0019CEF0(puVar2);
  }
  puVar1[0x145] = puVar3;
  puVar3 = (undefined4 *)func_0010BAB4(DAT_004c7a20);
  iVar4 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    iVar4 = func_00152B6C(puVar3,puVar1,puVar1[0x145],0);
  }
  puVar1[0x146] = iVar4;
  puVar1[0x147] = 0;
  *(undefined1 *)(puVar1 + 0x148) = 0;
  puVar1[0x149] = 0;
  *(undefined2 *)(puVar1 + 0x14a) = 0;
  *(undefined1 *)((int)puVar1 + 0x52a) = 0;
  puVar1[0x14b] = 0;
  puVar1[0x14c] = 0;
  puVar1[0x14d] = 0;
  puVar1[0x14e] = 0;
  puVar1[0x14f] = 0;
  puVar1[0x150] = 0;
  puVar1[0x151] = 0;
  puVar1[0x152] = 0;
  puVar1[0x153] = 0;
  puVar1[0x154] = 0;
  puVar1[0x155] = 0;
  puVar1[0x156] = 0;
  puVar1[0x157] = 0;
  puVar1[0x158] = 0;
  puVar1[0x159] = 0;
  puVar1[0x15a] = 0;
  *(undefined1 *)((int)puVar1 + 0x532) = 0xff;
  *(undefined1 *)(puVar1 + 0x14e) = 1;
  *(undefined1 *)((int)puVar1 + 0x539) = 1;
  *(undefined1 *)((int)puVar1 + 0x53a) = 0;
  *(undefined1 *)((int)puVar1 + 0x53b) = 0;
  puVar1[0x15b] = 0;
  puVar1[0x15c] = 0;
  puVar1[0x15d] = 0;
  puVar1[0x15e] = 0;
  puVar1[0x15f] = 0;
  puVar1[0x160] = 0;
  puVar1[0x161] = 0;
  puVar1[0x162] = 0;
  puVar1[0x163] = 0;
  puVar1[0x164] = 0;
  puVar1[0x165] = 0;
  puVar1[0x166] = 0;
  *(undefined1 *)(puVar1 + 0x167) = 0;
  iVar4 = DAT_004c7a24;
  *(undefined1 *)((int)puVar1 + 0x59d) = 1;
  *(undefined1 *)((int)puVar1 + 0x59e) = 0;
  *(undefined1 *)((int)puVar1 + 0x59f) = 0;
  *(undefined1 *)(puVar1 + 0x168) = 0;
  *(undefined2 *)(iVar4 + (int)puVar1) = 0;
  *(undefined1 *)(puVar1 + 0x169) = 1;
  puVar1[0x16a] = 0;
  *(undefined1 *)(puVar1 + 0x16b) = 0;
  puVar1[0x16c] = 0;
  return puVar1;
}


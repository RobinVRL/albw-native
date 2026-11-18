#include "ghidra_types.h"

extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_004ee50c;
extern undefined4 DAT_004ee510;
extern undefined4 DAT_004ee514;

// USA 004EE484 <- EU 004EE45C (Ghidra, non-matching)
// GLOBAL DAT_004ee50c undefined4
// GLOBAL DAT_004ee510 undefined4
// GLOBAL DAT_004ee514 undefined4

undefined4 func_004EE484(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = func_0010DA7C(param_1,0,3);
  *puVar2 = DAT_004ee50c;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(undefined2 *)(puVar2 + 6) = 0xff;
  puVar2[7] = 0;
  *(undefined1 *)(puVar2 + 8) = 0xf;
  *(undefined1 *)((int)puVar2 + 0x21) = 0xff;
  uVar1 = DAT_004ee510;
  *(undefined1 *)((int)puVar2 + 0x22) = 0xff;
  *(undefined2 *)(puVar2 + 0xc) = 0;
  puVar2[0xd] = uVar1;
  puVar2[0xe] = 0;
  puVar2[0xf] = uVar1;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = puVar2;
  puVar2[0x13] = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  puVar2[0x16] = puVar2;
  puVar2[0x17] = 0;
  *(undefined1 *)(puVar2 + 0x18) = 0;
  *(undefined1 *)((int)puVar2 + 0x61) = 1;
  *(undefined1 *)(puVar2 + 8) = 0;
  *(undefined1 *)((int)puVar2 + 0x21) = 0x1f;
  uVar1 = DAT_004ee514;
  *(undefined1 *)((int)puVar2 + 0x23) = 0;
  puVar2[9] = uVar1;
  puVar2[10] = uVar1;
  puVar2[0xb] = uVar1;
  *(undefined2 *)((int)puVar2 + 0x32) = 0xffff;
  return (undefined4)param_1;
}


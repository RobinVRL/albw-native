#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002BE9D4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_003288A0(undefined4 *param_1,undefined4 param_2);
extern undefined DAT_0032ffbc;
extern undefined4 DAT_0032ffdc;
extern undefined4 DAT_0032ffe0;
extern undefined4 *DAT_0032ffe4;
extern undefined4 DAT_0032ffe8;
extern undefined4 DAT_0032ffec;

// USA 0032FEE4 <- EU 0032FEC0 (Ghidra, non-matching)
// GLOBAL DAT_0032ffbc undefined
// GLOBAL DAT_0032ffdc undefined4
// GLOBAL DAT_0032ffe0 undefined4
// GLOBAL DAT_0032ffe4 undefined4 *
// GLOBAL DAT_0032ffe8 undefined4
// GLOBAL DAT_0032ffec undefined4

undefined4 * func_0032FEE4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define local_1c (*(undefined * *)(albw_frame + 0x4))
  local_1c = &DAT_0032ffbc;
  local_20 = DAT_0032ffdc;
  puVar2 = (undefined4 *)func_002BE9D4(param_1,&local_20,0,0,1);
  puVar1 = DAT_0032ffe4;
  *puVar2 = DAT_0032ffe0;
  puVar2[0xb4] = 0;
  uVar5 = puVar1[5];
  puVar2[0xb5] = puVar1[4];
  puVar2[0xb6] = uVar5;
  puVar2[0xb3] = DAT_0032ffe8;
  puVar2[0xb8] = 0;
  uVar5 = puVar1[7];
  puVar2[0xb9] = puVar1[6];
  puVar2[0xba] = uVar5;
  puVar2[0xb7] = DAT_0032ffec;
  puVar2[0xbb] = param_2;
  puVar3 = (undefined4 *)func_0010BAB4(0x38);
  iVar4 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    iVar4 = func_003288A0(puVar3,puVar2);
  }
  puVar2[0xbc] = iVar4;
  *(undefined1 *)(puVar2 + 0xbd) = 0;
  puVar2[0xbf] = param_3;
  puVar2[0xbe] = 0;
  *(undefined1 *)(puVar2 + 0xc0) = 0;
  *(undefined1 *)((int)puVar2 + 0x301) = 0;
  puVar2[0xc1] = 0;
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  puVar2[0xb4] = puVar2;
  puVar2[0xb5] = uVar5;
  puVar2[0xb6] = uVar6;
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2[0xb8] = puVar2;
  puVar2[0xb9] = uVar5;
  puVar2[0xba] = uVar6;
  puVar2[0xad] = puVar2 + 0xb7;
  puVar2[0xae] = puVar2 + 0xb3;
  return puVar2;
}


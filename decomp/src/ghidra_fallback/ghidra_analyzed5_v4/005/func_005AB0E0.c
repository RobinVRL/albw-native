#include "ghidra_types.h"

extern int DAT_005ab130;
extern undefined4 *DAT_005ab134;
extern undefined4 DAT_005ab138;
extern undefined4 DAT_005ab13c;
extern undefined4 DAT_005ab140;
extern undefined4 DAT_005ab144;
extern undefined4 DAT_005ab148;
extern undefined4 DAT_005ab14c;

// USA 005AB0E0 <- EU 005AB0B8 (Ghidra, non-matching)
// GLOBAL DAT_005ab130 int
// GLOBAL DAT_005ab134 undefined4 *
// GLOBAL DAT_005ab138 undefined4
// GLOBAL DAT_005ab13c undefined4
// GLOBAL DAT_005ab140 undefined4
// GLOBAL DAT_005ab144 undefined4
// GLOBAL DAT_005ab148 undefined4
// GLOBAL DAT_005ab14c undefined4

void func_005AB0E0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_005ab130;
  *(undefined4 *)(DAT_005ab130 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  uVar3 = DAT_005ab138;
  puVar2 = DAT_005ab134;
  *DAT_005ab134 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + -4) = 0xff;
  *(undefined1 *)((int)puVar2 + -0xf) = 0x48;
  *(undefined1 *)((int)puVar2 + -0xe) = 0xff;
  *(undefined1 *)((int)puVar2 + -0xd) = 0xff;
  uVar4 = DAT_005ab13c;
  puVar2[2] = uVar3;
  puVar2[3] = uVar4;
  puVar2[4] = uVar3;
  puVar2[5] = uVar4;
  uVar3 = DAT_005ab144;
  puVar2[6] = DAT_005ab140;
  puVar2[7] = uVar3;
  uVar3 = DAT_005ab14c;
  puVar2[8] = DAT_005ab148;
  puVar2[9] = uVar3;
  return;
}


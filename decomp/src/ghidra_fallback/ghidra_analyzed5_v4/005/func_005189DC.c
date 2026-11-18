#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined4 DAT_00518b08;
extern undefined *DAT_00518b0c;
extern undefined4 DAT_00518b10;

// USA 005189DC <- EU 005189B4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_00518b08 undefined4
// GLOBAL DAT_00518b0c undefined *
// GLOBAL DAT_00518b10 undefined4

undefined4 *
func_005189DC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  
  *param_1 = DAT_00518b08;
  iVar1 = func_00100118((int)(param_1 + 1),DAT_00518b0c,0x10,7);
  uVar4 = 0;
  puVar2 = (undefined4 *)(iVar1 + -4);
  *(undefined4 *)(iVar1 + 0x74) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0x7c) = 0;
  *(undefined1 *)(iVar1 + 0x80) = 0xff;
  *(undefined1 *)(iVar1 + 0x81) = 0;
  *(undefined1 *)(iVar1 + 0x82) = 0;
  *(undefined1 *)(iVar1 + 0x83) = 0xff;
  *(undefined1 *)(iVar1 + 0x84) = 0;
  *(undefined1 *)(iVar1 + 0x85) = 0;
  do {
    iVar5 = iVar1;
    if (uVar4 < 7) {
      iVar5 = iVar1 + uVar4 * 0x10;
    }
    uVar4 = uVar4 + 1;
    *(undefined4 **)(iVar5 + 8) = puVar2;
  } while ((int)uVar4 < 7);
  *(uint *)(iVar1 + 0x78) =
       *(byte *)(iVar1 + 0x80) & 0x1f | (uint)*(byte *)(iVar1 + 0x81) << 5 |
       (uint)*(byte *)(iVar1 + 0x82) << 0xd | (uint)*(byte *)(iVar1 + 0x83) << 0x13 |
       (uint)(*(char *)(iVar1 + 0x84) != '\0') << 0x1b | (*(byte *)(iVar1 + 0x85) & 3) << 0x1c;
  *puVar2 = DAT_00518b10;
  *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(iVar1 + 0x7c);
  *(undefined1 *)(iVar1 + 0x91) = 0;
  *(undefined4 *)(iVar1 + 0x88) = param_2;
  *(undefined4 *)(iVar1 + 0x8c) = param_3;
  if (param_4 == 0) {
    uVar3 = 0x71;
  }
  else {
    uVar3 = 0x70;
  }
  *(char *)(iVar1 + 0x90) = (char)param_4;
  *(char *)(iVar1 + 0x92) = (char)param_5;
  *(undefined1 *)(iVar1 + 0x83) = uVar3;
  if (param_5 == 0) {
    *(undefined1 *)(iVar1 + 0x85) = 0;
  }
  else {
    *(undefined1 *)(iVar1 + 0x85) = 1;
  }
  *(uint *)(iVar1 + 0x78) =
       *(byte *)(iVar1 + 0x80) & 0x1f | (uint)*(byte *)(iVar1 + 0x81) << 5 |
       (uint)*(byte *)(iVar1 + 0x82) << 0xd | (uint)*(byte *)(iVar1 + 0x83) << 0x13 |
       (uint)(*(char *)(iVar1 + 0x84) != '\0') << 0x1b | (*(byte *)(iVar1 + 0x85) & 3) << 0x1c;
  *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(iVar1 + 0x7c);
  return puVar2;
}


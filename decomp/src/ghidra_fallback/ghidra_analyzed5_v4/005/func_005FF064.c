#include "ghidra_types.h"

extern int func_003E3F00(undefined4 param_1);
extern int func_003E3F10(undefined4 param_1);
extern int func_0060226C(void);
extern int DAT_005ff0d8;

// USA 005FF064 <- EU 005FF03C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int
// PARAM param_7 Stack[0x8]:4 undefined4
// GLOBAL DAT_005ff0d8 int

undefined4 func_005FF064(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                  int param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  iVar1 = DAT_005ff0d8;
  uVar3 = *(uint *)(DAT_005ff0d8 + 0x9c);
  puVar4 = (undefined1 *)(*(int *)(uVar3 + 0x18) + *(int *)(uVar3 + 0x20) * 0x1c);
  *puVar4 = 4;
  *(undefined4 *)(puVar4 + 4) = param_1;
  *(undefined4 *)(puVar4 + 8) = param_4;
  *(undefined4 *)(puVar4 + 0xc) = param_7;
  *(short *)(puVar4 + 0x10) = (short)(param_3 >> 4);
  *(short *)(puVar4 + 0x12) = (short)(param_2 >> 4);
  *(short *)(puVar4 + 0x14) = (short)(param_6 >> 4);
  *(short *)(puVar4 + 0x16) = (short)(param_5 >> 4);
  func_003E3F00(param_1);
  *(int *)(uVar3 + 0x20) = *(int *)(uVar3 + 0x20) + 1;
  uVar2 = *(uint *)(iVar1 + 0xa0);
  if (((uVar2 == uVar3) && (uVar2 = 0, *(char *)(iVar1 + 0x12) != '\0')) &&
     (uVar2 = (uint)*(byte *)(iVar1 + 0x11), uVar2 == 0)) {
    *(undefined1 *)(iVar1 + 0x11) = 1;
    uVar2 = func_0060226C();
  }
  return func_003E3F10(uVar2);
}


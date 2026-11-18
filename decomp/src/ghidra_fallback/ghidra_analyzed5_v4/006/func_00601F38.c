#include "ghidra_types.h"

extern int func_003E3F00(undefined4 param_1);
extern int func_003E3F10(undefined4 param_1);
extern int func_0060226C(void);
extern int DAT_00602040;

// USA 00601F38 <- EU 00601F10 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:4 uint
// PARAM param_8 Stack[0xc]:4 undefined4
// PARAM param_9 Stack[0x10]:4 int
// GLOBAL DAT_00602040 int

undefined4 func_00601F38(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5,
                  undefined4 param_6,uint param_7,undefined4 param_8,int param_9)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  uVar1 = param_3 & 0x7fffff;
  puVar4 = (undefined1 *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) * 0x1c);
  *puVar4 = 2;
  *(undefined4 *)(puVar4 + 4) = param_2;
  *(undefined4 *)(puVar4 + 8) = param_4;
  uVar3 = *(uint *)(puVar4 + 0xc);
  *(uint *)(puVar4 + 0xc) = uVar1 | uVar3 & 0xff800000;
  if (param_5 == 0x10) {
    *(uint *)(puVar4 + 0xc) = uVar1 | uVar3 & 0xfe000000;
  }
  else {
    if (param_5 == 0x18) {
      uVar1 = uVar1 | uVar3 & 0xfe000000 | 0x800000;
    }
    else {
      if (param_5 != 0x20) goto LAB_00601f98;
      uVar1 = uVar1 | uVar3 & 0xfe000000 | 0x1000000;
    }
    *(uint *)(puVar4 + 0xc) = uVar1;
  }
LAB_00601f98:
  uVar1 = *(uint *)(puVar4 + 0x18);
  uVar3 = uVar1 & 0xff800000 | param_7 & 0x7fffff;
  *(uint *)(puVar4 + 0x18) = uVar3;
  *(undefined4 *)(puVar4 + 0x14) = param_8;
  if (param_9 == 0x10) {
    uVar3 = uVar1 & 0xfe000000 | param_7 & 0x7fffff;
  }
  *(undefined4 *)(puVar4 + 0x10) = param_6;
  if (param_9 == 0x10) {
    *(uint *)(puVar4 + 0x18) = uVar3;
  }
  else {
    if (param_9 == 0x18) {
      uVar3 = uVar3 & 0xfe7fffff | 0x800000;
    }
    else {
      if (param_9 != 0x20) goto code_r0x00601ff4;
      uVar3 = uVar3 & 0xfe7fffff | 0x1000000;
    }
    *(uint *)(puVar4 + 0x18) = uVar3;
  }
code_r0x00601ff4:
  func_003E3F00(uVar3);
  iVar2 = DAT_00602040;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  if (((*(int *)(iVar2 + 0xa0) == param_1) && (*(char *)(iVar2 + 0x12) != '\0')) &&
     (*(char *)(iVar2 + 0x11) == '\0')) {
    *(undefined1 *)(iVar2 + 0x11) = 1;
    iVar2 = func_0060226C();
  }
  return func_003E3F10(iVar2);
}


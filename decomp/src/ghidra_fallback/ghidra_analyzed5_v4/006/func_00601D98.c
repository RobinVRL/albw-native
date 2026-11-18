#include "ghidra_types.h"

extern int func_003E3F00(undefined4 param_1);
extern int func_003E3F10(undefined4 param_1);
extern int func_0060226C(void);
extern int DAT_00601f08;
extern int DAT_00601f0c;

// USA 00601D98 <- EU 00601D70 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int
// PARAM param_7 Stack[0x8]:4 int
// GLOBAL DAT_00601f08 int
// GLOBAL DAT_00601f0c int

undefined4 func_00601D98(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                  int param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if (param_4 == 0) {
    return 0;
  }
  if (param_5 == 0) {
    return 0;
  }
  puVar3 = (undefined1 *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) * 0x1c);
  if (param_6 == DAT_00601f08) {
    uVar1 = *(uint *)(puVar3 + 0x14) & 0xffffffc0 | 0x1b;
    *(uint *)(puVar3 + 0x14) = uVar1;
  }
  else {
    if (param_6 < DAT_00601f08) {
      if (param_6 != 0x8051) {
        if (param_6 != 0x8056) {
          return 0;
        }
        uVar1 = *(uint *)(puVar3 + 0x14) & 0xffffffc0 | 0x24;
        *(uint *)(puVar3 + 0x14) = uVar1;
        goto LAB_00601e1c;
      }
      uVar1 = *(uint *)(puVar3 + 0x14) & 0xffffffc0 | 8;
    }
    else {
      if (param_6 - DAT_00601f08 == 1) {
        uVar1 = *(uint *)(puVar3 + 0x14) & 0xffffffc0;
        *(uint *)(puVar3 + 0x14) = uVar1;
        goto LAB_00601e1c;
      }
      if (param_6 - DAT_00601f08 != 0xd0b) {
        return 0;
      }
      uVar1 = *(uint *)(puVar3 + 0x14) & 0xffffffc0 | 0x12;
    }
    *(uint *)(puVar3 + 0x14) = uVar1;
  }
LAB_00601e1c:
  *(short *)(puVar3 + 0x10) = (short)param_4;
  *(short *)(puVar3 + 0x12) = (short)param_5;
  *puVar3 = 3;
  *(undefined4 *)(puVar3 + 4) = param_2;
  *(short *)(puVar3 + 0xc) = (short)*(undefined4 *)(puVar3 + 0x10);
  *(short *)(puVar3 + 0xe) = (short)((uint)*(undefined4 *)(puVar3 + 0x10) >> 0x10);
  *(uint *)(puVar3 + 0x14) = uVar1 & 0xfffffe3f;
  if (param_7 == 0x20) {
    uVar1 = uVar1 & 0xfffffe3f | 0x200;
  }
  else {
    uVar1 = uVar1 & 0xfffffc3f;
  }
  uVar1 = uVar1 & 0xfffff7ff | 0x400;
  *(undefined4 *)(puVar3 + 8) = param_3;
  *(uint *)(puVar3 + 0x14) = uVar1;
  func_003E3F00(uVar1);
  iVar2 = DAT_00601f0c;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  if (((*(int *)(iVar2 + 0xa0) == param_1) && (*(char *)(iVar2 + 0x12) != '\0')) &&
     (*(char *)(iVar2 + 0x11) == '\0')) {
    *(undefined1 *)(iVar2 + 0x11) = 1;
    iVar2 = func_0060226C();
  }
  return func_003E3F10(iVar2);
}


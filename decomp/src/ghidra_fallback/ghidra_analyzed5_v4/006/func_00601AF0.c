#include "ghidra_types.h"

extern int func_003E3F00(undefined4 param_1);
extern int func_003E3F10(undefined4 param_1);
extern int func_0060226C(void);
extern int DAT_00601d68;
extern int DAT_00601d6c;

// USA 00601AF0 <- EU 00601AC8 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int
// PARAM param_7 Stack[0x8]:4 int
// PARAM param_8 Stack[0xc]:4 int
// PARAM param_9 Stack[0x10]:4 int
// PARAM param_10 Stack[0x14]:4 int
// PARAM param_11 Stack[0x18]:4 int
// PARAM param_12 Stack[0x1c]:4 int
// GLOBAL DAT_00601d68 int
// GLOBAL DAT_00601d6c int

undefined4 func_00601AF0(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8,int param_9,int param_10,int param_11,int param_12)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  if (param_10 == 0x500) {
    iVar11 = 0;
    uVar1 = 1;
  }
  else {
    if (param_10 != 0x501) {
      if (param_10 != 0x502) {
        return 0;
      }
      iVar11 = 2;
      uVar1 = 2;
      sVar5 = 2;
      goto LAB_00601b20;
    }
    iVar11 = 1;
    uVar1 = 2;
  }
  sVar5 = 1;
LAB_00601b20:
  if (param_5 == DAT_00601d68) {
    uVar3 = 3;
  }
  else if (param_5 < DAT_00601d68) {
    if (param_5 == 0x8051) {
      uVar3 = 1;
    }
    else {
      if (param_5 != 0x8056) {
        return 0;
      }
      uVar3 = 4;
    }
  }
  else if (param_5 - DAT_00601d68 == 1) {
    uVar3 = 0;
  }
  else {
    if (param_5 - DAT_00601d68 != 0xd0b) {
      return 0;
    }
    uVar3 = 2;
  }
  if (param_9 == DAT_00601d68) {
    iVar8 = 3;
    iVar2 = 2;
  }
  else if (param_9 < DAT_00601d68) {
    if (param_9 == 0x8051) {
      iVar8 = 1;
      iVar2 = 3;
    }
    else {
      if (param_9 != 0x8056) {
        return 0;
      }
      iVar8 = 4;
      iVar2 = 2;
    }
  }
  else if (param_9 == 0x8058) {
    iVar8 = 0;
    iVar2 = 4;
  }
  else {
    if (param_9 != 0x8d62) {
      return 0;
    }
    iVar8 = 2;
    iVar2 = iVar8;
  }
  if ((param_3 != 0 && param_4 != 0) && (param_7 != 0 && param_8 != 0)) {
    uVar10 = param_7 * uVar1;
    puVar4 = (undefined1 *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) * 0x1c);
    *puVar4 = 3;
    *(undefined4 *)(puVar4 + 4) = param_2;
    *(int *)(puVar4 + 8) = param_6;
    uVar6 = *(uint *)(puVar4 + 0x14);
    uVar7 = uVar6 & 0xffffffc0 | uVar3 | iVar8 << 3;
    *(uint *)(puVar4 + 0x14) = uVar7;
    *(short *)(puVar4 + 0xc) = (short)param_3;
    *(short *)(puVar4 + 0xe) = (short)param_4;
    *(short *)(puVar4 + 0x10) = (short)uVar10;
    if (param_11 == 0) {
      uVar1 = uVar6 & 0xffffff80 | uVar3 | iVar8 << 3;
    }
    *(short *)(puVar4 + 0x12) = (short)param_8 * sVar5;
    if (param_11 != 0) {
      uVar9 = *(uint *)(puVar4 + 0x10);
      uVar6 = uVar9 & 0xffff;
      uVar3 = *(uint *)(puVar4 + 0xc) & 0xffff;
      if (uVar3 <= uVar6) {
        uVar10 = uVar9 >> 0x10;
      }
      if (uVar3 > uVar6 || uVar10 < *(uint *)(puVar4 + 0xc) >> 0x10) {
        if (uVar1 == 2) {
          uVar3 = uVar3 - uVar6;
          if (iVar2 == 3) {
            uVar1 = 0x10;
          }
          else {
            uVar1 = 8;
          }
          if ((uVar3 & uVar1) != 0) {
            uVar3 = uVar3 - uVar1;
          }
          iVar2 = (int)(uVar3 * (param_8 + -1) * iVar2) / 2;
        }
        else {
          iVar2 = (uVar3 - uVar6) * ((uVar9 >> 0x10) - 1) * iVar2;
        }
        *(int *)(puVar4 + 8) = param_6 - iVar2;
      }
      uVar1 = uVar7 | 0x40;
    }
    uVar3 = uVar1 & 0xfffffe7f | iVar11 << 7;
    *(uint *)(puVar4 + 0x14) = uVar3;
    if (param_12 == 0x20) {
      uVar3 = uVar3 | 0x200;
    }
    else {
      uVar3 = uVar1 & 0xfffffc7f | iVar11 << 7;
    }
    *(uint *)(puVar4 + 0x14) = uVar3 & 0xfffff3ff;
    func_003E3F00(uVar3 & 0xfffff3ff);
    iVar11 = DAT_00601d6c;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    if (((*(int *)(iVar11 + 0xa0) == param_1) && (*(char *)(iVar11 + 0x12) != '\0')) &&
       (*(char *)(iVar11 + 0x11) == '\0')) {
      *(undefined1 *)(iVar11 + 0x11) = 1;
      iVar11 = func_0060226C();
    }
    return func_003E3F10(iVar11);
  }
  return 0;
}


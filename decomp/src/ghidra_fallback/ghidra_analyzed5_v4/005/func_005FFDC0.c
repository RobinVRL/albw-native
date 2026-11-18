#include "ghidra_types.h"

extern int func_003E3F00(undefined4 param_1);
extern int func_003E3F10(undefined4 param_1);
extern int func_0060226C(void);
extern int DAT_005fff34;
extern undefined4 *DAT_005fff38;
extern undefined4 *DAT_005fff3c;
extern undefined4 DAT_005fff40;
extern undefined4 DAT_005fff44;
extern undefined4 DAT_005fff48;
extern undefined4 DAT_005fff4c;
extern undefined4 DAT_005fff50;

// USA 005FFDC0 <- EU 005FFD98 (Ghidra, non-matching)
// GLOBAL DAT_005fff34 int
// GLOBAL DAT_005fff38 undefined4 *
// GLOBAL DAT_005fff3c undefined4 *
// GLOBAL DAT_005fff40 undefined4
// GLOBAL DAT_005fff44 undefined4
// GLOBAL DAT_005fff48 undefined4
// GLOBAL DAT_005fff4c undefined4
// GLOBAL DAT_005fff50 undefined4

undefined4 func_005FFDC0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  puVar2 = DAT_005fff38;
  iVar1 = DAT_005fff34;
  uVar11 = *(uint *)(DAT_005fff34 + 0x9c);
  puVar6 = (undefined4 *)*DAT_005fff38;
  uVar8 = (int)puVar6 - *(int *)(uVar11 + 4);
  *(uint *)(uVar11 + 0xc) = uVar8;
  puVar3 = DAT_005fff3c;
  if (*(uint *)(uVar11 + 0x14) == uVar8) {
    return 0;
  }
  if ((uVar8 & 8) == 0) {
    *(uint *)(uVar11 + 0xc) = uVar8 + 0x20;
    uVar4 = DAT_005fff40;
    if (puVar6 < (undefined4 *)*puVar3) {
      *puVar6 = 0;
      puVar6[1] = uVar4;
      *puVar2 = puVar6 + 2;
    }
  }
  else {
    *(uint *)(uVar11 + 0xc) = uVar8 + 0x18;
  }
  uVar4 = DAT_005fff44;
  puVar6 = (undefined4 *)*puVar2;
  if (puVar6 < (undefined4 *)*puVar3) {
    *puVar6 = 1;
    puVar6[1] = uVar4;
    *puVar2 = puVar6 + 2;
  }
  uVar4 = DAT_005fff48;
  puVar6 = (undefined4 *)*puVar2;
  if (puVar6 < (undefined4 *)*puVar3) {
    *puVar6 = 1;
    puVar6[1] = uVar4;
    *puVar2 = puVar6 + 2;
  }
  uVar4 = DAT_005fff50;
  puVar6 = (undefined4 *)*puVar2;
  if (puVar6 < (undefined4 *)*puVar3) {
    *puVar6 = DAT_005fff4c;
    puVar6[1] = uVar4;
    *puVar2 = puVar6 + 2;
  }
  puVar5 = (undefined1 *)(*(int *)(uVar11 + 0x18) + *(int *)(uVar11 + 0x20) * 0x1c);
  *puVar5 = 1;
  iVar9 = *(int *)(uVar11 + 0x14) + *(int *)(uVar11 + 4);
  *(int *)(puVar5 + 4) = iVar9;
  iVar10 = *(int *)(uVar11 + 0xc) - *(int *)(uVar11 + 0x14);
  *(int *)(puVar5 + 8) = iVar10;
  iVar7 = *(int *)(uVar11 + 0x34);
  if (iVar7 != 0) {
    *(uint *)(iVar7 + 8) = ((iVar9 + iVar10) - iVar7) - 0x18U >> 3;
    *(undefined4 *)(puVar5 + 8) = *(undefined4 *)(uVar11 + 0x30);
    *(undefined4 *)(uVar11 + 0x34) = 0;
    *(undefined4 *)(uVar11 + 0x30) = 0;
  }
  uVar8 = *(uint *)(puVar5 + 0xc);
  *(uint *)(puVar5 + 0xc) = uVar8 & 0xfffffffd | 4;
  if (*(char *)(uVar11 + 0x3d) != '\0') {
    *(uint *)(puVar5 + 0xc) = uVar8 & 0xfffffffd | 5;
  }
  *(undefined4 *)(uVar11 + 0x14) = *(undefined4 *)(uVar11 + 0xc);
  func_003E3F00(*(undefined4 *)(uVar11 + 0xc));
  *(int *)(uVar11 + 0x20) = *(int *)(uVar11 + 0x20) + 1;
  uVar8 = *(uint *)(iVar1 + 0xa0);
  if (((uVar8 == uVar11) && (uVar8 = 0, *(char *)(iVar1 + 0x12) != '\0')) &&
     (uVar8 = (uint)*(byte *)(iVar1 + 0x11), uVar8 == 0)) {
    *(undefined1 *)(iVar1 + 0x11) = 1;
    uVar8 = func_0060226C();
  }
  return func_003E3F10(uVar8);
}


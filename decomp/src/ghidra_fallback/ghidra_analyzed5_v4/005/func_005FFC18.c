#include "ghidra_types.h"

extern int func_003E3F00(undefined4 param_1);
extern int func_003E3F10(undefined4 param_1);
extern int func_00602214(int param_1,int param_2);
extern int func_0060226C(void);
extern int DAT_005ffd78;
extern undefined4 *DAT_005ffd7c;
extern undefined4 *DAT_005ffd80;
extern undefined4 DAT_005ffd84;
extern undefined4 DAT_005ffd88;
extern undefined4 DAT_005ffd8c;
extern undefined4 DAT_005ffd90;
extern undefined4 DAT_005ffd94;

// USA 005FFC18 <- EU 005FFBF0 (Ghidra, non-matching)
// GLOBAL DAT_005ffd78 int
// GLOBAL DAT_005ffd7c undefined4 *
// GLOBAL DAT_005ffd80 undefined4 *
// GLOBAL DAT_005ffd84 undefined4
// GLOBAL DAT_005ffd88 undefined4
// GLOBAL DAT_005ffd8c undefined4
// GLOBAL DAT_005ffd90 undefined4
// GLOBAL DAT_005ffd94 undefined4

undefined4 func_005FFC18(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  puVar2 = DAT_005ffd7c;
  iVar1 = DAT_005ffd78;
  uVar7 = *(uint *)(DAT_005ffd78 + 0x9c);
  puVar5 = (undefined4 *)*DAT_005ffd7c;
  uVar6 = (int)puVar5 - *(int *)(uVar7 + 4);
  *(uint *)(uVar7 + 0xc) = uVar6;
  puVar3 = DAT_005ffd80;
  if (*(uint *)(uVar7 + 0x14) == uVar6) {
    return 0;
  }
  if ((uVar6 & 8) == 0) {
    *(uint *)(uVar7 + 0xc) = uVar6 + 0x20;
    if (puVar5 < (undefined4 *)*puVar3) {
      puVar5[1] = DAT_005ffd84;
      *puVar5 = 0;
      *puVar2 = puVar5 + 2;
    }
  }
  else {
    *(uint *)(uVar7 + 0xc) = uVar6 + 0x18;
  }
  uVar4 = DAT_005ffd88;
  puVar5 = (undefined4 *)*puVar2;
  if (puVar5 < (undefined4 *)*puVar3) {
    *puVar5 = 1;
    puVar5[1] = uVar4;
    *puVar2 = puVar5 + 2;
  }
  uVar4 = DAT_005ffd8c;
  puVar5 = (undefined4 *)*puVar2;
  if (puVar5 < (undefined4 *)*puVar3) {
    *puVar5 = 1;
    puVar5[1] = uVar4;
    *puVar2 = puVar5 + 2;
  }
  uVar4 = DAT_005ffd94;
  puVar5 = (undefined4 *)*puVar2;
  if (puVar5 < (undefined4 *)*puVar3) {
    *puVar5 = DAT_005ffd90;
    puVar5[1] = uVar4;
    *puVar2 = puVar5 + 2;
  }
  puVar8 = (undefined1 *)(*(int *)(uVar7 + 0x18) + *(int *)(uVar7 + 0x20) * 0x1c);
  *puVar8 = 1;
  *(int *)(puVar8 + 4) = *(int *)(uVar7 + 4) + *(int *)(uVar7 + 0x14);
  *(int *)(puVar8 + 8) = *(int *)(uVar7 + 0xc) - *(int *)(uVar7 + 0x14);
  if (*(int *)(uVar7 + 0x34) != 0) {
    func_00602214(uVar7,(int)puVar8);
  }
  uVar6 = *(uint *)(puVar8 + 0xc);
  *(uint *)(puVar8 + 0xc) = uVar6 & 0xfffffffd;
  if (*(char *)(uVar7 + 0x3d) != '\0') {
    *(uint *)(puVar8 + 0xc) = uVar6 & 0xfffffffd | 1;
  }
  *(undefined4 *)(uVar7 + 0x14) = *(undefined4 *)(uVar7 + 0xc);
  func_003E3F00(*(undefined4 *)(uVar7 + 0xc));
  *(int *)(uVar7 + 0x20) = *(int *)(uVar7 + 0x20) + 1;
  uVar6 = *(uint *)(iVar1 + 0xa0);
  if (((uVar6 == uVar7) && (uVar6 = 0, *(char *)(iVar1 + 0x12) != '\0')) &&
     (uVar6 = (uint)*(byte *)(iVar1 + 0x11), uVar6 == 0)) {
    *(undefined1 *)(iVar1 + 0x11) = 1;
    uVar6 = func_0060226C();
  }
  return func_003E3F10(uVar6);
}


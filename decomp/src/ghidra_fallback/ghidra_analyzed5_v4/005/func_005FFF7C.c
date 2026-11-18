#include "ghidra_types.h"

extern int func_003E3F00(undefined4 param_1);
extern int func_003E3F10(undefined4 param_1);
extern int func_0060226C(void);
extern int DAT_00600100;
extern undefined4 *DAT_00600104;
extern undefined4 *DAT_00600108;
extern undefined4 DAT_0060010c;
extern undefined4 DAT_00600110;
extern undefined4 DAT_00600114;
extern undefined4 DAT_00600118;
extern undefined4 DAT_0060011c;

// USA 005FFF7C <- EU 005FFF54 (Ghidra, non-matching)
// GLOBAL DAT_00600100 int
// GLOBAL DAT_00600104 undefined4 *
// GLOBAL DAT_00600108 undefined4 *
// GLOBAL DAT_0060010c undefined4
// GLOBAL DAT_00600110 undefined4
// GLOBAL DAT_00600114 undefined4
// GLOBAL DAT_00600118 undefined4
// GLOBAL DAT_0060011c undefined4

undefined4 func_005FFF7C(undefined4 param_1)

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
  uint uVar10;
  
  puVar2 = DAT_00600104;
  iVar1 = DAT_00600100;
  uVar10 = *(uint *)(DAT_00600100 + 0x9c);
  puVar6 = (undefined4 *)*DAT_00600104;
  uVar8 = (int)puVar6 - *(int *)(uVar10 + 4);
  *(uint *)(uVar10 + 0xc) = uVar8;
  puVar3 = DAT_00600108;
  if (*(uint *)(uVar10 + 0x14) == uVar8) {
    return 0;
  }
  if ((uVar8 & 8) == 0) {
    *(uint *)(uVar10 + 0xc) = uVar8 + 0x20;
    if (puVar6 < (undefined4 *)*puVar3) {
      puVar6[1] = DAT_0060010c;
      *puVar6 = 0;
      *puVar2 = puVar6 + 2;
    }
  }
  else {
    *(uint *)(uVar10 + 0xc) = uVar8 + 0x18;
  }
  uVar4 = DAT_00600110;
  puVar6 = (undefined4 *)*puVar2;
  if (puVar6 < (undefined4 *)*puVar3) {
    *puVar6 = 1;
    puVar6[1] = uVar4;
    *puVar2 = puVar6 + 2;
  }
  uVar4 = DAT_00600114;
  puVar6 = (undefined4 *)*puVar2;
  if (puVar6 < (undefined4 *)*puVar3) {
    *puVar6 = 1;
    puVar6[1] = uVar4;
    *puVar2 = puVar6 + 2;
  }
  uVar4 = DAT_00600118;
  puVar6 = (undefined4 *)*puVar2;
  if (puVar6 < (undefined4 *)*puVar3) {
    puVar6[1] = DAT_0060011c;
    *puVar6 = uVar4;
    *puVar2 = puVar6 + 2;
  }
  puVar5 = (undefined1 *)(*(int *)(uVar10 + 0x18) + *(int *)(uVar10 + 0x20) * 0x1c);
  *puVar5 = 1;
  iVar7 = *(int *)(uVar10 + 4) + *(int *)(uVar10 + 0x14);
  *(int *)(puVar5 + 4) = iVar7;
  if (*(int *)(uVar10 + 0x34) != 0) {
    iVar9 = *(int *)(uVar10 + 0xc) - *(int *)(uVar10 + 0x14);
    *(int *)(puVar5 + 8) = iVar9;
    *(uint *)(*(int *)(uVar10 + 0x34) + 8) =
         ((iVar9 + iVar7) - *(int *)(uVar10 + 0x34)) - 0x18U >> 3;
    *(undefined4 *)(puVar5 + 8) = *(undefined4 *)(uVar10 + 0x30);
    *(undefined4 *)(uVar10 + 0x34) = 0;
    *(undefined4 *)(uVar10 + 0x30) = 0;
  }
  *(undefined4 *)(puVar5 + 8) = param_1;
  uVar8 = *(uint *)(puVar5 + 0xc);
  *(uint *)(puVar5 + 0xc) = uVar8 & 0xfffffffd | 4;
  if (*(char *)(uVar10 + 0x3d) != '\0') {
    *(uint *)(puVar5 + 0xc) = uVar8 & 0xfffffffd | 5;
  }
  *(undefined4 *)(uVar10 + 0x14) = *(undefined4 *)(uVar10 + 0xc);
  func_003E3F00(*(undefined4 *)(uVar10 + 0xc));
  *(int *)(uVar10 + 0x20) = *(int *)(uVar10 + 0x20) + 1;
  uVar8 = *(uint *)(iVar1 + 0xa0);
  if (((uVar8 == uVar10) && (uVar8 = 0, *(char *)(iVar1 + 0x12) != '\0')) &&
     (uVar8 = (uint)*(byte *)(iVar1 + 0x11), uVar8 == 0)) {
    *(undefined1 *)(iVar1 + 0x11) = 1;
    uVar8 = func_0060226C();
  }
  return func_003E3F10(uVar8);
}


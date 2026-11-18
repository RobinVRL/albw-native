#include "ghidra_types.h"

extern int func_003E3F00(undefined4 param_1);
extern int func_003E3F10(undefined4 param_1);
extern int func_00602214(int param_1,int param_2);
extern int func_0060226C(void);
extern int DAT_006015b8;
extern undefined4 *DAT_006015bc;
extern undefined4 *DAT_006015c0;
extern undefined4 DAT_006015c4;
extern undefined4 DAT_006015c8;
extern undefined4 DAT_006015cc;
extern undefined4 DAT_006015d0;
extern undefined4 DAT_006015d4;

// USA 00601468 <- EU 00601440 (Ghidra, non-matching)
// GLOBAL DAT_006015b8 int
// GLOBAL DAT_006015bc undefined4 *
// GLOBAL DAT_006015c0 undefined4 *
// GLOBAL DAT_006015c4 undefined4
// GLOBAL DAT_006015c8 undefined4
// GLOBAL DAT_006015cc undefined4
// GLOBAL DAT_006015d0 undefined4
// GLOBAL DAT_006015d4 undefined4

undefined4 func_00601468(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  bool bVar9;
  
  puVar3 = DAT_006015c0;
  puVar2 = DAT_006015bc;
  iVar1 = DAT_006015b8;
  uVar7 = *(uint *)(DAT_006015b8 + 0x9c);
  puVar5 = (undefined4 *)*DAT_006015bc;
  uVar6 = (int)puVar5 - *(int *)(uVar7 + 4);
  bVar9 = (uVar6 & 8) != 0;
  if (bVar9) {
    puVar5 = (undefined4 *)(uVar6 + 0x18);
  }
  *(uint *)(uVar7 + 0xc) = uVar6;
  if (bVar9) {
    *(undefined4 **)(uVar7 + 0xc) = puVar5;
  }
  else {
    *(uint *)(uVar7 + 0xc) = uVar6 + 0x20;
    if (puVar5 < (undefined4 *)*puVar3) {
      puVar5[1] = DAT_006015c4;
      *puVar5 = 0;
      *puVar2 = puVar5 + 2;
    }
  }
  uVar4 = DAT_006015c8;
  puVar5 = (undefined4 *)*puVar2;
  if (puVar5 < (undefined4 *)*puVar3) {
    *puVar5 = 1;
    puVar5[1] = uVar4;
    *puVar2 = puVar5 + 2;
  }
  uVar4 = DAT_006015cc;
  puVar5 = (undefined4 *)*puVar2;
  if (puVar5 < (undefined4 *)*puVar3) {
    *puVar5 = 1;
    puVar5[1] = uVar4;
    *puVar2 = puVar5 + 2;
  }
  uVar4 = DAT_006015d4;
  puVar5 = (undefined4 *)*puVar2;
  if (puVar5 < (undefined4 *)*puVar3) {
    *puVar5 = DAT_006015d0;
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


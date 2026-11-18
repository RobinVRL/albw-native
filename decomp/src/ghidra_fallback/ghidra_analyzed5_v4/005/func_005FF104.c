#include "ghidra_types.h"

extern int func_001139FC(int param_1);
extern int func_003E3F00(undefined4 param_1);
extern int func_003E3F10(undefined4 param_1);
extern int func_00602214(int param_1,int param_2);
extern int func_0060226C(void);
extern int DAT_005ff264;
extern uint *DAT_005ff268;
extern uint *DAT_005ff26c;
extern undefined4 DAT_005ff270;
extern int DAT_005ff274;
extern uint DAT_005ff278;
extern undefined4 DAT_005ff27c;

// USA 005FF104 <- EU 005FF0DC (Ghidra, non-matching)
// GLOBAL DAT_005ff264 int
// GLOBAL DAT_005ff268 uint *
// GLOBAL DAT_005ff26c uint *
// GLOBAL DAT_005ff270 undefined4
// GLOBAL DAT_005ff274 int
// GLOBAL DAT_005ff278 uint
// GLOBAL DAT_005ff27c undefined4

undefined4 func_005FF104(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  
  puVar3 = DAT_005ff26c;
  puVar2 = DAT_005ff268;
  iVar1 = DAT_005ff264;
  uVar10 = *(uint *)(DAT_005ff264 + 0x9c);
  puVar9 = (undefined4 *)*DAT_005ff268;
  uVar6 = (int)puVar9 - *(int *)(uVar10 + 4);
  *(uint *)(uVar10 + 0xc) = uVar6;
  puVar11 = (undefined1 *)(*(int *)(uVar10 + 0x18) + *(int *)(uVar10 + 0x20) * 0x1c);
  if ((uVar6 & 8) == 0) {
    *(uint *)(uVar10 + 0xc) = uVar6 + 0x20;
    uVar4 = DAT_005ff270;
    if (puVar9 < (undefined4 *)*puVar3) {
      *puVar9 = 0;
      puVar9[1] = uVar4;
      *puVar2 = (uint)(puVar9 + 2);
    }
  }
  else {
    *(uint *)(uVar10 + 0xc) = uVar6 + 0x18;
  }
  piVar7 = (int *)*puVar2;
  if (piVar7 < (int *)*puVar3) {
    piVar7[1] = DAT_005ff274;
    *piVar7 = param_2 >> 3;
    *puVar2 = (uint)(piVar7 + 2);
  }
  if (*puVar2 < *puVar3) {
    uVar5 = func_001139FC(param_1);
    uVar6 = DAT_005ff278;
    puVar8 = (uint *)*puVar2;
    *puVar8 = uVar5 >> 3;
    puVar8[1] = uVar6;
    *puVar2 = (uint)(puVar8 + 2);
  }
  puVar9 = (undefined4 *)*puVar2;
  if (puVar9 < (undefined4 *)*puVar3) {
    puVar9[1] = DAT_005ff27c;
    *puVar9 = 1;
    *puVar2 = (uint)(puVar9 + 2);
  }
  *puVar11 = 1;
  *(int *)(puVar11 + 4) = *(int *)(uVar10 + 4) + *(int *)(uVar10 + 0x14);
  *(int *)(puVar11 + 8) = *(int *)(uVar10 + 0xc) - *(int *)(uVar10 + 0x14);
  *(uint *)(puVar11 + 0xc) = *(uint *)(puVar11 + 0xc) & 0xfffffffd;
  if (*(int *)(uVar10 + 0x34) != 0) {
    func_00602214(uVar10,(int)puVar11);
  }
  *(undefined4 *)(uVar10 + 0x14) = *(undefined4 *)(uVar10 + 0xc);
  func_003E3F00(*(undefined4 *)(uVar10 + 0xc));
  *(int *)(uVar10 + 0x20) = *(int *)(uVar10 + 0x20) + 1;
  uVar6 = *(uint *)(iVar1 + 0xa0);
  if (((uVar6 == uVar10) && (uVar6 = 0, *(char *)(iVar1 + 0x12) != '\0')) &&
     (uVar6 = (uint)*(byte *)(iVar1 + 0x11), uVar6 == 0)) {
    *(undefined1 *)(iVar1 + 0x11) = 1;
    uVar6 = func_0060226C();
  }
  return func_003E3F10(uVar6);
}


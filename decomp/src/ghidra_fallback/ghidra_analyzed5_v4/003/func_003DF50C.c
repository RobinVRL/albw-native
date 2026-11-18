#include "ghidra_types.h"

extern int func_0010AA9C(void);
extern int func_0058FBB8(undefined4 *param_1,undefined4 *param_2);
extern int DAT_003df64c;
extern int DAT_003df650;

// USA 003DF50C <- EU 003DF4EC (Ghidra, non-matching)
// GLOBAL DAT_003df64c int
// GLOBAL DAT_003df650 int

undefined4 func_003DF50C(int param_1,int param_2,uint *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  bool bVar8;
  
  iVar1 = func_0010AA9C();
  if (iVar1 != 0) {
    uVar4 = *param_3;
    uVar5 = param_3[1];
    if (uVar4 + 0xec000000 < 0x8000000) {
      puVar6 = *(uint **)(param_1 + (*(ushort *)(DAT_003df64c + param_1) & 1) * 0x60 + param_2 * 4 +
                         0x10b0);
      uVar2 = puVar6[0x2d];
      uVar3 = uVar2 & 0xffff;
      uVar7 = uVar4;
      if ((uVar2 & 0xc) == 0) {
        if ((uVar2 & 3) == 1) {
          uVar7 = uVar4 + uVar5;
        }
        if ((uVar2 & 3) == 2) {
          uVar7 = uVar7 + uVar5 * 2;
        }
      }
      if ((uVar3 << 0x1c) >> 0x1e == 1) {
        if ((uVar2 & 3) == 1) {
          uVar7 = uVar7 + uVar5 * 2;
        }
        if ((uVar2 & 3) == 2) {
          uVar7 = uVar7 + uVar5 * 4;
        }
      }
      bVar8 = (uVar3 << 0x1c) >> 0x1e == 2;
      if (bVar8) {
        uVar3 = uVar2 & 3;
      }
      if (bVar8 && uVar3 == 1) {
        iVar1 = (int)((longlong)(int)(uVar5 + 0xd) * (longlong)DAT_003df650 +
                      ((ulonglong)(uVar5 + 0xd) << 0x20) >> 0x20);
        uVar7 = uVar7 + ((iVar1 >> 3) - (iVar1 >> 0x1f)) * 8;
      }
      if ((0x14000000 < uVar7) && (uVar7 < 0x1c000001)) {
        iVar1 = param_4 * 0x14;
        *(undefined2 *)(puVar6 + param_4 * 5 + 0x17) = *(undefined2 *)((int)param_3 + 0x12);
        puVar6[param_4 * 5 + 0x13] = uVar4 + 0xc000000 >> 0x10 | uVar4 << 0x10;
        puVar6[param_4 * 5 + 0x14] = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((undefined4 *)param_3[2] == (undefined4 *)0x0) {
          *(ushort *)((int)puVar6 + iVar1 + 0x5a) = *(ushort *)((int)puVar6 + iVar1 + 0x5a) & 0xff00
          ;
        }
        else {
          func_0058FBB8(puVar6 + param_4 * 5 + 0x15,(undefined4 *)param_3[2]);
          *(undefined1 *)((int)puVar6 + iVar1 + 0x5a) = 1;
        }
        *(ushort *)((int)puVar6 + 0x4a) =
             *(ushort *)((int)puVar6 + 0x4a) | (ushort)(1 << (param_4 & 0xff));
        *(char *)((int)puVar6 + iVar1 + 0x5b) = (char)param_3[4];
        *puVar6 = *puVar6 | 0x80000;
        return 1;
      }
    }
  }
  return 0;
}


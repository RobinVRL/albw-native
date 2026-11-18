#include "ghidra_types.h"

extern int func_00166C00(int param_1,int param_2);
extern int func_002C00A8(int param_1);
extern int func_00459A84(int param_1,uint param_2);
extern int *DAT_004574e4;

// USA 00457440 <- EU 00457418 (Ghidra, non-matching)
// GLOBAL DAT_004574e4 int *

void func_00457440(int param_1)

{
  int *piVar1;
  ushort *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  uVar5 = 0;
  do {
    piVar1 = (int *)(param_1 + 0x1e4);
    if (uVar5 < 3) {
      piVar1 = piVar1 + uVar5;
    }
    iVar6 = *piVar1;
    func_002C00A8(*(int *)(iVar6 + 0x14));
    uVar5 = uVar5 + 1;
    puVar2 = (ushort *)(*(int *)(iVar6 + 0x14) + 0x16);
    *puVar2 = *puVar2 | 0x40;
  } while ((int)uVar5 < 3);
  if (*(int *)(param_1 + 0x214) != -1) {
    uVar5 = 0;
    do {
      puVar3 = (uint *)(param_1 + 0x1e4);
      if (uVar5 < 3) {
        puVar3 = puVar3 + uVar5;
      }
      uVar4 = *puVar3;
      bVar7 = *(char *)(uVar4 + 0xd) == '\0';
      if (bVar7) {
        uVar4 = (uint)*(byte *)(uVar4 + 0xe);
      }
      if (bVar7 && uVar4 == 0) {
        piVar1 = (int *)(param_1 + 0x1e4);
        if (uVar5 < 3) {
          piVar1 = piVar1 + uVar5;
        }
        *(undefined1 *)(*piVar1 + 0xe) = 1;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 3);
    func_00459A84(param_1,*(uint *)(param_1 + 0x214));
  }
  *(undefined4 *)(param_1 + 0x214) = 0xffffffff;
  piVar1 = DAT_004574e4;
  *(undefined1 *)(param_1 + 0x224) = 1;
  func_00166C00(*piVar1,1);
  *(undefined1 *)(param_1 + 0x234) = 0;
  return;
}


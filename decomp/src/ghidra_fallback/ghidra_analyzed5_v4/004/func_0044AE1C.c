#include "ghidra_types.h"

extern int func_002C00A8(int param_1);
extern int func_0046A1D4(int param_1,int param_2);
extern int func_004727B8(int param_1,int param_2);
extern int func_00584B94(int param_1,int param_2);
extern int DAT_0044ae98;
extern int *DAT_0044ae9c;

// USA 0044AE1C <- EU 0044ADF4 (Ghidra, non-matching)
// GLOBAL DAT_0044ae98 int
// GLOBAL DAT_0044ae9c int *

void func_0044AE1C(int param_1)

{
  bool bVar1;
  int iVar2;
  ushort *puVar3;
  ushort uVar4;
  int iVar5;
  
  *(undefined1 *)(param_1 + 0x292) = 0;
  *(undefined1 *)(param_1 + 0x293) = 0;
  if (*(char *)(*(int *)(param_1 + 0x210) + 0x5d) == '\0') {
    func_004727B8(*(int *)(param_1 + 0x20c),1);
    func_002C00A8(*(int *)(param_1 + 0x14));
    iVar2 = *(int *)(param_1 + 0x14);
    iVar5 = *(int *)(param_1 + 0x218);
    *(int *)(iVar2 + 4) = iVar5;
    puVar3 = (ushort *)(iVar2 + 0x16);
    uVar4 = *puVar3;
    if (iVar5 == 0) {
      uVar4 = uVar4 & 0xffbf;
    }
    else {
      uVar4 = uVar4 | 0x40;
    }
    *puVar3 = uVar4;
    bVar1 = func_00584B94(*DAT_0044ae9c,DAT_0044ae98);
    if (bVar1) {
      func_0046A1D4(*(int *)(param_1 + 0x214),1);
    }
    if (*(char *)(param_1 + 0x208) != '\0') {
      puVar3 = (ushort *)(*(int *)(param_1 + 0x230) + 0x16);
      *puVar3 = *puVar3 | 0x40;
    }
  }
  return;
}


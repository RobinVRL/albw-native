#include "ghidra_types.h"

extern int func_001139F8(int param_1);
extern int func_00600660(int param_1);
extern int *DAT_003f6f5c;

// USA 003F6EC0 <- EU 003F6EA0 (Ghidra, non-matching)
// GLOBAL DAT_003f6f5c int *

void func_003F6EC0(int param_1,int param_2,char *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = param_1;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_3 + 0x1c);
  }
  if (param_2 != 0 && iVar2 != 0) {
    iVar2 = func_00600660(0x20000);
    uVar3 = func_001139F8(iVar2);
    piVar1 = DAT_003f6f5c;
    uVar3 = uVar3 >> 3;
    piVar5 = (int *)(param_2 + *(int *)(param_3 + 0x24) * 4);
    if (*param_3 == '\x05' || *param_3 == '\x06') {
      iVar2 = func_001139F8(*(int *)(*DAT_003f6f5c + 0x954));
      *piVar5 = iVar2 + uVar3 * -8;
    }
    else {
      iVar2 = func_001139F8(*(int *)(*DAT_003f6f5c + 0xc));
      *piVar5 = iVar2 + uVar3 * -8;
      iVar2 = *(int *)(param_3 + 0x28);
      if (iVar2 != 0) {
        iVar4 = func_001139F8(*(int *)(*piVar1 + 0xc) + 0x180);
        *(uint *)(param_2 + iVar2 * 4) = iVar4 + uVar3 * -8;
      }
    }
    *(int *)(param_1 + 4) = param_2;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 0x1c);
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  return;
}


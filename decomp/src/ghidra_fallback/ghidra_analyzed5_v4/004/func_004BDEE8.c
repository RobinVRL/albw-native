#include "ghidra_types.h"

extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int *DAT_004bdf10;

// USA 004BDEE8 <- EU 004BDEC0 (Ghidra, non-matching)
// GLOBAL DAT_004bdf10 int *

void func_004BDEE8(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  piVar1 = DAT_004bdf10;
  uVar3 = (uint)*(byte *)(param_1 + 0x85a);
  bVar4 = uVar3 == 0;
  if (bVar4) {
    uVar3 = *(uint *)(param_1 + 0x86c);
  }
  iVar2 = *DAT_004bdf10;
  if (!bVar4) {
    if (uVar3 != 3) goto LAB_004bdf04;
    func_004A8304(iVar2,*(int *)(param_1 + 0x86c));
    uVar3 = *(uint *)(param_1 + 0x86c);
    iVar2 = *piVar1;
  }
  func_004A7F00(iVar2,uVar3,3);
LAB_004bdf04:
  *(undefined1 *)(param_1 + 0x85a) = 1;
  return;
}


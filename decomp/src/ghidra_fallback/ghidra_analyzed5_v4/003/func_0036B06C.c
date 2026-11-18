#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_0034C47C(int param_1,int param_2);
extern int func_005568D4(int param_1);
extern int func_00666E8C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0036b124;
extern int *DAT_0036b128;

// USA 0036B06C <- EU 0036B048 (Ghidra, non-matching)
// GLOBAL DAT_0036b124 int *
// GLOBAL DAT_0036b128 int *

undefined4 func_0036B06C(int param_1)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  
  piVar3 = DAT_0036b124;
  if ((*DAT_0036b124 != 0) &&
     (uVar4 = func_005568D4(*DAT_0036b124), *(uint *)(param_1 + 0x68) != (uint)uVar4)) {
    iVar7 = *piVar3;
    uVar4 = func_005568D4(iVar7);
    uVar5 = *(int *)(param_1 + 0x68) - (uint)uVar4;
    uVar1 = (int)uVar5 >> 0x1f;
    if ((int)((uVar5 ^ uVar1) - uVar1) < 2) {
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x68);
      uVar4 = func_005568D4(iVar7);
      *(uint *)(param_1 + 0x68) = (uint)uVar4;
      func_00666E8C((undefined4 *)(param_1 + 0x3c),1);
    }
    else {
      func_00666E8C((undefined4 *)(param_1 + 0x3c),0);
    }
    return func_0034C47C(*(int *)(param_1 + 0x60),0);
  }
  if ((*(byte *)(*(int *)(*DAT_0036b128 + 0x130) + 0x74) & 4) == 0) {
    iVar6 = *(int *)(*(int *)(*DAT_0036b128 + 0x130) + 0x50);
    bVar9 = SBORROW4(iVar6,1);
    iVar7 = iVar6 + -1;
    bVar8 = iVar6 == 1;
    if (iVar6 < 2) {
      iVar6 = *(int *)(param_1 + 0x3c);
      bVar9 = SBORROW4(iVar6,0x3c);
      iVar7 = iVar6 + -0x3c;
      bVar8 = iVar6 == 0x3c;
    }
    if (!bVar8 && iVar7 < 0 == bVar9) {
      iVar7 = **(int **)(param_1 + 100);
      cVar2 = '\0';
      if (iVar7 != 0) {
        cVar2 = *(char *)(iVar7 + 0x44);
      }
      if (iVar7 == 0 || cVar2 == '\x01') {
        return func_0012C718(param_1);
      }
    }
  }
  return 0;
}


#include "ghidra_types.h"

extern int func_0034C47C(int param_1,int param_2);
extern int func_0036A638(int param_1);
extern int func_005568D4(int param_1);
extern int func_00666E8C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0036af74;

// USA 0036AEEC <- EU 0036AEC8 (Ghidra, non-matching)
// GLOBAL DAT_0036af74 int *

undefined4 func_0036AEEC(int param_1)

{
  uint uVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = func_0036A638(param_1);
  piVar2 = DAT_0036af74;
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x6c);
    uVar3 = func_005568D4(*piVar2);
    if (*(uint *)(param_1 + 0x68) != (uint)uVar3) {
      iVar4 = *piVar2;
      uVar3 = func_005568D4(iVar4);
      uVar5 = *(int *)(param_1 + 0x68) - (uint)uVar3;
      uVar1 = (int)uVar5 >> 0x1f;
      if ((int)((uVar5 ^ uVar1) - uVar1) < 2) {
        *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x68);
        uVar3 = func_005568D4(iVar4);
        *(uint *)(param_1 + 0x68) = (uint)uVar3;
        func_00666E8C((undefined4 *)(param_1 + 0x3c),1);
      }
      else {
        func_00666E8C((undefined4 *)(param_1 + 0x3c),0);
      }
      return func_0034C47C(*(int *)(param_1 + 0x60),0);
    }
    func_00666E8C((undefined4 *)(param_1 + 0x3c),2);
  }
  return 0;
}


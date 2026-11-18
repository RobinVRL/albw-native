#include "ghidra_types.h"

extern int func_00232468(int param_1);
extern int func_0034C47C(int param_1,int param_2);
extern int func_005568D4(int param_1);
extern int func_00666E8C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0036a28c;

// USA 0036A20C <- EU 0036A1E8 (Ghidra, non-matching)
// GLOBAL DAT_0036a28c int *

undefined4 func_0036A20C(int param_1)

{
  uint uVar1;
  int *piVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  
  func_00232468(param_1);
  piVar2 = DAT_0036a28c;
  *(undefined1 *)(param_1 + 0x90) = 0;
  uVar3 = func_005568D4(*piVar2);
  if (*(uint *)(param_1 + 0x68) == (uint)uVar3) {
    return func_00666E8C((undefined4 *)(param_1 + 0x3c),2);
  }
  iVar5 = *piVar2;
  uVar3 = func_005568D4(iVar5);
  uVar4 = *(int *)(param_1 + 0x68) - (uint)uVar3;
  uVar1 = (int)uVar4 >> 0x1f;
  if ((int)((uVar4 ^ uVar1) - uVar1) < 2) {
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x68);
    uVar3 = func_005568D4(iVar5);
    *(uint *)(param_1 + 0x68) = (uint)uVar3;
    func_00666E8C((undefined4 *)(param_1 + 0x3c),1);
  }
  else {
    func_00666E8C((undefined4 *)(param_1 + 0x3c),0);
  }
  return func_0034C47C(*(int *)(param_1 + 0x60),0);
}


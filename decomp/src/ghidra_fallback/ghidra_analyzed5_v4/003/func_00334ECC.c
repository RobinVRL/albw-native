#include "ghidra_types.h"

extern int func_0054E044(int param_1);
extern int func_0054EA0C(int *param_1);
extern int func_006658F8(undefined4 *param_1,undefined1 param_2);

// USA 00334ECC <- EU 00334EA8 (Ghidra, non-matching)

void func_00334ECC(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 uVar3;
  
  bVar1 = func_0054E044((int)param_1);
  if ((bVar1) && (iVar2 = func_0054EA0C(param_1), iVar2 != 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)(param_1 + 0x133) = uVar3;
  iVar2 = (**(code **)(*param_1 + 0x68))(param_1);
  if (iVar2 != 0) {
    func_006658F8(param_1 + 0x141,0);
  }
  return;
}


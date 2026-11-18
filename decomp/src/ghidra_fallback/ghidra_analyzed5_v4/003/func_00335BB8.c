#include "ghidra_types.h"

extern int func_002ACC68(undefined4 *param_1);
extern int func_00325428(int *param_1);
extern int func_0054E044(int param_1);
extern int func_0054EA0C(int *param_1);
extern int func_006658F8(undefined4 *param_1,undefined1 param_2);

// USA 00335BB8 <- EU 00335B94 (Ghidra, non-matching)

undefined4 func_00335BB8(int *param_1)

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
  if (iVar2 == 0) {
    iVar2 = func_00325428(param_1);
    if ((iVar2 != 0) && (bVar1 = func_002ACC68(param_1 + 0xf4), !bVar1)) {
      return func_006658F8(param_1 + 0x141,2);
    }
  }
  else {
    func_006658F8(param_1 + 0x141,0);
  }
  return 0;
}


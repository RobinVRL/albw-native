#include "ghidra_types.h"

extern undefined8 func_0058A474(undefined4 param_1,uint param_2);
extern int func_0058A8F0(int param_1);
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);

// USA 0020AAEC <- EU 0020AAEC (Ghidra, non-matching)

void func_0020AAEC(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 != 0) {
    uVar3 = func_0058A474(param_1,0x32);
    if ((int)uVar3 == 0) {
      uVar2 = 0x11;
    }
    else {
      uVar2 = 0x18;
    }
    func_0065D630((undefined4 *)(param_1 + 0x8bc),uVar2);
  }
  return;
}


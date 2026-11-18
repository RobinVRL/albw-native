#include "ghidra_types.h"

extern int func_00392E48(undefined4 *param_1,int param_2,undefined4 *param_3,undefined1 param_4);
extern int func_0065C988(undefined4 *param_1,undefined1 param_2);

// USA 001D6464 <- EU 001D6464 (Ghidra, non-matching)

void func_001D6464(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  if (*(char *)(param_1 + 0x4d8) != '\b') {
    iVar1 = func_00392E48((undefined4 *)(param_1 + 0x3d0),1,(undefined4 *)0x0,0);
    if (iVar1 == 0) {
      uVar2 = 6;
    }
    else {
      uVar2 = 2;
    }
    func_0065C988((undefined4 *)(param_1 + 0x4d4),uVar2);
  }
  return;
}


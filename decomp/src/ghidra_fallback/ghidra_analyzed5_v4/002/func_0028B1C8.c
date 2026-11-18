#include "ghidra_types.h"

extern int func_001E4AE4(int param_1,undefined4 param_2);
extern int func_00661708(undefined4 *param_1,undefined1 param_2);

// USA 0028B1C8 <- EU 0028B1F0 (Ghidra, non-matching)

undefined4 func_0028B1C8(int param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  
  cVar1 = *(char *)(param_1 + 0x4f8);
  if ((cVar1 == '\x05' || cVar1 == '\x02') || (cVar1 == '\x03')) {
    bVar2 = func_001E4AE4(param_1,param_2);
    uVar3 = 0;
    if (bVar2) {
      func_00661708((undefined4 *)(param_1 + 0x4f4),6);
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


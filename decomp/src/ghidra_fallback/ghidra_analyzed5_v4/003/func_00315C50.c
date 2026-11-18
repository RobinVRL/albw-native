#include "ghidra_types.h"

extern int func_003154F4(int *param_1,int param_2);
extern int func_00664C50(undefined4 *param_1,undefined1 param_2);

// USA 00315C50 <- EU 00315C2C (Ghidra, non-matching)

undefined4 func_00315C50(int *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  
  uVar1 = 1 << (*(ushort *)(param_2 + 0x20) & 0x1f);
  if ((uVar1 & 0xd80) == 0 && (uVar1 & 0x20) == 0) {
    if ((*(uint *)(param_2 + 0x24) & 0x40) == 0) {
      iVar3 = func_003154F4(param_1,param_2);
      if (iVar3 == 0) {
        return 1;
      }
      cVar2 = (char)param_1[0x116];
    }
    else {
      cVar2 = (char)param_1[0x116];
    }
    if (cVar2 == '\0') {
      func_00664C50(param_1 + 0x115,1);
    }
    else {
      param_1[0x125] = 0;
    }
  }
  return 1;
}


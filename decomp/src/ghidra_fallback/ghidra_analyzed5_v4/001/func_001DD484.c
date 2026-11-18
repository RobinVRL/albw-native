#include "ghidra_types.h"

extern int func_00149BD4(byte *param_1,int param_2);
extern int func_004C69DC(int param_1,int param_2);
extern int *DAT_001dd528;
extern int *DAT_001dd52c;

// USA 001DD484 <- EU 001DD484 (Ghidra, non-matching)
// GLOBAL DAT_001dd528 int *
// GLOBAL DAT_001dd52c int *

undefined4 func_001DD484(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar3 = (uint)*(byte *)(iVar1 + 0x598);
  if ((uVar3 != 0) && (*(char *)(iVar1 + 0x6c1) == '\0')) {
    if ((param_2 < 0) &&
       (*(char *)(*DAT_001dd528 + 0x18) == '\a' || *(char *)(*DAT_001dd528 + 0x18) == '%')) {
      uVar2 = -param_2;
      if (-uVar3 != param_2 && (int)uVar3 <= -param_2) {
        uVar2 = uVar3;
      }
      if ((0 < (int)uVar2) && (*DAT_001dd52c != 0)) {
        func_004C69DC(*DAT_001dd52c,uVar2 & 0xffff);
      }
    }
    func_00149BD4((byte *)(iVar1 + 0x598),param_2);
    return 1;
  }
  return 0;
}


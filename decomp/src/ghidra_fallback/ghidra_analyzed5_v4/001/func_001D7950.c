#include "ghidra_types.h"

extern int func_00520EE4(int param_1);
extern int func_0052107C(int param_1);
extern int func_00559B54(void);
extern int func_0065C988(undefined4 *param_1,undefined1 param_2);

// USA 001D7950 <- EU 001D7950 (Ghidra, non-matching)

undefined4 func_001D7950(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)func_00559B54();
  uVar4 = *puVar2;
  uVar5 = puVar2[1];
  *(undefined4 *)(param_1 + 0x3e4) = puVar2[2];
  *(undefined4 *)(param_1 + 0x3dc) = uVar4;
  *(undefined4 *)(param_1 + 0x3e0) = uVar5;
  if (*(uint *)(param_1 + 0x548) < *(uint *)(param_1 + 0x54c)) {
    *(uint *)(param_1 + 0x548) = *(uint *)(param_1 + 0x548) + 1;
  }
  else {
    bVar1 = func_0052107C(param_1);
    if ((bVar1) || (*(char *)(param_1 + 0x514) == '\0')) {
      iVar3 = func_00520EE4(param_1);
      if (iVar3 != 0) {
        return func_0065C988((undefined4 *)(param_1 + 0x4d4),6);
      }
    }
    else {
      func_0065C988((undefined4 *)(param_1 + 0x4d4),2);
    }
  }
  return 0;
}


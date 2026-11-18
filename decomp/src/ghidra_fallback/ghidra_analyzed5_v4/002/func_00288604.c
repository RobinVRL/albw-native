#include "ghidra_types.h"

extern int func_00520EE4(int param_1);
extern int func_0052107C(int param_1);
extern int func_00559B54(void);
extern int func_00661480(undefined4 *param_1,undefined1 param_2);

// USA 00288604 <- EU 0028862C (Ghidra, non-matching)

undefined4 func_00288604(int param_1)

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
  if (*(uint *)(param_1 + 0x534) < *(uint *)(param_1 + 0x538)) {
    *(uint *)(param_1 + 0x534) = *(uint *)(param_1 + 0x534) + 1;
  }
  else {
    bVar1 = func_0052107C(param_1);
    if ((bVar1) || (*(char *)(param_1 + 0x518) == '\0')) {
      iVar3 = func_00520EE4(param_1);
      if (iVar3 != 0) {
        return func_00661480((undefined4 *)(param_1 + 0x4dc),6);
      }
    }
    else {
      func_00661480((undefined4 *)(param_1 + 0x4dc),2);
    }
  }
  return 0;
}


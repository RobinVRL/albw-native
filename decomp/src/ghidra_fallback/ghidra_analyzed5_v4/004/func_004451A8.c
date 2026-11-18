// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0012C85C(int *param_1,uint param_2);
extern int func_0051E300(int param_1);

// USA 004451A8 <- EU 00445180 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)

undefined4 func_004451A8(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  iVar3 = *(int *)(param_1 + 0x54);
  while( true ) {
    piVar2 = (int *)(iVar1 - iVar3);
    if (piVar2 == (int *)((param_1 + 0x48) - *(uint *)(param_1 + 0x54))) break;
    iVar1 = func_0051E300((int)piVar2);
    if (iVar1 != 0) {
      (**(code **)(*piVar2 + 0xc))(piVar2);
    }
    iVar1 = *(int *)((int)piVar2 + iVar3 + 4);
  }
  return func_0012C85C((int *)param_1,*(uint *)(param_1 + 0x54));
}


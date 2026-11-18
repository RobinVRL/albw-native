// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_004D0194(int param_1,undefined4 param_2);
extern int func_004D0268(int param_1,undefined4 param_2);
extern int func_00584E64(int param_1);
extern int func_00584E70(int param_1);

// USA 0036176C <- EU 00361748 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)

undefined4 func_0036176C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x600);
  iVar2 = func_00584E64(*(int *)(iVar1 + 0x10));
  func_004D0194(param_2,iVar2);
  iVar1 = func_00584E70(*(int *)(iVar1 + 0x10));
  return func_004D0268(param_2,iVar1);
}


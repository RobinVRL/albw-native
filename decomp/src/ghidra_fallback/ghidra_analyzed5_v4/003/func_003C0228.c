#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_004CEAF0(int param_1);
extern int func_0053ED14(int param_1);
extern int func_0053ED58(int param_1);

// USA 003C0228 <- EU 003C0204 (Ghidra, non-matching)

undefined4 func_003C0228(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x1c) == '\0') {
    puVar1 = (undefined4 *)func_0053ED14(*(int *)(param_2 + 0x600));
  }
  else {
    puVar1 = (undefined4 *)func_0053ED58(*(int *)(param_2 + 0x600));
  }
  iVar2 = *(int *)(param_1 + 4);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_001151EC((undefined4 *)(iVar2 + 0x80),puVar1);
  return func_004CEAF0(*(int *)(param_1 + 4));
}


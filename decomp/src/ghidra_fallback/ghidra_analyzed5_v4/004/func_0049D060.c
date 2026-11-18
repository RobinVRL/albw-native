#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);

// USA 0049D060 <- EU 0049D038 (Ghidra, non-matching)

undefined4 func_0049D060(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 4;
  func_0010C0B8(iVar2);
  if (((*(uint *)(param_2 + 0x30) & 2) != 0 && (*(uint *)(param_2 + 0x30) & 4) != 0) &&
     (*(char *)(param_2 + 0x60) == '\x04')) {
    do {
      if (*(int *)(param_2 + 0x14) == 0) {
        func_0010EEE0(iVar2);
        return 1;
      }
      iVar1 = func_0049D060(param_1,*(int *)(*(int *)(param_2 + 0x14) + 0x10));
    } while (iVar1 != 0);
  }
  func_0010EEE0(iVar2);
  return 0;
}


#include "ghidra_types.h"

extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_0065AAC8(undefined4 *param_1,undefined1 param_2);
extern int *DAT_001aa868;

// USA 001AA810 <- EU 001AA810 (Ghidra, non-matching)
// GLOBAL DAT_001aa868 int *

void func_001AA810(int param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = func_0051D27C((int *)(param_1 + 1000),*(int *)(param_1 + 0x928),*DAT_001aa868);
  if (bVar1) {
    if (*(char *)(param_1 + 0x965) == '\0') {
      iVar2 = *(int *)(param_1 + 0x928) + -0x40000000;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x928) + 0x40000000;
    }
    *(int *)(param_1 + 0x928) = iVar2;
    func_0065AAC8((undefined4 *)(param_1 + 0x904),5);
  }
  return;
}


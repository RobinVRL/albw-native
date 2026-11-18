#include "ghidra_types.h"

extern int func_0014E640(int param_1,int param_2);
extern int func_00297674(int param_1,int param_2);
extern int *DAT_00297910;

// USA 0029788C <- EU 002978B4 (Ghidra, non-matching)
// GLOBAL DAT_00297910 int *

int func_0029788C(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar1 = func_00297674(*DAT_00297910,0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = func_00297674(*DAT_00297910,*(int *)(param_1 + 0x18));
    if (iVar1 == 0) {
      return 0;
    }
    func_0014E640(*(int *)(param_1 + 0x18),iVar1);
  }
  *(undefined1 *)(iVar1 + 0x4d) = 1;
  return iVar1;
}


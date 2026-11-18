#include "ghidra_types.h"

extern int func_0017B7F8(void);
extern int func_0017D1A0(void);

// USA 0036DB8C <- EU 0036DB68 (Ghidra, non-matching)

undefined4 func_0036DB8C(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0xb10) == 0) {
      *(int *)(param_1 + 0xb10) = 1;
      func_0017D1A0();
      return 0;
    }
    if (*(int *)(param_1 + 0xb10) == 1) {
      iVar1 = func_0017B7F8();
      if (iVar1 != 0) {
        *(int *)(param_1 + 0xb10) = *(int *)(param_1 + 0xb10) + 1;
      }
      return 0;
    }
  }
  return 1;
}


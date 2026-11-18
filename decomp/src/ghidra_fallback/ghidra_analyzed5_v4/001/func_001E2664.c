#include "ghidra_types.h"

extern int func_0010A7BC(int *param_1);
extern int func_0010A884(int *param_1);
extern int func_0010A8D4(int *param_1);
extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_0010F1DC(int *param_1,int *param_2);

// USA 001E2664 <- EU 001E2664 (Ghidra, non-matching)

undefined4 func_001E2664(int param_1,int param_2)

{
  int iVar1;
  
  func_0010C0B8(param_1 + 0x30);
  func_0010A8D4((int *)(param_2 + 0xa0));
  func_0010F1DC((int *)(param_1 + 0x10),(int *)(*(int *)(param_1 + 0x1c) + param_2));
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  func_0010EEE0(param_1 + 0x30);
  iVar1 = func_0010A884((int *)(param_2 + 0xa0));
  if (iVar1 == 0) {
    return func_0010A7BC((int *)(param_2 + 0xa0));
  }
  return 0;
}


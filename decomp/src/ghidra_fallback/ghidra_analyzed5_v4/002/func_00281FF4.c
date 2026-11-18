#include "ghidra_types.h"

extern int func_004C0B24(int param_1);
extern int func_004D0194(int param_1,undefined4 param_2);
extern int func_004D0268(int param_1,undefined4 param_2);
extern int func_00584E64(int param_1);
extern int func_00584E70(int param_1);

// USA 00281FF4 <- EU 0028201C (Ghidra, non-matching)

undefined4 func_00281FF4(int param_1)

{
  int iVar1;
  
  func_004C0B24(param_1);
  iVar1 = func_00584E64(*(int *)(param_1 + 0x7a0));
  func_004D0194(*(int *)(param_1 + 0x7a4),iVar1);
  iVar1 = func_00584E70(*(int *)(param_1 + 0x7a0));
  return func_004D0268(*(int *)(param_1 + 0x7a4),iVar1);
}


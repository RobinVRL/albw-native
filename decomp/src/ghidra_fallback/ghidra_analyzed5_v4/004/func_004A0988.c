#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);

// USA 004A0988 <- EU 004A0960 (Ghidra, non-matching)

void func_004A0988(int param_1,int param_2)

{
  func_0010F1DC((int *)(param_1 + 4),(int *)(*(int *)(param_1 + 0x10) + param_2));
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  *(int *)(param_2 + 0x20) = param_1;
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_1 + 0x1c4);
  return;
}


#include "ghidra_types.h"

extern int func_0016C710(int param_1,int *param_2);
extern int func_005044B8(int param_1);
extern int *DAT_00273914;
extern int *DAT_00273918;

// USA 002738C0 <- EU 002738E8 (Ghidra, non-matching)
// GLOBAL DAT_00273914 int *
// GLOBAL DAT_00273918 int *

void func_002738C0(int param_1,int *param_2)

{
  func_0016C710(*DAT_00273914,param_2);
  func_005044B8(*DAT_00273918);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


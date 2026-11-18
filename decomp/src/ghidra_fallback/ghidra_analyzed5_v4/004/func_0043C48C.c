#include "ghidra_types.h"

extern int func_0044A9F8(int param_1);
extern int func_00476CA0(int param_1,int param_2);
extern int *DAT_0043c4d4;
extern int *DAT_0043c4d8;

// USA 0043C48C <- EU 0043C46C (Ghidra, non-matching)
// GLOBAL DAT_0043c4d4 int *
// GLOBAL DAT_0043c4d8 int *

void func_0043C48C(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (((*DAT_0043c4d4 != 0) && (0xc < (int)*(char *)(*DAT_0043c4d4 + 0x18) - 9U)) &&
     (*(int *)(param_1 + 0x148) == *(int *)(param_1 + 0x154))) {
    func_0044A9F8(*(int *)(param_1 + 0x154));
    func_00476CA0(*(int *)(param_1 + 0x158),0);
    *(ushort *)(*DAT_0043c4d8 + 0x33e) = *(ushort *)(*DAT_0043c4d8 + 0x33e) & 64999;
  }
  return;
}


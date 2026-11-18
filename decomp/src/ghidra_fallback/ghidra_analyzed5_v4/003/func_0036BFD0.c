#include "ghidra_types.h"

extern int func_001DDCC4(int param_1,undefined1 param_2);
extern int func_004EB4C8(int param_1,int param_2);
extern int *DAT_0036c028;
extern int *DAT_0036c02c;
extern int *DAT_0036c030;

// USA 0036BFD0 <- EU 0036BFAC (Ghidra, non-matching)
// GLOBAL DAT_0036c028 int *
// GLOBAL DAT_0036c02c int *
// GLOBAL DAT_0036c030 int *

void func_0036BFD0(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_004EB4C8(*DAT_0036c028,0x3c);
  if (*DAT_0036c02c != 0) {
    func_001DDCC4(*DAT_0036c02c,1);
  }
  *(ushort *)(*DAT_0036c030 + 0x33e) = *(ushort *)(*DAT_0036c030 + 0x33e) | 9;
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 1;
  return;
}


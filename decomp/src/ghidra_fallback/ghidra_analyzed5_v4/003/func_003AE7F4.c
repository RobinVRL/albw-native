#include "ghidra_types.h"

extern int func_002DF504(int param_1,int param_2);
extern int *DAT_003ae890;

// USA 003AE7F4 <- EU 003AE7D0 (Ghidra, non-matching)
// GLOBAL DAT_003ae890 int *

undefined4 func_003AE7F4(int *param_1,int param_2)

{
  param_1[0x34] = *(int *)(param_2 + 4);
  param_1[0x35] = *(int *)(param_2 + 8);
  param_1[0x36] = *(int *)(param_2 + 0xc);
  param_1[0x37] = *(int *)(param_2 + 0x10);
  param_1[0x38] = *(int *)(param_2 + 0x14);
  param_1[0x39] = *(int *)(param_2 + 0x18);
  param_1[0x3a] = *(int *)(param_2 + 0x1c);
  param_1[0x3b] = *(int *)(param_2 + 0x20);
  param_1[0x3c] = *(int *)(param_2 + 0x24);
  param_1[0x3d] = *(int *)(param_2 + 0x28);
  param_1[0x3f] = *(int *)(param_2 + 0x30);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x34);
  *(undefined1 *)((int)param_1 + 0x101) = *(undefined1 *)(param_2 + 0x35);
  *(undefined1 *)((int)param_1 + 0x102) = *(undefined1 *)(param_2 + 0x36);
  *(undefined1 *)((int)param_1 + 0x103) = *(undefined1 *)(param_2 + 0x37);
  *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)(param_2 + 0x38);
  param_1[0x42] = *(int *)(param_2 + 0x3c);
  (**(code **)(*param_1 + 0x44))(param_1);
  *(undefined1 *)(param_1 + 0x43) = 1;
  return func_002DF504(*DAT_003ae890,(int)param_1);
}


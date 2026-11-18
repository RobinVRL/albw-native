#include "ghidra_types.h"

extern int func_001215C0(int param_1);
extern int func_00152078(undefined4 *param_1);
extern int func_001E81A8(int param_1,float *param_2,uint param_3,int param_4);
extern int func_00351C7C(int param_1);

// USA 001214F4 <- EU 001214F4 (Ghidra, non-matching)

void func_001214F4(int param_1,int param_2,uint param_3)

{
  func_00152078((undefined4 *)(param_1 + 200));
  func_00351C7C(*(int *)(param_1 + 0x184));
  func_001E81A8(*(int *)(param_1 + 0x1c8),(float *)(param_1 + 200),param_3,param_2);
  func_001215C0(param_1);
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x1b0);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x1b8);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 0x1bc);
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_1 + 0x1c0);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  return;
}


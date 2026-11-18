#include "ghidra_types.h"

extern int func_004BC7BC(int param_1);
extern int DAT_004dd34c;
extern int DAT_004dd350;
extern int DAT_004dd354;

// USA 004DD304 <- EU 004DD2DC (Ghidra, non-matching)
// GLOBAL DAT_004dd34c int
// GLOBAL DAT_004dd350 int
// GLOBAL DAT_004dd354 int

void func_004DD304(int *param_1)

{
  param_1[0xeb] = DAT_004dd34c;
  func_004BC7BC((int)param_1);
  (**(code **)(*param_1 + 0xac))(param_1,0,0xffffffff);
  param_1[0x20d] = DAT_004dd350;
  param_1[0xfa] = 0;
  param_1[0xda] = param_1[2];
  param_1[0xdb] = param_1[3];
  param_1[0xdc] = param_1[4];
  param_1[0xf4] = param_1[2];
  param_1[0xf5] = param_1[3];
  param_1[0xf6] = param_1[4];
  *(undefined2 *)(DAT_004dd354 + (int)param_1) = 0xf0;
  return;
}


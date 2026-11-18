#include "ghidra_types.h"

extern int func_0028C920(int param_1,int param_2,undefined4 *param_3,float fparam_0,float fparam_1);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_002DDB94(int param_1);
extern int DAT_0028fcdc;
extern float DAT_0028fce0;
extern float DAT_0028fce4;
extern undefined4 *DAT_0028fce8;
extern float DAT_0028fcec;

// USA 0028FC40 <- EU 0028FC68 (Ghidra, non-matching)
// GLOBAL DAT_0028fcdc int
// GLOBAL DAT_0028fce0 float
// GLOBAL DAT_0028fce4 float
// GLOBAL DAT_0028fce8 undefined4 *
// GLOBAL DAT_0028fcec float

undefined4 func_0028FC40(int param_1)

{
  if (*(char *)(DAT_0028fcdc + *(short *)(param_1 + 0x42) * 0x10) == '\x15') {
    return func_002DDB94(*(int *)(param_1 + 0x48));
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    return 0;
  }
  func_0028C920(*(int *)(param_1 + 0x18),0,DAT_0028fce8,DAT_0028fce4,DAT_0028fce0);
  return func_002D55D0(*(int *)(param_1 + 0x48),
                (uint)(DAT_0028fcec < *(float *)(*(int *)(param_1 + 0x14) + 0x24)));
}


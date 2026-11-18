#include "ghidra_types.h"

extern int func_00582014(int param_1,int param_2,int *param_3);
extern int *DAT_004ecf3c;
extern int *DAT_004ecf40;

// USA 004ECF14 <- EU 004ECEEC (Ghidra, non-matching)
// GLOBAL DAT_004ecf3c int *
// GLOBAL DAT_004ecf40 int *

undefined4 func_004ECF14(int param_1,int *param_2)

{
  if ((((*DAT_004ecf3c == 0) || (**(int **)(*DAT_004ecf3c + 0x2c) != *(int *)(param_1 + 0x2cc))) &&
      (*DAT_004ecf40 != 0)) && (-1 < *(short *)(param_1 + 0x54))) {
    return func_00582014(*DAT_004ecf40,(int)*(short *)(param_1 + 0x54),param_2);
  }
  return 0;
}


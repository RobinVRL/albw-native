#include "ghidra_types.h"

extern int func_00503970(int param_1,uint param_2);
extern undefined4 DAT_0029e5b4;
extern int *DAT_0029e5b8;

// USA 0029E57C <- EU 0029E558 (Ghidra, non-matching)
// GLOBAL DAT_0029e5b4 undefined4
// GLOBAL DAT_0029e5b8 int *

undefined4 * func_0029E57C(undefined4 *param_1)

{
  *param_1 = DAT_0029e5b4;
  if (param_1[5] != 0) {
    if ((int *)param_1[8] != (int *)0x0) {
      (**(code **)(*(int *)param_1[8] + 0x44))((int *)param_1[8]);
    }
    param_1[5] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    func_00503970(*DAT_0029e5b8,6);
  }
  return param_1;
}


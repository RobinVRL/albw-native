#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int DAT_00151b40;
extern undefined4 *DAT_00151b44;

// USA 00151AEC <- EU 00151AEC (Ghidra, non-matching)
// GLOBAL DAT_00151b40 int
// GLOBAL DAT_00151b44 undefined4 *

void func_00151AEC(int param_1)

{
  uint uVar1;
  
  func_00588C14(param_1,0,0);
  if (-1 < *(int *)(param_1 + 0x43c)) {
    *(undefined4 *)(param_1 + 0x444) =
         **(undefined4 **)(DAT_00151b40 + *(int *)(param_1 + 0x43c) * 8);
  }
  uVar1 = func_00111A64((uint *)*DAT_00151b44);
  *(int *)(param_1 + 0x430) = (int)((ulonglong)uVar1 * 0x96 >> 0x20) + 0x1e;
  return;
}


#include "ghidra_types.h"

extern undefined8 func_00300E4A(undefined4 param_1,undefined4 param_2,uint *param_3,undefined4 param_4);
extern int func_00300E70(undefined2 param_1,undefined4 *param_2);
extern int DAT_00100740;

// GLOBAL DAT_00100740 int
// USA 001006FC <- EU 001006FC (Ghidra, function missing from the decomp table)

uint func_001006FC(int param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  undefined8 uVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(int *)(albw_frame + 0xc))
  local_14 = param_1;
  if (param_2 != 0) {
    local_14 = param_2 * 2 + param_1 + -2;
  }
  local_18 = param_1;
  uVar1 = func_00300E4A(param_3,&local_18,param_4,DAT_00100740 + 0x100716);
  if (param_2 != 0) {
    local_14 = local_14 + 2;
    func_00300E70(0,&local_18);
  }
  if (param_2 <= (uint)uVar1) {
    return 0xffffffff;
  }
  return (uint)uVar1;
}


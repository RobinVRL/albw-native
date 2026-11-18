#include "ghidra_types.h"

extern undefined8 func_001002FE(undefined4 param_1,undefined4 param_2,uint *param_3,undefined4 param_4);
extern int func_00100324(undefined1 param_1,undefined4 *param_2);
extern int DAT_00100170;

// GLOBAL DAT_00100170 int
// USA 0010013C <- EU 0010013C (Ghidra, function missing from the decomp table)

undefined4 func_0010013C(int param_1,int param_2,undefined4 param_3,uint *param_4)

{
  undefined8 uVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(int *)(albw_frame + 0xc))
  local_14 = param_1;
  if (param_2 != 0) {
    local_14 = param_1 + param_2 + -1;
  }
  local_18 = param_1;
  uVar1 = func_001002FE(param_3,&local_18,param_4,DAT_00100170 + 0x100154);
  if (param_2 != 0) {
    func_00100324(0,&local_18);
  }
  return (int)uVar1;
}


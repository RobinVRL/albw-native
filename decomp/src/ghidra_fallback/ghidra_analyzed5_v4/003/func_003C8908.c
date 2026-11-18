#include "ghidra_types.h"

extern int func_003C8DAC(int param_1);
extern undefined4 DAT_003c8940;

// USA 003C8908 <- EU 003C88E4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 undefined4
// GLOBAL DAT_003c8940 undefined4

undefined4
func_003C8908(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
             int param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = DAT_003c8940;
  if (param_2 != (undefined4 *)0x0 && param_5 != 0) {
    func_003C8DAC(1);
    uVar1 = (**(code **)*param_2)(param_2,param_1,param_3,param_4,param_5,param_6);
  }
  return uVar1;
}


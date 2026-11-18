#include "ghidra_types.h"

extern int func_001B6B38(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern void func_001B6DE0(int param_1);

// USA 00445204 <- EU 004451E4 (Ghidra, function missing from the decomp table)

void func_00445204(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int extraout_r1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    piVar1 = (int *)(param_1 + 0xc4);
    if (uVar2 < 0xc) {
      param_2 = uVar2 * 0x15;
      piVar1 = piVar1 + uVar2 * 0x15;
    }
    func_001B6B38(piVar1,param_2,param_3,param_4);
    uVar2 = uVar2 + 1;
    param_2 = extraout_r1;
  } while ((int)uVar2 < 0xc);
  func_001B6DE0(param_1);
  return;
}


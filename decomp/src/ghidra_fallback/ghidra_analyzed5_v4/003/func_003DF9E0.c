#include "ghidra_types.h"

extern int func_0010A98C(uint param_1);
extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int DAT_003dfa40;
extern int DAT_003dfa44;

// USA 003DF9E0 <- EU 003DF9C0 (Ghidra, non-matching)
// GLOBAL DAT_003dfa40 int
// GLOBAL DAT_003dfa44 int

undefined4 func_003DF9E0(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  func_0010C0C0((int *)(param_1 + 2));
  uVar1 = *param_1;
  software_interrupt(0x24);
  if ((int)uVar1 < 0) {
    func_0010A98C(uVar1);
  }
  if (DAT_003dfa40 == uVar1 * 0x400000) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    software_interrupt(0x19);
    if ((int)*param_1 < 0) {
      func_0010A98C(*param_1);
    }
    *(char *)(DAT_003dfa44 + (int)param_1) = *(char *)(DAT_003dfa44 + (int)param_1) + '\x01';
  }
  func_0010C160((int *)(param_1 + 2));
  return uVar2;
}


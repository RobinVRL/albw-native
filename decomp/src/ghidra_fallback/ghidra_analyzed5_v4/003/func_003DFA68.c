#include "ghidra_types.h"

extern int func_0010A98C(uint param_1);
extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int DAT_003dfaa4;

// USA 003DFA68 <- EU 003DFA48 (Ghidra, non-matching)
// GLOBAL DAT_003dfaa4 int

undefined4 func_003DFA68(uint *param_1)

{
  func_0010C0C0((int *)(param_1 + 2));
  software_interrupt(0x24);
  if ((int)*param_1 < 0) {
    func_0010A98C(*param_1);
  }
  software_interrupt(0x19);
  if ((int)*param_1 < 0) {
    func_0010A98C(*param_1);
  }
  *(char *)(DAT_003dfaa4 + (int)param_1) = *(char *)(DAT_003dfaa4 + (int)param_1) + '\x01';
  return func_0010C160((int *)(param_1 + 2));
}


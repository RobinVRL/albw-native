#include "ghidra_types.h"

extern int func_00292460(int param_1,undefined1 param_2);
extern int func_004CDF40(int param_1,int param_2,int param_3);
extern int *DAT_0036db54;
extern int DAT_0036db58;
extern int *DAT_0036db5c;

// USA 0036DAF4 <- EU 0036DAD0 (Ghidra, non-matching)
// GLOBAL DAT_0036db54 int *
// GLOBAL DAT_0036db58 int
// GLOBAL DAT_0036db5c int *

undefined4 func_0036DAF4(int param_1,int param_2)

{
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0xb18) == 0) {
      func_00292460(*DAT_0036db54,0);
    }
    else if (*(int *)(param_1 + 0xb18) == 0x4b) {
      func_004CDF40(*DAT_0036db5c,DAT_0036db58,1);
    }
    if (*(uint *)(param_1 + 0xb18) < *(uint *)(param_1 + 0xb1c)) {
      *(uint *)(param_1 + 0xb18) = *(uint *)(param_1 + 0xb18) + 1;
      return 0;
    }
  }
  return 1;
}


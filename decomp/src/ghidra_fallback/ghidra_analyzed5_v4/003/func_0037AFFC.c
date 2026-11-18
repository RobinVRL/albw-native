#include "ghidra_types.h"

extern int func_0029FAB4(int *param_1);
extern int func_002DF3E4(int param_1);
extern int func_002DF790(int *param_1);
extern int func_004B9930(int param_1);
extern int func_0066777C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0037b024;
extern int *DAT_0037b028;
extern int *DAT_0037b02c;

// USA 0037AFFC <- EU 0037AFD8 (Ghidra, non-matching)
// GLOBAL DAT_0037b024 int *
// GLOBAL DAT_0037b028 int *
// GLOBAL DAT_0037b02c int *

undefined4 func_0037AFFC(int param_1)

{
  if (*DAT_0037b024 == 0) {
    func_0029FAB4((int *)0x0);
  }
  func_002DF790((int *)0x0);
  func_004B9930(*DAT_0037b028);
  func_0066777C((undefined4 *)(param_1 + 0xc0),0);
  return func_002DF3E4(*DAT_0037b02c);
}


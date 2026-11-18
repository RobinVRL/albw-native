#include "ghidra_types.h"

extern int func_0049E89C(int param_1);
extern int *DAT_004a07d0;

// USA 004A07E0 <- EU 004A07B8 (Ghidra, non-matching)
// GLOBAL DAT_004a07d0 int *

void func_004A07E0(void)

{
  if (*DAT_004a07d0 != 0) {
    func_0049E89C(*DAT_004a07d0);
  }
  return;
}


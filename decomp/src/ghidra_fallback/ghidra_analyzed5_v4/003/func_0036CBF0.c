// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00361658();
extern int *DAT_0036cc00;
extern int *DAT_0036cc04;

// USA 0036CBF0 <- EU 0036CBCC (Ghidra, non-matching)
// GLOBAL DAT_0036cc00 int *
// GLOBAL DAT_0036cc04 int *

void func_0036CBF0(int param_1)

{
  if (*DAT_0036cc00 != 0) {
    func_00361658(*DAT_0036cc00);
  }
  if (*DAT_0036cc04 != 0) {
    *(undefined1 *)(*DAT_0036cc04 + 0xa0) = 0;
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}


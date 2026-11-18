#include "ghidra_types.h"

extern int func_0010AC24(undefined4 param_1,undefined4 param_2);
extern int *DAT_0010d144;
extern undefined4 DAT_0010d148;
extern int DAT_0010d14c;

// USA 0010D11C <- EU 0010D11C (Ghidra, non-matching)
// GLOBAL DAT_0010d144 int *
// GLOBAL DAT_0010d148 undefined4
// GLOBAL DAT_0010d14c int

undefined4 func_0010D11C(void)

{
  if (*DAT_0010d144 == 0) {
    func_0010AC24(DAT_0010d148,0x10d138);
  }
  return *(undefined4 *)(DAT_0010d14c + 4);
}


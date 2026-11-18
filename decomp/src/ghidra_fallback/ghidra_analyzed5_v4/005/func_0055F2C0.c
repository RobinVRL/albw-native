#include "ghidra_types.h"

extern int func_004F1C4C(int param_1,undefined4 *param_2,undefined4 param_3);
extern int DAT_0055f2d8;
extern int DAT_0055f2dc;

// USA 0055F2C0 <- EU 0055F298 (Ghidra, non-matching)
// GLOBAL DAT_0055f2d8 int
// GLOBAL DAT_0055f2dc int

undefined4 func_0055F2C0(int param_1,int param_2)

{
  if (*(uint *)(param_1 + 0xc) <= *(uint *)(DAT_0055f2d8 + *(int *)(param_2 + 0x23fc) * 4)) {
    return func_004F1C4C(param_2 + 0x2204,
                  (undefined4 *)
                  (*(int *)(DAT_0055f2dc + *(int *)(param_2 + 0x23fc) * 4) +
                  *(uint *)(param_1 + 0xc) * 0x10),*(undefined4 *)(param_1 + 0x10));
  }
  return 0;
}


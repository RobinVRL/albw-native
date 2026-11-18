#include "ghidra_types.h"

extern int func_004F19B0(int *param_1,int *param_2,uint param_3,int param_4);
extern int DAT_00560570;
extern int DAT_00560574;

// USA 00560548 <- EU 00560520 (Ghidra, non-matching)
// GLOBAL DAT_00560570 int
// GLOBAL DAT_00560574 int

undefined4 func_00560548(int param_1,int param_2)

{
  if (*(uint *)(param_1 + 0xc) <= *(uint *)(DAT_00560570 + *(int *)(param_2 + 0x23fc) * 4)) {
    return func_004F19B0((int *)(param_2 + 0x2204),
                  (int *)(*(int *)(DAT_00560574 + *(int *)(param_2 + 0x23fc) * 4) +
                         *(uint *)(param_1 + 0xc) * 0x18),*(uint *)(param_1 + 0x10),
                  *(int *)(param_1 + 0x14));
  }
  return 0;
}


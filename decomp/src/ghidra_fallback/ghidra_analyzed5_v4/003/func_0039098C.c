#include "ghidra_types.h"

extern int func_001212EC(int param_1,int *param_2,int param_3,int param_4);
extern int *DAT_003909a0;

// USA 0039098C <- EU 00390968 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_003909a0 int *

undefined4 func_0039098C(int param_1)

{
  int iVar1;
  
  iVar1 = *DAT_003909a0;
  *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)(param_1 + 0x464);
  *(undefined1 *)(iVar1 + 0x99) = 1;
  return func_001212EC(*(int *)(iVar1 + 0x18),(int *)(param_1 + 0x40c),*(uint *)(param_1 + 0x4cc) & 0xffff,
                0);
}


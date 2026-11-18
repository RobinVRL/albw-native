#include "ghidra_types.h"

extern int func_004A3700(int param_1);
extern int func_004A9120(undefined4 param_1,int param_2);
extern undefined4 *DAT_00386340;

// USA 003862F0 <- EU 003862CC (Ghidra, non-matching)
// GLOBAL DAT_00386340 undefined4 *

undefined4 func_003862F0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x37) = 0;
  iVar2 = *(int *)(param_1 + 0x1bc);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x1c0))) {
    *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xffffffbb | 8;
    func_004A3700(iVar2);
  }
  *(undefined1 *)(param_1 + 0x3a) = 0xff;
  puVar1 = DAT_00386340;
  if (*(char *)(param_1 + 0x34) != '\0') {
    *(undefined1 *)(param_1 + 0x34) = 0;
    return func_004A9120(*puVar1,param_1 + 0xb4);
  }
  return 0;
}


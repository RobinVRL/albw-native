#include "ghidra_types.h"

extern int func_0055696C(int param_1,int param_2);
extern int *DAT_0052a5d4;

// USA 0052A514 <- EU 0052A4EC (Ghidra, non-matching)
// GLOBAL DAT_0052a5d4 int *

undefined4 func_0052A514(int param_1,int param_2)

{
  int iVar1;
  
  if ((*DAT_0052a5d4 != 0) && (iVar1 = func_0055696C(*DAT_0052a5d4,0x1e), 0 < iVar1)) {
    if (param_2 != 0) {
      if (*(uint *)(param_2 + 0x14) < *(uint *)(param_1 + 0x620)) {
        iVar1 = *(int *)(param_1 + 0x624) + *(uint *)(param_2 + 0x14) * 0xd8;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x624);
      }
      iVar1 = *(int *)(iVar1 + 0x20);
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar1 + 4);
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(iVar1 + 8);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar1 + 0xc);
      *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) - *(float *)(param_1 + 0x61c);
    }
    return 4;
  }
  if (*(uint *)(param_2 + 0x14) < *(uint *)(param_1 + 0x620)) {
    iVar1 = *(int *)(param_1 + 0x624) + *(uint *)(param_2 + 0x14) * 0xd8;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x624);
  }
  iVar1 = *(int *)(iVar1 + 0x20);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar1 + 4);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar1 + 0xc);
  *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) - *(float *)(param_1 + 0x61c);
  return 0x14;
}


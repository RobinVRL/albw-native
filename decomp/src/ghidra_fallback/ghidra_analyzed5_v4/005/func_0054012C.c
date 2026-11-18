#include "ghidra_types.h"

extern float DAT_0054016c;

// USA 0054012C <- EU 00540104 (Ghidra, non-matching)
// GLOBAL DAT_0054016c float

undefined4 func_0054012C(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x5b0) != 0x3f800000) {
    return 0;
  }
  if (*(short *)(param_1 + 0x42) == 0x46) {
    iVar1 = *(int *)(param_1 + 0x48);
    if (*(float *)(iVar1 + 0x78) <= *(float *)(iVar1 + 0x80)) {
      bVar2 = false;
      if (*(float *)(iVar1 + 0x78) <= *(float *)(*(int *)(iVar1 + 0x30) + 4) + DAT_0054016c) {
        bVar2 = 1 < *(uint *)(param_1 + 0x44);
      }
      if (bVar2) {
        return 0;
      }
    }
  }
  return 1;
}


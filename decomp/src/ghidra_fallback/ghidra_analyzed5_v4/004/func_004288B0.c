#include "ghidra_types.h"


// USA 004288B0 <- EU 00428890 (Ghidra, non-matching)

void func_004288B0(int param_1,float fparam_0)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    bVar1 = *(float *)(iVar2 + 0xc0) != fparam_0;
    *(byte *)(iVar2 + 0xf4) = *(byte *)(iVar2 + 0xf4) | bVar1 << 2;
    if (bVar1) {
      *(float *)(iVar2 + 0xc0) = fparam_0;
    }
  }
  return;
}


#include "ghidra_types.h"


// USA 00564314 <- EU 005642EC (Ghidra, non-matching)

undefined4 func_00564314(int param_1)

{
  short sVar1;
  short *psVar2;
  uint in_r2;
  bool bVar3;
  
  psVar2 = *(short **)(param_1 + 8);
  sVar1 = *psVar2;
  if (sVar1 == 0) {
    in_r2 = (uint)(ushort)psVar2[-1];
  }
  if (sVar1 != 0 || in_r2 != 0x2f) {
    if (sVar1 == 0x2e) {
      in_r2 = (uint)(ushort)psVar2[1];
    }
    if (sVar1 != 0x2e || in_r2 != 0) {
      bVar3 = sVar1 != 0x2e;
      if (!bVar3) {
        sVar1 = psVar2[1];
      }
      if ((bVar3 || sVar1 != 0x2e) || (psVar2[2] != 0)) {
        return 0;
      }
    }
  }
  return 1;
}


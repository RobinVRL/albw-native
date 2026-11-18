#include "ghidra_types.h"


// USA 001488DC <- EU 001488DC (Ghidra, non-matching)

undefined4 func_001488DC(int param_1,int param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  
  if (((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0xd80U) == 0) ||
     ((*(ushort *)(param_2 + 0x20) & 0x7e0) == 0xc0)) {
    *(undefined1 *)(param_1 + 0x474) = 1;
    fVar4 = *(float *)(param_2 + 0x14);
    uVar2 = *(ushort *)(param_2 + 0x20) & 0x7e0;
    *(float *)(param_1 + 0x478) = fVar4;
    bVar3 = uVar2 == 0xc0;
    if (bVar3) {
      uVar2 = 1;
    }
    if (!bVar3) {
      uVar2 = 0;
    }
    if (*(float *)(param_1 + 0x470) < fVar4) {
      *(char *)(param_1 + 0x4a1) = (char)uVar2;
      if (uVar2 != 0) {
        *(float *)(param_1 + 0x470) = fVar4;
      }
    }
    uVar1 = 1;
    fVar5 = *(float *)(param_1 + 0x47c);
    if (fVar4 < *(float *)(param_1 + 0x47c)) {
      fVar5 = fVar4;
    }
    *(float *)(param_1 + 0x47c) = fVar5;
    if (fVar4 < *(float *)(param_1 + 0x480)) {
      fVar4 = *(float *)(param_1 + 0x480);
    }
    *(float *)(param_1 + 0x480) = fVar4;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


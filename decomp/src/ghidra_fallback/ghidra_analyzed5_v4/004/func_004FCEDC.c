#include "ghidra_types.h"


// USA 004FCEDC <- EU 004FCEB4 (Ghidra, non-matching)

void * func_004FCEDC(int param_1,float fparam_0)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0xa8) != '\0') {
    do {
      uVar3 = uVar2 + 1;
      iVar5 = param_1 + uVar2 * 0xc;
      bVar1 = *(byte *)(iVar5 + 4);
      uVar4 = (uint)bVar1;
      bVar6 = (bVar1 & 4) != 0;
      if (bVar6) {
        uVar4 = *(uint *)(param_1 + uVar2 * 0xc);
      }
      if (bVar6 && uVar4 != 0) {
        *(float *)(uVar4 + 0x134) = fparam_0;
        *(float *)(iVar5 + 8) = fparam_0;
      }
      uVar2 = uVar3;
    } while (uVar3 < *(byte *)(param_1 + 0xa8));
  }
  return (void *)param_1;
}


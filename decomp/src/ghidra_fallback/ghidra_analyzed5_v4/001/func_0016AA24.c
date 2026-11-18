#include "ghidra_types.h"


// USA 0016AA24 <- EU 0016AA24 (Ghidra, non-matching)

void * func_0016AA24(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  
  uVar1 = 0;
  do {
    pbVar4 = (byte *)(*(int *)(param_1 + 0x10) + (uVar1 & 0xffff) * 0x278);
    piVar2 = (int *)(param_1 + 0x284);
    *pbVar4 = *pbVar4 & 0xfe;
    if (uVar1 < 0x33) {
      piVar2 = piVar2 + uVar1 * 0xe;
    }
    if (*piVar2 != 0) {
      piVar2 = (int *)(param_1 + 0x284);
      if (uVar1 < 0x33) {
        piVar2 = (int *)(param_1 + 0x284 + uVar1 * 0x38);
      }
      iVar3 = *piVar2;
      *(byte *)(iVar3 + 0x50) = *(byte *)(iVar3 + 0x50) & 0xfd;
      *(undefined1 *)(iVar3 + 0x51) = 0;
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 0x33);
  *(undefined1 *)(param_1 + 0xfa4) = 0;
  return (void *)param_1;
}


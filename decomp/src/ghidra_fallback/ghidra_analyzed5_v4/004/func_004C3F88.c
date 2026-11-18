#include "ghidra_types.h"

extern int func_004A143C(byte *param_1,uint param_2);
extern int *DAT_004c400c;
extern uint DAT_004c4010;

// USA 004C3F88 <- EU 004C3F60 (Ghidra, non-matching)
// GLOBAL DAT_004c400c int *
// GLOBAL DAT_004c4010 uint

undefined4 func_004C3F88(int param_1)

{
  uint uVar1;
  uint *puVar2;
  byte *pbVar3;
  uint uVar4;
  
  pbVar3 = *(byte **)(param_1 + 0x14);
  if (pbVar3[0x1600] == 0) {
    if ((((*(int *)(*DAT_004c400c + 0x10) != 0) || (*(int *)(param_1 + 0x10) == 0)) ||
        (*(char *)(param_1 + 0x9b9) == '\0')) || (1 < *(uint *)(param_1 + 0x9c0))) {
      return 0;
    }
    uVar4 = *(uint *)(pbVar3 + 0xdfc);
    uVar1 = func_004A143C(pbVar3,DAT_004c4010);
    *(uint *)(pbVar3 + 0xdfc) = uVar1;
    if (uVar1 != uVar4) {
      puVar2 = (uint *)(param_1 + 0x4dd8 + *(int *)(param_1 + 0x9bc) * 4);
      *puVar2 = *puVar2 | 1;
      *(undefined4 *)(param_1 + 0x9c0) = 7;
      return 1;
    }
  }
  return 1;
}


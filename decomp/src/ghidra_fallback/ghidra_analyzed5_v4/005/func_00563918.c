#include "ghidra_types.h"

extern uint DAT_00563a2c;
extern uint DAT_00563a30;

// USA 00563918 <- EU 005638F0 (Ghidra, non-matching)
// GLOBAL DAT_00563a2c uint
// GLOBAL DAT_00563a30 uint

uint * func_00563918(int param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  do {
    puVar2 = param_2;
    uVar5 = uVar4 + 1;
    pbVar3 = (byte *)(param_1 + uVar4 * 0x18);
    *puVar2 = (uint)pbVar3[4] | (uint)pbVar3[5] << 4 | (uint)pbVar3[6] << 8 |
              (uint)pbVar3[0xd] << 0x10 | (uint)pbVar3[0xe] << 0x14 | (uint)pbVar3[0xf] << 0x18;
    puVar2[1] = *(ushort *)(pbVar3 + 0x16) | 0x804f0000;
    puVar2[2] = (uint)pbVar3[1] | (uint)pbVar3[2] << 4 | (uint)pbVar3[3] << 8 |
                (uint)pbVar3[10] << 0xc | (uint)pbVar3[0xb] << 0x10 | (uint)pbVar3[0xc] << 0x14;
    puVar2[3] = (uint)*pbVar3 | (uint)pbVar3[9] << 0x10;
    puVar2[4] = *(uint *)(pbVar3 + 0x12) & 0xffffff | (uint)pbVar3[0x15] << 0x18;
    puVar2[5] = (uint)pbVar3[7] | (uint)pbVar3[0x10] << 0x10;
    uVar1 = DAT_00563a2c;
    param_2 = puVar2 + 6;
    uVar4 = uVar5;
  } while (uVar5 < 6);
  puVar2[6] = (uint)*(byte *)(param_1 + 0x20) << 8 | (uint)*(byte *)(param_1 + 0x29) << 0xc |
              (uint)*(byte *)(param_1 + 0x38) << 9 | (uint)*(byte *)(param_1 + 0x41) << 0xd |
              (uint)*(byte *)(param_1 + 0x50) << 10 | (uint)*(byte *)(param_1 + 0x59) << 0xe |
              (uint)*(byte *)(param_1 + 0x68) << 0xb | (uint)*(byte *)(param_1 + 0x71) << 0xf;
  puVar2[7] = uVar1;
  uVar4 = DAT_00563a30;
  puVar2[8] = *(uint *)(param_1 + 0x90) & 0xffffff | (uint)*(byte *)(param_1 + 0x93) << 0x18;
  puVar2[9] = uVar4;
  return puVar2 + 10;
}


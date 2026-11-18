#include "ghidra_types.h"

extern uint DAT_003e30b8;

// USA 003E300C <- EU 003E2FEC (Ghidra, non-matching)
// GLOBAL DAT_003e30b8 uint

uint func_003E300C(byte *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  _Alignas(8) unsigned char albw_frame[0x420];
  #define local_420 ((uint *)(albw_frame + 0x0))
  uVar4 = 0;
  do {
    iVar3 = 4;
    uVar5 = uVar4;
    do {
      if ((uVar5 & 1) == 0) {
        uVar5 = uVar5 >> 1;
      }
      else {
        uVar5 = DAT_003e30b8 ^ uVar5 >> 1;
      }
      if ((uVar5 & 1) == 0) {
        uVar5 = uVar5 >> 1;
      }
      else {
        uVar5 = DAT_003e30b8 ^ uVar5 >> 1;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    local_420[uVar4] = uVar5;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x100);
  if (param_2 != 0) {
    pbVar2 = param_1 + -1;
    if ((param_2 & 1) != 0) {
      param_3 = local_420[(*param_1 ^ param_3) & 0xff] ^ param_3 >> 8;
      pbVar2 = param_1;
    }
    for (uVar4 = param_2 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
      pbVar1 = pbVar2 + 1;
      pbVar2 = pbVar2 + 2;
      uVar5 = local_420[(*pbVar1 ^ param_3) & 0xff] ^ param_3 >> 8;
      param_3 = local_420[(*pbVar2 ^ uVar5) & 0xff] ^ uVar5 >> 8;
    }
  }
  return ~param_3;
}


#include "ghidra_types.h"


// USA 003D1048 <- EU 003D1024 (Ghidra, non-matching)

int func_003D1048(undefined4 *param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  #define local_8 (*(uint *)(albw_frame + 0x8))
  #define local_4 (*(undefined4 *)(albw_frame + 0xc))
  pbVar2 = (byte *)&local_10;
  local_4 = 0;
  local_10 = *param_1;
  (*(undefined1 *)((char *)&local_10 + 0)) = (byte)*param_1;
  local_c = param_1[1];
  local_8 = (uint)*(byte *)(param_1 + 2);
  iVar1 = 0;
  while ((byte)local_10 != 0) {
    uVar3 = (uint)*pbVar2;
    iVar1 = iVar1 * 0x10;
    if (uVar3 - 0x30 < 10) {
      iVar4 = uVar3 - 0x30;
    }
    else {
      iVar4 = uVar3 - 0x57;
    }
    if (iVar4 - 1U < 0xf) {
      iVar1 = iVar1 + iVar4;
    }
    pbVar2 = pbVar2 + 1;
    (*(undefined1 *)((char *)&local_10 + 0)) = *pbVar2;
  }
  return iVar1;
}


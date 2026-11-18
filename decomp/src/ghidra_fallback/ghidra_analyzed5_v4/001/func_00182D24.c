#include "ghidra_types.h"

extern int *DAT_00182d8c;

// USA 00182D24 <- EU 00182D24 (Ghidra, non-matching)
// GLOBAL DAT_00182d8c int *

void func_00182D24(int *param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = param_1[0x263];
  bVar2 = param_1[0x264] == uVar1;
  if (uVar1 < (uint)param_1[0x264]) {
    param_1[0x263] = uVar1 + 1;
  }
  else {
    bVar2 = *(char *)((int)param_1 + 0x852) == '\x04';
  }
  if ((bVar2) && (*(char *)(*DAT_00182d8c + 0x70) != '\x04')) {
    (**(code **)(*param_1 + 0xac))(param_1,0,0xffffffff);
    param_1[0x22b] = param_1[0x22b] & 0xffffffef;
  }
  return;
}


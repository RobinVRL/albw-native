#include "ghidra_types.h"

extern int func_003000D0(uint *param_1,int param_2,int param_3,int param_4);
extern undefined DAT_0010046c;
extern undefined DAT_00100470;

// GLOBAL DAT_0010046c undefined
// GLOBAL DAT_00100470 undefined
// USA 00100404 <- EU 00100404 (Ghidra, function missing from the decomp table)

undefined4 func_00100404(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = 0;
  for (; param_3 != 0 || param_4 != 0; param_3 = param_3 >> 3 | uVar4) {
    *(byte *)((int)param_1 + iVar1 + 0x24) = ((byte)param_3 & 7) + 0x30;
    uVar4 = param_4 << 0x1d;
    iVar1 = iVar1 + 1;
    param_4 = param_4 >> 3;
  }
  iVar3 = 0;
  puVar2 = &DAT_0010046c;
  if (((int)(*param_1 << 0x1c) < 0) && ((*param_1 & 0x20) != 0 || iVar1 != 0)) {
    iVar3 = 1;
    puVar2 = &DAT_00100470;
    param_1[7] = param_1[7] - 1;
  }
  return func_003000D0(param_1,iVar1,(int)puVar2,iVar3);
}


#include "ghidra_types.h"

extern int func_003000D0(uint *param_1,int param_2,int param_3,int param_4);
extern int DAT_00100510;

// GLOBAL DAT_00100510 int
// USA 0010047C <- EU 0010047C (Ghidra, function missing from the decomp table)

undefined4 func_0010047C(uint *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((int)(*param_1 << 0x14) < 0) {
    iVar3 = DAT_00100510 + 0x10048c;
  }
  else {
    iVar3 = DAT_00100510 + 0x1004a0;
  }
  iVar1 = 0;
  for (; param_3 != 0 || param_4 != 0; param_3 = param_3 >> 4 | uVar4) {
    *(undefined1 *)((int)param_1 + iVar1 + 0x24) = *(undefined1 *)(iVar3 + (param_3 & 0xf));
    uVar4 = param_4 << 0x1c;
    iVar1 = iVar1 + 1;
    param_4 = param_4 >> 4;
  }
  iVar2 = 0;
  if ((int)(*param_1 << 0x1c) < 0) {
    if (param_2 == 0x70) {
      iVar3 = iVar3 + 0x10;
      iVar2 = 1;
    }
    else if (iVar1 != 0) {
      iVar3 = iVar3 + 0x11;
      iVar2 = 2;
    }
  }
  return func_003000D0(param_1,iVar1,iVar3,iVar2);
}


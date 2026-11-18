#include "ghidra_types.h"

extern int func_004A42B8(int *param_1,int param_2);
extern int func_004A45C8(int param_1,int param_2,int param_3);
extern int func_00545258(uint param_1,uint param_2);

// USA 003A0C04 <- EU 003A0BE0 (Ghidra, non-matching)

void func_003A0C04(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = param_1 + 0x54;
  iVar2 = 0;
  do {
    uVar3 = iVar2 + *(int *)(param_1 + 0x394);
    uVar1 = iVar4 + iVar2 * 0x88;
    if (uVar3 < 0x32) {
      func_00545258(uVar1,1);
      func_004A42B8((int *)(iVar4 + iVar2 * 0x88),
                    (uint)((*(uint *)(param_1 + 0x388 + ((int)uVar3 >> 5) * 4) & 1 << (uVar3 & 0x1f)
                           ) != 0));
      func_004A45C8(iVar4 + iVar2 * 0x88,uVar3,*(int *)(param_1 + 0x48));
    }
    else {
      func_00545258(uVar1,0);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 6);
  return;
}


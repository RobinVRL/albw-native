#include "ghidra_types.h"

extern int func_001DD48C(int param_1,int param_2,undefined4 param_3);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_0052E7D8(int param_1,int param_2);
extern int func_0052E8A0(int param_1);
extern int DAT_002918fc;

// USA 0029180C <- EU 00291834 (Ghidra, non-matching)
// GLOBAL DAT_002918fc int

undefined4 func_0029180C(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 0x14);
  uVar4 = 0x16;
  if ((((*(char *)(iVar2 + 0xb0) == '\0') && (bVar1 = func_0052E8A0(*(int *)(iVar2 + 0x10)), !bVar1)
       ) && (iVar3 = (int)*(short *)(iVar2 + 0x42),
            (*(uint *)(DAT_002918fc + iVar3 * 0x10 + 4) & 0x100) == 0)) && (iVar3 != 0x16)) {
    if (iVar3 == 0x21) {
      if (param_2 == 0) {
        return 0;
      }
      uVar4 = 0xb;
    }
    if (*(int *)(*(int *)(iVar2 + 0x10) + 0x5b0) == 0x3f800000) {
      (**(code **)(**(int **)(iVar2 + 0x48) + 0x20))(*(int **)(iVar2 + 0x48));
      iVar3 = func_0052E7D8(*(int *)(iVar2 + 0x10),param_2);
      func_001DD48C(*(int *)(iVar2 + 0x10),iVar3,1);
      func_002D55D0(*(int *)(iVar2 + 0x48),uVar4);
      return 1;
    }
  }
  return 0;
}


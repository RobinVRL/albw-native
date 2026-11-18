#include "ghidra_types.h"

extern int func_002AFEF0(undefined4 *param_1,int param_2,uint param_3,int param_4,int param_5, float fparam_0);
extern float DAT_002ad0bc;

// USA 002AD088 <- EU 002AD064 (Ghidra, non-matching)
// GLOBAL DAT_002ad0bc float

undefined4 func_002AD088(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[0xd];
  if (*(char *)(iVar1 + 0x7fc) == '\x05') {
    if (*(short *)(iVar1 + 0x784) == 0) {
      *(undefined2 *)(iVar1 + 0x784) = *(undefined2 *)(iVar1 + 0x782);
    }
    uVar2 = (uint)*(ushort *)(param_1[0xd] + 0x784);
  }
  else {
    uVar2 = 0x78;
  }
  return func_002AFEF0(param_1,7,uVar2,1,0,DAT_002ad0bc);
}


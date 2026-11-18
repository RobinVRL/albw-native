#include "ghidra_types.h"

extern int func_002AFEF0(undefined4 *param_1,int param_2,uint param_3,int param_4,int param_5, float fparam_0);
extern float DAT_002ac970;

// USA 002AC924 <- EU 002AC900 (Ghidra, non-matching)
// GLOBAL DAT_002ac970 float

undefined4 func_002AC924(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  iVar2 = param_1[0xd];
  if (*(char *)(iVar2 + 0x7fc) == '\x05') {
    if (*(short *)(iVar2 + 0x784) == 0) {
      *(undefined2 *)(iVar2 + 0x784) = *(undefined2 *)(iVar2 + 0x782);
    }
    uVar4 = (uint)*(ushort *)(param_1[0xd] + 0x784);
  }
  else {
    uVar4 = 300;
  }
  bVar6 = *(char *)(param_1[0xd] + 0x7fc) != '\x02';
  uVar5 = (uint)bVar6;
  uVar3 = uVar5;
  uVar1 = uVar5;
  if (bVar6) {
    uVar3 = 7;
    uVar1 = uVar4;
  }
  return func_002AFEF0(param_1,uVar3,uVar1,uVar5,0,DAT_002ac970);
}


#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern undefined4 func_0028D580(uint *param_1,int param_2,undefined1 param_3,undefined1 param_4,uint param_5);

// USA 00364980 <- EU 0036495C (Ghidra, non-matching)

undefined4 func_00364980(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  func_001151EC((undefined4 *)(param_1 + 0xa4),param_2);
  *(undefined1 *)(param_1 + 0xd7) = 1;
  if (*(short *)(*(int *)(param_1 + 0x2c) + 0x42) == 0x26) {
    return 0;
  }
  if (param_3 == 0) {
    if (*(int *)(param_1 + 0xe4) < 0) {
      iVar2 = *(int *)(param_1 + 0x4c);
      func_0028D580((uint *)(iVar2 + 0x3c),0x49,1,1,6);
      iVar1 = 0x49;
      goto LAB_003649f8;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xe4) = 10;
  }
  iVar2 = *(int *)(param_1 + 0x4c);
  func_0028D580((uint *)(iVar2 + 0x3c),0x4a,1,1,6);
  iVar1 = 0x4a;
LAB_003649f8:
  return func_0028D580((uint *)(iVar2 + 0x5c),iVar1,1,1,6);
}


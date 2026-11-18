#include "ghidra_types.h"

extern int func_004ECEB0(uint param_1,undefined4 param_2,int param_3);

// USA 001AA410 <- EU 001AA410 (Ghidra, non-matching)

undefined4 func_0014DDEC(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x34))(param_1);
  iVar1 = func_004ECEB0((uint)param_1,(int)((ulonglong)uVar2 >> 0x20),param_3);
  if (iVar1 == 0) {
    if ((char)param_1[0xf3] == '\0') {
      return 0;
    }
  }
  else {
    if ((int)uVar2 != 0) {
      param_1[0xda] = param_1[0xf4];
      param_1[0xdb] = param_1[0xf5];
      param_1[0xdc] = param_1[0xf6];
      return 1;
    }
    if (*(char *)((int)param_1 + 0x391) == '\0') {
      return 0;
    }
    iVar1 = (**(code **)(*param_1 + 0x38))(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  param_1[0xda] = param_1[0xf4];
  param_1[0xdb] = param_1[0xf5];
  param_1[0xdc] = param_1[0xf6];
  return 0;
}


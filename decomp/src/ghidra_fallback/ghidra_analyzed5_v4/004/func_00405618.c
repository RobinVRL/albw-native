#include "ghidra_types.h"

extern int func_003FF964(int param_1,uint param_2,uint param_3,float fparam_0,float fparam_1);

// USA 00405618 <- EU 004055F8 (Ghidra, non-matching)

void func_00405618(int param_1,uint param_2,uint param_3,float fparam_0,float fparam_1)

{
  int iVar1;
  bool bVar2;
  
  func_003FF964(param_1,param_2,param_3,fparam_0,fparam_1);
  bVar2 = *(short *)(param_1 + 0xce) != 0;
  iVar1 = 0;
  if (bVar2) {
    iVar1 = *(int *)(param_1 + 0xb4);
  }
  if (((bVar2 && iVar1 != 0) && (*(int *)(param_1 + 0xf8) != 0)) &&
     ((*(byte *)(param_1 + 0xf4) & 4) != 0)) {
    *(undefined1 *)(*(int *)(param_1 + 0xfc) + 6) = 0;
    *(byte *)(param_1 + 0xf4) = *(byte *)(param_1 + 0xf4) & 0xfb;
  }
  return;
}


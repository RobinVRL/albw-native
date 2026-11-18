#include "ghidra_types.h"

extern int func_003C8908(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4, int param_5,undefined4 param_6);

// USA 003C9C94 <- EU 003C9C70 (Ghidra, non-matching)

int func_003C9C94(uint *param_1,int *param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(uint *)(albw_frame + 0x0))
  iVar3 = 0;
  if (param_4 == 0) {
LAB_003c9ce8:
    iVar1 = 0;
    *param_2 = iVar3;
  }
  else {
    while (iVar1 = func_003C8908(&local_20,(undefined4 *)(*param_1 & 0xfffffffe),param_1[1],
                                 param_1[2],param_3,param_4), -1 < iVar1) {
      uVar2 = param_1[1];
      iVar3 = iVar3 + local_20;
      param_1[1] = uVar2 + local_20;
      param_1[2] = param_1[2] + ((int)local_20 >> 0x1f) + (uint)CARRY4(uVar2,local_20);
      if ((local_20 == param_4) || (local_20 == 0)) goto LAB_003c9ce8;
      param_3 = param_3 + local_20;
      param_4 = param_4 - local_20;
    }
  }
  return iVar1;
}


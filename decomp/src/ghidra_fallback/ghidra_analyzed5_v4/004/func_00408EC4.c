#include "ghidra_types.h"

extern int func_0041D79C(undefined4 *param_1,int param_2,int param_3,int param_4);
extern int func_00569C64(int param_1,uint *param_2);

// USA 00408EC4 <- EU 00408EA4 (Ghidra, non-matching)

undefined4 func_00408EC4(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 ((uint *)(albw_frame + 0x0))
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_1c (*(int *)(albw_frame + 0x14))
  if (*(char *)(param_1 + 0x38) == '\x01') {
    uVar2 = 0;
  }
  else {
    iVar3 = 0;
    bVar1 = func_00569C64(param_2,local_30);
    if (bVar1) {
      iVar3 = local_1c + local_30[0] + local_28;
    }
    func_0041D79C((undefined4 *)(param_1 + 8),param_3,param_4,0x2c);
    *(int *)(param_1 + 0x34) = param_4 + iVar3 * -0x2c;
    *(int *)(param_1 + 0x30) = param_4;
    uVar2 = 1;
    *(int *)(param_1 + 0x2c) = param_3;
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  return uVar2;
}


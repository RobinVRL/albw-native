#include "ghidra_types.h"

extern int func_003DA3F4(ushort *param_1,uint param_2,undefined4 *param_3);

// USA 003D5EEC <- EU 003D5ECC (Ghidra, non-matching)

undefined4 func_003D5EEC(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int in_r3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  iVar1 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x14);
  iVar2 = iVar1 + 1;
  *(int *)(param_1 + 0x10) = iVar2;
  if ((iVar2 != iVar4) && (*(short *)(*(int *)(param_1 + 0xc) + iVar2 * 2) == 0x7b)) {
    iVar1 = iVar1 + 2;
    *(int *)(param_1 + 0x10) = iVar1;
    if ((iVar1 != iVar4) &&
       (local_18 = in_r3,
       uVar3 = func_003DA3F4((ushort *)(*(int *)(param_1 + 0xc) + iVar1 * 2),iVar4 - iVar1,&local_18
                            ), uVar3 != 0x85)) {
      *(undefined1 *)(*param_2 + 8) = 8;
      *(char *)(*param_2 + 10) = (char)uVar3;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + local_18;
      return 0;
    }
  }
  return 9;
}


#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);

// USA 004FC07C <- EU 004FC054 (Ghidra, non-matching)

undefined4 func_004FC07C(int param_1,int param_2,uint param_3,int param_4)

{
  uint *puVar1;
  ushort *puVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  iVar3 = 0;
  if (*(int *)(param_1 + 0x410) != 0) {
    iVar3 = **(int **)(*(int *)(param_1 + 0x410) + 0x14);
  }
  if (iVar3 == param_2) {
    if ((param_4 != 0) || (-1 < *(int *)(param_1 + 0x5a0) << 0x14)) {
      puVar2 = (ushort *)(*(int *)(param_1 + 0x510) + 0x38);
      *puVar2 = *puVar2 & 0xfffe;
    }
  }
  else if ((param_4 != 0) || (-1 < *(int *)(param_1 + 0x5a0) << 0x14)) {
    if ((int)param_3 < 0) {
      param_3 = (uint)*(byte *)(param_1 + 0x655);
    }
    if (*(undefined4 **)(param_1 + 0x81c) == (undefined4 *)0x0) {
      puVar1 = (uint *)func_002C11E8(aiStack_68,param_2,param_3,0);
      func_0016898C(*(int *)(param_1 + 0x410),puVar1);
    }
    else {
      (**(code **)**(undefined4 **)(param_1 + 0x81c))();
    }
    puVar2 = (ushort *)(*(int *)(param_1 + 0x510) + 0x38);
    *puVar2 = *puVar2 & 0xfffe;
    *(undefined1 *)(param_1 + 0x82a) = 1;
    *(undefined4 *)(param_1 + 0x414) = 0;
    return 1;
  }
  return 0;
}


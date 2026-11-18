#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);

// USA 004FABDC <- EU 004FABB4 (Ghidra, non-matching)

undefined4 func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  uint *puVar2;
  ushort *puVar3;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  if ((param_4 == 0) && (*(int *)(param_1 + 0x5a0) * 0x100000 < 0)) {
    uVar1 = 0;
  }
  else {
    if ((int)param_3 < 0) {
      param_3 = (uint)*(byte *)(param_1 + 0x655);
    }
    if (*(undefined4 **)(param_1 + 0x81c) == (undefined4 *)0x0) {
      puVar2 = (uint *)func_002C11E8(aiStack_68,param_2,param_3,0);
      func_0016898C(*(int *)(param_1 + 0x410),puVar2);
    }
    else {
      (**(code **)**(undefined4 **)(param_1 + 0x81c))();
    }
    puVar3 = (ushort *)(*(int *)(param_1 + 0x510) + 0x38);
    *puVar3 = *puVar3 & 0xfffe;
    *(undefined1 *)(param_1 + 0x82a) = 1;
    *(undefined4 *)(param_1 + 0x414) = 0;
    uVar1 = 1;
  }
  return uVar1;
}


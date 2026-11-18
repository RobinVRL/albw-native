#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern undefined4 DAT_00318c38;

// USA 00318BBC <- EU 00318B98 (Ghidra, non-matching)
// GLOBAL DAT_00318c38 undefined4

void func_00318BBC(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define aiStack_d0 ((int *)(albw_frame + 0x0))
  #define aiStack_74 ((int *)(albw_frame + 0x5c))
  puVar1 = (uint *)func_002C11E8(aiStack_d0,param_2,0,0);
  func_0016898C(*(int *)(param_1 + 0x414),puVar1);
  uVar2 = DAT_00318c38;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x414) + 0x14) + 0x10) = DAT_00318c38;
  if (param_2 == 0) {
    puVar1 = (uint *)func_002C11E8(aiStack_74,0,0,0);
    func_0016898C(*(int *)(param_1 + 0x418),puVar1);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x418) + 0x14) + 0x10) = uVar2;
  }
  return;
}


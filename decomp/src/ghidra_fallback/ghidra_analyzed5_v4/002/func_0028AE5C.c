#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_003249B4(int param_1);
extern undefined4 uRam0028af18;
extern undefined4 uRam0028af1c;

// USA 0028AE5C <- EU 0028AE84 (Ghidra, non-matching)
// GLOBAL UNK_0028af18 undefined4
// GLOBAL UNK_0028af1c undefined4

void func_0028AE5C(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  puVar2 = (uint *)func_002C11E8(aiStack_68,0,0,0);
  func_0016898C(*(int *)(param_1 + 0x580),puVar2);
  func_003249B4(param_1);
  func_00151148(*(int *)(param_1 + 0x57c),0);
  uVar1 = uRam0028af1c;
  *(undefined4 *)(*(int *)(param_1 + 0x478) + 0x134) = uRam0028af18;
  *(undefined4 *)(param_1 + 0x5b0) = uVar1;
  *(undefined4 *)(param_1 + 0x5ac) = uVar1;
  *(undefined4 *)(param_1 + 0x5a8) = uVar1;
  iVar3 = *(int *)(param_1 + 0x478);
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar3 + 0x74) = *(undefined4 *)(param_1 + 0x5a8);
  *(undefined4 *)(iVar3 + 0x78) = *(undefined4 *)(param_1 + 0x5ac);
  *(undefined4 *)(iVar3 + 0x7c) = *(undefined4 *)(param_1 + 0x5b0);
  return;
}


#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);

// USA 00427940 <- EU 00427920 (Ghidra, non-matching)

void func_00427940(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  if (1 < param_2) {
    param_2 = 0;
  }
  *(char *)(param_1 + 0x80) = (char)param_2;
  uVar2 = (uint)(*(int *)(param_1 + 0x28) != 0);
  if (param_3 == 0) {
    puVar1 = (uint *)func_002C11E8(aiStack_68,uVar2,0,0);
    uVar2 = (uint)*(byte *)(param_1 + 0x80);
    if (*(uint *)(param_1 + 0x4c) <= uVar2) goto LAB_00427980;
  }
  else {
    puVar1 = (uint *)func_002C11E8(aiStack_68,uVar2,10,0);
    uVar2 = (uint)*(byte *)(param_1 + 0x80);
    if (*(uint *)(param_1 + 0x4c) <= uVar2) {
LAB_00427980:
      iVar3 = 0;
      goto code_r0x00427988;
    }
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x54) + uVar2 * 4);
code_r0x00427988:
  func_0016898C(iVar3,puVar1);
  *(byte *)(param_1 + 0x81) = *(byte *)(param_1 + 0x81) & 0xfd;
  return;
}


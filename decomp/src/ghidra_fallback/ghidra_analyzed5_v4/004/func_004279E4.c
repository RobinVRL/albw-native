#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004CF478(int param_1,int param_2);

// USA 004279E4 <- EU 004279C4 (Ghidra, non-matching)

void func_004279E4(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  if (2 < param_2) {
    param_2 = 0;
  }
  puVar1 = (uint *)func_002C11E8(aiStack_70,1,0,0);
  if ((uint)*(byte *)(param_1 + 0x80) < *(uint *)(param_1 + 0x4c)) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x54) + (uint)*(byte *)(param_1 + 0x80) * 4);
  }
  else {
    iVar2 = 0;
  }
  func_0016898C(iVar2,puVar1);
  iVar2 = *(int *)(param_1 + 0x28);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = (int)*(char *)(iVar2 + 0x30);
    func_004CF478(iVar2,0);
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x18) + param_2 * 4);
  *(int *)(param_1 + 0x28) = iVar2;
  if (iVar2 != 0) {
    func_004CF478(iVar2,iVar3);
  }
  *(byte *)(param_1 + 0x81) = *(byte *)(param_1 + 0x81) & 0xfd;
  return;
}


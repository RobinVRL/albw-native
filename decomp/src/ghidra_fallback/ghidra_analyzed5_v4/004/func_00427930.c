#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);

// USA 00427930 <- EU 00427910 (Ghidra, non-matching)

/* WARNING: Removing unreachable block (ram,0x00427930) */
/* WARNING: Removing unreachable block (ram,0x004279a0) */
/* WARNING: Removing unreachable block (ram,0x004279c0) */

void func_00427930(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  iVar1 = *(int *)(param_1 + 0x98);
  *(undefined1 *)(iVar1 + 0x80) = 1;
  puVar2 = (uint *)func_002C11E8(aiStack_68,(uint)(*(int *)(iVar1 + 0x28) != 0),10,0);
  if ((uint)*(byte *)(iVar1 + 0x80) < *(uint *)(iVar1 + 0x4c)) {
    iVar3 = *(int *)(*(int *)(iVar1 + 0x54) + (uint)*(byte *)(iVar1 + 0x80) * 4);
  }
  else {
    iVar3 = 0;
  }
  func_0016898C(iVar3,puVar2);
  *(byte *)(iVar1 + 0x81) = *(byte *)(iVar1 + 0x81) & 0xfd;
  return;
}


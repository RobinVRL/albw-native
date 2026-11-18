#include "ghidra_types.h"

extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern undefined DAT_0019bce4;

// USA 0019BC64 <- EU 0019BC64 (Ghidra, non-matching)
// GLOBAL DAT_0019bce4 undefined

void func_0019BC64(int param_1)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define aiStack_10 ((int *)(albw_frame + 0x0))
  iVar1 = *(int *)(param_1 + 0x450);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x454))) {
    iVar2 = *(int *)(iVar1 + 0x20);
    if ((iVar2 != 0) &&
       ((*(int *)(iVar1 + 0x24) == *(int *)(iVar2 + 0xc) && (0 < *(int *)(iVar2 + 4))))) {
      *(undefined1 *)(iVar2 + 0x280) = 1;
    }
    *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) & 0xfffffffb | 8;
  }
  if (*(int *)(param_1 + 0x344) != 0) {
    func_004A1B9C(aiStack_10,*(int *)(param_1 + 0x344),(uint *)&DAT_0019bce4);
  }
  return;
}


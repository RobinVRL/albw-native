#include "ghidra_types.h"

extern int func_0044F498(int param_1,undefined1 param_2,undefined4 *param_3);

// USA 0047A844 <- EU 0047A81C (Ghidra, non-matching)

void func_0047A844(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x4))
  iVar2 = *(int *)(param_1 + 0x158);
  iVar3 = *(int *)(iVar2 + 0x214);
  cVar1 = '\0';
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + 0x98);
  }
  if (iVar3 != 0 && cVar1 != '\x06') {
    iVar3 = *(int *)(**(int **)(*(int *)(iVar2 + 0x208) + 0x1c) + 0x10);
    uStack_10 = *(undefined4 *)(iVar3 + 0x54);
    uStack_c = *(undefined4 *)(iVar3 + 100);
    func_0044F498(*(int *)(iVar2 + 0x214),7,&uStack_10);
  }
  if (*(int *)(iVar2 + 0x210) != 0) {
    *(undefined1 *)(*(int *)(iVar2 + 0x210) + 0x98) = 9;
  }
  if (*(int *)(iVar2 + 0x218) != 0) {
    *(undefined1 *)(*(int *)(iVar2 + 0x218) + 0x80) = 4;
  }
  return;
}


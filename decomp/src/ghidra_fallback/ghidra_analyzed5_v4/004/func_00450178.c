#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int *DAT_004501dc;
extern undefined4 DAT_004501e0;

// USA 00450178 <- EU 00450150 (Ghidra, non-matching)
// GLOBAL DAT_004501dc int *
// GLOBAL DAT_004501e0 undefined4

void func_00450178(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define auStack_40 ((undefined4 *)(albw_frame + 0x0))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = func_005229AC(*(int **)(iVar1 + 0x1c),DAT_004501dc);
  uVar3 = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(iVar2 + 0x40) = uVar3;
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
  func_001119F4(auStack_40,(undefined4 *)(param_2 + 0x48));
  uVar3 = DAT_004501e0;
  iVar1 = *(int *)(**(int **)(iVar1 + 0x1c) + 0x10);
  *(undefined4 *)(iVar1 + 0x1c) = uStack_34;
  *(undefined4 *)(iVar1 + 0x20) = uStack_24;
  *(undefined4 *)(iVar1 + 0x24) = uVar3;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  return;
}


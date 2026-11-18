#include "ghidra_types.h"

extern int func_0011F1D8(undefined4 param_1);

// USA 0011F064 <- EU 0011F064 (Ghidra, non-matching)

uint func_0011F064(int *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  iVar2 = 0;
  do {
    iVar5 = iVar2;
    iVar2 = iVar5 + 1;
  } while (iVar5 + 1 < 8);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(*param_1 + iVar5 + 5);
  uVar1 = *(ushort *)(*param_1 + iVar5 + 7);
  *(ushort *)((int)param_1 + 10) = uVar1;
  iVar2 = 0;
  if (uVar1 != 0) {
    iVar2 = func_0011F1D8((uint)uVar1 << 4);
  }
  param_1[3] = iVar2;
  iVar2 = 0;
  param_1[1] = *(int *)(*param_1 + iVar5 + 0xb);
  uVar3 = 0x20;
  if (*(short *)((int)param_1 + 10) != 0) {
    do {
      piVar4 = (int *)(param_1[3] + iVar2 * 0x10);
      *piVar4 = *param_1 + uVar3 + 0x10;
      iVar2 = iVar2 + 1;
      *(undefined1 *)(piVar4 + 1) = *(undefined1 *)(*param_1 + uVar3);
      *(undefined1 *)((int)piVar4 + 5) = *(undefined1 *)(*param_1 + uVar3 + 1);
      *(undefined1 *)((int)piVar4 + 6) = *(undefined1 *)(*param_1 + uVar3 + 2);
      *(undefined1 *)((int)piVar4 + 7) = *(undefined1 *)(*param_1 + uVar3 + 3);
      iVar5 = *(int *)(*param_1 + uVar3 + 4);
      piVar4[2] = iVar5;
      *(undefined2 *)(piVar4 + 3) = *(undefined2 *)(*param_1 + uVar3 + 8);
      uVar3 = iVar5 + uVar3 + 0x10 + 0xf & 0xfffffff0;
    } while (iVar2 < (int)(uint)*(ushort *)((int)param_1 + 10));
  }
  return uVar3;
}


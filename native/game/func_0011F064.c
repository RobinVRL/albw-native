/* USA 0011F064 (EU 0011F064): MsgStdBn header parse (section table). Ghidra text with one fix:
 * the allocation of the section table (0011F1D8) lost its size argument (r0 = count << 4),
 * so the table was overwritten by later allocations. Rest unchanged. Confidence: high. */
#include "ghidra_types.h"

extern int func_0011F1D8();

// USA 0011F064 <- EU 0011F064 (Ghidra, non-matching)

void func_0011F064(int *param_1)

{
  short sVar1;
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
  sVar1 = *(short *)(*param_1 + iVar5 + 7);
  *(short *)((int)param_1 + 10) = sVar1;
  iVar2 = 0;
  if (sVar1 != 0) {
    iVar2 = func_0011F1D8((uint)(ushort)sVar1 << 4);  /* EU 0011F0A0: count * 16 bytes */
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
  return;
}


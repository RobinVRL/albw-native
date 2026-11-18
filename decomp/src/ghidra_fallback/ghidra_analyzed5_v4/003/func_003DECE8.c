#include "ghidra_types.h"

extern int func_0010AA9C(void);
extern int DAT_003deda8;

// USA 003DECE8 <- EU 003DECC8 (Ghidra, non-matching)
// GLOBAL DAT_003deda8 int

undefined4 func_003DECE8(int param_1,int param_2,ushort *param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  iVar1 = func_0010AA9C();
  if (iVar1 == 0) {
    return 0;
  }
  puVar2 = *(uint **)(param_1 + (uint)*(ushort *)(DAT_003deda8 + param_1) * 4 + 0x10a0);
  if ((*param_3 & 1) != 0) {
    *(ushort *)((int)puVar2 + param_2 * 0x14 + 0x2e) = param_3[1];
  }
  if ((*param_3 & 4) != 0) {
    iVar1 = param_2 * 0x14;
    *(ushort *)((int)puVar2 + iVar1 + 0x32) = param_3[3];
    *(ushort *)(puVar2 + param_2 * 5 + 0xe) = param_3[6];
    *(ushort *)((int)puVar2 + iVar1 + 0x3a) = param_3[7];
    *(ushort *)(puVar2 + param_2 * 5 + 0xf) = param_3[8];
    *(ushort *)((int)puVar2 + iVar1 + 0x3e) = param_3[9];
  }
  if ((*param_3 & 2) != 0) {
    puVar2[param_2 * 5 + 0xd] = *(uint *)(param_3 + 4);
  }
  *(ushort *)(puVar2 + param_2 * 5 + 0xb) = *param_3 | (ushort)puVar2[param_2 * 5 + 0xb];
  if (param_2 == 0) {
    uVar3 = *puVar2 | 0x400;
  }
  else {
    if (param_2 != 1) {
      return 1;
    }
    uVar3 = *puVar2 | 0x800;
  }
  *puVar2 = uVar3;
  return 1;
}


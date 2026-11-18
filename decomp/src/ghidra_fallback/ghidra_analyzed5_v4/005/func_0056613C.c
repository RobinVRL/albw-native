#include "ghidra_types.h"


// USA 0056613C <- EU 00566114 (Ghidra, non-matching)

void * func_0056613C(int param_1,int *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  iVar2 = *param_3;
  uVar1 = *(ushort *)(param_1 + 0x38);
  iVar3 = (uint)uVar1 * 0x154;
  *param_2 = iVar3 + 3;
  param_2[6] = (uint)uVar1;
  param_2[7] = iVar3;
  uVar4 = (uint)*(ushort *)(param_1 + 0x38);
  iVar2 = (iVar2 * 0xe + 0x23U & 0xfffffffc) * 8;
  if (uVar4 == 0 || iVar2 == 0) {
    uVar5 = 0;
    uVar4 = uVar5;
  }
  else {
    uVar5 = iVar2 * uVar4;
    param_2[1] = param_2[1] + uVar5 + 0xf;
  }
  param_2[9] = uVar5;
  param_2[8] = uVar4;
  uVar1 = *(ushort *)(param_1 + 0x74);
  iVar2 = (uint)uVar1 * 2;
  iVar3 = param_2[2] + iVar2 + 3;
  param_2[2] = iVar3;
  param_2[10] = (uint)uVar1;
  param_2[0xb] = iVar2;
  uVar1 = *(ushort *)(param_1 + 0x74);
  iVar2 = (uint)uVar1 * 0x40;
  iVar3 = iVar3 + iVar2 + 3;
  param_2[2] = iVar3;
  param_2[0xc] = (uint)uVar1;
  param_2[0xd] = iVar2;
  uVar1 = *(ushort *)(param_1 + 0x74);
  iVar2 = (uint)uVar1 * 0x30;
  param_2[0xf] = iVar2;
  iVar2 = iVar3 + iVar2 + 3;
  param_2[0xe] = (uint)uVar1;
  param_2[2] = iVar2;
  if (*(char *)(param_1 + 1) == '\x02') {
    uVar1 = *(ushort *)(param_1 + 0x74);
    iVar3 = (uint)uVar1 * 0xc;
    param_2[0x11] = iVar3;
    param_2[0x10] = (uint)uVar1;
    param_2[2] = iVar2 + iVar3 + 3;
  }
  uVar4 = *(int *)(param_1 + 0x80) + 7U >> 3;
  if (uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    param_2[3] = param_2[3] + uVar4 + 3;
  }
  param_2[0x12] = uVar4;
  param_2[0x13] = uVar4;
  iVar3 = *(int *)(param_1 + 0x6c);
  iVar2 = iVar3 * 8;
  param_2[4] = param_2[4] + iVar2 + 3;
  param_2[0x14] = iVar3;
  param_2[0x15] = iVar2;
  uVar5 = 0;
  uVar4 = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    do {
      iVar2 = uVar5 * 0x1c;
      uVar5 = uVar5 + 1;
      param_2[4] = param_2[4] + *(int *)(*(int *)(param_1 + 0x68) + iVar2 + 4) * 0x18 + 3;
      uVar4 = *(uint *)(param_1 + 0x6c);
    } while (uVar5 < uVar4);
  }
  param_2[5] = param_2[5] + uVar4 * 0xc + 3;
  param_2[0x16] = uVar4;
  param_2[0x17] = uVar4 * 0xc;
  uVar4 = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    do {
      iVar2 = uVar4 * 0x1c;
      uVar4 = uVar4 + 1;
      uVar6 = *(uint *)(*(int *)(param_1 + 0x68) + iVar2 + 0x14);
      uVar5 = (uVar6 << 0x17) >> 0x18;
      if ((uVar6 & 1) != 0) {
        uVar5 = uVar5 + 1;
      }
      param_2[5] = param_2[5] + ((uVar5 << 0x18) >> 0x15) + 3;
    } while (uVar4 < *(uint *)(param_1 + 0x6c));
  }
  return (void *)param_1;
}


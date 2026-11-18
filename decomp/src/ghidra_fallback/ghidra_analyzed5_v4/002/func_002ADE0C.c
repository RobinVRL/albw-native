#include "ghidra_types.h"

extern int func_002ABDB0(int param_1,int param_2);
extern int func_002AC2D4(int param_1);
extern int func_004FB024(int param_1);
extern undefined4 DAT_002adf20;
extern undefined4 DAT_002adf24;
extern undefined4 *DAT_002adf28;
extern int DAT_002adf2c;

// USA 002ADE0C <- EU 002ADDE8 (Ghidra, non-matching)
// GLOBAL DAT_002adf20 undefined4
// GLOBAL DAT_002adf24 undefined4
// GLOBAL DAT_002adf28 undefined4 *
// GLOBAL DAT_002adf2c int

undefined4 func_002ADE0C(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  uVar1 = DAT_002adf20;
  iVar3 = (int)*(short *)(*(int *)(param_1 + 0x34) + 0x508);
  if (iVar3 < 1) {
    iVar3 = param_2;
  }
  bVar5 = iVar3 != 0;
  if (bVar5) {
    *(undefined4 *)(param_1 + 0x50) = DAT_002adf20;
    *(undefined4 *)(param_1 + 0x4c) = uVar1;
    *(undefined4 *)(param_1 + 0x48) = uVar1;
  }
  uVar1 = DAT_002adf24;
  *(undefined4 *)(param_1 + 0x3c) = DAT_002adf24;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  puVar2 = DAT_002adf28;
  if (bVar5) {
    *(undefined4 *)(param_1 + 0x70) = *DAT_002adf28;
    *(undefined4 *)(param_1 + 0x74) = puVar2[1];
    *(undefined4 *)(param_1 + 0x78) = puVar2[2];
  }
  if (*(uint *)(*(int *)(param_1 + 0x34) + 0x65c) <= *(uint *)(*(int *)(param_1 + 0x34) + 0x658)) {
    func_002AC2D4(param_1);
  }
  *(undefined2 *)(param_1 + 0x38) = 0;
  if (bVar5) {
    uVar4 = *(uint *)(*(int *)(param_1 + 0x34) + 0x59c);
    if ((*(byte *)(param_1 + 0x3a) & 0x10) == 0) {
      uVar4 = uVar4 & 0xfffff7ff;
    }
    else {
      uVar4 = uVar4 | 0x800;
    }
    *(uint *)(*(int *)(param_1 + 0x34) + 0x59c) = uVar4;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (*(short *)(DAT_002adf2c + iVar3) < 1) {
    func_004FB024(iVar3);
  }
  else {
    *(undefined4 *)(iVar3 + 0x4cc) = *(undefined4 *)(param_1 + 0x88);
  }
  uVar4 = *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) & 0x3fffffff;
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) = uVar4;
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) = uVar4 | 0x2000;
  *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x58c) = *(undefined4 *)(param_1 + 0x8c);
  if (bVar5) {
    *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x4f0) = *(undefined4 *)(param_1 + 0xa0);
  }
  return func_002ABDB0(param_1,1);
}


#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004FC78C(int param_1,undefined2 param_2);
extern int func_0058A468(int param_1);
extern int iRam0035403c;
extern undefined4 uRam00354038;
extern undefined4 uRam00354040;
extern undefined4 DAT_00354034;

// USA 00353FB8 <- EU 00353F94 (Ghidra, non-matching)
// GLOBAL DAT_00354034 undefined4
// GLOBAL UNK_00354038 undefined4
// GLOBAL UNK_0035403c int
// GLOBAL UNK_00354040 undefined4

void func_00353FB8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x58c) = DAT_00354034;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff48;
  func_00151148(*(int *)(param_1 + 0xa88),0);
  iVar1 = iRam0035403c;
  uVar2 = uRam00354038;
  *(undefined4 *)(param_1 + 0x3dc) = uRam00354038;
  *(undefined4 *)(param_1 + 0x3e0) = uVar2;
  *(undefined4 *)(param_1 + 0x3e4) = uVar2;
  *(undefined4 *)(param_1 + 0x9dc) = uVar2;
  uVar2 = uRam00354040;
  if (*(short *)(iVar1 + param_1) < 1) {
    iVar1 = func_0058A468(param_1);
    func_004FC78C(param_1,(short)iVar1);
  }
  *(undefined4 *)(param_1 + 0x9fc) = 0x1e;
  *(undefined4 *)(param_1 + 0xa00) = uVar2;
  *(undefined4 *)(param_1 + 0x9f8) = 0;
  return;
}


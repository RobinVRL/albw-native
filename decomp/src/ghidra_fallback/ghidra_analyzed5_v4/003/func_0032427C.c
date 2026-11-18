#include "ghidra_types.h"

extern undefined4 uRam003242d0;

// USA 0032427C <- EU 00324258 (Ghidra, non-matching)
// GLOBAL UNK_003242d0 undefined4

void * func_0032427C(int param_1,float fparam_0,float fparam_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  *(float *)(param_1 + 0x108) = fparam_0;
  uVar1 = uRam003242d0;
  iVar2 = 0;
  do {
    puVar3 = (undefined1 *)(param_1 + iVar2 * 0x10);
    *puVar3 = 0;
    iVar2 = iVar2 + 1;
    *(undefined4 *)(puVar3 + 4) = uVar1;
    *(undefined4 *)(puVar3 + 8) = uVar1;
    *(undefined4 *)(puVar3 + 0xc) = uVar1;
  } while (iVar2 < 8);
  *(float *)(param_1 + 0x10c) = fparam_1;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  return (void *)param_1;
}


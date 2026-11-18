#include "ghidra_types.h"

extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004CF478(int param_1,int param_2);
extern float fRam00427908;
extern float fRam0042790c;

// USA 004278A0 <- EU 00427880 (Ghidra, non-matching)
// GLOBAL UNK_00427908 float
// GLOBAL UNK_0042790c float

void func_004278A0(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_r3;
  float fVar4;
  
  if (3 < param_2) {
    param_2 = 0;
  }
  cVar1 = *(char *)(*(int *)(param_1 + 0x48) + 0x30);
  func_004CF478(*(int *)(param_1 + 0x48),0);
  uVar3 = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 0x34) + param_2 * 4);
  *(int *)(param_1 + 0x48) = iVar2;
  func_004CF478(iVar2,(int)cVar1);
  fVar4 = fRam00427908;
  if (param_2 != 0) {
    fVar4 = fRam0042790c;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x6c) + 0x14);
  if (*(float *)(iVar2 + 8) != fVar4) {
    *(float *)(iVar2 + 8) = fVar4;
    *(undefined1 *)(iVar2 + 0x26) = 1;
  }
  func_00169A80(*(int **)(param_1 + 0x6c),1,uVar3,in_r3);
  *(byte *)(param_1 + 0x81) = *(byte *)(param_1 + 0x81) & 0xfd;
  return;
}


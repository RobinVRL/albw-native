#include "ghidra_types.h"

extern int func_001B6AFC(int param_1);
extern int func_00231524(int param_1);
extern int func_00462760(int param_1);
extern int func_00462924(int param_1);
extern float DAT_00462680;
extern float DAT_00462684;
extern float DAT_00462688;

// USA 00462590 <- EU 00462568 (Ghidra, non-matching)
// GLOBAL DAT_00462680 float
// GLOBAL DAT_00462684 float
// GLOBAL DAT_00462688 float

undefined4 func_00462590(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  uVar2 = func_001B6AFC(param_1);
  bVar6 = *(char *)(param_1 + 0x81) != '\0';
  cVar1 = '\0';
  if (bVar6) {
    cVar1 = *(char *)(param_1 + 0x80);
  }
  if (bVar6 && cVar1 != '\0') {
    iVar4 = *(int *)(param_1 + 0x1c);
    uVar3 = (uint)*(short *)(param_1 + 0x22);
    if (uVar3 < *(uint *)(iVar4 + 8)) {
      iVar5 = *(int *)(iVar4 + 0xc) + uVar3 * 0x38;
      iVar4 = *(int *)(iVar4 + 0xc) + uVar3 * 0x38;
    }
    else {
      iVar5 = *(int *)(iVar4 + 0xc);
      iVar4 = *(int *)(iVar4 + 0xc);
    }
    if (*(float *)(iVar5 + 0x14) < *(float *)(iVar4 + 0x20) - DAT_00462680) {
      func_00462924(param_1);
    }
  }
  iVar4 = *(int *)(param_1 + 0x1c);
  uVar3 = (uint)*(short *)(param_1 + 0x22);
  if (uVar3 < *(uint *)(iVar4 + 8)) {
    iVar5 = *(int *)(iVar4 + 0xc) + uVar3 * 0x38;
    iVar4 = *(int *)(iVar4 + 0xc) + uVar3 * 0x38;
  }
  else {
    iVar5 = *(int *)(iVar4 + 0xc);
    iVar4 = *(int *)(iVar4 + 0xc);
  }
  if (*(float *)(iVar4 + 0x20) - DAT_00462684 <= *(float *)(iVar5 + 0x14)) {
    func_00462760(param_1);
  }
  if ((DAT_00462688 <= *(float *)(param_1 + 0x84)) &&
     (uVar3 = VectorFloatToUnsigned(*(float *)(param_1 + 0x84),3),
     uVar3 <= *(uint *)(param_1 + 0x90))) {
    func_00231524(param_1 + 0x20);
    func_00462760(param_1);
    uVar2 = 1;
  }
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
  return uVar2;
}


#include "ghidra_types.h"

extern int func_0012C85C(int *param_1,uint param_2);
extern float DAT_0042179c;

// USA 00421750 <- EU 00421730 (Ghidra, non-matching)
// GLOBAL DAT_0042179c float

void func_00421750(int *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  float in_s2;
  
  func_0012C85C(param_1,param_2);
  cVar1 = *(char *)((int)param_1 + 0xd);
  bVar3 = cVar1 == '\0';
  if (bVar3) {
    cVar1 = *(char *)((int)param_1 + 0xe);
  }
  if (!bVar3 || cVar1 != '\0') {
    if (param_1[0x11] != param_1[0x10]) {
      in_s2 = DAT_0042179c;
    }
    iVar2 = *(int *)(*(int *)param_1[7] + 0x10);
    fVar4 = *(float *)(iVar2 + 0x20);
    if (param_1[0x11] != param_1[0x10]) {
      fVar4 = fVar4 + in_s2;
    }
    *(float *)(iVar2 + 0x20) = fVar4;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
    *(byte *)(param_1[7] + 0x70) = *(byte *)(param_1[7] + 0x70) | 2;
  }
  return;
}


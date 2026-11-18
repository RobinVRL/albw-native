#include "ghidra_types.h"

extern int func_0012C85C(int *param_1,uint param_2);
extern undefined4 DAT_00461c58;

// USA 00461C1C <- EU 00461BF4 (Ghidra, non-matching)
// GLOBAL DAT_00461c58 undefined4

void func_00461C1C(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  
  func_0012C85C(param_1,param_2);
  uVar1 = DAT_00461c58;
  if ((int *)param_1[7] != (int *)0x0) {
    fVar3 = ALBW_AS_F32(param_1[0x20]);
    iVar2 = *(int *)(*(int *)param_1[7] + 0x10);
    if (*(float *)(iVar2 + 0x1c) != ALBW_AS_F32(param_1[0x1f]) || *(float *)(iVar2 + 0x20) != fVar3) {
      *(int *)(iVar2 + 0x1c) = param_1[0x1f];
      *(float *)(iVar2 + 0x20) = fVar3;
      *(undefined4 *)(iVar2 + 0x24) = uVar1;
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
    }
  }
  return;
}


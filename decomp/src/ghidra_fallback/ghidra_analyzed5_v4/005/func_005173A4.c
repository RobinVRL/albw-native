#include "ghidra_types.h"

extern int func_0034C8F0(uint *param_1,int param_2,int param_3);
extern int func_0066BBD4(undefined4 *param_1,undefined1 param_2);
extern float DAT_0051744c;
extern float DAT_00517450;
extern float DAT_00517454;

// USA 005173A4 <- EU 0051737C (Ghidra, non-matching)
// GLOBAL DAT_0051744c float
// GLOBAL DAT_00517450 float
// GLOBAL DAT_00517454 float

undefined4 func_005173A4(int param_1,int param_2)

{
  char cVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  func_0034C8F0(*(uint **)(param_1 + 0xc7c),*(int *)(param_1 + 0x3a0),param_2);
  fVar2 = DAT_00517454;
  fVar5 = DAT_00517450;
  if (*(int *)(param_2 + 0x2c) != 0) {
    cVar1 = *(char *)(*(int *)(param_2 + 0x2c) + 1);
    if (cVar1 == '\v') {
      fVar4 = *(float *)(param_1 + 0xcdc) - DAT_0051744c;
      *(float *)(param_1 + 0xcdc) = fVar4;
      if ((fVar5 <= fVar4) && (fVar5 = fVar4, fVar2 < fVar4)) {
        fVar5 = fVar2;
      }
      *(float *)(param_1 + 0xcdc) = fVar5;
      iVar3 = *(int *)(param_1 + 0xc84);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == *(int *)(param_1 + 0xc88))) {
        *(float *)(iVar3 + 0x34) = fVar5;
        *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) | 0x20;
      }
    }
    else if (cVar1 == '\x02') {
      *(undefined2 *)(param_1 + 0xce4) = 0;
      func_0066BBD4((undefined4 *)(param_1 + 0xcb8),1);
      return 1;
    }
  }
  return 0;
}


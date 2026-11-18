#include "ghidra_types.h"

extern int func_003ABB24(int *param_1,uint param_2,int param_3);
extern int func_003B147C(int *param_1,undefined4 param_2,undefined4 param_3);
extern int func_00669720(undefined4 *param_1,undefined1 param_2);
extern float DAT_003b73b4;

// USA 003B72D8 <- EU 003B72B4 (Ghidra, non-matching)
// GLOBAL DAT_003b73b4 float

undefined4 func_003B72D8(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  
  *(undefined1 *)(param_1 + 99) = 0;
  fVar1 = DAT_003b73b4;
  iVar2 = *(int *)(param_1 + 0x48);
  *(float *)(iVar2 + 0xa2c) = DAT_003b73b4;
  *(float *)(iVar2 + 0xa30) = fVar1;
  *(float *)(iVar2 + 0xa34) = fVar1;
  *(undefined1 *)(*(int *)(param_1 + 0x48) + 0xb3f) = 1;
  if (*(int *)(param_1 + 0x6c) < *(int *)(param_1 + 0x4c)) {
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x48) + 0x8dc) + 0x14);
    if (*(char *)(iVar2 + 0x1c) != '\0') {
      return 0;
    }
    if (*(float *)(iVar2 + 0x10) < fVar1) {
      if (fVar1 < *(float *)(iVar2 + 8)) {
        return 0;
      }
    }
    else if (*(float *)(iVar2 + 8) != *(float *)(iVar2 + 0x14)) {
      return 0;
    }
  }
  piVar3 = *(int **)(*(int *)(param_1 + 0x48) + 0xbcc);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x14))(piVar3);
  }
  piVar3 = *(int **)(*(int *)(param_1 + 0x48) + 0x93c);
  iVar2 = func_003ABB24(piVar3,1,1);
  if (iVar2 == 0) {
    return 0;
  }
  func_003B147C((int *)piVar3[1],1,1);
  return func_00669720((undefined4 *)(param_1 + 0x6c),0);
}


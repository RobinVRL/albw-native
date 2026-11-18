#include "ghidra_types.h"

extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern float DAT_00427b64;
extern float DAT_00427b68;

// USA 00427B38 <- EU 00427B18 (Ghidra, non-matching)
// GLOBAL DAT_00427b64 float
// GLOBAL DAT_00427b68 float

void func_00427B38(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  float fVar2;
  
  fVar2 = DAT_00427b64;
  if (param_2 == 0) {
    fVar2 = DAT_00427b68;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 100) + 0x14);
  if (*(float *)(iVar1 + 8) != fVar2) {
    *(float *)(iVar1 + 8) = fVar2;
    *(undefined1 *)(iVar1 + 0x26) = 1;
  }
  func_00169A80(*(int **)(param_1 + 100),1,param_3,param_4);
  *(byte *)(param_1 + 0x81) = *(byte *)(param_1 + 0x81) & 0xfd;
  return;
}


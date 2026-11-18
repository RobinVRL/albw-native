#include "ghidra_types.h"

extern int func_004F4A68();
extern int func_0068C690(float *param_1);
extern float DAT_00201dd0;
extern int DAT_00201dd4;

// USA 00201D4C <- EU 00201D4C (Ghidra, non-matching)
// GLOBAL DAT_00201dd0 float
// GLOBAL DAT_00201dd4 int

int func_00201D4C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = func_004F4A68(param_1,param_2);
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x8e0) == '\0')) {
    fVar3 = *(float *)(param_2 + 8);
    if (fVar3 <= DAT_00201dd0) {
      fVar3 = -fVar3;
    }
    if ((int)ALBW_AS_U32(fVar3) < DAT_00201dd4) {
      iVar2 = func_0068C690((float *)(param_2 + 4));
      iVar2 = iVar2 - (*(int *)(param_1 + 0x8d8) + -0x80000000);
      if (iVar2 + 0x3fffffffU < 0x7fffffff) {
        *(int *)(param_1 + 0x8d4) = iVar2 * 2 + *(int *)(param_1 + 0x8d8) + -0x80000000;
      }
    }
  }
  return iVar1;
}


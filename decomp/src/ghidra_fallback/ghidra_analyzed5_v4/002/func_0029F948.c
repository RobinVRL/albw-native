#include "ghidra_types.h"

extern float func_0055497C(int param_1);
extern float func_00554D80(int param_1);
extern int *DAT_0029f9a8;

// USA 0029F948 <- EU 0029F924 (Ghidra, non-matching)
// GLOBAL DAT_0029f9a8 int *

void func_0029F948(char *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  if (*param_1 != param_2) {
    *param_1 = (char)param_2;
    iVar1 = *(int *)(param_1 + 0x1c);
    if (param_2 == 0) {
      *(float *)(param_1 + 4) =
           *(float *)(*(int *)(iVar1 + 0x90) + 0x18) + *(float *)(*DAT_0029f9a8 + 0x80);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(*(int *)(iVar1 + 0x90) + 0x20);
    }
    else {
      fVar3 = func_00554D80(iVar1);
      *(float *)(param_1 + 4) = fVar3;
      fVar3 = func_0055497C(*(int *)(param_1 + 0x1c));
      *(float *)(param_1 + 0xc) = fVar3;
    }
    if (param_3 == 0) {
      uVar2 = 10;
    }
    else {
      uVar2 = 1;
    }
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
  }
  return;
}


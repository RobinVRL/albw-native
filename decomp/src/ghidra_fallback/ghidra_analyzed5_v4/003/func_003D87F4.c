#include "ghidra_types.h"

extern int func_003D7634(int *param_1,int *param_2,int *param_3);
extern int func_003DA498(int *param_1,int param_2);

// USA 003D87F4 <- EU 003D87D4 (Ghidra, non-matching)

uint func_003D87F4(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int * *)(albw_frame + 0x0))
  piVar2 = param_1 + 1;
  *param_1 = *(int *)(param_3 + 4);
  param_1[3] = (int)param_2;
  param_1[5] = (int)param_2;
  local_10 = (int *)func_003DA498(param_2,2);
  if (local_10 == (int *)0x0) {
    uVar1 = 2;
  }
  else {
    piVar3 = local_10 + 2;
    if (piVar3 != (int *)0x0) {
      local_10[4] = 0;
      *piVar3 = (int)piVar3;
      local_10[5] = 0;
      local_10[3] = (int)piVar3;
    }
    *local_10 = *piVar2;
    local_10[1] = (int)piVar2;
    *piVar2 = (int)local_10;
    *(int **)(*local_10 + 4) = local_10;
    local_10[4] = param_1[5];
    uVar1 = func_003D7634(param_1,param_1 + 4,(int *)&local_10);
    if (uVar1 == 0) {
      iVar4 = 0;
      for (piVar2 = (int *)param_1[2]; piVar2 != param_1 + 1; piVar2 = (int *)piVar2[1]) {
        piVar2[5] = iVar4;
        iVar4 = iVar4 + 1;
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}


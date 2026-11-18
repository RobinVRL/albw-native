#include "ghidra_types.h"

extern int func_004CDDEC(int param_1,int *param_2,int param_3);
extern int *DAT_00165f38;

// USA 00165E78 <- EU 00165E7C (Ghidra, non-matching)
// GLOBAL DAT_00165f38 int *

undefined4 func_00165E78(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((*DAT_00165f38 != 0) &&
     (cVar1 = func_004CDDEC(*DAT_00165f38,(int *)param_1,param_4), cVar1 != '\0')) {
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    *(undefined4 *)(param_1 + 0xb4) = *param_2;
    *(undefined4 *)(param_1 + 0xb8) = uVar2;
    *(undefined4 *)(param_1 + 0xbc) = uVar3;
    *(undefined4 *)(param_1 + 0xc0) = *param_3;
    *(undefined4 *)(param_1 + 0xc4) = param_3[1];
    *(undefined4 *)(param_1 + 200) = param_3[2];
    *(undefined4 *)(param_1 + 0xcc) = param_3[3];
    uVar2 = param_3[5];
    uVar3 = param_3[6];
    *(undefined4 *)(param_1 + 0xd0) = param_3[4];
    *(undefined4 *)(param_1 + 0xd4) = uVar2;
    *(undefined4 *)(param_1 + 0xd8) = uVar3;
    *(undefined4 *)(param_1 + 0xdc) = param_3[7];
    *(undefined4 *)(param_1 + 0xe0) = param_3[8];
    *(undefined4 *)(param_1 + 0xe4) = param_3[9];
    *(undefined2 *)(param_1 + 0xe8) = *(undefined2 *)(param_3 + 10);
    *(undefined2 *)(param_1 + 0xea) = *(undefined2 *)((int)param_3 + 0x2a);
    *(undefined2 *)(param_1 + 0xec) = *(undefined2 *)(param_3 + 10);
    *(undefined1 *)(param_1 + 0xfb) = 1;
    return 1;
  }
  return 0;
}


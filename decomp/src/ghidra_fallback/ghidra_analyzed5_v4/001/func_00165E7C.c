#include "ghidra_types.h"

extern int func_004CDDEC(int param_1,int *param_2,int param_3);
extern int *DAT_00165f38;

// USA 00165E7C <- EU 00165E80 (Ghidra, non-matching)
// GLOBAL DAT_00165f38 int *

undefined4 func_00165E7C(int *param_1,int *param_2,int *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if ((*DAT_00165f38 != 0) && (cVar1 = func_004CDDEC(*DAT_00165f38,param_1,param_4), cVar1 != '\0'))
  {
    iVar2 = param_2[1];
    iVar3 = param_2[2];
    param_1[0x2d] = *param_2;
    param_1[0x2e] = iVar2;
    param_1[0x2f] = iVar3;
    param_1[0x30] = *param_3;
    param_1[0x31] = param_3[1];
    param_1[0x32] = param_3[2];
    param_1[0x33] = param_3[3];
    iVar2 = param_3[5];
    iVar3 = param_3[6];
    param_1[0x34] = param_3[4];
    param_1[0x35] = iVar2;
    param_1[0x36] = iVar3;
    param_1[0x37] = param_3[7];
    param_1[0x38] = param_3[8];
    param_1[0x39] = param_3[9];
    *(short *)(param_1 + 0x3a) = (short)param_3[10];
    *(undefined2 *)((int)param_1 + 0xea) = *(undefined2 *)((int)param_3 + 0x2a);
    *(short *)(param_1 + 0x3b) = (short)param_3[10];
    *(undefined1 *)((int)param_1 + 0xfb) = 1;
    return 1;
  }
  return 0;
}


#include "ghidra_types.h"

extern int *DAT_00581aa0;
extern int DAT_00581aa4;
extern float DAT_00581aa8;
extern float DAT_00581aac;

// USA 00581A18 <- EU 005819F0 (Ghidra, non-matching)
// GLOBAL DAT_00581aa0 int *
// GLOBAL DAT_00581aa4 int
// GLOBAL DAT_00581aa8 float
// GLOBAL DAT_00581aac float

int func_00581A18(undefined4 param_1,float *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*DAT_00581aa0 + 0x38) + 0x183c + param_3 * DAT_00581aa4 * 4;
  iVar3 = (int)(((*param_2 - (*(float *)(iVar2 + 4) + *(float *)(iVar2 + 0x10)) * DAT_00581aa8) +
                DAT_00581aac) * DAT_00581aa8);
  iVar1 = iVar3;
  if (iVar3 < 1) {
    iVar1 = 0;
  }
  iVar2 = (int)(((param_2[2] - (*(float *)(iVar2 + 0xc) + *(float *)(iVar2 + 0x18)) * DAT_00581aa8)
                + DAT_00581aac) * DAT_00581aa8);
  if ((0 < iVar3) && (0x19 < iVar1)) {
    iVar1 = 0x19;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else if (0x19 < iVar2) {
    iVar2 = 0x19;
  }
  return iVar1 + iVar2 * 0x1a;
}


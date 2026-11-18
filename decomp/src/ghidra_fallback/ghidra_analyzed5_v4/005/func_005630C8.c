#include "ghidra_types.h"

extern int DAT_00563144;

// USA 005630C8 <- EU 005630A0 (Ghidra, non-matching)
// GLOBAL DAT_00563144 int

int * func_005630C8(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = DAT_00563144;
  iVar3 = 0;
  do {
    if (*(int *)(param_1 + iVar3 * 0x70 + 0x160) == 0) {
      *param_2 = 0;
      param_2[1] = iVar3 * 3 + 0x205U | 0xf0000;
      piVar2 = param_2 + 1;
    }
    else {
      *param_2 = 0;
      param_2[1] = iVar3 * 3 + 0x203U | 0x802f0000;
      piVar2 = param_2 + 3;
      param_2[2] = 0;
      *piVar2 = 0;
    }
    param_2 = piVar2 + 1;
    if (*(char *)(param_1 + iVar3 * 0x14 + 0x6a0) != '\0') {
      *param_2 = iVar3;
      piVar2[2] = iVar1;
      piVar2[3] = 0;
      piVar2[4] = 0;
      piVar2[5] = 0;
      param_2 = piVar2 + 7;
      piVar2[6] = 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xc);
  return param_2;
}


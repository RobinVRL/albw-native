#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);

// USA 00432DF0 <- EU 00432DD0 (Ghidra, non-matching)

void func_00432DF0(uint *param_1,float *param_2)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (0 < (int)*param_1) {
    do {
      iVar3 = 0;
      do {
        uVar1 = param_1[2];
        if (uVar4 < *param_1) {
          uVar1 = uVar1 + uVar4 * 0x24;
        }
        pfVar2 = (float *)(uVar1 + iVar3 * 0xc);
        func_00115C54(pfVar2,pfVar2,param_2);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 3);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)*param_1);
  }
  return;
}


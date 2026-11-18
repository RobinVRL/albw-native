#include "ghidra_types.h"

extern int func_004CDF40(int param_1,int param_2,int param_3);
extern int func_0066552C(undefined4 *param_1,undefined1 param_2);
extern float DAT_0031d150;
extern int *DAT_0031d154;
extern int DAT_0031d158;
extern int *DAT_0031d15c;

// USA 0031D094 <- EU 0031D070 (Ghidra, non-matching)
// GLOBAL DAT_0031d150 float
// GLOBAL DAT_0031d154 int *
// GLOBAL DAT_0031d158 int
// GLOBAL DAT_0031d15c int *

undefined4 func_0031D094(int param_1)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  
  if (*(char *)(param_1 + 0x16a) == '\0') {
    *(undefined1 *)(param_1 + 0x168) = 0;
    piVar1 = DAT_0031d154;
    iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x14);
    if (*(char *)(iVar2 + 0x1c) == '\0') {
      if (*(float *)(iVar2 + 0x10) < DAT_0031d150) {
        if (*(float *)(iVar2 + 8) <= DAT_0031d150) goto LAB_0031d0e0;
      }
      else if (*(float *)(iVar2 + 8) == *(float *)(iVar2 + 0x14)) {
LAB_0031d0e0:
        *(byte *)(*DAT_0031d154 + 0x2c1e) = *(byte *)(*DAT_0031d154 + 0x2c1e) | 1;
        pbVar3 = (byte *)(*piVar1 + 0x2c1f);
        *pbVar3 = *pbVar3 | 2;
        iVar2 = DAT_0031d158;
        *(undefined1 *)(*piVar1 + 0x2c1c) = 1;
        func_004CDF40(*DAT_0031d15c,iVar2,0);
        *(undefined1 *)(param_1 + 0x168) = 1;
        return func_0066552C((undefined4 *)(param_1 + 0x10),3);
      }
    }
  }
  return 0;
}


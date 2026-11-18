#include "ghidra_types.h"

extern int func_005821B4(int param_1,int param_2);
extern int *DAT_002e00f0;
extern int *DAT_002e00f4;

// USA 002E0064 <- EU 002E0040 (Ghidra, non-matching)
// GLOBAL DAT_002e00f0 int *
// GLOBAL DAT_002e00f4 int *

void func_002E0064(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  
  piVar2 = DAT_002e00f4;
  pcVar7 = (char *)(*DAT_002e00f0 + 0x18);
  if ((int)*pcVar7 - 9U < 0xd) {
    iVar3 = 0;
    if (-1 < *(short *)(param_2 + 0x50)) {
      iVar3 = func_005821B4(*DAT_002e00f4,(int)*(short *)(param_2 + 0x50));
    }
    *param_1 = 0;
    cVar1 = *pcVar7;
    if ((cVar1 == '\v' || cVar1 == '\x11') || cVar1 == '\x14') {
      if (iVar3 == 0) {
        return;
      }
      uVar5 = (uint)*(short *)(*(int *)(*piVar2 + 0x40) + 4);
      iVar6 = (int)*(short *)(*(int *)(*piVar2 + 0x40) + 6);
      iVar4 = ((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) + (int)*(short *)(iVar3 + 0x46);
      iVar3 = iVar4 + -1;
      if (iVar6 < 0) {
        iVar3 = iVar4;
      }
      if ((int)(iVar6 * uVar5) < 0) {
        iVar3 = iVar3 + 1;
      }
    }
    else {
      if (iVar3 == 0) {
        return;
      }
      iVar3 = (int)*(short *)(iVar3 + 0x48);
    }
  }
  else {
    iVar3 = *(int *)(*DAT_002e00f0 + 0x1c);
  }
  *param_1 = iVar3;
  return;
}


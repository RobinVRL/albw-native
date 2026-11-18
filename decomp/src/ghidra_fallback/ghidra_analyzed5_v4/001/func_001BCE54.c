#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_001E56CC(undefined4 *param_1,uint *param_2);
extern int DAT_001bcf48;
extern undefined *DAT_001bcf4c;

// USA 001BCE54 <- EU 001BCE54 (Ghidra, non-matching)
// GLOBAL DAT_001bcf48 int
// GLOBAL DAT_001bcf4c undefined *

int * func_001BCE54(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  piVar1 = func_001E56CC(param_1,param_2);
  iVar6 = DAT_001bcf48;
  iVar7 = 0;
  *piVar1 = DAT_001bcf48;
  piVar1[200] = iVar6 + 0x74;
  piVar1[0x187] = 0;
  piVar1[0x188] = 0;
  iVar6 = piVar1[0x11e];
  if (0 < iVar6) {
    iVar2 = func_0010CEE0(iVar6 * 0x1c,(int *)0x0,4);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = func_00100118(iVar2,DAT_001bcf4c,0x1c,iVar6);
    }
    if ((0 < iVar6) && (iVar3 != 0)) {
      piVar1[0x188] = iVar3;
      piVar1[0x187] = iVar6;
    }
    piVar4 = (int *)piVar1[0x120];
    iVar6 = piVar1[0x188];
    piVar8 = piVar4 + piVar1[0x11e];
    for (; piVar4 != piVar8; piVar4 = piVar4 + 1) {
      iVar5 = *piVar4;
      iVar3 = iVar6 + iVar7 * 0x1c;
      iVar2 = iVar6 + iVar7 * 0x1c;
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar5 + 4);
      iVar7 = iVar7 + 1;
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar5 + 8);
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
      iVar3 = *piVar4;
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar3 + 0x10);
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar3 + 0x14);
      *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar3 + 0x18);
    }
  }
  return piVar1;
}


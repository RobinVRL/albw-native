#include "ghidra_types.h"

extern int func_0012C790(int param_1);
extern int func_0012C85C(int *param_1,uint param_2);
extern int func_001B6B38(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_0051E300(int param_1);
extern int func_00581C5C(int param_1);
extern int *DAT_004742ec;
extern int *DAT_004742f0;

// USA 00474220 <- EU 004741F8 (Ghidra, non-matching)
// GLOBAL DAT_004742ec int *
// GLOBAL DAT_004742f0 int *

undefined4 func_00474220(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  int *piVar5;
  int iVar6;
  bool bVar7;
  
  iVar4 = param_1[0x23];
  iVar6 = *DAT_004742ec;
  if ((iVar6 != 0) && (iVar3 = func_00581C5C(iVar6), iVar3 != 0)) {
    iVar6 = func_00581C5C(iVar6);
    sVar2 = *(short *)(iVar6 + 0x46);
    *(short *)(param_1 + 0x23) = sVar2;
    if ((sVar2 != (short)iVar4) &&
       (((short)iVar4 != 0 || ((int)*(char *)(*DAT_004742f0 + 0x18) - 0x18U < 3)))) {
      cVar1 = *(char *)((int)param_1 + 0xd);
      bVar7 = cVar1 == '\0';
      if (bVar7) {
        cVar1 = *(char *)((int)param_1 + 0xe);
      }
      if (!bVar7 || cVar1 != '\0') {
        func_0012C790((int)param_1);
        func_001B6B38(param_1,extraout_r1,param_3,param_4);
      }
      *(undefined1 *)((int)param_1 + 0xe) = 1;
    }
  }
  iVar4 = param_1[0x13];
  iVar6 = param_1[0x15];
  while( true ) {
    piVar5 = (int *)(iVar4 - iVar6);
    if (piVar5 == (int *)((int)param_1 + (0x48 - param_1[0x15]))) break;
    iVar4 = func_0051E300((int)piVar5);
    if (iVar4 != 0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
    iVar4 = *(int *)((int)piVar5 + iVar6 + 4);
  }
  return func_0012C85C(param_1,param_1[0x15]);
}


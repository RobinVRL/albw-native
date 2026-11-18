#include "ghidra_types.h"

extern int func_0025BCE8(int param_1,int param_2,int param_3);
extern int func_002DF174(int param_1,int param_2,int param_3);
extern int func_0052EF04(int param_1,int param_2);
extern int func_00547224(int param_1,int param_2);
extern int func_00588174(int param_1,uint param_2);
extern int func_005883B0(int param_1,uint param_2);
extern int *DAT_0025bad0;

// USA 0025B970 <- EU 0025B998 (Ghidra, non-matching)
// GLOBAL DAT_0025bad0 int *

undefined1 func_0025B970(int param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  piVar1 = DAT_0025bad0;
  if (*(char *)(param_1 + 0x84) == '\0') {
    uVar3 = func_005883B0(*DAT_0025bad0,param_2);
    switch(uVar3) {
    case 0x4000002:
    case 0x4000003:
      break;
    default:
      goto switchD_0025b9c4_caseD_4000004;
    case 0x4000005:
    case 0x4000006:
    case 0x4000007:
      if (*(char *)(param_1 + 0x85) == '\0') {
        return 0;
      }
    }
  }
  uVar4 = func_00588174(*piVar1,param_2);
  if ((uVar4 & 4) == 0) {
    if ((uVar4 & 1) != 0) {
      uVar6 = uVar4;
      if (param_2 != -1) {
        uVar6 = *(uint *)(param_1 + 0x60);
      }
      if (param_2 != -1 && uVar6 != 0) {
        iVar7 = *(int *)(param_1 + 100);
        for (iVar5 = *(int *)(param_1 + 0x5c) - iVar7; iVar5 != (param_1 + 0x58) - iVar7;
            iVar5 = *(int *)(iVar5 + iVar7 + 4) - iVar7) {
          bVar2 = func_0052EF04(iVar5,param_2);
          if (bVar2) {
            return 0;
          }
        }
      }
    }
  }
  else {
    iVar5 = func_00547224(*piVar1,param_2);
    if (iVar5 != 0) {
switchD_0025b9c4_caseD_4000004:
      return 0;
    }
  }
  if ((uVar4 & 8) == 0) {
    if ((uVar4 & 2) != 0) {
      func_0025BCE8(param_1,param_2,0);
    }
  }
  else {
    func_002DF174(*piVar1,param_2,0);
  }
  return 1;
}


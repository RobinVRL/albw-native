// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_002E1B70(int *param_1);
extern int func_0030D120(int *param_1,int param_2);
extern int func_0030D510(int *param_1,int param_2);
extern int func_0030D6D0(int *param_1,int param_2,int param_3,int param_4);
extern int func_0030DC44(int *param_1,int param_2);
extern int func_0030DE28(int *param_1,int param_2);
extern int func_0030DFA0(int *param_1,int param_2);
extern int func_00361640();
extern int func_003A4C94(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0054B238(int param_1,int param_2);
extern int func_0058DA24(int param_1);
extern int *DAT_0030d4e4;
extern int *DAT_0030d4e8;

// USA 0030D384 <- EU 0030D360 (Ghidra, non-matching)
// GLOBAL DAT_0030d4e4 int *
// GLOBAL DAT_0030d4e8 int *

undefined4 func_0030D384(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint extraout_r1;
  
  iVar1 = param_1[0x3c];
  uVar5 = (uint)*(ushort *)(iVar1 + 10);
  if (uVar5 == 7) {
    if ((*DAT_0030d4e4 != 0) && (iVar1 = func_0058DA24(*DAT_0030d4e4), iVar1 == 0)) {
      (**(code **)(*param_1 + 0x30))(param_1);
      return 2;
    }
    func_0030D120(param_1,*(int *)(param_1[0x3c] + 4));
  }
  else if (uVar5 < 7) {
    if (uVar5 == 4) {
      iVar1 = *(int *)(iVar1 + 4);
      if (iVar1 == 0) {
        iVar1 = param_1[7];
      }
      else if (iVar1 == 100) {
        iVar1 = func_00361640(*DAT_0030d4e8);
      }
      else {
        iVar1 = func_0030DC44(param_1,iVar1);
        if (iVar1 == 0) {
          return 0;
        }
      }
      param_1[9] = iVar1;
    }
    else {
      if (uVar5 == 5) {
        func_0030DFA0(param_1,*(int *)(iVar1 + 4));
        return 0;
      }
      if (uVar5 != 6) {
LAB_0030d3b4:
        uVar2 = func_003A4C94(param_1,uVar5,param_3,param_4);
        return uVar2;
      }
      func_0030DE28(param_1,*(int *)(iVar1 + 4));
    }
  }
  else if (uVar5 == 0x22) {
    uVar5 = func_0054B238((int)param_1,2);
    uVar3 = func_0054B238((int)param_1,1);
    uVar4 = func_0054B238((int)param_1,0);
    func_0030D6D0(param_1,uVar4,uVar3,uVar5);
  }
  else {
    if (uVar5 != 0x23) {
      if (uVar5 == 0x30) {
        func_002E1B70(param_1 + 10);
        uVar5 = extraout_r1;
      }
      goto LAB_0030d3b4;
    }
    func_0030D510(param_1,*(int *)(iVar1 + 4));
  }
  return 0;
}


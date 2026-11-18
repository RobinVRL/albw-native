#include "ghidra_types.h"

extern int func_00194BFC(int param_1);
extern int func_003125C8(int param_1,undefined4 param_2);
extern int func_0055696C(int param_1,int param_2);
extern int *DAT_00311db8;

// USA 00311C94 <- EU 00311C70 (Ghidra, non-matching)
// GLOBAL DAT_00311db8 int *

/* WARNING: Type propagation algorithm not settling */

bool func_00311C94(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = DAT_00311db8;
  iVar6 = 0;
  iVar5 = 0;
  if (param_3 == 4) {
    do {
      iVar3 = func_00194BFC(iVar5);
      if (iVar3 != 1) {
        uVar4 = func_0055696C(*piVar1,iVar3);
        iVar6 = iVar6 + (uint)(1 < uVar4);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 10);
    if (iVar6 != 0) {
      if (iVar6 == 1) {
        return true;
      }
      if (iVar6 - 2U < 7) {
        return true;
      }
      return true;
    }
  }
  else {
    if (param_3 == 3) {
      iVar5 = *DAT_00311db8;
      if (param_4 == 0) {
        iVar5 = func_0055696C(iVar5,4);
      }
      else if (param_4 == 1) {
        iVar5 = func_0055696C(iVar5,10);
      }
      else {
        if (param_4 != 2) {
          return true;
        }
        iVar5 = func_0055696C(iVar5,6);
      }
      if (iVar5 != 0) {
        if (iVar5 == 1) {
          return true;
        }
        return true;
      }
      return false;
    }
    if (param_4 != 0) {
      bVar2 = func_003125C8(param_1,param_4);
      return bVar2;
    }
    if (*(char *)(param_1 + 0xa39) == '\0') {
      return true;
    }
  }
  return false;
}


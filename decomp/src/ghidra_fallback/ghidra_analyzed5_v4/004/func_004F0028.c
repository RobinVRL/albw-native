#include "ghidra_types.h"

extern int func_0055696C(int param_1,int param_2);
extern int *DAT_004f01c8;

// USA 004F0028 <- EU 004F0000 (Ghidra, non-matching)
// GLOBAL DAT_004f01c8 int *

/* WARNING: Type propagation algorithm not settling */

undefined4 func_004F0028(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *DAT_004f01c8;
  if (iVar1 != 0) {
    switch(param_1) {
    default:
      goto switchD_004f001c_caseD_0;
    case 1:
      iVar1 = func_0055696C(iVar1,2);
      if (iVar1 == 1) {
        return 0;
      }
      if (iVar1 == 3) {
        return 2;
      }
      return 1;
    case 2:
      iVar1 = func_0055696C(iVar1,3);
      break;
    case 3:
      iVar1 = func_0055696C(iVar1,4);
      break;
    case 4:
      iVar1 = func_0055696C(iVar1,6);
      break;
    case 5:
      iVar1 = func_0055696C(iVar1,7);
      break;
    case 6:
      iVar1 = func_0055696C(iVar1,8);
      break;
    case 7:
      iVar1 = func_0055696C(iVar1,9);
      break;
    case 8:
      iVar1 = func_0055696C(iVar1,10);
      break;
    case 9:
      iVar1 = func_0055696C(iVar1,0xb);
      break;
    case 10:
      iVar1 = func_0055696C(iVar1,0xc);
      break;
    case 0xb:
      iVar1 = func_0055696C(iVar1,0xd);
    }
    if (iVar1 == 1) {
      return 0;
    }
    if (iVar1 == 3) {
      return 2;
    }
  }
switchD_004f001c_caseD_0:
  return 1;
}


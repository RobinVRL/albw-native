#include "ghidra_types.h"

extern int func_0014DDEC(int *param_1,undefined4 param_2,int param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_006615C4(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00288e48;

// USA 00288D68 <- EU 00288D90 (Ghidra, non-matching)
// GLOBAL DAT_00288e48 int *

undefined4 func_00288D68(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((char)param_1[0x104] != '\x02') {
    uVar2 = (**(code **)(*param_1 + 0x34))(param_1);
    iVar1 = func_0014DDEC(param_1,(int)((ulonglong)uVar2 >> 0x20),param_3);
    if (iVar1 == 0) {
      iVar1 = func_0052FBA0(*DAT_00288e48 + 0x3dbbc,param_1[0x14]);
    }
    else {
      if ((int)uVar2 != 0) {
        return 1;
      }
      iVar1 = func_0052FBA0(*DAT_00288e48 + 0x3dbbc,param_1[0x14]);
    }
    if (iVar1 == 0) {
      *(undefined1 *)((int)param_1 + 0x2d7) = 1;
    }
    else {
      func_006615C4(param_1 + 0x103,2);
    }
  }
  return 0;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_00364980(int param_1,undefined4 *param_2,int param_3);
extern int DAT_0028f93c;
extern uint *DAT_0028f940;
extern undefined4 *DAT_0028f944;
extern undefined4 DAT_0028f948;

// USA 0028F824 <- EU 0028F84C (Ghidra, non-matching)
// GLOBAL DAT_0028f93c int
// GLOBAL DAT_0028f940 uint *
// GLOBAL DAT_0028f944 undefined4 *
// GLOBAL DAT_0028f948 undefined4

undefined4 func_0028F824(int param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (int)*(short *)(param_1 + 0x42);
  if (iVar1 == 0x23 || iVar1 == 0x26) {
    puVar2 = *(undefined4 **)(param_1 + 0x48);
    if (((*DAT_0028f940 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0028f940), iVar1 != 0)) {
      *DAT_0028f944 = DAT_0028f948;
    }
    if ((puVar2 == (undefined4 *)0x0) ||
       (iVar1 = (**(code **)*puVar2)(puVar2,DAT_0028f944), iVar1 == 0)) {
      puVar2 = (undefined4 *)0x0;
    }
    func_00364980((int)puVar2,param_2,param_3);
  }
  else {
    if ((((*(uint *)(DAT_0028f93c + iVar1 * 0x10 + 4) & 0x100) != 0) ||
        (*(int *)(*(int *)(param_1 + 0x10) + 0x5b0) != 0x3f800000)) ||
       (iVar1 = func_002D55D0(*(int *)(param_1 + 0x48),0x23), iVar1 == 0)) {
      return 0;
    }
    *(undefined4 *)(iVar1 + 0x10) = param_4;
  }
  return 1;
}


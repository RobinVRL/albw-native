#include "ghidra_types.h"

extern int func_00257A40(int param_1,undefined4 param_2);
extern int func_00293DC0(int param_1,int param_2,int param_3);
extern int func_004EBFFC(int param_1,int param_2,float fparam_0);
extern float DAT_00294df0;
extern int *DAT_00294df4;

// USA 00294D18 <- EU 00294D40 (Ghidra, non-matching)
// GLOBAL DAT_00294df0 float
// GLOBAL DAT_00294df4 int *

undefined4 func_00294D18(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x1a4) == '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar2 = *(int *)(param_1 + 0x20);
    for (iVar1 = *(int *)(param_1 + 0x18) - iVar2; iVar1 != (param_1 + 0x14) - iVar2;
        iVar1 = *(int *)(iVar1 + iVar2 + 4) - iVar2) {
      if (*(char *)(iVar1 + 0x6a) == '\0') {
        func_00257A40(iVar1,10);
      }
    }
  }
  *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) | 0x10;
  if (*(char *)(param_1 + 0x1a4) != '\0') {
    func_00293DC0(param_1,param_2,1);
  }
  return func_004EBFFC(*DAT_00294df4,10,DAT_00294df0);
}


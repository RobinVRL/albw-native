#include "ghidra_types.h"

extern int func_0043D280(int param_1,undefined1 param_2);
extern int func_0045F178(int param_1,int *param_2);

// USA 0051BB74 <- EU 0051BB4C (Ghidra, non-matching)

undefined4 func_0051BB74(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_4 == 0) {
    uVar2 = 0xd;
  }
  else if ((param_4 == 1) || (param_4 != 2)) {
    uVar2 = 0xe;
  }
  else {
    uVar2 = 0xf;
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 0x14) + 8))(param_1 + 0x14,uVar2);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0xe) = 1;
  }
  func_0045F178(iVar1,param_2);
  if (param_3 == 0) {
    *(ushort *)(param_1 + 0x33e) = *(ushort *)(param_1 + 0x33e) | 0x10;
  }
  else if (*(int *)(param_1 + 0x80) != 0) {
    return func_0043D280(*(int *)(param_1 + 0x80),1);
  }
  return 0;
}


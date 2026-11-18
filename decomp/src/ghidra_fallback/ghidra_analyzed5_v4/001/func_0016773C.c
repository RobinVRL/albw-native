#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined *DAT_001677cc;

// USA 0016773C <- EU 00167740 (Ghidra, non-matching)
// GLOBAL DAT_001677cc undefined *

void func_0016773C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (0 < param_2) {
    iVar1 = func_0010CEE0(param_2 * 0x38,(int *)0x0,4);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = func_00100118(iVar1,DAT_001677cc,0x38,param_2);
    }
    if (iVar2 != 0) {
      *(int *)(param_1 + 0xc) = iVar2;
      *(int *)(param_1 + 8) = param_2;
    }
  }
  uVar3 = 0;
  if (0 < param_2) {
    do {
      if (uVar3 < *(uint *)(param_1 + 8)) {
        iVar2 = *(int *)(param_1 + 0xc) + uVar3 * 0x38;
      }
      else {
        iVar2 = *(int *)(param_1 + 0xc);
      }
      uVar3 = uVar3 + 1;
      *(undefined4 *)(iVar2 + 0x10) = 0;
    } while ((int)uVar3 < param_2);
  }
  return;
}


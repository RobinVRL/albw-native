#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_0049FB60(int *param_1);
extern int func_0049FC24(int param_1,int *param_2);
extern int func_0057EA74(int param_1,undefined4 param_2);

// USA 00490AB8 <- EU 00490A90 (Ghidra, non-matching)

undefined4 func_00490AB8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_r6;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    func_0010C0B8(*(int *)(param_1 + 0x3c));
  }
  func_0049FB60((int *)(param_2 + 0x10));
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 != 0) {
    unaff_r6 = *(int *)(iVar1 + 0x10);
  }
  if (iVar1 != 0 && unaff_r6 != 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(unaff_r6 + 0x3c) = uVar4;
    iVar2 = *(int *)(unaff_r6 + 0x14);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x10);
    }
    if (iVar2 != 0 && iVar1 != 0) {
      func_0057EA74(iVar1,uVar4);
    }
    iVar2 = *(int *)(unaff_r6 + 0x18);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x10);
    }
    if (iVar2 != 0 && iVar1 != 0) {
      func_0057EA74(iVar1,uVar4);
    }
  }
  if (param_2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(param_2 + 0x10);
  }
  func_0049FC24(param_1 + 0x10,piVar3);
  if (*(int *)(param_1 + 0x3c) == 0) {
    return 0;
  }
  return func_0010EEE0(*(int *)(param_1 + 0x3c));
}


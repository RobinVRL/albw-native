#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_0049FCE8(int *param_1);
extern int func_0057EA74(int param_1,undefined4 param_2);

// USA 00490C30 <- EU 00490C08 (Ghidra, non-matching)

void func_00490C30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  iVar1 = *(int *)(param_1 + 0x80);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x10);
  }
  if (iVar1 != 0 && iVar2 != 0) {
    func_0057EA74(iVar2,0);
  }
  iVar1 = *(int *)(param_1 + 0x84);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x10);
  }
  if (iVar1 != 0 && iVar2 != 0) {
    func_0057EA74(iVar2,0);
  }
  *(int *)(param_1 + 0xa8) = iVar3;
  if (iVar3 != 0) {
    func_0010C0B8(iVar3);
  }
  func_0049FCE8((int *)(param_1 + 0x7c));
  if (*(int *)(param_1 + 0xa8) != 0) {
    func_0010EEE0(*(int *)(param_1 + 0xa8));
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  return;
}


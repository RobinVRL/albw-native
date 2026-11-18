#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);

// USA 004CE68C <- EU 004CE664 (Ghidra, non-matching)

void func_004CE68C(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float in_s0;
  
  if (param_2 < *(uint *)(param_1 + 0x5c)) {
    iVar1 = *(int *)(*(int *)(param_1 + 100) + param_2 * 4);
  }
  else {
    iVar1 = 0;
  }
  iVar1 = *(int *)(iVar1 + 0xa8);
  if (*(char *)(param_3 + 0x38) != '\0') {
    iVar2 = *(int *)(param_3 + 0x1c);
    if (iVar2 != 0) {
      *(undefined4 *)(param_3 + 0x1c) = 0;
      func_0010F1F8((int *)(param_3 + 0x10),in_s0);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
    }
    *(undefined1 *)(param_3 + 0x38) = 0;
  }
  iVar2 = *(int *)(param_3 + 0x1c);
  if (iVar2 != 0) {
    *(undefined4 *)(param_3 + 0x1c) = 0;
    func_0010F1F8((int *)(param_3 + 0x10),in_s0);
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
  }
  *(int **)(param_3 + 0x1c) = (int *)(iVar1 + 4);
  func_0010F1DC((int *)(iVar1 + 4),(int *)(param_3 + 0x10));
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  *(undefined1 *)(param_3 + 0x38) = 1;
  return;
}


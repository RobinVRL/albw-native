#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int DAT_0048bdb0;

// USA 0048BD40 <- EU 0048BD18 (Ghidra, non-matching)
// GLOBAL DAT_0048bdb0 int

void func_0048BD40(int param_1)

{
  int iVar1;
  int iVar2;
  float in_s0;
  
  iVar1 = DAT_0048bdb0;
  if (*(char *)(param_1 + 0x38) != '\0') {
    iVar2 = *(int *)(param_1 + 0x1c);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      func_0010F1F8((int *)(param_1 + 0x10),in_s0);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
    }
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    func_0010F1F8((int *)(param_1 + 0x10),in_s0);
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
  }
  *(int **)(param_1 + 0x1c) = (int *)(iVar1 + 4);
  func_0010F1DC((int *)(iVar1 + 4),(int *)(param_1 + 0x10));
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}


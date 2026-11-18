#include "ghidra_types.h"

extern int func_001BAAF4(int param_1,uint param_2);
extern int func_0058FA08();
extern int *DAT_004ab67c;

// USA 004AB5F8 <- EU 004AB5D0 (Ghidra, non-matching)
// GLOBAL DAT_004ab67c int *

void func_004AB5F8(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x76a0) != 0) {
    func_0058FA08(*(int *)(param_1 + 0x76a0));
    *(undefined4 *)(param_1 + 0x76a0) = 0;
    *(undefined4 *)(param_1 + 0x769c) = 0;
  }
  *(undefined4 *)(param_1 + 0x7690) = 0;
  *(undefined4 *)(param_1 + 0x768c) = 0;
  func_001BAAF4(*(int *)(param_1 + 0x40),(int)*(char *)(*DAT_004ab67c + 0x18));
  piVar2 = *(int **)(param_1 + 0x76b4);
  piVar3 = piVar2 + *(int *)(param_1 + 0x76ac);
  for (; piVar2 != piVar3; piVar2 = piVar2 + 1) {
    iVar1 = *piVar2;
    if (*(int *)(iVar1 + 8) != 0) {
      func_0058FA08(*(int *)(iVar1 + 8));
      *(undefined4 *)(iVar1 + 8) = 0;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
  }
  *(int *)(param_1 + 0x76ac) = 0;
  *(undefined1 *)(param_1 + 0x7abe) = 0;
  return;
}


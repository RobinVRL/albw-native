#include "ghidra_types.h"

extern float func_002707A4(int param_1,int param_2);
extern int func_00270954(int param_1);
extern int func_004B083C(void);
extern int func_0053F9B8(int param_1);
extern int *DAT_002701fc;
extern int *DAT_00270200;
extern undefined4 DAT_00270204;

// USA 00270114 <- EU 0027013C (Ghidra, non-matching)
// GLOBAL DAT_002701fc int *
// GLOBAL DAT_00270200 int *
// GLOBAL DAT_00270204 undefined4

void func_00270114(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  (**(code **)(**(int **)(param_1 + 0x58) + 0x28))(*(int **)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((*DAT_002701fc == 0) || (iVar2 = func_004B083C(), iVar2 == 0)) {
    if ((*(char *)(param_1 + 0x5d) != '\0') &&
       ((*DAT_00270200 != 0 && (iVar2 = func_0053F9B8(*DAT_00270200), iVar2 != 0)))) {
      func_002707A4(param_1,1);
      uVar1 = DAT_00270204;
      iVar2 = *(int *)(param_1 + 0x10);
      *(undefined4 *)(iVar2 + 0x1c) = 1;
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 0x14);
      *(undefined4 *)(iVar2 + 0x20) = uVar1;
      *(undefined4 *)(iVar2 + 0x18) = 0;
      *(undefined1 *)(iVar2 + 0x34) = 1;
    }
  }
  else {
    func_00270954(param_1);
  }
  *(undefined1 *)(param_1 + 0x5d) = 0;
  return;
}


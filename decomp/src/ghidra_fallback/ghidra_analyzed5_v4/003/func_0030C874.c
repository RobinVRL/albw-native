#include "ghidra_types.h"

extern int func_002E1B70(int *param_1);
extern int func_0030DF20(int param_1);
extern int func_00494194(int param_1);
extern int *DAT_0030c8e0;

// USA 0030C874 <- EU 0030C850 (Ghidra, non-matching)
// GLOBAL DAT_0030c8e0 int *

void func_0030C874(int param_1)

{
  int *piVar1;
  int iVar2;
  
  func_0030DF20(param_1);
  func_002E1B70((int *)(param_1 + 0x28));
  func_002E1B70((int *)(param_1 + 0x30));
  iVar2 = *DAT_0030c8e0;
  piVar1 = DAT_0030c8e0;
  if (iVar2 != 0) {
    piVar1 = *(int **)(iVar2 + 100);
  }
  if (iVar2 != 0 && piVar1 != (int *)0x0) {
    if (piVar1[5] == param_1) {
      piVar1[5] = 0;
    }
    if ((*(char *)(param_1 + 0xd9) != '\0') && (*(char *)(*(int *)(iVar2 + 100) + 0x18) == '\0')) {
      func_00494194(param_1);
      *(undefined1 *)(param_1 + 0xd9) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


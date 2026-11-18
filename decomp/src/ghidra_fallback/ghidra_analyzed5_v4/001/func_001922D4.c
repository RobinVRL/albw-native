#include "ghidra_types.h"

extern int func_00191C90(int param_1);
extern int func_004A8304(undefined4 param_1,int param_2);
extern undefined4 *DAT_00192388;
extern float DAT_0019238c;

// USA 001922D4 <- EU 001922D4 (Ghidra, non-matching)
// GLOBAL DAT_00192388 undefined4 *
// GLOBAL DAT_0019238c float

void func_001922D4(int param_1)

{
  int iVar1;
  
  func_00191C90(param_1);
  iVar1 = *(int *)(param_1 + 0x418) + -1;
  *(int *)(param_1 + 0x418) = iVar1;
  if ((iVar1 < 1) && (*(char *)(param_1 + 0x429) != '\0')) {
    func_004A8304(*DAT_00192388,*(int *)(param_1 + 0x40c));
    *(undefined1 *)(param_1 + 0x429) = 0;
  }
  if ((*(char *)(param_1 + 0x425) != '\0') &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x420) + 0x14), *(char *)(iVar1 + 0x1c) == '\0')) {
    if (*(float *)(iVar1 + 0x10) < DAT_0019238c) {
      if (DAT_0019238c < *(float *)(iVar1 + 8)) {
        return;
      }
    }
    else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) {
      return;
    }
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return;
}


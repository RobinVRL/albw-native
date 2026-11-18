#include "ghidra_types.h"

extern int func_0024FED0(int param_1);
extern int func_002500F4(int param_1);
extern int DAT_0024fe80;
extern float DAT_0024fe84;
extern int DAT_0024fe88;

// USA 0024FD74 <- EU 0024FD74 (Ghidra, non-matching)
// GLOBAL DAT_0024fe80 int
// GLOBAL DAT_0024fe84 float
// GLOBAL DAT_0024fe88 int

void func_0024FD74(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((*(char *)(param_1 + 0x48e) != '\0') &&
     (DAT_0024fe80 <= *(int *)(*(int *)(*(int *)(param_1 + 0x488) + 0x14) + 8))) {
    func_0024FED0(param_1);
  }
  if ((*(char *)(param_1 + 0x491) != '\0') && (*(char *)(param_1 + 0x490) == '\0')) {
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x488) + 0x14) + 8);
    bVar2 = DAT_0024fe88 == iVar1;
    if (DAT_0024fe88 <= iVar1) {
      bVar2 = *(char *)(param_1 + 0x48e) == '\0';
    }
    if (bVar2) {
      *(undefined1 *)(param_1 + 0x490) = 1;
    }
  }
  func_002500F4(param_1);
  iVar1 = *(int *)(*(int *)(param_1 + 0x488) + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_0024fe84) {
      if (DAT_0024fe84 < *(float *)(iVar1 + 8)) {
        return;
      }
    }
    else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) {
      return;
    }
    *(undefined1 *)(param_1 + 0x2d7) = 1;
    if (((*(char *)(param_1 + 0x48e) != '\0') &&
        (func_0024FED0(param_1), *(char *)(param_1 + 0x491) != '\0')) &&
       (*(char *)(param_1 + 0x48e) == '\0')) {
      *(undefined1 *)(param_1 + 0x490) = 1;
    }
  }
  return;
}


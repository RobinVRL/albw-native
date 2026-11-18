#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);

// USA 004BCAD8 <- EU 004BCAB0 (Ghidra, non-matching)

void func_004BCAD8(int param_1)

{
  if (*(char *)(param_1 + 0x860) != '\0') {
    *(undefined1 *)(param_1 + 0x860) = 0;
    func_004CF478(*(int *)(param_1 + 0x7a0),1);
    *(undefined1 *)(param_1 + 0x919) = 0;
    if (*(int *)(param_1 + 0x7a4) != 0) {
      func_004CF478(*(int *)(param_1 + 0x7a4),1);
    }
    if (*(int *)(param_1 + 0x78c) != 0) {
      func_00151148(*(int *)(param_1 + 0x78c),1);
    }
    if (param_1 != -0x410) {
      *(undefined1 *)(param_1 + 0x471) = 1;
    }
    if (*(int *)(param_1 + 0x86c) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x86c) + 0x44) = 1;
    }
  }
  return;
}


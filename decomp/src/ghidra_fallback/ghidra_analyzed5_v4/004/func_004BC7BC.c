#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern undefined4 DAT_004bc824;

// USA 004BC7BC <- EU 004BC794 (Ghidra, non-matching)
// GLOBAL DAT_004bc824 undefined4

void func_004BC7BC(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x860) == '\0') {
    *(undefined1 *)(param_1 + 0x860) = 1;
    func_004CF478(*(int *)(param_1 + 0x7a0),0);
    *(undefined1 *)(param_1 + 0x919) = 1;
    if (*(int *)(param_1 + 0x7a4) != 0) {
      func_004CF478(*(int *)(param_1 + 0x7a4),0);
    }
    if (*(int *)(param_1 + 0x78c) != 0) {
      func_00151148(*(int *)(param_1 + 0x78c),0);
    }
    if (param_1 != -0x410) {
      *(undefined1 *)(param_1 + 0x471) = 0;
    }
    uVar1 = DAT_004bc824;
    if (*(int *)(param_1 + 0x86c) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x86c) + 0x44) = 0;
    }
    *(undefined4 *)(param_1 + 0x3dc) = uVar1;
    *(undefined4 *)(param_1 + 0x3e0) = uVar1;
    *(undefined4 *)(param_1 + 0x3e4) = uVar1;
    *(undefined2 *)(param_1 + 0x84c) = 0;
    *(undefined2 *)(param_1 + 0x84e) = 0;
  }
  return;
}


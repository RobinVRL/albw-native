#include "ghidra_types.h"

extern int func_001080D4(int *param_1);
extern int func_0010A98C(uint param_1);
extern int func_0010C180(uint *param_1);
extern undefined1 *DAT_003dd158;

// USA 003DD098 <- EU 003DD078 (Ghidra, non-matching)
// GLOBAL DAT_003dd158 undefined1 *

void func_003DD098(int param_1)

{
  undefined1 *puVar1;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined1 *)(param_1 + 0xf) = 0;
    software_interrupt(0x24);
    if ((int)*(uint *)(param_1 + 0x18) < 0) {
      func_0010A98C(*(uint *)(param_1 + 0x18));
    }
    *(undefined1 *)(param_1 + 0x1c) = 1;
    func_0010C180((uint *)(param_1 + 0x18));
    if (*(int *)(param_1 + 0x18) != 0) {
      software_interrupt(0x23);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    *(undefined1 *)(param_1 + 0xe) = 0;
    coproc_moveto_Data_Synchronization(0);
    func_001080D4((int *)(param_1 + 0x48));
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    *(undefined1 *)(param_1 + 0xd) = 0;
    software_interrupt(0x24);
    if ((int)*(uint *)(param_1 + 0x10) < 0) {
      func_0010A98C(*(uint *)(param_1 + 0x10));
    }
    *(undefined1 *)(param_1 + 0x14) = 1;
    func_0010C180((uint *)(param_1 + 0x10));
    if (*(int *)(param_1 + 0x10) != 0) {
      software_interrupt(0x23);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    puVar1 = DAT_003dd158;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    *puVar1 = 1;
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  return;
}


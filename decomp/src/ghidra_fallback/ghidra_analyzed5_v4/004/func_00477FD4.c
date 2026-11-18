#include "ghidra_types.h"

extern int func_0066BE5C(undefined4 *param_1,char param_2);
extern int func_0066E7A0(undefined4 *param_1,char param_2);
extern int DAT_00478000;

// USA 00477FD4 <- EU 00477FAC (Ghidra, non-matching)
// GLOBAL DAT_00478000 int

void func_00477FD4(int param_1)

{
  if (5 < *(int *)(param_1 + 0xf0)) {
    if ((uint)(int)*(char *)(DAT_00478000 + param_1) < 0x14) {
      func_0066BE5C((undefined4 *)
                    (*(int *)(param_1 + 0x118 + *(char *)(DAT_00478000 + param_1) * 4) + 0x38),
                    '\x04');
      *(undefined1 *)(param_1 + 0x30a) = 0xff;
    }
    func_0066E7A0((undefined4 *)(param_1 + 0xf0),'\x05');
  }
  return;
}


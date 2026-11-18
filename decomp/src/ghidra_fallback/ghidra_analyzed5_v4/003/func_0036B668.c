// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00361658();
extern int func_0052FD7C(int param_1,undefined *param_2,undefined4 param_3);
extern int *DAT_0036b6b4;
extern int *DAT_0036b6b8;
extern undefined *DAT_0036b6bc;

// USA 0036B668 <- EU 0036B644 (Ghidra, non-matching)
// GLOBAL DAT_0036b6b4 int *
// GLOBAL DAT_0036b6b8 int *
// GLOBAL DAT_0036b6bc undefined *

void func_0036B668(int param_1)

{
  if (*(char *)(param_1 + 0xfb) != '\0') {
    if (*DAT_0036b6b4 != 0) {
      func_00361658(*DAT_0036b6b4);
    }
    *(undefined1 *)(param_1 + 0xfb) = 0;
  }
  if ((*(char *)(param_1 + 0xfc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
    func_0052FD7C(*DAT_0036b6b8 + 0x3dbbc,DAT_0036b6bc,(int)*(short *)(*(int *)(param_1 + 4) + 0x58)
                 );
    *(undefined1 *)(param_1 + 0xfc) = 0;
  }
  *(undefined4 *)(param_1 + 0xec) = 6;
  return;
}


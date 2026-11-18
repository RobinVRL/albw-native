#include "ghidra_types.h"

extern int func_00323994(undefined1 *param_1);
extern int func_00503180(int *param_1,int param_2,undefined1 *param_3,int *param_4);

// USA 001E2F24 <- EU 001E2F24 (Ghidra, non-matching)

void func_001E2F24(int param_1)

{
  int iVar1;
  undefined4 in_r3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  if (*(char *)(param_1 + 0x71f) == '\x02') {
    local_10 = in_r3;
    func_00323994((undefined1 *)&local_10);
    local_10 = CONCAT31((*(undefined4 *)((char *)&local_10 + 1) & 0xFFFFFF),1);
    iVar1 = func_00503180((int *)(param_1 + 0x434),0,(undefined1 *)&local_10,
                          *(int **)(param_1 + 0x2c0));
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x714) = param_1 + 0x40c;
    }
  }
  return;
}


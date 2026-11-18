#include "ghidra_types.h"

extern int func_00323994(undefined1 *param_1);
extern undefined4 DAT_001d1894;
extern undefined4 DAT_001d1898;

// USA 001D17EC <- EU 001D17EC (Ghidra, non-matching)
// GLOBAL DAT_001d1894 undefined4
// GLOBAL DAT_001d1898 undefined4

void func_001D17EC(int param_1)

{
  int iVar1;
  undefined4 in_r3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  if (*(char *)(param_1 + 0x63d) == '\x01') {
    local_18 = in_r3;
    if (*(char *)(param_1 + 0x63c) == '\0') {
      func_00323994((undefined1 *)&local_18);
      local_18 = CONCAT31((*(undefined4 *)((char *)&local_18 + 1) & 0xFFFFFF),1);
      iVar1 = (**(code **)(**(int **)(param_1 + 0x5e4) + 0x48))
                        (*(int **)(param_1 + 0x5e4),*(undefined4 *)(param_1 + 0x5e8),&local_18,
                         DAT_001d1898);
    }
    else {
      if (*(char *)(param_1 + 0x63c) != '\x01') {
        return;
      }
      func_00323994((undefined1 *)&local_18);
      local_18 = CONCAT31((*(undefined4 *)((char *)&local_18 + 1) & 0xFFFFFF),1);
      iVar1 = (**(code **)(**(int **)(param_1 + 0x5e4) + 0x48))
                        (*(int **)(param_1 + 0x5e4),*(undefined4 *)(param_1 + 0x5e8),&local_18,
                         DAT_001d1894);
    }
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 0x63c) = 0xff;
    }
  }
  return;
}


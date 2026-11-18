#include "ghidra_types.h"

extern int func_0058E2B8(int *param_1);
extern int func_0065D4EC(undefined4 *param_1,undefined1 param_2);
extern int DAT_00206e1c;

// USA 00206DB8 <- EU 00206DB8 (Ghidra, non-matching)
// GLOBAL DAT_00206e1c int

undefined4 func_00206DB8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  local_10 = param_4;
  if (*(int *)(param_1 + 0x4fc) != 0) {
    local_10 = *(int *)(param_1 + 1000) - *(int *)(param_1 + 0x908);
    uVar1 = func_0058E2B8(&local_10);
    if (*(uint *)(DAT_00206e1c + 4) < uVar1) {
      return 0;
    }
    *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x908);
    *(undefined4 *)(param_1 + 0x4fc) = 0;
  }
  return func_0065D4EC((undefined4 *)(param_1 + 0x8bc),2);
}


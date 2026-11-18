#include "ghidra_types.h"

extern int func_0065836C(undefined4 *param_1,undefined1 param_2);
extern uint DAT_0015b57c;
extern int DAT_0015b580;

// USA 0015B4F4 <- EU 0015B4F8 (Ghidra, non-matching)
// GLOBAL DAT_0015b57c uint
// GLOBAL DAT_0015b580 int

undefined4 func_0015B4F4(int param_1)

{
  undefined4 *puVar1;
  
  if (*(uint *)(param_1 + 0x8e0) ==
      (uint)((ulonglong)*(uint *)(param_1 + 0x8e4) * (ulonglong)DAT_0015b57c >> 0x21)) {
    *(undefined1 *)(param_1 + 0x9ae) = 1;
  }
  else if (*(uint *)(param_1 + 0x8e4) <= *(uint *)(param_1 + 0x8e0)) {
    puVar1 = (undefined4 *)(param_1 + 0x8bc);
    if (0 < *(short *)(DAT_0015b580 + param_1)) {
      if ((*(ushort *)(param_1 + 0x2e) & 0xff) == 0) {
        return func_0065836C(puVar1,7);
      }
      return func_0065836C(puVar1,8);
    }
    func_0065836C(puVar1,0x16);
  }
  return 0;
}


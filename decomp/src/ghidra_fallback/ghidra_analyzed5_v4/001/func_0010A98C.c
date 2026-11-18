#include "ghidra_types.h"

extern int func_00102550(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int DAT_0010a9f4;
extern char *DAT_0010a9f8;

// USA 0010A98C <- EU 0010A98C (Ghidra, non-matching)
// GLOBAL DAT_0010a9f4 int
// GLOBAL DAT_0010a9f8 char *

undefined4 func_0010A98C(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined8 uVar3;
  
  uVar1 = param_1 >> 0x1b;
  if ((param_1 & 0x80000000) != 0) {
    uVar1 = uVar1 - 0x20;
  }
  if ((*(byte *)(DAT_0010a9f4 + 0x14) & 1) == 0 && *DAT_0010a9f8 == '\0') {
    uVar2 = 0;
    if (uVar1 == 0xffffffff) {
      uVar3 = func_00102550(param_1,0,in_lr);
      uVar1 = (uint)((ulonglong)uVar3 >> 0x20);
      param_1 = (uint)uVar3;
      uVar2 = in_lr;
    }
                    /* WARNING: Subroutine does not return */
    func_0010C1B8(param_1,uVar1,uVar2);
  }
  if (uVar1 != 0xfffffff9 && uVar1 != 1) {
    return func_00102550(param_1,0,in_lr);
  }
  return 0;
}


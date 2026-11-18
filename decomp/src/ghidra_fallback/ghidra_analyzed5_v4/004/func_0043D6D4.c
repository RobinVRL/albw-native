#include "ghidra_types.h"

extern int func_0058D724(int param_1);
extern int func_0066C424(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0043d718;

// USA 0043D6D4 <- EU 0043D6B4 (Ghidra, non-matching)
// GLOBAL DAT_0043d718 int *

undefined4 func_0043D6D4(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint in_r2;
  
  iVar2 = func_0058D724(*DAT_0043d718);
  if (iVar2 != 0) {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 0x148);
  if (uVar3 != 0) {
    cVar1 = *(char *)(uVar3 + 0xd);
    if (cVar1 == '\0') {
      in_r2 = (uint)*(byte *)(uVar3 + 0xe);
    }
    if (cVar1 == '\0' && in_r2 == 0) {
      *(undefined1 *)(uVar3 + 0xe) = 1;
      return 0;
    }
    if (cVar1 == '\x03') {
      uVar3 = (uint)*(byte *)(uVar3 + 0xe);
    }
    if (cVar1 != '\x03' || uVar3 != 3) {
      return 0;
    }
  }
  return func_0066C424((undefined4 *)(param_1 + 0x98),0xc);
}


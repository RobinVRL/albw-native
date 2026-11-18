#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern undefined4 DAT_00462a74;

// USA 00462A34 <- EU 00462A0C (Ghidra, non-matching)
// GLOBAL DAT_00462a74 undefined4

void func_00462A34(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(param_1 + 0xe);
  if (*(char *)(param_1 + 0xd) == '\x04') {
    if (cVar1 == '\x04') {
      return;
    }
  }
  else if ((*(char *)(param_1 + 0xd) == '\0') && (cVar1 == '\0')) {
    return;
  }
  if (cVar1 != '\x04') {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 3;
    func_0012C718(param_1);
    uVar2 = DAT_00462a74;
    *(undefined4 *)(param_1 + 0x84) = DAT_00462a74;
    *(undefined4 *)(param_1 + 0x88) = uVar2;
    *(undefined4 *)(param_1 + 0x8c) = uVar2;
  }
  return;
}


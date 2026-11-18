#include "ghidra_types.h"

extern undefined4 DAT_00462ad4;

// USA 00462AA0 <- EU 00462A78 (Ghidra, non-matching)
// GLOBAL DAT_00462ad4 undefined4

undefined4 func_00462AA0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_00462ad4;
  cVar1 = *(char *)(param_1 + 0xe);
  if (*(char *)(param_1 + 0xd) == '\x01') {
    if (cVar1 == '\x01') {
      return (undefined4)param_1;
    }
  }
  else if ((*(char *)(param_1 + 0xd) == '\x03') && (cVar1 == '\x03')) {
    return (undefined4)param_1;
  }
  if (cVar1 != '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined4 *)(param_1 + 0x84) = uVar2;
    *(undefined4 *)(param_1 + 0x88) = uVar2;
    *(undefined4 *)(param_1 + 0x8c) = uVar2;
  }
  return (undefined4)param_1;
}


#include "ghidra_types.h"

extern int *DAT_0053f450;
extern uint DAT_0053f454;

// USA 0053F418 <- EU 0053F3F0 (Ghidra, non-matching)
// GLOBAL DAT_0053f450 int *
// GLOBAL DAT_0053f454 uint

byte func_0053F418(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x7f);
  if (((uVar2 == 0) || (*(int *)(*DAT_0053f450 + 0x44) != 0)) ||
     (9 < (int)(uVar2 + (uint)((ulonglong)uVar2 * (ulonglong)DAT_0053f454 >> 0x22) * -0x12))) {
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
  }
  return *(char *)(param_1 + 0x80) == '\0' & bVar1;
}


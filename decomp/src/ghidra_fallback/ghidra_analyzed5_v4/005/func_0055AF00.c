#include "ghidra_types.h"

extern int func_00426294(uint param_1);
extern int DAT_0055af34;
extern int DAT_0055af38;
extern int DAT_0055af3c;
extern int DAT_0055af40;

// USA 0055AF00 <- EU 0055AED8 (Ghidra, non-matching)
// GLOBAL DAT_0055af34 int
// GLOBAL DAT_0055af38 int
// GLOBAL DAT_0055af3c int
// GLOBAL DAT_0055af40 int

undefined4 func_0055AF00(int param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = *(char *)(param_1 + 0x2d);
  uVar2 = (uint)*(byte *)(param_1 + 0x2c);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      if (*(char *)(param_1 + 0x2f) != '\0') {
        return func_00426294((uint)*(byte *)(DAT_0055af38 + uVar2));
      }
      return func_00426294((uint)*(byte *)(DAT_0055af3c + uVar2));
    }
    if (cVar1 == '\x02') {
      return func_00426294((uint)*(byte *)(DAT_0055af40 + uVar2));
    }
  }
  return func_00426294((uint)*(byte *)(DAT_0055af34 + uVar2));
}


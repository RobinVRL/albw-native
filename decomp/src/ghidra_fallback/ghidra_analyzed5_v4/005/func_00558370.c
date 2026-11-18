#include "ghidra_types.h"

extern int *DAT_005583b8;
extern undefined4 DAT_005583bc;
extern undefined4 DAT_005583c0;
extern undefined4 DAT_005583c4;
extern float DAT_005583c8;

// USA 00558370 <- EU 00558348 (Ghidra, non-matching)
// GLOBAL DAT_005583b8 int *
// GLOBAL DAT_005583bc undefined4
// GLOBAL DAT_005583c0 undefined4
// GLOBAL DAT_005583c4 undefined4
// GLOBAL DAT_005583c8 float
// GLOBAL UNK_005583cc undefined4

float func_00558370(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(param_1 + 0x10);
  uVar2 = DAT_005583c0;
  if ((cVar1 == '\x04' || cVar1 == '\x05') || (cVar1 == '\x06' || cVar1 == '\b')) {
    if (param_2 == (undefined4 *)0x0) {
      return DAT_005583c8;
    }
  }
  else {
    if (param_2 == (undefined4 *)0x0) {
      return DAT_005583c8;
    }
    if (*(char *)(*DAT_005583b8 + 0x18) == '\a' || *(char *)(*DAT_005583b8 + 0x18) == '%') {
      uVar2 = DAT_005583c4;
    }
  }
  *param_2 = uVar2;
  return DAT_005583c8;
}


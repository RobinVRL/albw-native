#include "ghidra_types.h"

extern int func_00584B94(int param_1,int param_2);
extern int *DAT_00584490;
extern int DAT_00584494;
extern int *DAT_00584498;

// USA 00584488 <- EU 00584460 (Ghidra, non-matching)
// GLOBAL DAT_00584490 int *
// GLOBAL DAT_00584494 int
// GLOBAL DAT_00584498 int *

bool func_00584488(void)

{
  bool bVar1;
  
  if (*(char *)(*DAT_00584490 + 0x18) != '\a' && *(char *)(*DAT_00584490 + 0x18) != '%') {
    bVar1 = func_00584B94(*DAT_00584498,DAT_00584494);
    return bVar1;
  }
  return true;
}


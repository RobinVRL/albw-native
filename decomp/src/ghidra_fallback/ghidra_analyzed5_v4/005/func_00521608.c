#include "ghidra_types.h"

extern int func_00584B94(int param_1,int param_2);
extern int *DAT_00521624;
extern int DAT_00521628;

// USA 00521608 <- EU 005215E0 (Ghidra, non-matching)
// GLOBAL DAT_00521624 int *
// GLOBAL DAT_00521628 int

undefined4 func_00521608(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  if (((*(char *)(*(int *)(param_1 + 0x518) + 0x8e0) == '\0') && (*DAT_00521624 != 0)) &&
     (bVar1 = func_00584B94(*DAT_00521624,DAT_00521628), bVar1)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


#include "ghidra_types.h"

extern int func_00584B94(int param_1,int param_2);
extern int *DAT_005843b8;
extern int DAT_005843bc;
extern int *DAT_005843c0;
extern int DAT_005843c4;

// USA 00584368 <- EU 00584340 (Ghidra, non-matching)
// GLOBAL DAT_005843b8 int *
// GLOBAL DAT_005843bc int
// GLOBAL DAT_005843c0 int *
// GLOBAL DAT_005843c4 int

int func_00584368(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((*(char *)(*DAT_005843b8 + 0x18) != '\a' && *(char *)(*DAT_005843b8 + 0x18) != '%') &&
     (bVar1 = func_00584B94(*DAT_005843c0,DAT_005843bc), !bVar1)) {
    return 0;
  }
  iVar2 = (int)((ulonglong)
                ((longlong)DAT_005843c4 *
                (longlong)(*(int *)(param_1 + 0x57c) + *(int *)(param_1 + 0x580))) >> 0x20);
  iVar2 = (iVar2 - (iVar2 >> 0x1f)) + 3;
  if (iVar2 < 3) {
    iVar2 = 3;
  }
  else if (0x14 < iVar2) {
    iVar2 = 0x14;
  }
  return iVar2;
}


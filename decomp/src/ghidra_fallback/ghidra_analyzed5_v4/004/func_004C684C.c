#include "ghidra_types.h"

extern int func_001522C0(int param_1,undefined4 param_2,int param_3);
extern int func_005215DC(int param_1);
extern int *DAT_004c68c4;

// USA 004C684C <- EU 004C6824 (Ghidra, non-matching)
// GLOBAL DAT_004c68c4 int *

undefined4 func_004C684C(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x5a4) == '\x01') {
    iVar2 = param_3;
    if (*(char *)(param_1 + 0x59c) != '\0') {
      iVar1 = func_005215DC(*(int *)(param_1 + 0x518));
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined1 *)(param_1 + 0x59c) = 0;
    }
    if (((*(char *)(param_1 + 0x59d) == '\0') &&
        (iVar1 = func_005215DC(*(int *)(param_1 + 0x518)), iVar1 != 0)) &&
       (*(int *)(*DAT_004c68c4 + 0x10) == 0)) {
      func_001522C0(*(int *)(param_1 + 0x518),param_2,iVar2);
      *(int *)(param_1 + 0x5a8) = param_3;
      *(undefined1 *)(param_1 + 0x5a4) = 2;
      return 1;
    }
  }
  return 0;
}


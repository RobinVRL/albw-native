#include "ghidra_types.h"

extern int func_00165E28(int param_1,undefined2 param_2);
extern int func_0036C2B8(undefined4 param_1,undefined4 param_2);
extern int func_00665670(undefined4 *param_1,undefined1 param_2);
extern undefined4 *DAT_0032b9b4;
extern int *DAT_0032b9b8;

// USA 0032B90C <- EU 0032B8E8 (Ghidra, non-matching)
// GLOBAL DAT_0032b9b4 undefined4 *
// GLOBAL DAT_0032b9b8 int *

undefined4 func_0032B90C(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0xba8) == 1) {
    func_0036C2B8(param_1 + 0xaa0,*DAT_0032b9b4);
  }
  if (*(char *)(param_1 + 0x8f8) != '\x02' && *(char *)(param_1 + 0x8f8) != '\x03') {
    if (*(char *)(param_1 + 0x9d0) == '\x02' || *(char *)(param_1 + 0x9d0) == '\x03') {
      return 0;
    }
    if ((*(int *)(*DAT_0032b9b8 + 0x44) != 0) &&
       (*(int *)(*DAT_0032b9b8 + 0x44) == *(int *)(param_1 + 0xa9c))) {
      if ((*(char *)(param_1 + 0xc96) != '\0') &&
         (uVar2 = *(int *)(param_1 + 0xc60) + 1, *(uint *)(param_1 + 0xc60) = uVar2, uVar2 < 0x96))
      {
        return 0;
      }
      iVar1 = func_00165E28(*(int *)(param_1 + 0xa9c),0x1e);
      if (iVar1 == 0) {
        *(char *)(param_1 + 0xc90) = *(char *)(param_1 + 0xc90) + -1;
        return 0;
      }
      *(undefined1 *)(param_1 + 0xc94) = 1;
    }
    *(undefined1 *)(param_1 + 0xc90) = 0x11;
    return func_00665670((undefined4 *)(param_1 + 0xba8),6);
  }
  return 0;
}


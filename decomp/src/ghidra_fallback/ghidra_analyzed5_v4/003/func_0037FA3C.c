#include "ghidra_types.h"

extern int func_00588BE4(int param_1);
extern int func_006678C0(undefined4 *param_1,undefined1 param_2);
extern int DAT_0037fab4;
extern int *DAT_0037fab8;

// USA 0037FA3C <- EU 0037FA18 (Ghidra, non-matching)
// GLOBAL DAT_0037fab4 int
// GLOBAL DAT_0037fab8 int *

undefined4 func_0037FA3C(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    puVar2 = (undefined4 *)(param_1 + 0xa48);
    if (0 < *(short *)(DAT_0037fab4 + param_1)) {
      iVar1 = func_00588BE4(param_1);
      if (iVar1 == *DAT_0037fab8) {
        return func_006678C0(puVar2,6);
      }
      if (*(uint *)(param_1 + 0xaf8) <= *(uint *)(param_1 + 0xaf4)) {
        return func_006678C0(puVar2,8);
      }
      return func_006678C0(puVar2,7);
    }
    func_006678C0(puVar2,10);
  }
  return 0;
}


#include "ghidra_types.h"

extern int func_006568D8(undefined4 *param_1,undefined1 param_2);
extern int DAT_00127f44;

// USA 00127EB8 <- EU 00127EB8 (Ghidra, non-matching)
// GLOBAL DAT_00127f44 int

undefined4 func_00127EB8(int param_1)

{
  undefined4 *puVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    puVar1 = (undefined4 *)(param_1 + 0x8bc);
    if (0 < *(short *)(DAT_00127f44 + param_1)) {
      if (*(char *)(param_1 + 0x90c) != '\0') {
        return func_006568D8(puVar1,7);
      }
      if (*(char *)(*(int *)(param_1 + 0x510) + 5) != '\x06') {
        return func_006568D8(puVar1,5);
      }
      *(undefined1 *)(param_1 + 0x920) = 1;
      return func_006568D8(puVar1,2);
    }
    func_006568D8(puVar1,4);
  }
  return 0;
}


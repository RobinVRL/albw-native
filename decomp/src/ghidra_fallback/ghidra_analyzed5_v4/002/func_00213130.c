#include "ghidra_types.h"

extern int func_0065D8B8(undefined4 *param_1,undefined1 param_2);
extern int DAT_00213198;

// USA 00213130 <- EU 00213130 (Ghidra, non-matching)
// GLOBAL DAT_00213198 int

undefined4 func_00213130(int param_1)

{
  undefined4 *puVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    puVar1 = (undefined4 *)(param_1 + 0x8bc);
    if (0 < *(short *)(DAT_00213198 + param_1)) {
      if (2 < *(int *)(param_1 + 0x910)) {
        return func_0065D8B8(puVar1,7);
      }
      return func_0065D8B8(puVar1,4);
    }
    func_0065D8B8(puVar1,9);
  }
  return 0;
}


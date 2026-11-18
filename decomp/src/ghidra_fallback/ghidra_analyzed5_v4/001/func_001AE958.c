#include "ghidra_types.h"

extern int func_0065AD50(undefined4 *param_1,undefined1 param_2);

// USA 001AE958 <- EU 001AE958 (Ghidra, non-matching)

undefined4 func_001AE958(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x90c);
  if (*(char *)(param_1 + 0x908) != '\0') {
    return func_0065AD50(puVar2,9);
  }
  bVar1 = *(byte *)(*(int *)(param_1 + 0x510) + 5);
  if (bVar1 != 0x16) {
    if (bVar1 < 0x17) {
      if (bVar1 != 0 && bVar1 != 0x15) {
LAB_001ae9a0:
        *(undefined1 *)(param_1 + 0x908) = 1;
        func_0065AD50(puVar2,9);
        *(undefined4 *)(param_1 + 0x9d4) = 0;
        return 0;
      }
    }
    else if (bVar1 != 0x17 && bVar1 != 0x18) goto LAB_001ae9a0;
  }
  return func_0065AD50(puVar2,2);
}


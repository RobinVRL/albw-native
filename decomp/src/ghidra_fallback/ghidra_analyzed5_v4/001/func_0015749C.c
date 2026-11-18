#include "ghidra_types.h"

extern int func_00657FA0(undefined4 *param_1,undefined1 param_2);
extern int DAT_00157534;

// USA 0015749C <- EU 001574A0 (Ghidra, non-matching)
// GLOBAL DAT_00157534 int

undefined4 func_0015749C(int param_1)

{
  undefined4 *puVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    puVar1 = (undefined4 *)(param_1 + 0x8bc);
    if (0 < *(short *)(DAT_00157534 + param_1)) {
      if (*(char *)(*(int *)(param_1 + 0x510) + 5) == '\x03') {
        if (*(byte *)(param_1 + 0x8c1) == 5) {
          return func_00657FA0(puVar1,6);
        }
        if (*(byte *)(param_1 + 0x8c1) < 2) {
          return func_00657FA0(puVar1,1);
        }
      }
      return func_00657FA0(puVar1,3);
    }
    func_00657FA0(puVar1,10);
  }
  return 0;
}


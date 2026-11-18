#include "ghidra_types.h"

extern int func_003931EC(undefined4 *param_1,uint param_2);
extern int func_00660AE4(int param_1,undefined4 param_2);
extern int func_00660B50(int param_1);
extern int DAT_00655944;

// USA 006558F8 <- EU 006558D0 (Ghidra, non-matching)
// GLOBAL DAT_00655944 int

undefined4 func_006558F8(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    if (0 < *(short *)(DAT_00655944 + param_1)) {
      func_00660AE4(param_1 + 0x8f0,0);
      func_003931EC((undefined4 *)(param_1 + 0x8f0),0);
      return func_00660B50(param_1 + 0x8f0);
    }
    func_00660AE4(param_1 + 0x8f0,9);
    func_003931EC((undefined4 *)(param_1 + 0x8f0),9);
    func_00660B50(param_1 + 0x8f0);
  }
  return 0;
}


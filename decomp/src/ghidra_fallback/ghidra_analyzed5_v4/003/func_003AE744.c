#include "ghidra_types.h"

extern int func_00102E08(undefined4 param_1);
extern int func_0025D598(int param_1);
extern int func_002DF44C(int param_1,int param_2);
extern int *DAT_003ae79c;

// USA 003AE744 <- EU 003AE720 (Ghidra, non-matching)
// GLOBAL DAT_003ae79c int *

undefined4 func_003AE744(int param_1)

{
  if (*(char *)(param_1 + 0x10c) == '\x01') {
    *(undefined1 *)(param_1 + 0x10c) = 2;
    if (*(int *)(param_1 + 0x88) == 1) {
      func_00102E08(0x1e);
    }
    (**(code **)**(undefined4 **)(param_1 + 0x108))
              (*(undefined4 **)(param_1 + 0x108),param_1 + 0xcc);
    if (*(int *)(param_1 + 0x88) == 1) {
      func_00102E08(0x14);
    }
    *(undefined1 *)(param_1 + 0x10c) = 0;
    func_002DF44C(*DAT_003ae79c,param_1);
    *(undefined1 *)(param_1 + 0x8f) = 1;
  }
  return func_0025D598(param_1);
}


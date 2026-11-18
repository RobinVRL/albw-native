#include "ghidra_types.h"

extern int func_00622780(int param_1,int param_2,undefined1 param_3);

// USA 002CBCE4 <- EU 002CBCC0 (Ghidra, non-matching)

undefined4 func_002CBCE4(int *param_1,int param_2)

{
  if (param_2 == 0) {
    if (*(char *)((int)param_1 + 0x9d1) == '\0') {
      if ((char)param_1[0x259] == '\x06') {
        return 0;
      }
      func_00622780((int)param_1,6,0);
      return 0;
    }
    *(undefined1 *)((int)param_1 + 0x9d1) = 0;
  }
  else if (param_2 == 1) {
    *(undefined1 *)((int)param_1 + 0x853) = 3;
    (**(code **)(*param_1 + 0xac))(param_1,3,0xffffffff);
    param_1[0x261] = 9;
    func_00622780((int)param_1,9,0);
  }
  return 1;
}


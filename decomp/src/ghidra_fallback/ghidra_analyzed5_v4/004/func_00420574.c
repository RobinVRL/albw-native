#include "ghidra_types.h"

extern int func_004205A4(int *param_1,int param_2,int param_3);

// USA 00420574 <- EU 00420554 (Ghidra, non-matching)

void func_00420574(int *param_1,int param_2,int param_3)

{
  if ((char)param_1[10] == '\0') {
    func_004205A4(param_1,param_2,param_3);
    *(undefined1 *)(param_1 + 10) = 1;
    *(undefined1 *)((int)param_1 + 0x29) = 0;
  }
  return;
}


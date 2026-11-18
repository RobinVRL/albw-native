#include "ghidra_types.h"

extern int func_0041CA24(int param_1,int param_2);
extern int func_0041D1FC(int param_1);

// USA 00417614 <- EU 004175F4 (Ghidra, non-matching)

void func_00417614(int param_1)

{
  int unaff_r4;
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 5) != '\0';
  if (bVar1) {
    unaff_r4 = *(int *)(param_1 + 0x130);
  }
  if (bVar1 && unaff_r4 != 0) {
    do {
      if (0 < *(int *)(unaff_r4 + 0x18c)) {
        *(int *)(unaff_r4 + 0x18c) = *(int *)(unaff_r4 + 0x18c) + -1;
      }
      if (((*(int *)(unaff_r4 + 0x18c) == 0) && (*(char *)(unaff_r4 + 0x90) != '\x04')) &&
         (*(char *)(param_1 + 0x82) == '\0')) {
        func_0041D1FC(unaff_r4);
      }
      if (*(char *)(unaff_r4 + 0x133) == '\0') {
        func_0041CA24(unaff_r4,1);
      }
      unaff_r4 = *(int *)(unaff_r4 + 0x1a4);
    } while (unaff_r4 != 0);
  }
  return;
}


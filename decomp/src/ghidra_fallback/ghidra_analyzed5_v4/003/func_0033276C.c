#include "ghidra_types.h"

extern int func_001E4044(int param_1,undefined2 param_2);
extern int func_00332AB8(int param_1);

// USA 0033276C <- EU 00332748 (Ghidra, non-matching)

void func_0033276C(int param_1)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0x514) == '\0') {
    return;
  }
  func_00332AB8(param_1);
  if (*(char *)(param_1 + 0x494) == '\0') {
    if (*(char *)(param_1 + 0x519) == '\0') {
      bVar1 = func_001E4044(param_1,0x14);
      if (!bVar1) {
        return;
      }
      goto LAB_0033278c;
    }
    bVar1 = func_001E4044(param_1,0x5a);
  }
  else {
    bVar1 = func_001E4044(param_1,0x28);
  }
  if (!bVar1) {
    return;
  }
LAB_0033278c:
  *(undefined1 *)(param_1 + 0x514) = 0;
  return;
}


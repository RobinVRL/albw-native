#include "ghidra_types.h"

extern int func_004A9120(undefined4 param_1,int param_2);
extern int func_004A9948(int param_1,int param_2,uint param_3);
extern int *DAT_0038c2c0;

// USA 0038C284 <- EU 0038C260 (Ghidra, non-matching)
// GLOBAL DAT_0038c2c0 int *

void func_0038C284(int param_1,int param_2)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x140) == '\0') {
      return;
    }
    func_004A9120(*DAT_0038c2c0,param_1 + 0xcc);
    uVar1 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x140) != '\0') {
      return;
    }
    func_004A9948(*DAT_0038c2c0,param_1 + 0xcc,0xc);
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x140) = uVar1;
  return;
}


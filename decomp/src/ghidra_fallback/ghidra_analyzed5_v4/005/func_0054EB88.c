#include "ghidra_types.h"

extern int func_005238E4(int param_1,uint param_2);
extern int *DAT_0054ebb4;

// USA 0054EB88 <- EU 0054EB60 (Ghidra, non-matching)
// GLOBAL DAT_0054ebb4 int *

undefined4 func_0054EB88(int param_1,int *param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  
  if (*(char *)(param_1 + 0x475) == '\0') {
    if (*(char *)(param_1 + 0x476) == '\x01') {
      puVar2 = func_005238E4(*DAT_0054ebb4,(int)*(short *)(param_1 + 0x2c));
    }
    else {
      puVar2 = (uint *)(int)*(short *)(param_1 + 0x2c);
    }
    *param_2 = (int)puVar2;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


#include "ghidra_types.h"

extern int func_004F4A68();
extern int DAT_0032c704;

// USA 0032C6E8 <- EU 0032C6C4 (Ghidra, non-matching)
// GLOBAL DAT_0032c704 int

undefined4 func_0032C6E8(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(DAT_0032c704 + param_1);
  if (*(int *)(param_1 + 0x59c) << 0x18 < 0) {
    if ((cVar1 == '\x10' || cVar1 == '\x11') || cVar1 == '\x12') {
      return 0;
    }
  }
  else if (cVar1 != '\r') {
    return 0;
  }
  uVar2 = func_004F4A68(param_1,param_2);
  return uVar2;
}


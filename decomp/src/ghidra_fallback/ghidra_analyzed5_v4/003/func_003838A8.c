#include "ghidra_types.h"

extern int func_003840A0(int param_1,int param_2);
extern int func_003A2C34(uint param_1,undefined4 param_2);
extern int func_00543104(int param_1);

// USA 003838A8 <- EU 00383884 (Ghidra, non-matching)

int func_003838A8(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  
  if (param_2 == 0) {
    param_2 = 4;
    bVar1 = func_00543104(*(int *)(param_1 + 0x10));
    if ((bVar1) && (bVar1 = func_003840A0(param_1,0x50), !bVar1)) {
      param_2 = 0x4f;
    }
  }
  else if (param_2 == 1) {
    param_2 = 4;
  }
  else if (*(char *)(*(int *)(*(int *)(param_1 + 0x10) + 0x8bc) + 10) == '\0') {
    cVar2 = func_003A2C34(*(int *)(param_1 + 0x10) + 0xbc8,0xe);
    if (cVar2 != '\0') {
      if (param_2 == 7) {
        param_2 = 9;
      }
      else if (param_2 == 10) {
        param_2 = 0xc;
      }
    }
  }
  else if (param_2 == 0x18) {
    param_2 = 0x19;
  }
  else if (param_2 < 0x19) {
    if (param_2 == 0) {
      param_2 = 1;
    }
    else if (param_2 == 7) {
      param_2 = 8;
    }
    else if (param_2 == 10) {
      param_2 = 0xb;
    }
    else if (param_2 == 0x16) {
      param_2 = 0x17;
    }
  }
  else if (param_2 == 0x1a) {
    param_2 = 0x1b;
  }
  else if (param_2 == 0x1c) {
    param_2 = 0x1d;
  }
  else if (param_2 == 0x1e) {
    param_2 = 0x1f;
  }
  else if (param_2 == 0x20) {
    param_2 = 0x21;
  }
  return param_2;
}


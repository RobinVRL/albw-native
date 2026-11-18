#include "ghidra_types.h"

extern int func_00537C00(int param_1,uint param_2);
extern int *DAT_0031b9a0;

// USA 0031B7D0 <- EU 0031B7AC (Ghidra, non-matching)
// GLOBAL DAT_0031b9a0 int *

undefined4 func_0031B7D0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 - 0x12U < 5) {
    uVar1 = func_00537C00(*DAT_0031b9a0,param_1 - 0x12U);
    switch(uVar1) {
    case 0:
      return 0x12;
    case 1:
      return 0x13;
    case 2:
      return 0x14;
    case 3:
      return 0x16;
    case 4:
      return 0x15;
    case 5:
      return 0x17;
    case 6:
      return 0x18;
    case 7:
      return 0x19;
    case 8:
      return 0x1a;
    case 9:
      return 0x1b;
    case 10:
      return 0x1c;
    case 0xb:
      return 0x1f;
    case 0xc:
      return 0x1d;
    case 0xd:
      return 0x1e;
    }
  }
  else {
    switch(param_1) {
    case 0:
      return 0;
    case 1:
      return 1;
    case 2:
      return 3;
    case 3:
      return 4;
    case 4:
      return 7;
    case 5:
      return 8;
    case 6:
      return 5;
    case 7:
      return 0xb;
    case 8:
      return 9;
    case 9:
      return 10;
    case 10:
      return 0xc;
    case 0xb:
      return 6;
    case 0xc:
      return 0xd;
    case 0xd:
      return 0xe;
    case 0xe:
      return 0xf;
    case 0x10:
      return 0x10;
    case 0x11:
      return 0x11;
    case 0x1f:
      return 2;
    }
  }
  return 0x20;
}


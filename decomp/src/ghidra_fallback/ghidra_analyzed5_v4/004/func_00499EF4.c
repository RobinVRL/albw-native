#include "ghidra_types.h"

extern int func_00490A18(int param_1,int param_2);
extern int func_00490AB8(int param_1,int param_2);

// USA 00499EF4 <- EU 00499ECC (Ghidra, non-matching)

undefined4 func_00499EF4(int param_1,undefined4 param_2,int param_3)

{
  switch(param_2) {
  case 0:
    return func_00490A18(param_1 + 0x70,param_3);
  case 1:
    return func_00490A18(param_1 + 0xc0,param_3);
  case 2:
    if (*(char *)(param_1 + 0x390) == '\0') {
      return func_00490AB8(param_1 + 0x160,param_3);
    }
    if (*(char *)(param_1 + 0x390) == '\x01') {
      return func_00490AB8(param_1 + 0x2a0,param_3);
    }
    break;
  case 3:
    if (*(char *)(param_1 + 0x391) == '\0') {
      return func_00490AB8(param_1 + 0x1b0,param_3);
    }
    if (*(char *)(param_1 + 0x391) == '\x01') {
      return func_00490AB8(param_1 + 0x2f0,param_3);
    }
    break;
  case 4:
    if (*(char *)(param_1 + 0x391) == '\0') {
      return func_00490AB8(param_1 + 0x200,param_3);
    }
    if (*(char *)(param_1 + 0x391) == '\x01') {
      return func_00490AB8(param_1 + 0x340,param_3);
    }
    break;
  case 5:
    return func_00490A18(param_1 + 0x160,param_3);
  case 6:
    return func_00490A18(param_1 + 0x1b0,param_3);
  case 7:
    return func_00490A18(param_1 + 0x200,param_3);
  case 8:
    return func_00490A18(param_1 + 0x2a0,param_3);
  case 9:
    return func_00490A18(param_1 + 0x2f0,param_3);
  case 10:
    return func_00490A18(param_1 + 0x340,param_3);
  }
  return 0;
}


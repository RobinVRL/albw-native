#include "ghidra_types.h"

extern int func_00656F2C(undefined4 *param_1,undefined1 param_2);

// USA 001368FC <- EU 001368FC (Ghidra, non-matching)

undefined4 func_001368FC(int param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  if (*(int *)(param_2 + 0x2c) != 0) {
    cVar1 = *(char *)(*(int *)(param_2 + 0x2c) + 1);
    if (cVar1 == '\x05') {
      if (*(uint *)(param_2 + 0x30) >> 0x1c == 1) {
        return 0;
      }
      uVar2 = 2;
    }
    else {
      if (cVar1 < '\x05') {
        if (cVar1 != '\x01' && cVar1 != '\x03') {
          return 0;
        }
      }
      else if (cVar1 != '\r' && cVar1 != '\x0f') {
        return 0;
      }
      uVar2 = 3;
    }
    func_00656F2C((undefined4 *)(param_1 + 0x40c),uVar2);
  }
  return 0;
}


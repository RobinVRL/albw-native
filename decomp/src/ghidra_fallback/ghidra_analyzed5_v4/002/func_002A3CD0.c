#include "ghidra_types.h"

extern int func_002A27C4(int param_1,int param_2);
extern int func_002A40E8(int param_1);
extern int func_002A6B54(int param_1);
extern int func_00662128(undefined4 *param_1,undefined1 param_2);

// USA 002A3CD0 <- EU 002A3CAC (Ghidra, non-matching)

undefined4 func_002A3CD0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  
  func_002A27C4(param_1,1);
  func_002A6B54(param_1);
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    uVar3 = 0;
    if (*(char *)(param_1 + 0xb96) == '\0') {
      *(undefined2 *)(*(int *)(param_1 + 0xa28) + 0x28) = 0xa7;
    }
    uVar1 = func_002A40E8(param_1);
    if (uVar1 <= *(byte *)(param_1 + 0xb92)) {
      if (*(uint *)(param_1 + 0xb58) <= *(uint *)(param_1 + 0xb54)) {
        *(undefined1 *)(param_1 + 0xb98) = uVar3;
        *(undefined1 *)(param_1 + 0xb91) = uVar3;
        return func_00662128((undefined4 *)(param_1 + 0x9e0),4);
      }
      return func_00662128((undefined4 *)(param_1 + 0x9e0),0x11);
    }
    uVar2 = func_002A40E8(param_1);
    *(char *)(param_1 + 0xb92) = (char)uVar2;
    func_00662128((undefined4 *)(param_1 + 0x9e0),5);
    *(undefined1 *)(param_1 + 0xb94) = 1;
  }
  return 0;
}


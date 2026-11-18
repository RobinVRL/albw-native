#include "ghidra_types.h"

extern int func_002B1FB4(int param_1,int param_2,ushort param_3);
extern int func_0065AF54(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_001b0dec;
extern undefined4 DAT_001b0df0;

// USA 001B0D2C <- EU 001B0D2C [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_001b0dec undefined4
// GLOBAL DAT_001b0df0 undefined4

undefined4 func_001B0D2C(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  func_002B1FB4(param_1,0,(ushort)DAT_001b0dec);
  puVar2 = (undefined4 *)(param_1 + 0x90c);
  uVar4 = (uint)*(byte *)(*(int *)(param_1 + 0x510) + 5);
  if (*(char *)(param_1 + 0x908) != '\0') {
    uVar3 = func_0065AF54(puVar2,9);
    uVar1 = DAT_001b0df0;
    bVar5 = 0x1d < uVar4;
    if (uVar4 != 0x1e) {
      uVar3 = uVar4 - 0xe;
      bVar5 = 2 < uVar3;
    }
    if ((!bVar5 || (uVar4 == 0x1e || uVar3 == 3)) || (uVar4 == 3)) {
      *(undefined4 *)(param_1 + 0x3dc) = DAT_001b0df0;
      *(undefined4 *)(param_1 + 0x3e0) = uVar1;
      *(undefined4 *)(param_1 + 0x3e4) = uVar1;
      *(undefined4 *)(param_1 + 0x8e4) = uVar1;
      *(undefined4 *)(param_1 + 0x97c) = 0x14;
    }
    return 0;
  }
  if (uVar4 != 0x16) {
    if (uVar4 < 0x17) {
      if (uVar4 != 0 && uVar4 != 0x15) {
LAB_001b0db8:
        *(undefined1 *)(param_1 + 0x908) = 1;
        func_0065AF54(puVar2,9);
        *(undefined4 *)(param_1 + 0xa1c) = 0x1e;
        return 0;
      }
    }
    else if (uVar4 != 0x17 && uVar4 != 0x18) goto LAB_001b0db8;
  }
  return func_0065AF54(puVar2,2);
}


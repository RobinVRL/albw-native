#include "ghidra_types.h"

extern undefined8 func_002A405C(int param_1);
extern int func_004F8254();
extern int func_00662128(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_002a5790;

// USA 002A56D0 <- EU 002A56AC (Ghidra, non-matching)
// GLOBAL DAT_002a5790 undefined4

bool func_002A56D0(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 uVar4;
  
  uVar2 = DAT_002a5790;
  *(undefined2 *)(*(int *)(param_1 + 0x430) + 0x28) = 0xa0;
  if (*(int *)(param_1 + 0xb28) == 0x3f800000) {
    if (*(int *)(param_2 + 0x2c) != 0) {
      cVar1 = *(char *)(*(int *)(param_2 + 0x2c) + 1);
      if ((cVar1 == '\n' || cVar1 == '\t') ||
         ((*(byte *)(param_1 + 0xb92) < 3 && (cVar1 == '\x06')))) goto LAB_002a5780;
      uVar4 = func_002A405C(param_1);
      if ((int)uVar4 != 0) {
        *(short *)(*(int *)(param_1 + 0x430) + 0x28) = (short)uVar2;
        *(undefined1 *)(param_1 + 0xb98) = 1;
        *(undefined1 *)(param_1 + 0xb91) = 0;
        func_00662128((undefined4 *)(param_1 + 0x9e0),4);
        return false;
      }
    }
    *(undefined2 *)(*(int *)(param_1 + 0x430) + 0x28) = 0;
  }
  else if (*(byte *)(param_1 + 0xb92) < 3) {
    *(short *)(*(int *)(param_1 + 0x430) + 0x28) = (short)uVar2;
    *(undefined4 *)(param_1 + 0xb28) = *(undefined4 *)(param_1 + 0xb2c);
    return false;
  }
LAB_002a5780:
  bVar3 = func_004F8254(param_1,param_2);
  return bVar3;
}


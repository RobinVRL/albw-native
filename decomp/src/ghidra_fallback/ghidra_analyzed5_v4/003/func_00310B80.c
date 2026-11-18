#include "ghidra_types.h"

extern int func_00193988(undefined4 *param_1,undefined4 param_2);
extern int func_0054B9D8(void);
extern int func_00625B9C(int param_1);
extern int DAT_00310be0;

// USA 00310B80 <- EU 00310B5C (Ghidra, non-matching)
// GLOBAL DAT_00310be0 int

undefined4 func_00310B80(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x960) != 0x78) {
    return 0;
  }
  iVar1 = func_0054B9D8();
  iVar1 = (int)((ulonglong)((longlong)DAT_00310be0 * (longlong)iVar1) >> 0x20);
  uVar2 = ((iVar1 >> 2) - (iVar1 >> 0x1f)) - 1;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (9 < (int)uVar2) {
    uVar2 = 9;
  }
  puVar3 = (undefined4 *)(param_1 + 0xa04);
  if (uVar2 < 10) {
    puVar3 = (undefined4 *)(param_1 + 0xa04 + uVar2 * 0xc);
  }
  func_00193988(puVar3,*(undefined4 *)(param_1 + 0x2cc));
  *(undefined1 *)(param_1 + 0xad4) = 1;
  return func_00625B9C(param_1);
}


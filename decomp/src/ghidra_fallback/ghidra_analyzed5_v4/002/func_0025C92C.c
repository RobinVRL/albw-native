#include "ghidra_types.h"

extern int func_0010AC24(undefined4 param_1,undefined4 param_2);
extern int func_002DF44C(int param_1,int param_2);
extern int func_003C7C28(int param_1);
extern int *DAT_0025c9e8;
extern int *DAT_0025c9ec;
extern int *DAT_0025c9f0;

// USA 0025C92C <- EU 0025C954 (Ghidra, non-matching)
// GLOBAL DAT_0025c9e8 int *
// GLOBAL DAT_0025c9ec int *
// GLOBAL DAT_0025c9f0 int *

void func_0025C92C(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *DAT_0025c9e8;
  uVar1 = func_003C7C28(*DAT_0025c9ec);
  if ((uVar1 & 0x80000000) == 0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  else if (((((uVar1 & 0x3fc00) != 0x4400) || ((uVar1 & 0x3ff) < 100)) || (0xb3 < (uVar1 & 0x3ff)))
          && ((int)uVar1 < 0)) {
    func_0010AC24(uVar1,0x25c9b8);
  }
  if (param_2 == 0) {
    uVar2 = 10;
  }
  else {
    uVar2 = 6;
  }
  *(undefined4 *)(iVar3 + 0x9c0) = uVar2;
  func_002DF44C(*DAT_0025c9f0,param_1);
  *(undefined1 *)(param_1 + 0x8f) = 1;
  return;
}


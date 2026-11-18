#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int DAT_00315724;
extern undefined4 DAT_00315728;
extern undefined4 DAT_0031572c;
extern undefined4 DAT_00315730;
extern undefined4 DAT_00315734;
extern undefined4 DAT_00315738;

// USA 003156A4 <- EU 00315680 (Ghidra, non-matching)
// GLOBAL DAT_00315724 int
// GLOBAL DAT_00315728 undefined4
// GLOBAL DAT_0031572c undefined4
// GLOBAL DAT_00315730 undefined4
// GLOBAL DAT_00315734 undefined4
// GLOBAL DAT_00315738 undefined4

undefined4 func_003156A4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_00315734;
  uVar2 = DAT_00315728;
  if (*(char *)(param_1 + 0x500) == '\0') {
    *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(DAT_00315724 + 4);
    *(undefined4 *)(param_1 + 0x478) = uVar1;
    *(undefined4 *)(param_1 + 0x47c) = uVar1;
    uVar2 = DAT_00315738;
    *(undefined4 *)(param_1 + 0x48c) = 0x23;
  }
  else {
    *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(DAT_00315724 + 8);
    *(undefined4 *)(param_1 + 0x478) = uVar2;
    *(undefined4 *)(param_1 + 0x47c) = uVar2;
    uVar2 = DAT_0031572c;
    *(undefined4 *)(param_1 + 0x48c) = 0x19;
  }
  *(undefined4 *)(param_1 + 0x490) = uVar2;
  *(undefined4 *)(param_1 + 0x488) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x434) + 0x58) = DAT_00315730;
  func_004CF478(*(int *)(param_1 + 0x420),1);
  return func_00151148(*(int *)(param_1 + 0x438),1);
}


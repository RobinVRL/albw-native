#include "ghidra_types.h"

extern int func_00588BE4(int param_1);
extern undefined4 *DAT_0030b190;
extern undefined4 *DAT_0030b194;
extern undefined4 *DAT_0030b198;
extern undefined4 *DAT_0030b19c;
extern undefined4 *DAT_0030b1a0;
extern int DAT_0030b1a4;
extern undefined4 DAT_0030b1a8;

// USA 0030B134 <- EU 0030B110 (Ghidra, non-matching)
// GLOBAL DAT_0030b190 undefined4 *
// GLOBAL DAT_0030b194 undefined4 *
// GLOBAL DAT_0030b198 undefined4 *
// GLOBAL DAT_0030b19c undefined4 *
// GLOBAL DAT_0030b1a0 undefined4 *
// GLOBAL DAT_0030b1a4 int
// GLOBAL DAT_0030b1a8 undefined4

undefined4 func_0030B134(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (param_2 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x44))(param_1);
    uVar2 = func_00588BE4(iVar1);
    return uVar2;
  }
  if (param_2 == 100) {
    uVar2 = *DAT_0030b190;
  }
  else {
    puVar3 = DAT_0030b194;
    if ((((param_2 == 0x65) || (puVar3 = DAT_0030b198, param_2 == 200)) ||
        (puVar3 = DAT_0030b19c, param_2 == 0xc9)) || (puVar3 = DAT_0030b1a0, param_2 == 0xca)) {
      return *puVar3;
    }
    uVar2 = DAT_0030b1a8;
    if (param_2 - 1U < 0x4f) {
      uVar2 = *(undefined4 *)(DAT_0030b1a4 + param_2 * 4);
    }
  }
  return uVar2;
}


#include "ghidra_types.h"

extern int func_003DE504(undefined4 *param_1,undefined4 param_2);
extern int func_003E178C(undefined4 *param_1,undefined4 param_2);
extern int func_005902C0(void *param_1);
extern int DAT_005e4c5c;
extern undefined4 DAT_005e4c60;
extern undefined4 DAT_005e4c64;

// USA 005E4BF4 <- EU 005E4BCC (Ghidra, non-matching)
// GLOBAL DAT_005e4c5c int
// GLOBAL DAT_005e4c60 undefined4
// GLOBAL DAT_005e4c64 undefined4

undefined4 func_005E4BF4(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  
  iVar1 = DAT_005e4c5c;
  *(undefined4 *)(DAT_005e4c5c + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0xffffffff;
  puVar5 = (undefined4 *)(iVar1 + 0x1c);
  puVar6 = (undefined4 *)(iVar1 + 0xa3c);
  iVar4 = 0;
  do {
    iVar2 = 0;
    if (puVar5 != (undefined4 *)0x0) {
      iVar2 = func_003DE504(puVar5,iVar4);
    }
    piVar7 = (int *)(iVar1 + iVar4 * 4 + 0x15dc);
    *piVar7 = iVar2;
    puVar5 = puVar5 + 0x1b;
    if (puVar6 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = func_003E178C(puVar6,iVar4);
    }
    iVar4 = iVar4 + 1;
    puVar6 = puVar6 + 0x1f;
    *(undefined4 **)(*piVar7 + 0x68) = puVar3;
  } while (iVar4 < 0x18);
  return func_005902C0(iVar1);
}


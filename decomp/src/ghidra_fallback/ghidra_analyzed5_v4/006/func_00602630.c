#include "ghidra_types.h"

extern int func_00110490(undefined4 *param_1,uint param_2);
extern undefined4 *DAT_006026a8;
extern undefined4 DAT_006026ac;
extern undefined4 DAT_006026b0;
extern undefined4 DAT_006026b4;

// USA 00602630 <- EU 00602608 (Ghidra, non-matching)
// GLOBAL DAT_006026a8 undefined4 *
// GLOBAL DAT_006026ac undefined4
// GLOBAL DAT_006026b0 undefined4
// GLOBAL DAT_006026b4 undefined4

undefined4 * func_00602630(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if ((code *)*DAT_006026a8 == (code *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)(*(code *)*DAT_006026a8)(0x10000,0x100,0,0x348);
    if (puVar6 != (undefined4 *)0x0) {
      func_00110490(puVar6,0x348);
      uVar3 = DAT_006026b4;
      uVar2 = DAT_006026b0;
      uVar1 = DAT_006026ac;
      iVar4 = 0;
      do {
        iVar5 = iVar4 + 1;
        puVar6[iVar4 * 6 + 1] = 4;
        puVar6[iVar4 * 6 + 2] = uVar1;
        puVar6[iVar4 * 4 + 100] = uVar2;
        puVar6[iVar4 * 4 + 99] = uVar2;
        puVar6[iVar4 * 4 + 0x62] = uVar2;
        puVar6[iVar4 * 4 + 0x65] = uVar3;
        puVar6[iVar4 * 3 + 0xa3] = 0;
        puVar6[iVar4 * 3 + 0xa2] = 0x3f000000;
        puVar6[iVar4 * 3 + 0xa4] = 0;
        iVar4 = iVar5;
      } while (iVar5 < 0x10);
    }
  }
  return puVar6;
}


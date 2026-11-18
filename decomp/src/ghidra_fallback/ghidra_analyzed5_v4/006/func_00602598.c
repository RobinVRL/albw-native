#include "ghidra_types.h"

extern int func_00110490(undefined4 *param_1,uint param_2);
extern undefined4 *DAT_006025fc;
extern undefined4 DAT_00602600;
extern undefined4 DAT_00602604;

// USA 00602598 <- EU 00602570 (Ghidra, non-matching)
// GLOBAL DAT_006025fc undefined4 *
// GLOBAL DAT_00602600 undefined4
// GLOBAL DAT_00602604 undefined4

undefined4 * func_00602598(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if ((code *)*DAT_006025fc == (code *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)(*(code *)*DAT_006025fc)(0x10000,0x100,0,0x78);
    if (puVar3 != (undefined4 *)0x0) {
      func_00110490(puVar3,0x78);
      uVar1 = DAT_00602600;
      puVar3[1] = 0x2600;
      *puVar3 = 0x2600;
      uVar2 = DAT_00602604;
      puVar3[2] = uVar1;
      puVar3[3] = uVar1;
      puVar3[9] = uVar2;
      puVar3[10] = uVar2;
      puVar3[0xb] = 0;
      puVar3[5] = 0xfffffc18;
      puVar3[8] = uVar2;
      puVar3[7] = uVar2;
      puVar3[6] = uVar2;
      puVar3[0x1d] = param_1;
    }
  }
  return puVar3;
}


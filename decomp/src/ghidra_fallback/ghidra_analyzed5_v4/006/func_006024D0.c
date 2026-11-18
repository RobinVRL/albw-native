#include "ghidra_types.h"

extern int func_00110490(undefined4 *param_1,uint param_2);
extern undefined4 *DAT_00602564;
extern undefined4 DAT_00602568;
extern undefined4 DAT_0060256c;

// USA 006024D0 <- EU 006024A8 (Ghidra, non-matching)
// GLOBAL DAT_00602564 undefined4 *
// GLOBAL DAT_00602568 undefined4
// GLOBAL DAT_0060256c undefined4

undefined4 * func_006024D0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if ((code *)*DAT_00602564 == (code *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)(*(code *)*DAT_00602564)(0x10000,0x100,0,0x1cc);
    if (puVar6 != (undefined4 *)0x0) {
      func_00110490(puVar6,0x1cc);
      uVar1 = DAT_00602568;
      puVar6[1] = 0x2600;
      puVar6[2] = uVar1;
      *puVar6 = 0x2600;
      uVar2 = DAT_0060256c;
      puVar6[3] = uVar1;
      puVar6[10] = uVar2;
      puVar6[9] = uVar2;
      puVar6[0xb] = 0;
      puVar6[5] = 0xfffffc18;
      puVar6[8] = uVar2;
      puVar6[7] = uVar2;
      iVar4 = 0;
      iVar3 = 0;
      puVar6[6] = uVar2;
      do {
        iVar5 = iVar4 + 1;
        puVar6[iVar4 * 0x11 + 0x1d] = param_1;
        iVar3 = iVar3 + 2;
        iVar4 = iVar4 + 2;
        puVar6[iVar5 * 0x11 + 0x1d] = param_1;
      } while (iVar3 < 6);
    }
  }
  return puVar6;
}


#include "ghidra_types.h"

extern int func_00100078(void);
extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_0010CF70(void);
extern int func_002FFFC4(int param_1);
extern undefined4 DAT_00100104;
extern undefined4 DAT_00100108;
extern int DAT_0010010c;

// GLOBAL DAT_00100104 undefined4
// GLOBAL DAT_00100108 undefined4
// GLOBAL DAT_0010010c int
// USA 001000C0 <- EU 001000C0 (Ghidra, function missing from the decomp table)

undefined4 * func_001000C0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  undefined4 *puVar5;
  
  puVar3 = (undefined4 *)func_0010CF70();
  puVar5 = (undefined4 *)*puVar3;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)func_002FFFC4(0x20);
    uVar1 = DAT_00100104;
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      func_0010C1B8(0,extraout_r1,param_3);
    }
    *puVar3 = puVar5;
    puVar5[1] = uVar1;
    uVar1 = DAT_00100108;
    uVar4 = 0;
    *puVar5 = 0;
    puVar5[2] = uVar1;
    *(undefined1 *)(puVar5 + 3) = 0;
    iVar2 = DAT_0010010c;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    if (iVar2 != 0) {
      uVar4 = func_00100078();
    }
    puVar5[7] = uVar4;
  }
  return puVar5;
}


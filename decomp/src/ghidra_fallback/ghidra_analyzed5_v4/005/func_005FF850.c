#include "ghidra_types.h"

extern int func_00110490(undefined4 *param_1,uint param_2);
extern int DAT_005ff8fc;
extern undefined4 DAT_005ff900;
extern undefined4 *DAT_005ff904;
extern int *DAT_005ff908;
extern int *DAT_005ff90c;

// USA 005FF850 <- EU 005FF828 (Ghidra, non-matching)
// GLOBAL DAT_005ff8fc int
// GLOBAL DAT_005ff900 undefined4
// GLOBAL DAT_005ff904 undefined4 *
// GLOBAL DAT_005ff908 int *
// GLOBAL DAT_005ff90c int *

void func_005FF850(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  code *in_r12;
  
  puVar2 = DAT_005ff904;
  uVar1 = DAT_005ff900;
  puVar4 = *(undefined4 **)(DAT_005ff8fc + 0x9c);
  if (puVar4 != (undefined4 *)0x0) {
    if (puVar4[1] != 0) {
      in_r12 = (code *)DAT_005ff904[1];
    }
    if (puVar4[1] != 0 && in_r12 != (code *)0x0) {
      (*in_r12)(0x10000,DAT_005ff900,*puVar4);
    }
    if ((code *)*puVar2 == (code *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(code *)*puVar2)(0x10000,uVar1,*puVar4,param_1 + param_2 * 0x1c);
    }
    puVar4[2] = param_1;
    puVar4[3] = 0;
    puVar4[8] = 0;
    puVar4[4] = 0;
    puVar4[10] = 0;
    puVar4[9] = 0;
    puVar4[0xd] = 0;
    puVar4[1] = iVar3;
    puVar4[0xc] = 0;
    puVar4[6] = (undefined4 *)(iVar3 + param_1);
    puVar4[7] = param_2;
    func_00110490((undefined4 *)(iVar3 + param_1),param_2 * 0x1c);
    iVar3 = puVar4[1];
    *DAT_005ff908 = iVar3;
    *DAT_005ff90c = iVar3 + puVar4[2];
  }
  return;
}


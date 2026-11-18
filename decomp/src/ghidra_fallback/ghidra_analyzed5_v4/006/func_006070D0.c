#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_003734F8(undefined4 *param_1,uint *param_2);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern undefined4 DAT_006070f0;
extern int DAT_006070f4;
extern undefined4 *DAT_006070f8;

// USA 006070D0 <- EU 006070A8 (Ghidra, non-matching)
// GLOBAL DAT_006070f0 undefined4
// GLOBAL DAT_006070f4 int
// GLOBAL DAT_006070f8 undefined4 *

int * func_006070D0(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_006070f0);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = (int *)func_003734F8(puVar2,param_1);
    iVar1 = DAT_006070f4;
    piVar3[200] = DAT_006070f4 + 200;
    *piVar3 = iVar1;
    func_004C03B8((int)piVar3,DAT_006070f8);
  }
  return piVar3;
}


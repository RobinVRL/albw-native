#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001E518C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, uint param_5);
extern int func_001E56CC(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006076dc;
extern int DAT_006076e0;
extern int DAT_006076e4;

// USA 00607690 <- EU 00607668 (Ghidra, non-matching)
// GLOBAL DAT_006076dc undefined4
// GLOBAL DAT_006076e0 int
// GLOBAL DAT_006076e4 int

int * func_00607690(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006076dc);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_001E56CC(puVar1,param_1);
    iVar3 = DAT_006076e0 + 0x78;
    *piVar2 = DAT_006076e0;
    piVar2[200] = iVar3;
    piVar2[0x187] = 0;
    piVar2[0x188] = 0;
    func_001E518C(piVar2,param_1,1,0,0);
    iVar3 = DAT_006076e4;
    *piVar2 = DAT_006076e4;
    piVar2[200] = iVar3 + 0x78;
  }
  return piVar2;
}


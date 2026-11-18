#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001E518C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, uint param_5);
extern int func_001E56CC(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060775c;
extern int DAT_00607760;
extern int DAT_00607764;

// USA 00607710 <- EU 006076E8 (Ghidra, non-matching)
// GLOBAL DAT_0060775c undefined4
// GLOBAL DAT_00607760 int
// GLOBAL DAT_00607764 int

int * func_00607710(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060775c);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_001E56CC(puVar1,param_1);
    iVar3 = DAT_00607760 + 0x78;
    *piVar2 = DAT_00607760;
    piVar2[200] = iVar3;
    piVar2[0x187] = 0;
    piVar2[0x188] = 0;
    func_001E518C(piVar2,param_1,1,0,0);
    iVar3 = DAT_00607764;
    *piVar2 = DAT_00607764;
    piVar2[200] = iVar3 + 0x78;
  }
  return piVar2;
}


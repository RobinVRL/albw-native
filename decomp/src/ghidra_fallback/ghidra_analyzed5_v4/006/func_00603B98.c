#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001BC450(int param_1);
extern int func_001E518C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, uint param_5);
extern int func_001E56CC(undefined4 *param_1,uint *param_2);
extern int func_0034CAA0(undefined4 *param_1);
extern undefined4 DAT_00603c28;
extern int DAT_00603c2c;
extern int DAT_00603c30;
extern int *DAT_00603c34;
extern int DAT_00603c38;

// USA 00603B98 <- EU 00603B70 (Ghidra, non-matching)
// GLOBAL DAT_00603c28 undefined4
// GLOBAL DAT_00603c2c int
// GLOBAL DAT_00603c30 int
// GLOBAL DAT_00603c34 int *
// GLOBAL DAT_00603c38 int

int * func_00603B98(uint *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  
  puVar3 = (undefined4 *)func_0010BAB4(DAT_00603c28);
  piVar4 = (int *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar4 = func_001E56CC(puVar3,param_1);
    iVar1 = DAT_00603c2c;
    piVar4[200] = DAT_00603c2c + 0x74;
    iVar6 = DAT_00603c30;
    *piVar4 = iVar1;
    piVar4[0x187] = iVar6;
    piVar4[0x188] = 0;
    piVar4[0x189] = 0;
    puVar5 = (undefined4 *)func_0010BAB4(0x48);
    puVar3 = (undefined4 *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      puVar3 = func_0034CAA0(puVar5);
    }
    piVar2 = DAT_00603c34;
    piVar4[0x18a] = (int)puVar3;
    iVar6 = *piVar2;
    piVar4[0x18e] = piVar2[1];
    iVar1 = DAT_00603c38;
    piVar4[0x18d] = iVar6;
    piVar4[0x18b] = iVar1;
    piVar4[0x18c] = (int)piVar4;
    func_001E518C(piVar4,param_1,0,0,0);
    func_001BC450((int)piVar4);
  }
  return piVar4;
}


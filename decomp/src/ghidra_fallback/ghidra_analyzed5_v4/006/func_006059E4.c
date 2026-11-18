#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001E518C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, uint param_5);
extern int func_001E56CC(undefined4 *param_1,uint *param_2);
extern int func_0027C13C(int param_1);
extern int func_0027C2BC(int param_1);
extern int func_002E0064(int *param_1,int param_2);
extern undefined4 DAT_00605a80;
extern int DAT_00605a84;
extern int DAT_00605a88;
extern int DAT_00605a8c;
extern int *DAT_00605a90;

// USA 006059E4 <- EU 006059BC (Ghidra, non-matching)
// GLOBAL DAT_00605a80 undefined4
// GLOBAL DAT_00605a84 int
// GLOBAL DAT_00605a88 int
// GLOBAL DAT_00605a8c int
// GLOBAL DAT_00605a90 int *

int * func_006059E4(uint *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  puVar4 = (undefined4 *)func_0010BAB4(DAT_00605a80);
  piVar5 = (int *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    piVar5 = func_001E56CC(puVar4,param_1);
    iVar2 = DAT_00605a8c;
    iVar1 = DAT_00605a84;
    piVar5[200] = DAT_00605a8c + 0x74;
    *piVar5 = iVar2;
    piVar3 = DAT_00605a90;
    iVar2 = DAT_00605a88;
    piVar5[0x187] = iVar1;
    piVar5[0x188] = iVar2;
    piVar5[0x189] = 0;
    piVar5[0x18a] = 0;
    func_002E0064(*(int **)(*piVar3 + 0x3dbe4),(int)param_1);
    func_001E518C(piVar5,param_1,0,0,0);
    func_0027C2BC((int)piVar5);
    func_0027C13C((int)piVar5);
    if (*(int *)(piVar5[0x18a] + 4) != 0) {
      piVar5[0x188] = *(int *)(*(int *)(piVar5[0x18a] + 4) + 0x134);
    }
  }
  return piVar5;
}


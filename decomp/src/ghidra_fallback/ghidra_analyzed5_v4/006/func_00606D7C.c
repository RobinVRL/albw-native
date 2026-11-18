#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_003094A0(int param_1);
extern int func_00309850(undefined4 *param_1,uint *param_2,undefined4 param_3,int param_4,float *param_5, int param_6,int param_7);
extern undefined4 DAT_00606db4;
extern float *DAT_00606db8;
extern int DAT_00606dbc;

// USA 00606D7C <- EU 00606D54 (Ghidra, non-matching)
// GLOBAL DAT_00606db4 undefined4
// GLOBAL DAT_00606db8 float *
// GLOBAL DAT_00606dbc int

int * func_00606D7C(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00606db4);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00309850(puVar1,param_1,1,1,DAT_00606db8,1,1);
    iVar3 = DAT_00606dbc + 0x54;
    *piVar2 = DAT_00606dbc;
    piVar2[200] = iVar3;
    func_003094A0((int)piVar2);
  }
  return piVar2;
}


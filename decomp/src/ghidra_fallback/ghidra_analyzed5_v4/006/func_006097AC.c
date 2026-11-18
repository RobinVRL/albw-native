#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_003094A0(int param_1);
extern int func_00309850(undefined4 *param_1,uint *param_2,undefined4 param_3,int param_4,float *param_5, int param_6,int param_7);
extern undefined4 DAT_006097e8;
extern float *DAT_006097ec;
extern int DAT_006097f0;

// USA 006097AC <- EU 00609784 (Ghidra, non-matching)
// GLOBAL DAT_006097e8 undefined4
// GLOBAL DAT_006097ec float *
// GLOBAL DAT_006097f0 int

int * func_006097AC(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_006097e8);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_00309850(puVar2,param_1,1,0,DAT_006097ec,0,1);
    iVar1 = DAT_006097f0;
    *piVar3 = DAT_006097f0;
    *(undefined1 *)((int)piVar3 + 0x436) = 0;
    piVar3[200] = iVar1 + 0x54;
    func_003094A0((int)piVar3);
  }
  return piVar3;
}


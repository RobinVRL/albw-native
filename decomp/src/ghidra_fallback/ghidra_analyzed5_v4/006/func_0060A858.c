#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0014A998(int param_1,int param_2);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0050574C(undefined4 param_1,int param_2,uint param_3,int param_4);
extern undefined4 DAT_0060a8b8;
extern int DAT_0060a8bc;
extern int *DAT_0060a8c0;
extern int DAT_0060a8c4;

// USA 0060A858 <- EU 0060A830 (Ghidra, non-matching)
// GLOBAL DAT_0060a8b8 undefined4
// GLOBAL DAT_0060a8bc int
// GLOBAL DAT_0060a8c0 int *
// GLOBAL DAT_0060a8c4 int

int * func_0060A858(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060a8b8);
  if (puVar1 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = func_00150E40(puVar1,param_1);
    iVar3 = DAT_0060a8bc + 0x54;
    *piVar4 = DAT_0060a8bc;
    piVar4[200] = iVar3;
    piVar4[0x103] = param_1[2];
    func_0014A998(*DAT_0060a8c0,0);
    iVar3 = DAT_0060a8c4 + 0x54;
    *piVar4 = DAT_0060a8c4;
    piVar4[200] = iVar3;
    piVar2 = func_0050574C(piVar4,(int)param_1,0,0);
    piVar4[0x104] = (int)piVar2;
    piVar4[0x105] = 0;
  }
  return piVar4;
}


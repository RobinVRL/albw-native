#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_00393648(int param_1);
extern int func_004356B4(int *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int DAT_00609aac;

// USA 00609A68 <- EU 00609A40 (Ghidra, non-matching)
// GLOBAL DAT_00609aac int

int * func_00609A68(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  
  puVar2 = (undefined4 *)func_0010BAB4(0x410);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_00150E40(puVar2,param_1);
    iVar1 = DAT_00609aac;
    piVar3[200] = DAT_00609aac + 0x54;
    *piVar3 = iVar1;
    piVar4 = (int *)func_0054D964((int)piVar3,0);
    piVar3[0x103] = (int)piVar4;
    piVar3[0xb8] = piVar3[0xb8] | 2;
    func_004356B4(piVar4);
    func_00393648((int)piVar3);
  }
  return piVar3;
}


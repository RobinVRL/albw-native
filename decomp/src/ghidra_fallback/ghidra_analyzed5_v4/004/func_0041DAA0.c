#include "ghidra_types.h"

extern int func_00112364(int *param_1,int param_2,int *param_3);
extern int func_003E6C04(int param_1,int param_2,int param_3);

// USA 0041DAA0 <- EU 0041DA80 (Ghidra, non-matching)

int * func_0041DAA0(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = func_003E6C04(*param_1,(param_2 + 0x1fU & 0xffffffe0) + 0x20,0x20);
  piVar2 = piVar1;
  if (piVar1 != (int *)0x0) {
    piVar2 = piVar1 + 8;
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = (int)piVar2;
    piVar1[3] = param_2;
    piVar1[4] = param_3;
    piVar1[5] = param_4;
    func_00112364((int *)(param_1[3] + 8),param_1[3] + 0xc,piVar1);
  }
  return piVar2;
}


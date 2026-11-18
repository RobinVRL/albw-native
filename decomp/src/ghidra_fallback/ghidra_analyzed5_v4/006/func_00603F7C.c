#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001E6AF8(int param_1);
extern int func_001E6CEC(undefined4 *param_1,uint *param_2,undefined4 param_3);
extern undefined4 DAT_00603f9c;
extern int DAT_00603fa0;

// USA 00603F7C <- EU 00603F54 (Ghidra, non-matching)
// GLOBAL DAT_00603f9c undefined4
// GLOBAL DAT_00603fa0 int

int * func_00603F7C(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00603f9c);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)func_001E6CEC(puVar1,param_1,0xc);
    iVar3 = DAT_00603fa0 + 0x98;
    *piVar2 = DAT_00603fa0;
    piVar2[200] = iVar3;
    func_001E6AF8((int)piVar2);
  }
  return piVar2;
}

